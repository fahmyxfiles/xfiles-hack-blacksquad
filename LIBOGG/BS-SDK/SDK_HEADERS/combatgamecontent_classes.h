/*
#############################################################################################
# BlackSquad (1.0.10246.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: combatgamecontent_classes.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Constants
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class combatgamecontent.CombatProj_RL_AT4
// 0x0000 (0x030C - 0x030C)
class ACombatProj_RL_AT4 : public ACombatProj_Rocket
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 92076 ];

		return pClassPointer;
	};

};

UClass* ACombatProj_RL_AT4::pClassPointer = NULL;

// Class combatgamecontent.CombatProj_GL_M32
// 0x0000 (0x0318 - 0x0318)
class ACombatProj_GL_M32 : public ACombatProj_GrenadeLauncher
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 92106 ];

		return pClassPointer;
	};

};

UClass* ACombatProj_GL_M32::pClassPointer = NULL;

// Class combatgamecontent.CombatWeapon_BASR_M107A1
// 0x0000 (0x1834 - 0x1834)
class ACombatWeapon_BASR_M107A1 : public ACombatWeaponBase_BASR
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96755 ];

		return pClassPointer;
	};

};

UClass* ACombatWeapon_BASR_M107A1::pClassPointer = NULL;

// Class combatgamecontent.CombatWeapon_BASR_M107A1_Att
// 0x0000 (0x0338 - 0x0338)
class ACombatWeapon_BASR_M107A1_Att : public ACBWeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96760 ];

		return pClassPointer;
	};

};

UClass* ACombatWeapon_BASR_M107A1_Att::pClassPointer = NULL;

// Class combatgamecontent.CombatWeaponRIS_Scope_M107A1
// 0x0000 (0x0AF8 - 0x0AF8)
class UCombatWeaponRIS_Scope_M107A1 : public UCombatWeaponRISBase_Scope
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96763 ];

		return pClassPointer;
	};

};

UClass* UCombatWeaponRIS_Scope_M107A1::pClassPointer = NULL;

// Class combatgamecontent.CombatWeapon_DMR_SCARH
// 0x0000 (0x1834 - 0x1834)
class ACombatWeapon_DMR_SCARH : public ACombatWeaponBase_DMR
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96773 ];

		return pClassPointer;
	};

};

UClass* ACombatWeapon_DMR_SCARH::pClassPointer = NULL;

// Class combatgamecontent.CombatWeapon_DMR_SCARH_Att
// 0x0000 (0x0338 - 0x0338)
class ACombatWeapon_DMR_SCARH_Att : public ACBWeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96778 ];

		return pClassPointer;
	};

};

UClass* ACombatWeapon_DMR_SCARH_Att::pClassPointer = NULL;

// Class combatgamecontent.CombatWeaponRIS_IronSight_SCARH
// 0x0000 (0x0AB4 - 0x0AB4)
class UCombatWeaponRIS_IronSight_SCARH : public UCombatWeaponRISBase_IronSight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96781 ];

		return pClassPointer;
	};

};

UClass* UCombatWeaponRIS_IronSight_SCARH::pClassPointer = NULL;

// Class combatgamecontent.CombatWeaponRIS_LaserPoint
// 0x0000 (0x0A7C - 0x0A7C)
class UCombatWeaponRIS_LaserPoint : public UCombatWeaponRISBase_LaserPoint
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96782 ];

		return pClassPointer;
	};

};

UClass* UCombatWeaponRIS_LaserPoint::pClassPointer = NULL;

// Class combatgamecontent.CombatWeapon_FSW_GL_M32
// 0x0000 (0x1834 - 0x1834)
class ACombatWeapon_FSW_GL_M32 : public ACombatWeaponBase_FSW_GL
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96792 ];

		return pClassPointer;
	};

};

UClass* ACombatWeapon_FSW_GL_M32::pClassPointer = NULL;

// Class combatgamecontent.CombatWeapon_FSW_GL_M32_Att
// 0x0000 (0x0338 - 0x0338)
class ACombatWeapon_FSW_GL_M32_Att : public ACBWeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96801 ];

		return pClassPointer;
	};

};

UClass* ACombatWeapon_FSW_GL_M32_Att::pClassPointer = NULL;

// Class combatgamecontent.CombatWeaponRIS_IronSight_M32
// 0x0000 (0x0AB4 - 0x0AB4)
class UCombatWeaponRIS_IronSight_M32 : public UCombatWeaponRISBase_IronSight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96804 ];

		return pClassPointer;
	};

};

UClass* UCombatWeaponRIS_IronSight_M32::pClassPointer = NULL;

// Class combatgamecontent.CombatWeapon_FSW_RL_AT4
// 0x0000 (0x1834 - 0x1834)
class ACombatWeapon_FSW_RL_AT4 : public ACombatWeaponBase_FSW_RL
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96813 ];

		return pClassPointer;
	};

};

UClass* ACombatWeapon_FSW_RL_AT4::pClassPointer = NULL;

// Class combatgamecontent.CombatWeapon_FSW_RL_AT4_Att
// 0x0000 (0x0338 - 0x0338)
class ACombatWeapon_FSW_RL_AT4_Att : public ACBWeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96818 ];

		return pClassPointer;
	};

};

UClass* ACombatWeapon_FSW_RL_AT4_Att::pClassPointer = NULL;

// Class combatgamecontent.CombatWeaponRIS_IronSight_AT4
// 0x0000 (0x0AB4 - 0x0AB4)
class UCombatWeaponRIS_IronSight_AT4 : public UCombatWeaponRISBase_IronSight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96821 ];

		return pClassPointer;
	};

};

UClass* UCombatWeaponRIS_IronSight_AT4::pClassPointer = NULL;

// Class combatgamecontent.CombatFrontEndInfo_Contents
// 0x0000 (0x03C4 - 0x03C4)
class ACombatFrontEndInfo_Contents : public ACombatFrontEndInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 99085 ];

		return pClassPointer;
	};

};

UClass* ACombatFrontEndInfo_Contents::pClassPointer = NULL;

// Class combatgamecontent.CombatFrontEndHUD_Contents
// 0x0000 (0x0480 - 0x0480)
class ACombatFrontEndHUD_Contents : public ACombatFrontEndHUD
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 99087 ];

		return pClassPointer;
	};

};

UClass* ACombatFrontEndHUD_Contents::pClassPointer = NULL;

// Class combatgamecontent.CombatFrontEndLocalSoundGroup
// 0x0000 (0x00E4 - 0x00E4)
class UCombatFrontEndLocalSoundGroup : public UCombatFrontEndLocalSoundGroup_Base
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 99089 ];

		return pClassPointer;
	};

};

UClass* UCombatFrontEndLocalSoundGroup::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif