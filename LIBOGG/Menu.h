#include "CMenu.h"
wchar_t *MoptOnOff[] = { L"OFF", L"ON" };
wchar_t *Moptfolder	[]		= {L"Open", L"Close"};

D3D9Menu	*XFiles	= NULL;

void RebuildMenu(void)
{

	XFiles->AddFolder(charToWChar(/*[Visual Hack]*/XorStr<0xE7,14,0x2768728A>("\xBC\xBE\x80\x99\x9E\x8D\x81\xCE\xA7\x91\x92\x99\xAE"+0x2768728A).s), Moptfolder, &Folders.Visual, 2); 
	if(Folders.Visual) 
	{
		
		XFiles->AddItem(charToWChar(/*WallHack*/XorStr<0x84,9,0xE958A3AE>("\xD3\xE4\xEA\xEB\xC0\xE8\xE9\xE0"+0xE958A3AE).s), MoptOnOff, &Visual.WallHack, 2);
		XFiles->AddItem(charToWChar(/*Crosshair*/XorStr<0x5C,10,0xF60D1D32>("\x1F\x2F\x31\x2C\x13\x09\x03\x0A\x16"+0xF60D1D32).s), MoptOnOff, &Visual.CrossHair, 2);
	}
	XFiles->AddFolder(charToWChar(/*[Player Hack]*/XorStr<0x0E,14,0xB674DF69>("\x55\x5F\x7C\x70\x6B\x76\x66\x35\x5E\x76\x7B\x72\x47"+0xB674DF69).s), Moptfolder, &Folders.Player, 2); 
	if(Folders.Player) 
	{
		XFiles->AddItem(charToWChar(/*Aimbot*/XorStr<0x07,7,0xA3EEB9F3>("\x46\x61\x64\x68\x64\x78"+0xA3EEB9F3).s), MoptOnOff, &Player.AimBot, 2);
		XFiles->AddItem(charToWChar(/*Unlimited Ammo*/XorStr<0xF4,15,0x03AE87B3>("\xA1\x9B\x9A\x9E\x95\x90\x8E\x9E\x98\xDD\xBF\x92\x6D\x6E"+0x03AE87B3).s), MoptOnOff, &Player.UnlimitedAmmo, 2);
		XFiles->AddItem(charToWChar(/*No Recoil and Spread*/XorStr<0x9F,21,0xD428B36D>("\xD1\xCF\x81\xF0\xC6\xC7\xCA\xCF\xCB\x88\xC8\xC4\xCF\x8C\xFE\xDE\xDD\xD5\xD0\xD6"+0xD428B36D).s), MoptOnOff, &Player.RecoilSpread, 2);
		
	}
	XFiles->AddFolder(charToWChar(/*[Rush Hack]*/XorStr<0x2D,12,0x45B05056>("\x76\x7C\x5A\x43\x59\x12\x7B\x55\x56\x5D\x6A"+0x45B05056).s), Moptfolder, &Folders.RushFeature, 2); 
	if(Folders.RushFeature) 
	{
		XFiles->AddItem(charToWChar(/*Fire Speed*/XorStr<0xE9,11,0x1AF47619>("\xAF\x83\x99\x89\xCD\xBD\x9F\x95\x94\x96"+0x1AF47619).s), MoptOnOff, &Player.FireSpeed, 2);
		XFiles->AddItem(charToWChar(/*Bomberman*/XorStr<0x99,10,0xA30BD6F0>("\xDB\xF5\xF6\xFE\xF8\xEC\xF2\xC1\xCF"+0xA30BD6F0).s), MoptOnOff, &Player.Bomberman, 2);
		XFiles->AddItem(charToWChar(/*One Hit Kill*/XorStr<0xA5,13,0x05E2A2F1>("\xEA\xC8\xC2\x88\xE1\xC3\xDF\x8C\xE6\xC7\xC3\xDC"+0x05E2A2F1).s), MoptOnOff, &Player.InstantKill, 2);
		XFiles->AddItem(charToWChar(/*Fake Name*/XorStr<0x9B,10,0x9C2598CB>("\xDD\xFD\xF6\xFB\xBF\xEE\xC0\xCF\xC6"+0x9C2598CB).s), MoptOnOff, &Player.FakeName, 2);
	}
	
}

void MenuHandler( void )
{

}