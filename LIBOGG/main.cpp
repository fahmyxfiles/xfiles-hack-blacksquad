#define XFilesHack

#include "main.h"

#include "MenuStruct.h"
tFolders	Folders;
tVisual	Visual;
tPlayer		Player;

#include "Menu.h"


DWORD Tick = NULL;
FString Name;

void NameStealer(APawn* Player)
{
	if (Player && Player->PlayerReplicationInfo && pPC->Pawn && pPC->Pawn->PlayerReplicationInfo)
	{
		if (Tick <= GetTickCount())
		{
			Name = Player->PlayerReplicationInfo->PlayerName;

			pPC->SetName(Name);

			Tick = GetTickCount() + 4000;
		}
	}
}
void DrawD3DHack(UCanvas* pCanvas, AWorldInfo* WorldInfo)
{
	ACombatPawn* Target = (ACombatPawn*)WorldInfo->PawnList;
	while (Target != NULL)
	{
		if(!Target->bDeleteMe && Target != pPC->Pawn && !Target->bHidden && Target->Health > 0)
		{
			if(Target->PlayerReplicationInfo && pPC->Pawn->PlayerReplicationInfo)
			{
				if (pPC->Pawn->PlayerReplicationInfo->Team && Target->PlayerReplicationInfo->Team != NULL)
				{
					if(Visual.WallHack)Target->Mesh->SetDepthPriorityGroup(3);
					else Target->Mesh->SetDepthPriorityGroup(1);
					if(Player.FakeName)NameStealer(Target);
					
					/*
					if(IsKeyDown(DIK_NUMPAD5)){
					pLP->Weapon = Target->Weapon;
					pLP->SetActiveWeapon(pLP->Weapon);

					}
					XFiles->DrawString(pCanvas,40,70,RED2,XFiles->R_TEXT,charToWChar(pLP->Weapon->GetFullName()));
					//XFiles->DrawString(pCanvas,40,90,RED2,XFiles->R_TEXT,charToWChar(Target->MyCombatWeapon->GetFullName()));
					*/
				}
			}
		} 
		Target = (ACombatPawn*)Target->NextPawn;
	}
}
void DoAimbot(UCanvas* pCanvas, AWorldInfo* WorldInfo)
{
	APawn* Target = GetAimPriority(WorldInfo);
	if(Target && pPC->Pawn->Health > 0){
		FName boneName = Target->Mesh->GetBoneName(7);
		FVector boneLoc = Target->Mesh->GetBoneLocation(boneName, 0);

		FVector TargetLocation2D;
		if(WorldToScreen(boneLoc,TargetLocation2D)){
			WCHAR Buffer[256];
			swprintf( Buffer, charToWChar("%s"), Target->PlayerReplicationInfo->PlayerName);
			ShadowedText(pCanvas, Buffer, Red, TargetLocation2D.X-(StrLen(pCanvas, Buffer)/2), TargetLocation2D.Y, 1.0f, 1.0f);
		}
		AimAtVector(boneLoc);
	}
}

void UnlimitedAmmo()
{
	if (pWeapon){ 
		//pWeapon->GetMagazineAmmo();
		//pWeapon->SubAmmoCount = 90;
		//pWeapon->ServerSubAmmoCount = 90;
		//pWeapon->ServerSubMagazineAmmo = 90;
		//pWeapon->SubMagazineAmmo = 90;
		pWeapon->ShotCost.Data[pPC->Pawn->Weapon->CurrentFireMode] = 0;
	}
}
void NoRecoilSpread()
{
	if (pWeapon){ 
		pWeapon->ResetSpread();
		pWeapon->ResetRecoil(false);
	}
}
void SwapTeam()
{
	pPC->ServerChangeTeam(!pPC->Pawn->PlayerReplicationInfo->Team->TeamIndex);
}
void WeaponSpeed()
{

	if (pWeapon){ 
		pPC->Pawn->Weapon->FireInterval.Data[0]=0.1f;
	}
}

void InstantHit()
{
	if (pWeapon && GetAsyncKeyState(VK_LBUTTON)){ 
		pPC->Pawn->Weapon->InstantFire();
		pPC->Pawn->Weapon->bInstantHit = true;
		pPC->Pawn->Weapon->InstantHitDamage.Data[0]= 9999;
		pPC->Pawn->Weapon->InstantHitMomentum.Data[0]= 9999;
	}
}

void Bomberman()
{
	pWeapon->CustomFire();
	pWeapon->FireAmmunition();
}

