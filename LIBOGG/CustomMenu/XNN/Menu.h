#include "CMenu.h"

XNNMenu	*XNN	= NULL;


int XN2_Folder[10] = {0};

wchar_t *XN2_Moptonoff	 []   = {L"OFF"	 ,L"ON"};
wchar_t *XN2_MoptFolder []   = {L"Open]" ,L"Close]"};


void XNNRebuildMenu(void)
{
	XNN->SetTitle(L"[X]-[No Name]-[BlackSquad Indonesia]");
	XNN->AddFolder(L"[XN2 Info Member",XN2_MoptFolder, &XN2_Folder[0], 2);
	if( XN2_Folder[0] )
	{
		XNN->AddText(L"E x p i r e d", charToWChar(InjectInfo->Expiration));
		XNN->AddText(L"C l o c k", XNN->CurrentTime);
		XNN->AddText(L"D a t e", XNN->CurrentDate);
	}
	XNN->AddFolder(L"[XN2 Mode Simple"			,XN2_MoptFolder, &XN2_Folder[1]		, 2);
	if (XN2_Folder[1]){
		XNN->AddItem(L"[F1] WallHack"				,XN2_Moptonoff , &Visual.WallHack		, 2);
		XNN->AddItem(L"[F2] No Recoil&Spread"		,XN2_Moptonoff , &Player.RecoilSpread			, 2);
		XNN->AddItem(L"[F3] Aim Bot"				,XN2_Moptonoff , &Player.AimBot			, 2);
		XNN->AddItem(L"[F4] Unlimited Ammo"		,XN2_Moptonoff , &Player.UnlimitedAmmo			, 2);
	}
	XNN->AddFolder(L"[XN2 Mode Easy"			,XN2_MoptFolder, &XN2_Folder[2]		, 2);
	if (XN2_Folder[2]){
		XNN->AddItem(L"[F5] CrossHair"		,XN2_Moptonoff , &Visual.CrossHair			, 2);
		XNN->AddItem(L"[F6] Fake Name"		,XN2_Moptonoff , &Player.FakeName			, 2);
		XNN->AddItem(L"[F7] Fire Speed"		,XN2_Moptonoff , &Player.FireSpeed			, 2);
	}
	XNN->AddFolder(L"[XN2 Mode Brutal"				,XN2_MoptFolder, &XN2_Folder[3]		, 2);
	if (XN2_Folder[3]){
		XNN->AddItem(L"[F8] One Hit"		,XN2_Moptonoff , &Player.InstantKill			, 2);
		XNN->AddItem(L"[F9] Bomberman"		,XN2_Moptonoff , &Player.Bomberman		, 2);
	}
	XNN->AddFolder(L"[XN2 Info Tutorial"			,XN2_MoptFolder, &XN2_Folder[5]		, 2);
	if ( XN2_Folder[5] ){
		XNN->AddText(L"1. Jangan terlalu show off dalam brutal, banned senantiasa ada di semua game",L"");

	}
}

void XNNMenuHandler( void )
{
	wcscpy(XNN->CurrentDate, XNN->GetFormattedDate());
	wcscpy(XNN->CurrentTime, XNN->GetFormattedTime());
	
	if( IsKeyDown(DIK_F1) )Visual.WallHack = !Visual.WallHack;
	if( IsKeyDown(DIK_F2) )Player.RecoilSpread = !Player.RecoilSpread;
	if( IsKeyDown(DIK_F3) )Player.AimBot = !Player.AimBot;
	if( IsKeyDown(DIK_F4) )Player.UnlimitedAmmo = !Player.UnlimitedAmmo;
	if( IsKeyDown(DIK_F5) )Visual.CrossHair = !Visual.CrossHair;
	if( IsKeyDown(DIK_F6) )Player.FakeName = !Player.FakeName;
	if( IsKeyDown(DIK_F7) )Player.FireSpeed = !Player.FireSpeed;
	if( IsKeyDown(DIK_F8) )Player.InstantKill = !Player.InstantKill;
	if( IsKeyDown(DIK_F9) )Player.Bomberman = !Player.Bomberman;
	

	return;
}