#define WIN32_LEAN_AND_MEAN
#pragma warning(disable:4244 4996 4700 4099 4172)
//----------------------------------------------------------------------------------------------------------------------------------
#include <windows.h>
//----------------------------------------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------------------------
#include <stdio.h>
//-----------------------------------------------------------------------------------------------------------------------------------
#include <fstream>
#include <time.h>
#include <ShellAPI.h>
#include "XorSTR.h"
#include "BS-SDK\SdkHeaders.h"
#define DIRECTINPUT_VERSION 0x0800
/////////
//Defines
#define RadianToDegree			(Radian)		    (( Radian) * (180.0f / UCONST_Object_Pi))

//////////////////////
//Prototypes & Typedef
void					PostRender(UCanvas* pCanvas);
DWORD					MakePTR(BYTE *MemoryTarget, DWORD FunctionTarget);
void					hookUObject(UObject* obj);
typedef void (__stdcall *tProcessEvent ) ( UFunction*, void*, void* ); //PE Function Prototype


//FILE*					pFile				= NULL;
tProcessEvent			pProcessEvent		= NULL;
UFunction*				pUFunc				= NULL;
void*					pParms				= NULL;
void*					pResult				= NULL; 
UObject*				pCallObject			= NULL;
UObject*				ViewPort			= NULL;
ACombatHUD*				pAHUD				= NULL;
ACombatPC*				pPC					= NULL;
ACombatPawn*			pLP					= NULL;
ACombatWeapon*			pWeapon				= NULL;
ACombatPlayerReplicationInfo* pPRI			= NULL;
static UEngine*			Eng					= NULL;


#include <sstream>
#include "functions.h"
#include "Color.h"
#include "directInput.h"


char					FunctionName[ 256 ];
bool					bShowMenu = true;
bool bInitMenu = false;
//-----------------------------------------------------------------------------------------------------------------------------------
using namespace			std;
ofstream				myfile;