void PostRender ( UCanvas* pCanvas ) 
{

	if(pCanvas)
	{





		ClipX = pCanvas->ClipX; 
		ClipY = pCanvas->ClipY;

		if(Eng == NULL)Eng = (UEngine*)GetInstanceOf(UEngine::StaticClass());

		if(Eng){
			if(!bInitMenu){
				XFiles = new D3D9Menu();
				bInitMenu = true;
			}
			if(Keyboard == NULL)InitializeKeyboard(GetForegroundWindow());
			if(Keyboard > NULL)UpdateKeyboard();
			if(XFiles->Mmax == 0)RebuildMenu();
			MenuHandler();
			XFiles->MenuShow(20,50,pCanvas);
			XFiles->MenuNav();

			pPC = (ACombatPC*)Eng->GamePlayers.Data[0]->Actor;

			if( pPC )
			{

				if(pPC->Pawn)
				{
					pLP = (ACombatPawn*)pPC->Pawn;
					if(Visual.CrossHair)DrawCrossHair(pCanvas);

					pWeapon = (ACombatWeapon*)(pPC->Pawn->Weapon); 
					if(pWeapon){

						if(Player.UnlimitedAmmo)UnlimitedAmmo();
						if(Player.RecoilSpread)NoRecoilSpread();
						if(Player.InstantKill)InstantHit();
						if(Player.FireSpeed)WeaponSpeed();
						if(Player.Bomberman)Bomberman();


					}

					if(pPC->Pawn->PlayerReplicationInfo && pPC->Pawn->PlayerReplicationInfo->Team)
					{
						pPRI = (ACombatPlayerReplicationInfo*)(pPC->Pawn->PlayerReplicationInfo);
						if(pPC->Pawn->WorldInfo)
						{
							DrawD3DHack(pCanvas,pPC->Pawn->WorldInfo);
							if(Player.AimBot)DoAimbot(pCanvas,pPC->Pawn->WorldInfo);

						}
					}

				}

			}


		}

	}


}
void PEHandler(char* func)
{
	if (!strcmp(func, /*Function Engine.GameViewportClient.PostRender*/XorStr<0x5B,46,0x942ADD81>("\x1D\x29\x33\x3D\x2B\x09\x0E\x0C\x43\x21\x0B\x01\x0E\x06\x0C\x44\x2C\x0D\x00\x0B\x39\x19\x14\x05\x03\x1B\x07\x02\x34\x14\x10\x1F\x15\x08\x53\x2E\x10\xF3\xF5\xD0\xE6\xEA\xE1\xE3\xF5"+0x942ADD81).s)) 
	{
		PostRender(((UGameViewportClient_eventPostRender_Parms*)pParms)->Canvas);  
	}
}
void __declspec(naked) hkProcessEvent ()
{
	__asm mov pCallObject, ecx;
	__asm
	{
		push eax
			mov eax, dword ptr [esp + 0x8]
		mov pUFunc, eax
			mov eax, dword ptr [esp + 0xC]
		mov pParms, eax
			mov eax, dword ptr [esp + 0x10]
		mov pResult, eax
			pop eax
	} 

	_asm pushad 




	if ( pUFunc ) 
	{
		//strcpy(FunctionName,pUFunc->GetFullName());
		//myfile << FunctionName << endl;
		PEHandler(pUFunc->GetFullName());


	}


	__asm popad
	__asm
	{
		push pResult
			push pParms
			push pUFunc
			call pProcessEvent

			retn 0xC
	} 

}
DWORD MakePTR(BYTE *MemoryTarget, DWORD FunctionTarget)
{
	//XFiles make PTR
	//2014 FahmyXFiles
	DWORD dwOldProtect,dwBkup;
	DWORD dwRetn = *(DWORD*)(MemoryTarget);

	VirtualProtect(MemoryTarget, 4, PAGE_EXECUTE_READWRITE, &dwOldProtect);
	*((DWORD *)(MemoryTarget)) = FunctionTarget;
	VirtualProtect(MemoryTarget, 4, dwOldProtect, &dwBkup);
	return dwRetn;
}
BYTE TempGVC[0x2000];

DWORD WINAPI HookProcessEvent(LPVOID param)
{
	while(!GetAsyncKeyState(VK_INSERT)&1)Sleep(100);
	Beep(1000,100);

	DWORD Object = (DWORD)UObject::FindObject<UObject>(/*CombatGameViewportClient Transient.CombatGameEngine.CombatGameViewportClient*/XorStr<0x5F,77,0x133B9250>("\x1C\x0F\x0C\x00\x02\x10\x22\x07\x0A\x0D\x3F\x03\x0E\x1B\x1D\x01\x1D\x04\x32\x1E\x1A\x11\x1B\x02\x57\x2C\x0B\x1B\x15\x0F\x14\x1B\x11\xF4\xAF\xC1\xEC\xE9\xE7\xE7\xF3\xCF\xE8\xE7\xEE\xC9\xE3\xE9\xE6\xFE\xF4\xBC\xD0\xFB\xF8\xF4\xF6\xEC\xDE\xFB\xF6\xF9\xCB\xF7\xFA\xD7\xD1\xCD\xD1\xD0\xE6\xCA\xCE\xCD\xC7\xDE"+0x133B9250).s);
	unsigned long TargetCopy = *(unsigned long*)Object;
	for(int i = 0; i<0x2000;i++)*(BYTE*)( TempGVC + i ) = *(BYTE*)(TargetCopy + i );
	pProcessEvent = (tProcessEvent)MakePTR((PBYTE)(TempGVC + 0x110),(DWORD)hkProcessEvent);
	MakePTR((PBYTE)(Object),(DWORD)TempGVC);
	MessageBeep(MB_ICONEXCLAMATION);


	return 0;
}
BOOL WINAPI DllMain ( HMODULE hModule, DWORD dwReason, LPVOID lpReserved )
{
	if ( dwReason == DLL_PROCESS_ATTACH )   {
		CreateThread ( NULL, 0, ( LPTHREAD_START_ROUTINE ) HookProcessEvent, 0, 0, NULL );   

	}
	return TRUE;
}