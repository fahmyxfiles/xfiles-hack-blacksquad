/*
#############################################################################################
# BlackSquad (1.0.10246.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: CombatGame_structs.h
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
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct CombatGame.CombatAnimNodeSequenceByBoneRotation.AnimByRotation
// 0x0014
struct FAnimByRotation
{
	struct FRotator                                    DesiredRotation;                                  		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AnimName;                                         		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatBot.EnemyPosition
// 0x001C
struct FEnemyPosition
{
	struct FVector                                     Position;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     Velocity;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              Time;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CBCharInfo.CustomAIData
// 0x0028
struct FCustomAIData
{
	float                                              Tactics;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              StrafingAbility;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Accuracy;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Aggressiveness;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              CombatStyle;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              Jumpiness;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              ReactionTime;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FString                                     FavoriteWeapon;                                   		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CBCharInfo.CharacterInfo
// 0x0070
struct FCharacterInfo
{
	struct FString                                     CharID;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     FamilyID;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CharName;                                         		// 0x0018 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0024 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     PreviewImageMarkup;                               		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Faction;                                          		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FCustomAIData                               AIData;                                           		// 0x0048 (0x0028) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CBCheatManager.DSConnectionDelayInfo
// 0x0008
struct FDSConnectionDelayInfo
{
	int                                                MessageType;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              DelayTime;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTypes.SeqVar_Data
// 0x0030
struct FSeqVar_Data
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      SeqVarClass;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                IntData;                                          		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FloatData;                                        		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     VectorData;                                       		// 0x0014 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     StringData;                                       		// 0x0020 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      BoolData : 1;                                     		// 0x002C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatTypes.AnimNotifyObjectData
// 0x0010
struct FAnimNotifyObjectData
{
	class UClass*                                      AnimNotifyClass;                                  		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AnimSeqName;                                      		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UObject*                                     ObjectData;                                       		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatTypes.TimeData
// 0x0008
struct FTimeData
{
	unsigned char                                      UnknownData00[ 0x2 ];                             		// 0x0000 (0x0002) UNKNOWN PROPERTY: WordProperty CombatGame.CombatTypes.TimeData.Year
	unsigned char                                      UnknownData01[ 0x2 ];                             		// 0x0002 (0x0002) UNKNOWN PROPERTY: WordProperty CombatGame.CombatTypes.TimeData.Day
	unsigned char                                      Month;                                            		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned char                                      Hour;                                             		// 0x0005 (0x0001) [0x0000000000000000]              
	unsigned char                                      Min;                                              		// 0x0006 (0x0001) [0x0000000000000000]              
	unsigned char                                      Sec;                                              		// 0x0007 (0x0001) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTypes.TakeDamageData
// 0x0058
struct FTakeDamageData
{
	class AActor*                                      Victim;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                DamageAmount;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	class AController*                                 EventInstigator;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000000]              
	class UClass*                                      DamageType;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	struct FPointer                                    CombatDamageType;                                 		// 0x0028 (0x0004) [0x0000000000001000]              ( CPF_Native )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x002C (0x0020) [0x0000000000080000]              ( CPF_Component )
	class AActor*                                      DamageCauser;                                     		// 0x004C (0x0004) [0x0000000000000000]              
	unsigned char                                      HitPart;                                          		// 0x0050 (0x0001) [0x0000000000000000]              
	int                                                HealthWhenTakeDamage;                             		// 0x0054 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTypes.UIChannelStruct
// 0x0014
struct FUIChannelStruct
{
	int                                                ChannelID;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                MaxUserCount;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     ChannelName;                                      		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatTypes.UIServerStruct
// 0x0068
struct FUIServerStruct
{
	int                                                RefID;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     CodeName;                                         		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                Level_Block;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                MinLevelAllowed;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                MaxLevelAllowed;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                KAD_Block;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                Min_KAD_Allowed;                                  		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                Max_KAD_Allowed;                                  		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                Clan_Block;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                ClanOnly;                                         		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                NameID;                                           		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                DescriptionID;                                    		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                Championship;                                     		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                Championship_Block;                               		// 0x003C (0x0004) [0x0000000000000000]              
	struct FString                                     ServerName;                                       		// 0x0040 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ServerDescription;                                		// 0x004C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                TotalMaxChannelCount;                             		// 0x0058 (0x0004) [0x0000000000000000]              
	TArray< struct FUIChannelStruct >                  UIChannelList;                                    		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatTypes.InviteRoomInfo
// 0x0010
struct FInviteRoomInfo
{
	struct FString                                     HostNick;                                         		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      Number;                                           		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned char                                      OpenType;                                         		// 0x000D (0x0001) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x2 ];                             		// 0x000E (0x0002) UNKNOWN PROPERTY: WordProperty CombatGame.CombatTypes.InviteRoomInfo.Password
};

// ScriptStruct CombatGame.CombatTypes.AwaitList
// 0x0028
struct FAwaitList
{
	int                                                userID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     NickName;                                         		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                Exp;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                CallingCardID;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FString                                     ClanName;                                         		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                EmblemID;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTypes.ScrNoticeInfo
// 0x0010
struct FScrNoticeInfo
{
	struct FString                                     msg;                                              		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                EndTime;                                          		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTypes.TableInfoType
// 0x0028
struct FTableInfoType
{
	struct FString                                     CodeName;                                         		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                Score;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                RankExp;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                CreditPoint;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                ModeDependencyScore;                              		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FName                                       KillType;                                         		// 0x001C (0x0008) [0x0000000000000000]              
	int                                                LocalizedStrID;                                   		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTypes.ClanMatchData
// 0x0020
struct FClanMatchData
{
	int                                                A_MatchWin;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                A_MatchLose;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                B_MatchWin;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                B_MatchLose;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                auto_A_MatchWin;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                auto_A_MatchLose;                                 		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                auto_B_MatchWin;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                auto_B_MatchLose;                                 		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTypes.MatchPlayerData
// 0x0030
struct FMatchPlayerData
{
	struct FString                                     UserName;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                EmblemID;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                userID;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Kill;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                Death;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                Assist;                                           		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                Score;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                Level;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                GameLevel;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	unsigned long                                      Desert : 1;                                       		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CombatGame.CombatTypes.ClanMatchRecordData
// 0x0084
struct FClanMatchRecordData
{
	struct FString                                     EnemyClanName;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                EnemyEmblemID;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                EnemyClanRank;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                EnemyClanPoint;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                EnemyClanAmatchWinScore;                          		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                EnemyClanAmatchLoseScore;                         		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                EnemyClanBmatchWinScore;                          		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                EnemyClanBmatchLoseScore;                         		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                MyClanPoint;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                MyClanRank;                                       		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                MyClanAmatchWinScore;                             		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                MyClanAmatchLoseScore;                            		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                MyClanBmatchWinScore;                             		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                MyClanBmatchLoseScore;                            		// 0x003C (0x0004) [0x0000000000000000]              
	struct FTimeData                                   MatchTime;                                        		// 0x0040 (0x0008) [0x0000000000000000]              
	int                                                ModeID;                                           		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                MapID;                                            		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                Win;                                              		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                Lose;                                             		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                MyTeamIndex;                                      		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                EnemyTeamIndex;                                   		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                BestScoreUserId;                                  		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                BestKillUserId;                                   		// 0x0064 (0x0004) [0x0000000000000000]              
	unsigned long                                      Outcome : 1;                                      		// 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< struct FMatchPlayerData >                  ClanMatchPlayer;                                  		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FMatchPlayerData >                  EnemyMatchPlayer;                                 		// 0x0078 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatTypes.MatchResultPlayerData
// 0x006C
struct FMatchResultPlayerData
{
	int                                                userID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     NickName;                                         		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                Level;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned char                                      TeamIndex;                                        		// 0x0014 (0x0001) [0x0000000000000000]              
	int                                                Score;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                ModeScore;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                PlayedTime;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                Kill;                                             		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                Assist;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                Death;                                            		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                CRPoint_Acquired;                                 		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                CRPoint_Used;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
	unsigned char                                      PlayedMilitaryBranch;                             		// 0x0038 (0x0001) [0x0000000000000000]              
	unsigned char                                      Rank;                                             		// 0x0039 (0x0001) [0x0000000000000000]              
	unsigned char                                      TotalRanking;                                     		// 0x003A (0x0001) [0x0000000000000000]              
	unsigned char                                      TeamRanking;                                      		// 0x003B (0x0001) [0x0000000000000000]              
	int                                                Gold;                                             		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                Exp;                                              		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                ClanID;                                           		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                EmblemID;                                         		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                ClanPoint;                                        		// 0x004C (0x0004) [0x0000000000000000]              
	struct FString                                     ClanName;                                         		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CCardID;                                          		// 0x005C (0x0004) [0x0000000000000000]              
	TArray< int >                                      BoosterItemList;                                  		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatTypes.ObjectDamageModifierStaticLightingInfo
// 0x0028
struct FObjectDamageModifierStaticLightingInfo
{
	TArray< class UShadowMap2D* >                      ShadowMaps;                                       		// 0x0000 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< class UShadowMap1D* >                      ShadowVertexBuffers;                              		// 0x000C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FLightMapRef                                LightMap;                                         		// 0x0018 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	TArray< struct FGuid >                             IrrelevantLights;                                 		// 0x001C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatTypes.ClanJoinList
// 0x0004
struct FClanJoinList
{
	int                                                ClanID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTypes.ClanJoinMemberList
// 0x001C
struct FClanJoinMemberList
{
	int                                                userID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     NickName;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      Level;                                            		// 0x0010 (0x0001) [0x0000000000000000]              
	struct FTimeData                                   RegistrationTime;                                 		// 0x0014 (0x0008) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTypes.ClanListMatchData
// 0x0024
struct FClanListMatchData
{
	int                                                ModeID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                MapID;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     OtherClanName;                                    		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      WinCount;                                         		// 0x0014 (0x0001) [0x0000000000000000]              
	unsigned char                                      OtherWinCount;                                    		// 0x0015 (0x0001) [0x0000000000000000]              
	unsigned long                                      Outcome : 1;                                      		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FTimeData                                   MatchTime;                                        		// 0x001C (0x0008) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTypes.ClanListDetailData
// 0x002C
struct FClanListDetailData
{
	struct FString                                     Introduce;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                A_Match_Win;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                A_Match_Lose;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                B_Match_Win;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                B_Match_Lose;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                Region_ID;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	TArray< struct FClanListMatchData >                MatchRecord;                                      		// 0x0020 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatTypes.ClanList
// 0x005C
struct FClanList
{
	int                                                ClanID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     ClanName;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClanMasterName;                                   		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Region;                                           		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                MemberCurrentCount;                               		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                MemberMaxCount;                                   		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x2 ];                             		// 0x0028 (0x0002) UNKNOWN PROPERTY: WordProperty CombatGame.CombatTypes.ClanList.ClanMasterLevel
	unsigned char                                      UnknownData01[ 0x2 ];                             		// 0x002A (0x0002) UNKNOWN PROPERTY: WordProperty CombatGame.CombatTypes.ClanList.EmblemID
	struct FTimeData                                   RegistrationTime;                                 		// 0x002C (0x0008) [0x0000000000000000]              
	int                                                A_Match_Win;                                      		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                A_Match_Lose;                                     		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                B_Match_Win;                                      		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                B_Match_Lose;                                     		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                Total_Match_Win;                                  		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                Total_Match_Lose;                                 		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                ClanExp;                                          		// 0x004C (0x0004) [0x0000000000000000]              
	struct FString                                     ClanIntroduce;                                    		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatTypes.MailAttachedItem
// 0x0008
struct FMailAttachedItem
{
	int                                                RefItem;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                RentalTime;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTypes.MailDataInfo
// 0x0068
struct FMailDataInfo
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      State;                                            		// 0x0004 (0x0001) [0x0000000000000000]              
	struct FString                                     Title;                                            		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ExpirationDiffTime;                               		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                AttachedType;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      bReceiveContents : 1;                             		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      Type;                                             		// 0x0020 (0x0001) [0x0000000000000000]              
	struct FString                                     Message;                                          		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Gold;                                             		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                Medal;                                            		// 0x0034 (0x0004) [0x0000000000000000]              
	struct FString                                     SenderName;                                       		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SenderLevel;                                      		// 0x0044 (0x0004) [0x0000000000000000]              
	struct FString                                     SenderClanName;                                   		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FTimeData                                   SendTime;                                         		// 0x0054 (0x0008) [0x0000000000000000]              
	TArray< struct FMailAttachedItem >                 Items;                                            		// 0x005C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatTypes.MessengerInfo
// 0x0060
struct FMessengerInfo
{
	int                                                userID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      SessionState;                                     		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned long                                      bAFK : 1;                                         		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     NickName;                                         		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      Level;                                            		// 0x0018 (0x0001) [0x0000000000000000]              
	struct FTimeData                                   LogoutTime;                                       		// 0x001C (0x0008) [0x0000000000000000]              
	int                                                LogoutDurationHour;                               		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                RefChannelID;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	unsigned char                                      ChannelNumber;                                    		// 0x002C (0x0001) [0x0000000000000000]              
	unsigned char                                      RoomNumber;                                       		// 0x002D (0x0001) [0x0000000000000000]              
	int                                                RefModeGroupID;                                   		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                RefModeID;                                        		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                RefMapID;                                         		// 0x0038 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHasType : 1;                                     		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHasSessionState : 1;                             		// 0x003C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bHasAFK : 1;                                      		// 0x003C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bHasNickname : 1;                                 		// 0x003C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bHasLevel : 1;                                    		// 0x003C (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bHasLogoutTime : 1;                               		// 0x003C (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bHasLogoutDuration : 1;                           		// 0x003C (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bHasChannelID : 1;                                		// 0x003C (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bHasChannelNumber : 1;                            		// 0x003C (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bHasRoomNumber : 1;                               		// 0x003C (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bHasModeID : 1;                                   		// 0x003C (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bHasMapID : 1;                                    		// 0x003C (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bHasModeGroupID : 1;                              		// 0x003C (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bGrade : 1;                                       		// 0x003C (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      bCallingCard : 1;                                 		// 0x003C (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      bClanName : 1;                                    		// 0x003C (0x0004) [0x0000000000000000] [0x00008000] 
	int                                                ClanPoint;                                        		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                CallingCardID;                                    		// 0x0044 (0x0004) [0x0000000000000000]              
	struct FString                                     ClanName;                                         		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      Type;                                             		// 0x0054 (0x0001) [0x0000000000000000]              
	unsigned char                                      GRADE;                                            		// 0x0055 (0x0001) [0x0000000000000000]              
	struct FTimeData                                   RegistrationTime;                                 		// 0x0058 (0x0008) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTypes.BoosterItem
// 0x0018
struct FBoosterItem
{
	int                                                BoosterItemID;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UCombatDataTableRefBoosterItem*              DataTable;                                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FTimeData                                   ExpireTime;                                       		// 0x0008 (0x0008) [0x0000000000100001]              ( CPF_Edit )
	unsigned char                                      Type;                                             		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bIsActive : 1;                                    		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatTypes.ShopItemPriceStruct
// 0x007C
struct FShopItemPriceStruct
{
	int                                                RentalID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                PriceType;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Mainprice;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                AddPriceType;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                AddPrice[ 0x5 ];                                  		// 0x0010 (0x0014) [0x0000000000000000]              
	int                                                RentalTime[ 0x5 ];                                		// 0x0024 (0x0014) [0x0000000000000000]              
	int                                                RentalPrice[ 0x5 ];                               		// 0x0038 (0x0014) [0x0000000000000000]              
	int                                                SalePrice[ 0x5 ];                                 		// 0x004C (0x0014) [0x0000000000000000]              
	struct FTimeData                                   SellSaleStart;                                    		// 0x0060 (0x0008) [0x0000000000000000]              
	struct FTimeData                                   SellSaleEnd;                                      		// 0x0068 (0x0008) [0x0000000000000000]              
	struct FString                                     AddReplaceItem;                                   		// 0x0070 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatTypes.ExplosionDamageAdjustment
// 0x0008
struct FExplosionDamageAdjustment
{
	unsigned char                                      BodyType;                                         		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageRatio;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatTypes.DialogLocalizingData
// 0x0054
struct FDialogLocalizingData
{
	int                                                TitleId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                MessageId;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                InputID;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                OKBtnLabelID;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                CancelBtnLabelID;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                MaxChar;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FString                                     Title;                                            		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Input;                                            		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     OKBtnLabel;                                       		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CancelBtnLabel;                                   		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatTypes.ChattingInfo
// 0x0018
struct FChattingInfo
{
	struct FString                                     ChatColor;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     msg;                                              		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatTypes.TacticalMapPlayerIconInfo
// 0x0008
struct FTacticalMapPlayerIconInfo
{
	unsigned long                                      bActivate : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDisplayWhenNoRendering : 1;                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                DisplayWhenNoRenderingDistance;                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTypes.BasePlayerStateForHUDInfo
// 0x000C
struct FBasePlayerStateForHUDInfo
{
	unsigned char                                      Order;                                            		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              Duration_RespawnMode;                             		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Duration_NoRespawnMode;                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTypes.PlayerSortOrderInfo
// 0x0028
struct FPlayerSortOrderInfo
{
	struct FString                                     PlayerName;                                       		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                Score;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Kill;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Death;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                Assist;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                SpecialScore;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                LastKillTime;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                userID;                                           		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTypes.CachedPlayerInfo
// 0x0054(0x007C - 0x0028)
struct FCachedPlayerInfo : FPlayerSortOrderInfo
{
	struct FString                                     LevelImageName;                                   		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClassImageName;                                   		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     RankImageName;                                    		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Level;                                            		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                Ranking;                                          		// 0x0050 (0x0004) [0x0000000000000000]              
	unsigned char                                      Ping;                                             		// 0x0054 (0x0001) [0x0000000000000000]              
	unsigned char                                      TeamIndex;                                        		// 0x0055 (0x0001) [0x0000000000000000]              
	unsigned long                                      bIsSpectator : 1;                                 		// 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsLive : 1;                                      		// 0x0058 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bSelectedClass : 1;                               		// 0x0058 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bNeedUpdate : 1;                                  		// 0x0058 (0x0004) [0x0000000000000000] [0x00000008] 
	int                                                ClanID;                                           		// 0x005C (0x0004) [0x0000000000000000]              
	struct FString                                     ClanEmblemImageName;                              		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClanName;                                         		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bHasC4 : 1;                                       		// 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CombatGame.CombatTypes.TestChangeWeaponType
// 0x0030
struct FTestChangeWeaponType
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     Command;                                          		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CodeName;                                         		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DisplayName;                                      		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      Control : 1;                                      		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      Alt : 1;                                          		// 0x002C (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct CombatGame.CombatTypes.ServerPlayerSortOrderInfo
// 0x0004(0x002C - 0x0028)
struct FServerPlayerSortOrderInfo : FPlayerSortOrderInfo
{
	class ACombatPlayerReplicationInfo*                targetPRI;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTypes.KeyBindingInfo
// 0x0014
struct FKeyBindingInfo
{
	struct FName                                       BindName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     Command;                                          		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatTypes.ClanMatchInfoStruct
// 0x0015
struct FClanMatchInfoStruct
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     ClanName;                                         		// 0x0004 (0x000C) [0x0000000000500002]              ( CPF_Const | CPF_NeedCtorLink )
	int                                                EmblemID;                                         		// 0x0010 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      MemberCount;                                      		// 0x0014 (0x0001) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct CombatGame.CombatTypes.MatchroomPlayerStruct
// 0x0038
struct FMatchroomPlayerStruct
{
	int                                                userID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     NickName;                                         		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                Level;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned char                                      Team;                                             		// 0x0014 (0x0001) [0x0000000000000000]              
	unsigned char                                      Slotstate;                                        		// 0x0015 (0x0001) [0x0000000000000000]              
	float                                              EnteredTick;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                ClanID;                                           		// 0x001C (0x0004) [0x0000000000000000]              
	struct FString                                     ClanName;                                         		// 0x0020 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                EmblemID;                                         		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                CCardID;                                          		// 0x0030 (0x0004) [0x0000000000000000]              
	unsigned long                                      bNoManner : 1;                                    		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CombatGame.CombatTypes.GameChannelStruct
// 0x0008
struct FGameChannelStruct
{
	int                                                ChannelRefIndex;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ChannelNumber;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTypes.LookInMatchRoomStruct
// 0x0058
struct FLookInMatchRoomStruct
{
	struct FString                                     UserName;                                         		// 0x0000 (0x000C) [0x0000000000500002]              ( CPF_Const | CPF_NeedCtorLink )
	int                                                userID;                                           		// 0x000C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                Level;                                            		// 0x0010 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      TeamIndex;                                        		// 0x0014 (0x0001) [0x0000000000000002]              ( CPF_Const )
	int                                                EnterTick;                                        		// 0x0018 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                ClanID;                                           		// 0x001C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                EmblemID;                                         		// 0x0020 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                CallingCardID;                                    		// 0x0024 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     ClanName;                                         		// 0x0028 (0x000C) [0x0000000000500002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     EmblemPath;                                       		// 0x0034 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     CallingCardPath;                                  		// 0x0040 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     LevelPath;                                        		// 0x004C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatTypes.MatchroomStruct
// 0x006C
struct FMatchroomStruct
{
	int                                                RoomIndex;                                        		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      RoomNameType;                                     		// 0x0004 (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      RoomNameCode;                                     		// 0x0005 (0x0001) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     RoomName;                                         		// 0x0008 (0x000C) [0x0000000000500002]              ( CPF_Const | CPF_NeedCtorLink )
	unsigned char                                      RoomState;                                        		// 0x0014 (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      RoomOpenType;                                     		// 0x0015 (0x0001) [0x0000000000000002]              ( CPF_Const )
	int                                                CurrentPlayerCount;                               		// 0x0018 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                RefMissionIndex;                                  		// 0x001C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                RefModeIndex;                                     		// 0x0020 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                RefMapIndex;                                      		// 0x0024 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                RefModeGroupIndex;                                		// 0x0028 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< unsigned char >                            GameOptions;                                      		// 0x002C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                AllowedMinLevel;                                  		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                AllowedMaxLevel;                                  		// 0x003C (0x0004) [0x0000000000000000]              
	struct FString                                     MapName;                                          		// 0x0040 (0x000C) [0x0000000000500002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     ModeName;                                         		// 0x004C (0x000C) [0x0000000000500002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     MapImageName;                                     		// 0x0058 (0x000C) [0x0000000000500002]              ( CPF_Const | CPF_NeedCtorLink )
	int                                                MaxPlayerCount;                                   		// 0x0064 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bThirdSpectator : 1;                              		// 0x0068 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      bAllowIntrusion : 1;                              		// 0x0068 (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
	unsigned long                                      bAutoTeamBalance : 1;                             		// 0x0068 (0x0004) [0x0000000000000002] [0x00000004] ( CPF_Const )
};

// ScriptStruct CombatGame.CombatTypes.IFFInfo
// 0x0041
struct FIFFInfo
{
	unsigned char                                      IFFType;                                          		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     NickName;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      HealthState;                                      		// 0x0010 (0x0001) [0x0000000000000000]              
	int                                                userID;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                ScreenX;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                ScreenY;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned char                                      SpecialEquipType;                                 		// 0x0020 (0x0001) [0x0000000000000000]              
	unsigned long                                      bUsingRadio : 1;                                  		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bKiller : 1;                                      		// 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FString                                     ClanName;                                         		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     RankImageName;                                    		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      ChampionshipIndex;                                		// 0x0040 (0x0001) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTypes.MinimapObjectIconInfo
// 0x0004
struct FMinimapObjectIconInfo
{
	unsigned long                                      bShowWhenAttachedOutLine : 1;                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CombatGame.CombatTypes.ObjectIconInfo
// 0x0010
struct FObjectIconInfo
{
	class AActor*                                      Actor;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      Type;                                             		// 0x0004 (0x0001) [0x0000000000000000]              
	int                                                Priority;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                DescriptionID;                                    		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTypes.CBTakeHitInfo
// 0x002C
struct FCBTakeHitInfo
{
	unsigned char                                      UnknownData00[ 0x2 ];                             		// 0x0000 (0x0002) UNKNOWN PROPERTY: WordProperty CombatGame.CombatTypes.CBTakeHitInfo.Damage
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FVector                                     Momentum;                                         		// 0x0010 (0x000C) [0x0000000000000000]              
	class UClass*                                      DamageType;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                HitBodyIndex;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	class AActor*                                      Causer;                                           		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned long                                      bFlag : 1;                                        		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CombatGame.CombatTypes.CompressedTraceHitInfo
// 0x0010
struct FCompressedTraceHitInfo
{
	class UPhysicalMaterial*                           PhysMaterial;                                     		// 0x0000 (0x0004) [0x0000000000100000]              
	int                                                Item;                                             		// 0x0004 (0x0004) [0x0000000000100000]              
	int                                                BoneIndex;                                        		// 0x0008 (0x0004) [0x0000000000100000]              
	unsigned long                                      bNoDecal : 1;                                     		// 0x000C (0x0004) [0x0000000000100000] [0x00000001] 
};

// ScriptStruct CombatGame.CombatTypes.CompressedImpactInfo
// 0x0020
struct FCompressedImpactInfo
{
	class AActor*                                      HitActor;                                         		// 0x0000 (0x0004) [0x0000000000100000]              
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000100000]              
	struct FCompressedTraceHitInfo                     HitInfo;                                          		// 0x0010 (0x0010) [0x0000000000100000]              
};

// ScriptStruct CombatGame.CombatTypes.PhysMaterialBelowFeet
// 0x0010
struct FPhysMaterialBelowFeet
{
	struct FVector                                     LastLocation;                                     		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class UPhysicalMaterialPropertyBase*               PhysMaterialProp;                                 		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatTypes.PointLightInfo
// 0x0018
struct FPointLightInfo
{
	struct FColor                                      LightColor;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Brightness;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Radius;                                           		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Lifetime;                                         		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FalloffExponent;                                  		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bSkipIfLowFrameRate : 1;                          		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatTypes.InGameSingleResource
// 0x0014
struct FInGameSingleResource
{
	class UObject*                                     Resource;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     ResourcePath;                                     		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct Fdword                                      StringHash;                                       		// 0x0010 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct CombatGame.CombatTypes.InGameSingleResourceList
// 0x000C
struct FInGameSingleResourceList
{
	TArray< struct FInGameSingleResource >             ResourceList;                                     		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatTypes.InGameResource
// 0x0018
struct FInGameResource
{
	TArray< class UObject* >                           ResourceList;                                     		// 0x0000 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                ResourceLength;                                   		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      ResourceClass;                                    		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CurrentIndex;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTypes.CameraAnimData
// 0x001C
struct FCameraAnimData
{
	class UCameraAnim*                                 CameraAnimAsset;                                  		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AnimScale;                                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AnimRate;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendInTime;                                      		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendOutTime;                                     		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AnimDuration;                                     		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bLoop : 1;                                        		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatTypes.SocketLocation
// 0x0010
struct FSocketLocation
{
	struct FVector                                     LastLocation;                                     		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastTimeSeconds;                                  		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatTypes.FunctionTable
// 0x0010
struct FFunctionTable
{
	struct FPointer                                    TargetFunction;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     FunctionName;                                     		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatTypes.OutlineMaterialVectorParam
// 0x0030
struct FOutlineMaterialVectorParam
{
	struct FName                                       EventName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ParameterName;                                    		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                ParameterValue[ 0x2 ];                            		// 0x0010 (0x0020) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatTypes.GlobalOutlineEvent
// 0x0010
struct FGlobalOutlineEvent
{
	struct FName                                       EventName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ApplyTeamIndex;                                   		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              StartTimeSecond;                                  		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatTypes.DecalData
// 0x002C
struct FDecalData
{
	class UMaterialInterface*                          DecalMaterial;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Width;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Height;                                           		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Thickness;                                        		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   RandomScalingRange;                               		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              RandomRadiusOffset;                               		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LifeSpan;                                         		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   BlendRange;                                       		// 0x0020 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bIsValid : 1;                                     		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      ClipDecalsUsingFastPath : 1;                      		// 0x0028 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bRandomizeRotation : 1;                           		// 0x0028 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bFloorDecal : 1;                                  		// 0x0028 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bForceDisplay : 1;                                		// 0x0028 (0x0004) [0x0000000000000000] [0x00000010] 
};

// ScriptStruct CombatGame.CombatTypes.CombatDecalParam
// 0x0010
struct FCombatDecalParam
{
	struct FName                                       ParamName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              Min;                                              		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Max;                                              		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatTypes.ExplosionDecal
// 0x0044
struct FExplosionDecal
{
	unsigned char                                      Dir;                                              		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              TraceDistance;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FDecalData                                  Decal;                                            		// 0x0008 (0x002C) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FCombatDecalParam >                 Params;                                           		// 0x0034 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bWorldSpaceDir : 1;                               		// 0x0040 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatTypes.CustomAnimData
// 0x003C
struct FCustomAnimData
{
	TArray< struct FName >                             WeapAnimSeqName;                                  		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       WeapAttachAnimSeqName;                            		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FName >                             PawnAnimSeqName;                                  		// 0x0014 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              BlendInTime;                                      		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendOutTime;                                     		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PawnAnimBlendInTime;                              		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PawnAnimBlendOutTime;                             		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PlayRate;                                         		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AdditionalPlayTime;                               		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bModifyAnimRate : 1;                              		// 0x0038 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bLooping : 1;                                     		// 0x0038 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bOverride : 1;                                    		// 0x0038 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bForceLocalSpaceBlend : 1;                        		// 0x0038 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bFullBody : 1;                                    		// 0x0038 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatTypes.CustomAnimOnIdleData
// 0x001C
struct FCustomAnimOnIdleData
{
	struct FName                                       EventName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AnimSeqName;                                      		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendInTime;                                      		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendOutTime;                                     		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bLooping : 1;                                     		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bOverride : 1;                                    		// 0x0018 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatTypes.HideBoneDataByScreenPos
// 0x0020
struct FHideBoneDataByScreenPos
{
	struct FName                                       TrackingSocketName;                               		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class USkeletalMeshSocket*                         TrackingSocket;                                   		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       HideBoneName;                                     		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                HideBoneIndex;                                    		// 0x0014 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DegreeFromCenter;                                 		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DotFromCenter;                                    		// 0x001C (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
};

// ScriptStruct CombatGame.CombatTypes.HideBoneDataByZoomState
// 0x0009
struct FHideBoneDataByZoomState
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      StateIndex;                                       		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatTypes.HideBoneDataByWeaponState
// 0x0009
struct FHideBoneDataByWeaponState
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      StateIndex;                                       		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatTypes.StaticMeshPart
// 0x0005
struct FStaticMeshPart
{
	class UStaticMesh*                                 Mesh;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      MaterialSet;                                      		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatTypes.MeshPart
// 0x0014
struct FMeshPart
{
	unsigned char                                      PartType;                                         		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class USkeletalMesh*                               Mesh;                                             		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInterface*                          Material;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      MaterialSet;                                      		// 0x000C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bIsMainMesh : 1;                                  		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bConstructMaterialInstance : 1;                   		// 0x0010 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct CombatGame.CBGameReplicationInfo.MissionActorInfo
// 0x000C
struct FMissionActorInfo
{
	TArray< class AActor* >                            ActorList;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatExplosionLight.LightValues
// 0x0010
struct FLightValues
{
	float                                              StartTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Radius;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Brightness;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FColor                                      LightColor;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CBPawnSoundGroup.HitSound
// 0x0010
struct FHitSound
{
	class USoundCue*                                   FirstPersonBeShotSound;                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   FirstPersonBeShotVoice;                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   FirstPersonHitSound;                              		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   ThirdPersonSound;                                 		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CBPawnSoundGroup.EffectTypeHitSound
// 0x00A0
struct FEffectTypeHitSound
{
	struct FHitSound                                   BodyTypeHitSounds[ 0xA ];                         		// 0x0000 (0x00A0) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CBPawnSoundGroup.FootstepSoundInfo
// 0x0010
struct FFootstepSoundInfo
{
	struct FName                                       MaterialType;                                     		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   Sound;                                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   CrouchSound;                                      		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CBPawnSoundGroup.TextWithVoice
// 0x0008
struct FTextWithVoice
{
	class USoundCue*                                   SoundCues;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TextID;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatPawn.MaterialImpactEffect
// 0x0034
struct FMaterialImpactEffect
{
	unsigned char                                      EffectType;                                       		// 0x0000 (0x0001) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	class USoundCue*                                   Sound;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   FirstPersonSound;                                 		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UMaterialInterface* >                DecalMaterials;                                   		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              DurationOfDecal;                                  		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       DecalDissolveParamName;                           		// 0x001C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              DecalWidth;                                       		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DecalHeight;                                      		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DecalTickness;                                    		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             ParticleTemplate;                                 		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CBPhysicalMaterialProperty.ExplosionDatum
// 0x0050
struct FExplosionDatum
{
	unsigned char                                      EffectType;                                       		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   ExplosionSoundCue;                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             ExplosionPS;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FDecalData                                  ExplosionDecalData;                               		// 0x000C (0x002C) [0x0000000000000001]              ( CPF_Edit )
	struct FPointLightInfo                             ExplosionPointLightInfo;                          		// 0x0038 (0x0018) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatPawn.CameraShakeRotationFactor
// 0x0008
struct FCameraShakeRotationFactor
{
	int                                                Pitch;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Roll;                                             		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatPawn.ImpulseData
// 0x0010
struct FImpulseData
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              ImpulseRate;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              ImpulseRate_Stand;                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatSkillManager.SavedSkillInfo
// 0x0008
struct FSavedSkillInfo
{
	class UCombatDataTableRefSkill*                    RefSkill;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHaveLicense : 1;                                 		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CombatGame.CBUIDataStore_CallingCard.UICallingCardStruct
// 0x0014
struct FUICallingCardStruct
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                LabelID;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     AssetName;                                        		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CBUIDataStore_HUD.CachedChampionshipPlayerInfoStruct
// 0x003C
struct FCachedChampionshipPlayerInfoStruct
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                userID;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     PlayerName;                                       		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     WeaponName;                                       		// 0x0014 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                TeamIndex;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                HealthMax;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                Health;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                TotalKillCounts;                                  		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                Status;                                           		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                WeaponID;                                         		// 0x0034 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHasC4 : 1;                                       		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bNeedUpdateIndex : 1;                             		// 0x0038 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bNeedUpdatePlayerName : 1;                        		// 0x0038 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bNeedUpdateTeamIndex : 1;                         		// 0x0038 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bNeedUpdateHealthMax : 1;                         		// 0x0038 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bNeedUpdateHealth : 1;                            		// 0x0038 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bNeedUpdateTotalKillCounts : 1;                   		// 0x0038 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bNeedUpdateStaus : 1;                             		// 0x0038 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bNeedUpdateHasC4 : 1;                             		// 0x0038 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bNeedUpdateWeaponName : 1;                        		// 0x0038 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bFinishChecked : 1;                               		// 0x0038 (0x0004) [0x0000000000000000] [0x00000400] 
};

// ScriptStruct CombatGame.CBUIDataStore_HUD.CachedWeaponInfo_BaseInfo
// 0x001C
struct FCachedWeaponInfo_BaseInfo
{
	unsigned long                                      bNeedUpdate : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     WeaponName;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bWithChamber : 1;                                 		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      MainWeaponUIType;                                 		// 0x0014 (0x0001) [0x0000000000000000]              
	unsigned char                                      SubGrenadeUIType;                                 		// 0x0015 (0x0001) [0x0000000000000000]              
	int                                                WeaponID;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CBUIDataStore_HUD.CachedWeaponInfo_AmmoCntInfo
// 0x001C
struct FCachedWeaponInfo_AmmoCntInfo
{
	unsigned long                                      bNeedUpdate : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                AmmoCount;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                MaxMagazineCount;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                RemainAmmoCount;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                ChamberCount;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FName                                       EventType;                                        		// 0x0014 (0x0008) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CBUIDataStore_HUD.CachedWeaponInfo_GrenadeInfo
// 0x0014
struct FCachedWeaponInfo_GrenadeInfo
{
	unsigned long                                      bNeedUpdate : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                GrenadeACount;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                GrenadeBCount;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FName                                       EventType;                                        		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CBUIDataStore_HUD.SuicideStateStruct
// 0x0004
struct FSuicideStateStruct
{
	unsigned long                                      bNeedUpdate : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSuicide : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct CombatGame.CBUIDataStore_HUD.ChampionshipObserverKeyState
// 0x0004
struct FChampionshipObserverKeyState
{
	unsigned long                                      bChatUIState : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSummaryUIState : 1;                              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIFFUIState : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bRoundDisplayUIState : 1;                         		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bInformationUIState : 1;                          		// 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bAllUIState : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bHpUIState : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bWeaponUIState : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000080] 
};

// ScriptStruct CombatGame.CBUIDataStore_HUD.KillerInfoStruct
// 0x002C
struct FKillerInfoStruct
{
	unsigned long                                      bNeedUpdate : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     KillerName;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                KillCount_Killer;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                KillCount_Me;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                killTypeStrID;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                KillCauserStrID;                                  		// 0x001C (0x0004) [0x0000000000000000]              
	struct FString                                     KillCauserIcon;                                   		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CBUIDataStore_Mission.UIMissionStruct
// 0x0028
struct FUIMissionStruct
{
	int                                                MissionRefID;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     MissionCodename;                                  		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MissionLabel;                                     		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                DefaultModeRefID;                                 		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                DefaultModeGroupID;                               		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned long                                      OpenChannel : 1;                                  		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CombatGame.CBUIDataStore_Mission.UIModeGroupStruct
// 0x0070
struct FUIModeGroupStruct
{
	int                                                ModeGroupRefID;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     ModeGroupCodename;                                		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SelectType;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                DefaultModeRefID;                                 		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FString                                     DisplayName;                                      		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DisplayThumbnail;                                 		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     BGThumbnail;                                      		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     TitleImg;                                         		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DisplayDescription;                               		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DisplayModeName;                                  		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DisplayModeThumbnail;                             		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      BetaVersion : 1;                                  		// 0x006C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CombatGame.CBUIDataStore_Mission.UIModeOptionStruct
// 0x0024
struct FUIModeOptionStruct
{
	struct FString                                     OptionCodename;                                   		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      DefaultOptionIndex;                               		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned long                                      bShow : 1;                                        		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                OptionCount;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	TArray< int >                                      Values;                                           		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CBUIDataStore_Mission.UIModeStruct
// 0x02C8
struct FUIModeStruct
{
	int                                                ModeRefID;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     modeCodename;                                     		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ModeLabel;                                        		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ModeDesc;                                         		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ModeImageName;                                    		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                DefaultMapRefID;                                  		// 0x0034 (0x0004) [0x0000000000000000]              
	unsigned long                                      BetaVersion : 1;                                  		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                StartableMinUser;                                 		// 0x003C (0x0004) [0x0000000000000000]              
	struct FUIModeOptionStruct                         MapOptionList[ 0x12 ];                            		// 0x0040 (0x0288) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CBUIDataStore_Mission.UIMapStruct
// 0x004C
struct FUIMapStruct
{
	int                                                MapRefID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     mapCodename;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MapLabel;                                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      MapSize;                                          		// 0x001C (0x0001) [0x0000000000000000]              
	struct FString                                     MapButtonImgName;                                 		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MapBGImgName;                                     		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MinimapImgName;                                   		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      BetaVersion : 1;                                  		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                ModeRefID;                                        		// 0x0048 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CBUIDataStore_Mission.UIMissionModeStruct
// 0x0028
struct FUIMissionModeStruct
{
	struct FString                                     MissionName;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ModeGroupInfo;                                    		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ModeName;                                         		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      BetaVersion : 1;                                  		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CombatGame.CBUIDataStore_Mission.UIModeMapStruct
// 0x002C
struct FUIModeMapStruct
{
	int                                                Service;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     ModeName;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MapName;                                          		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MinimapInfo;                                      		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      BetaVersion : 1;                                  		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CombatGame.CBUIDataStore_PendingDialogMessage.DialogMessage
// 0x0071
struct FDialogMessage
{
	int                                                DialogType;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FDialogLocalizingData                       LocalizationData;                                 		// 0x0004 (0x0054) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FScriptDelegate                             OKBtnDelegate;                                    		// 0x0058 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FScriptDelegate                             CancelBtnDelegate;                                		// 0x0064 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      UseDefaultDelegate;                               		// 0x0070 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatUIDataStore_StringAliasBindingMap.ControllerMap
// 0x0020
struct FControllerMap
{
	struct FName                                       KeyName;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     XBoxMapping;                                      		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PS3Mapping;                                       		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatUIDataStore_StringAliasBindingMap.BindCacheElement
// 0x0018
struct FBindCacheElement
{
	struct FName                                       KeyName;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     MappingString;                                    		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                FieldIndex;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CBUIDataStore_TacticalGear.UITacticalGearStruct
// 0x0024
struct FUITacticalGearStruct
{
	unsigned char                                      Id;                                               		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                Cost;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     ItemName;                                         		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           DescList;                                         		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bEnoughMoney : 1;                                 		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bAllowedMode : 1;                                 		// 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bUpdateEnoughMoney : 1;                           		// 0x0020 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bUpdateAllowedMode : 1;                           		// 0x0020 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct CombatGame.CCSSystemConfig.CCSSystemConfigData
// 0x0028
struct FCCSSystemConfigData
{
	float                                              MaxSightRadius;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxBehindSightRadius;                             		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxHearingRadius;                                 		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              VisionCone;                                       		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CoverQueryRadius;                                 		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< unsigned char >                            TargetSelection;                                  		// 0x0014 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      Movement;                                         		// 0x0020 (0x0001) [0x0000000000000000]              
	unsigned char                                      DetermineCanShoot;                                		// 0x0021 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              TargetAwarenessTickDelayTime;                     		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CCSBlackboard.CCSMoveCmdData
// 0x0010
struct FCCSMoveCmdData
{
	unsigned char                                      MoveCmd;                                          		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FVector                                     Position;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CCSCover.CCSCoverData
// 0x0020
struct FCCSCoverData
{
	float                                              TargetDist;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              DirectDistance;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      ValidPath : 1;                                    		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              PathDistance;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      IsValid : 1;                                      		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	class ACoverLink*                                  CoverLink;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                SlotIdx;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	class AActor*                                      Occupier;                                         		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CCSTarget.CCSTargetData
// 0x002C
struct FCCSTargetData
{
	class AActor*                                      Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     Position;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FVector                                     LKP;                                              		// 0x0010 (0x000C) [0x0000000000000000]              
	float                                              LKPAge;                                           		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              Range2D;                                          		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              Range3D;                                          		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned long                                      CanShoot : 1;                                     		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IsAware : 1;                                      		// 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      IsFiring : 1;                                     		// 0x0028 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      IsVisible : 1;                                    		// 0x0028 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct CombatGame.CCSBTCombatPatrol.PatrolPointInfo
// 0x0010
struct FPatrolPointInfo
{
	class ACombatPatrolPoint*                          PatrolPoint;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                SlotIdx;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Dist;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Value;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CCSController.SMoveTowardState
// 0x0010
struct FSMoveTowardState
{
	class AActor*                                      Goal;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	class AActor*                                      ViewFocus;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              DesiredOffset;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bStrafe : 1;                                      		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bShouldWalk : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct CombatGame.CombatSkillManager.SkillSaveInfo
// 0x001C
struct FSkillSaveInfo
{
	int                                                RemainCount;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              CoolTime;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              WorldCoolTime;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                checkcooltime;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x2 ];                             		// 0x0010 (0x0002) UNKNOWN PROPERTY: WordProperty CombatGame.CombatSkillManager.SkillSaveInfo.RemainMagazineAmmo
	unsigned char                                      UnknownData01[ 0x2 ];                             		// 0x0012 (0x0002) UNKNOWN PROPERTY: WordProperty CombatGame.CombatSkillManager.SkillSaveInfo.RemainAmmoCount
	unsigned char                                      RemainSubMagazineAmmo;                            		// 0x0014 (0x0001) [0x0000000000000000]              
	unsigned char                                      RemainSubAmmoCount;                               		// 0x0015 (0x0001) [0x0000000000000000]              
	unsigned long                                      bIsActivate : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsHold : 1;                                      		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bCanBuySkill : 1;                                 		// 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct CombatGame.CombatActiveSkill.GivenWeaponInfo
// 0x000D
struct FGivenWeaponInfo
{
	struct FString                                     ClassName;                                        		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      ApplyTeamIndex;                                   		// 0x000C (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatGame.ForbiddenWeapon
// 0x0008
struct FForbiddenWeapon
{
	unsigned char                                      ForbiddenWeaponType;                              		// 0x0000 (0x0001) [0x0000000000000000]              
	class UClass*                                      ReplaceWeapon;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatGame.ClientConnectionInfo
// 0x0008
struct FClientConnectionInfo
{
	int                                                PlayerID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class UPlayer*                                     Player;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatChampionshipManager.ChampionshipMemberData
// 0x0015
struct FChampionshipMemberData
{
	int                                                PlayerID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     PlayerName;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ACombatPlayerReplicationInfo*                PRI;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned char                                      Index;                                            		// 0x0014 (0x0001) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatChampionshipManager.ChampionshipTeamData
// 0x0010
struct FChampionshipTeamData
{
	class ACBTeamInfo*                                 TeamInfo;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FChampionshipMemberData >           MemberList;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatTeamGame.DefaultInventoryInfo
// 0x0018
struct FDefaultInventoryInfo
{
	TArray< class UClass* >                            LoadedInventoryClass;                             		// 0x0000 (0x000C) [0x0000000000402001]              ( CPF_Edit | CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FString >                           InventoryClassName;                               		// 0x000C (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatAIGame_TDMBase.SAITypeInfo
// 0x004C
struct FSAITypeInfo
{
	unsigned char                                      MaxAI;                                            		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     AIName;                                           		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     BehaviorTreePath;                                 		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      AIPawnClass;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	class UClass*                                      AIControllerClass;                                		// 0x0020 (0x0004) [0x0000000000000000]              
	struct FString                                     PrimaryWeapon;                                    		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SecondaryWeapon;                                  		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MeleeWeapon;                                      		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UCCSBTTree*                                  BehaviorTreeTemplate;                             		// 0x0048 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct CombatGame.CombatTeamGameHUD.ModeNameStruct
// 0x003C
struct FModeNameStruct
{
	struct FString                                     modeCodename;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CommonModeNameLabelID;                            		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                ModeNameLabelIDs[ 0x2 ];                          		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FString                                     CommonModeNameLabel;                              		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ModeNameLabels[ 0x2 ];                            		// 0x0024 (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatInGameLocalSoundGroup_Base.TeamSoundData
// 0x00A0
struct FTeamSoundData
{
	TArray< class USoundCue* >                         RoundResult;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class USoundCue* >                         RoundOverReason_TimeLimit;                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class USoundCue* >                         RoundOverReason_NoRespawnGameAllDeath;            		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class USoundCue* >                         RoundOverReason_WinByDecision;                    		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class USoundCue* >                         RoundOverReason_GameScoreLimit;                   		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class USoundCue* >                         RoundOverReason_SuddenDeathKill;                  		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USoundCue*                                   LastUserInfo;                                     		// 0x0048 (0x0004) [0x0000000000000000]              
	TArray< class USoundCue* >                         MatchResult;                                      		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USoundCue*                                   RoundStartInfo;                                   		// 0x0058 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   SuddenDeathInfo;                                  		// 0x005C (0x0004) [0x0000000000000000]              
	class USoundCue*                                   RoundGoalInfo;                                    		// 0x0060 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   GamePlayStartBGM;                                 		// 0x0064 (0x0004) [0x0000000000000000]              
	TArray< class USoundCue* >                         RoundResultBGM;                                   		// 0x0068 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class USoundCue* >                         RoundConditionSounds;                             		// 0x0074 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class USoundCue* >                         RoundOverReason_MissionEnd;                       		// 0x0080 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USoundCue*                                   DestroyObjectEnemy;                               		// 0x008C (0x0004) [0x0000000000000000]              
	class USoundCue*                                   DestroyObjectFriendly;                            		// 0x0090 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   C4BombPlant;                                      		// 0x0094 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   VIPEscapeStart;                                   		// 0x0098 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   VIPDeath;                                         		// 0x009C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatCharacterTransaction.LevelExpData
// 0x0008
struct FLevelExpData
{
	int                                                AccountLevel;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                AccountExp;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatCharacterTransaction.ClanMatchPlayHistory_Script
// 0x0034
struct FClanMatchPlayHistory_Script
{
	struct FString                                     Vs_clan_name;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Mode_ID;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Map_ID;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                PM_score;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                VC_score;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                Kill_count;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                Assist_count;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                Death_count;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                Match_result;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                Head_shot_count;                                  		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                Fatal_shot_count;                                 		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatCharacterTransaction.ClanMatchPlayInfo_Script
// 0x003C
struct FClanMatchPlayInfo_Script
{
	int                                                Clan_match_type;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Clan_match_count;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Clan_win_count;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Clan_lose_count;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Clan_kill_count;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Clan_assist_count;                                		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                Clan_death_count;                                 		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                Clan_headshot_kill_count;                         		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                Clan_fatal_kill_count;                            		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                Clan_last10_matches;                              		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                Clan_last10_wins;                                 		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                Clan_last10_loses;                                		// 0x002C (0x0004) [0x0000000000000000]              
	TArray< struct FClanMatchPlayHistory_Script >      Clan_match_history;                               		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatCharacterTransaction.CharacterTransactionData
// 0x00F4
struct FCharacterTransactionData
{
	int                                                MyUserID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     NickName;                                         		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FTimeData                                   LastAccessTime;                                   		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FTimeData                                   CreateIDTime;                                     		// 0x0018 (0x0008) [0x0000000000000000]              
	struct FLevelExpData                               LevelDatas;                                       		// 0x0020 (0x0008) [0x0000000000000000]              
	struct FLevelExpData                               StartingLevelDatas;                               		// 0x0028 (0x0008) [0x0000000000000000]              
	int                                                Rank;                                             		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                LastRank;                                         		// 0x0034 (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x0038 (0x003C) UNKNOWN PROPERTY: MapProperty CombatGame.CombatCharacterTransaction.CharacterTransactionData.LastTakeStat
	unsigned char                                      UnknownData01[ 0x3C ];                            		// 0x0074 (0x003C) UNKNOWN PROPERTY: MapProperty CombatGame.CombatCharacterTransaction.CharacterTransactionData.Stat
	unsigned char                                      UnknownData02[ 0x3C ];                            		// 0x00B0 (0x003C) UNKNOWN PROPERTY: MapProperty CombatGame.CombatCharacterTransaction.CharacterTransactionData.StatObtainedInConnection
	struct Fdword                                      MTS_Sec;                                          		// 0x00EC (0x0004) [0x0000000000800002]              ( CPF_Const | CPF_NoExport )
	unsigned long                                      OnClanShutdownPenalty : 1;                        		// 0x00F0 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CombatGame.CombatCharacterTransaction.PlayerTransactionData
// 0x006C(0x0160 - 0x00F4)
struct FPlayerTransactionData : FCharacterTransactionData
{
	int                                                ClanEmblemID;                                     		// 0x00F4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     ClanName;                                         		// 0x00F8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                CallingCardID;                                    		// 0x0104 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              Classic_KAD;                                      		// 0x0108 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                TotalConnectTime;                                 		// 0x010C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                TotalWinCount;                                    		// 0x0110 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                TotalLoseCount;                                   		// 0x0114 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                TotalKillCount;                                   		// 0x0118 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                TotalAssistCount;                                 		// 0x011C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                TotaldeathCount;                                  		// 0x0120 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                TotalPlayTime;                                    		// 0x0124 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                TotalMatchCount;                                  		// 0x0128 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                TotalHeadshotCount;                               		// 0x012C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                TotalFatalshotCount;                              		// 0x0130 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                TotalRunAwayCount;                                		// 0x0134 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                ClanMatchWinCount;                                		// 0x0138 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                ClanMatchLoseCount;                               		// 0x013C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                ClanMatchCount;                                   		// 0x0140 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                ClanMatchKillCount;                               		// 0x0144 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                ClanMatchAssistCount;                             		// 0x0148 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                ClanMatchDeathCount;                              		// 0x014C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                ClanMatchRunAwayCount;                            		// 0x0150 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FClanMatchPlayInfo_Script >         ClanMatchPlayInfo;                                		// 0x0154 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatDialogManager.DialogInfo
// 0x002C
struct FDialogInfo
{
	class UCombatDialog*                               DialogMC;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Id;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     DialogName;                                       		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             OKBtnDelegate;                                    		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             CancelBtnDelegate;                                		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatTeamGameMovie.WeaponSimpleInfo
// 0x001C
struct FWeaponSimpleInfo
{
	int                                                weaponRefItemIndex;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     WeaponName;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     WeaponImagePath;                                  		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatTeamGameMovie.MapSymbolDescriptionInfo
// 0x0008
struct FMapSymbolDescriptionInfo
{
	unsigned char                                      iconType;                                         		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                DescriptionID;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTeamGameMovie.RoundConditionAudioComponentInfo
// 0x000C
struct FRoundConditionAudioComponentInfo
{
	TArray< class UAudioComponent* >                   Sounds;                                           		// 0x0000 (0x000C) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct CombatGame.CombatTeamGameMovie.ClassIconStruct
// 0x0018
struct FClassIconStruct
{
	struct FString                                     SmallIcon;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     BigIcon;                                          		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatTeamGameMovie.PlayerStateEffectType
// 0x0028
struct FPlayerStateEffectType
{
	unsigned long                                      bIsBeginState : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bNeedUpdate : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bForceUpdate : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FScriptDelegate                             OnBegin;                                          		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             OnUpdate;                                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             OnEnd;                                            		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatTeamGameMovie.HitDamageInfo
// 0x001C
struct FHitDamageInfo
{
	unsigned long                                      bUsed : 1;                                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDisplayed : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              HitTime;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     VictimLocation;                                   		// 0x0008 (0x000C) [0x0000000000000000]              
	int                                                VictimColliHeight;                                		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                VictimHitDamage;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTeamGameMovie.DirHit
// 0x0018
struct FDirHit
{
	unsigned long                                      bUsed : 1;                                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bFadeIn : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bDirectAttack : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                AttackerPlayerID;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
	float                                              Lifetime;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatAIManager.AITypeInfo
// 0x0048
struct FAITypeInfo
{
	struct FString                                     PawnClassName;                                    		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     ControllerClassName;                              		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FString >                           WeaponClassName;                                  		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     CCSBTTreeName;                                    		// 0x0024 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UClass*                                      PawnClass;                                        		// 0x0030 (0x0004) [0x0000000000022001]              ( CPF_Edit | CPF_Transient | CPF_EditConst )
	class UClass*                                      ControllerClass;                                  		// 0x0034 (0x0004) [0x0000000000022001]              ( CPF_Edit | CPF_Transient | CPF_EditConst )
	TArray< class UClass* >                            WeaponClass;                                      		// 0x0038 (0x000C) [0x0000000000422001]              ( CPF_Edit | CPF_Transient | CPF_EditConst | CPF_NeedCtorLink )
	class UCCSBTTree*                                  CCSBTTree;                                        		// 0x0044 (0x0004) [0x0000000000022001]              ( CPF_Edit | CPF_Transient | CPF_EditConst )
};

// ScriptStruct CombatGame.CombatPlayerReplicationInfoBase.CurrentPlayerStateForHUDInfo
// 0x0008
struct FCurrentPlayerStateForHUDInfo
{
	unsigned long                                      bOn : 1;                                          		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              RemoveTime;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatAnim_TurnInPlace.RotTransitionInfo
// 0x000C
struct FRotTransitionInfo
{
	float                                              RotationOffset;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       TransName;                                        		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatAnim_TurnInPlace_Player.TIP_Transition
// 0x0014
struct FTIP_Transition
{
	struct FName                                       TransName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AnimName;                                         		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              PlayRate;                                         		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatAnimBlendPerBone_Multi.BlendInfo
// 0x0018
struct FBlendInfo
{
	TArray< struct FName >                             BranchStartBoneName;                              		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              BlendInTime;                                      		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bForceLocalSpaceBlend : 1;                        		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              PlayRate;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatAnimNodeCopyBoneTranslation.BoneCopyInfo
// 0x0018
struct FBoneCopyInfo
{
	struct FName                                       SrcBoneName;                                      		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       DstBoneName;                                      		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                SrcBoneIndex;                                     		// 0x0010 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                DstBoneIndex;                                     		// 0x0014 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct CombatGame.CombatAnimNotify_MaterialParam.MICParam
// 0x0038
struct FMICParam
{
	class UMaterialInstanceConstant*                   MIC;                                              		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       SavedScalarParam;                                 		// 0x0004 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              SavedScalarValue;                                 		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       SavedVectorParam;                                 		// 0x0010 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FLinearColor                                SavedVectorValue;                                 		// 0x0018 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       SavedTextureParam;                                		// 0x0028 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class UTexture*                                    SavedTextureValue;                                		// 0x0030 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                MaterialIndexInMesh;                              		// 0x0034 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct CombatGame.CombatAnimNotify_MaterialParam.AnimNotifyScalarParameter
// 0x0010
struct FAnimNotifyScalarParameter
{
	struct FName                                       ParameterName;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              StartParameterValue;                              		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EndParameterValue;                                		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatAnimNotify_MaterialParam.AnimNotifyVectorParameter
// 0x0028
struct FAnimNotifyVectorParameter
{
	struct FName                                       ParameterName;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                StartParameterValue;                              		// 0x0008 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                EndParameterValue;                                		// 0x0018 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatAnimNotify_MITVParam.AnimNotifyMITVScalarParam
// 0x0034
struct FAnimNotifyMITVScalarParam
{
	unsigned long                                      bOverride_ParameterValue : 1;                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ParameterValue;                                   		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FInterpCurveFloat                           ParameterValueCurve;                              		// 0x0008 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       ParameterName;                                    		// 0x0018 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bClearStartTime : 1;                              		// 0x0020 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bOverride_Loop : 1;                               		// 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bLoop : 1;                                        		// 0x0020 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bOverride_AutoActivate : 1;                       		// 0x0020 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bAutoActivate : 1;                                		// 0x0020 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bOverride_CycleTime : 1;                          		// 0x0020 (0x0004) [0x0000000000000000] [0x00000020] 
	float                                              CycleTime;                                        		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bOverride_NormalizeTime : 1;                      		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bNormalizeTime : 1;                               		// 0x0028 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bOverride_OffsetTime : 1;                         		// 0x0028 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              OffsetTime;                                       		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bOverride_OffsetFromEnd : 1;                      		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bOffsetFromEnd : 1;                               		// 0x0030 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatAnimNotify_MITVParam.AnimNotifyMITVVectorParam
// 0x0040
struct FAnimNotifyMITVVectorParam
{
	unsigned long                                      bOverride_ParameterValue : 1;                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FLinearColor                                ParameterValue;                                   		// 0x0004 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FInterpCurveVector                          ParameterValueCurve;                              		// 0x0014 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       ParameterName;                                    		// 0x0024 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bClearStartTime : 1;                              		// 0x002C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bOverride_Loop : 1;                               		// 0x002C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bLoop : 1;                                        		// 0x002C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bOverride_AutoActivate : 1;                       		// 0x002C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bAutoActivate : 1;                                		// 0x002C (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bOverride_CycleTime : 1;                          		// 0x002C (0x0004) [0x0000000000000000] [0x00000020] 
	float                                              CycleTime;                                        		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bOverride_NormalizeTime : 1;                      		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bNormalizeTime : 1;                               		// 0x0034 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bOverride_OffsetTime : 1;                         		// 0x0034 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              OffsetTime;                                       		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bOverride_OffsetFromEnd : 1;                      		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bOffsetFromEnd : 1;                               		// 0x003C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatAnimNotify_MITVParam.AnimNotifyMITVLinearColorParam
// 0x0040
struct FAnimNotifyMITVLinearColorParam
{
	unsigned long                                      bOverride_ParameterValue : 1;                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FLinearColor                                ParameterValue;                                   		// 0x0004 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FInterpCurveLinearColor                     ParameterValueCurve;                              		// 0x0014 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       ParameterName;                                    		// 0x0024 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bClearStartTime : 1;                              		// 0x002C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bOverride_Loop : 1;                               		// 0x002C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bLoop : 1;                                        		// 0x002C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bOverride_AutoActivate : 1;                       		// 0x002C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bAutoActivate : 1;                                		// 0x002C (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bOverride_CycleTime : 1;                          		// 0x002C (0x0004) [0x0000000000000000] [0x00000020] 
	float                                              CycleTime;                                        		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bOverride_NormalizeTime : 1;                      		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bNormalizeTime : 1;                               		// 0x0034 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bOverride_OffsetTime : 1;                         		// 0x0034 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              OffsetTime;                                       		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bOverride_OffsetFromEnd : 1;                      		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bOffsetFromEnd : 1;                               		// 0x003C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatAnimNotify_MITVParam.AnimNotifyMITVTextureParam
// 0x0024
struct FAnimNotifyMITVTextureParam
{
	unsigned long                                      bOverride_ParameterValue : 1;                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class UTexture*                                    ParameterValue;                                   		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ParameterName;                                    		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bClearStartTime : 1;                              		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bOverride_Loop : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bLoop : 1;                                        		// 0x0010 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bOverride_AutoActivate : 1;                       		// 0x0010 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bAutoActivate : 1;                                		// 0x0010 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bOverride_CycleTime : 1;                          		// 0x0010 (0x0004) [0x0000000000000000] [0x00000020] 
	float                                              CycleTime;                                        		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bOverride_NormalizeTime : 1;                      		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bNormalizeTime : 1;                               		// 0x0018 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bOverride_OffsetTime : 1;                         		// 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              OffsetTime;                                       		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bOverride_OffsetFromEnd : 1;                      		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bOffsetFromEnd : 1;                               		// 0x0020 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatAnimNotify_MITVParam.MITVParam
// 0x0040
struct FMITVParam
{
	class UMaterialInstanceTimeVarying*                MITV;                                             		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FScalarParameterValueOverTime >     SavedScalarValue;                                 		// 0x0004 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FVectorParameterValueOverTime >     SavedVectorValue;                                 		// 0x0010 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FLinearColorParameterValueOverTime > SavedLinearColorValue;                            		// 0x001C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FTextureParameterValueOverTime >    SavedTextureValue;                                		// 0x0028 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                MaterialIndexInMesh;                              		// 0x0034 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bOverridedAutoActiveAll : 1;                      		// 0x0038 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      SavedbAutoActivate : 1;                           		// 0x0038 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bApplyPlayRate : 1;                               		// 0x0038 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	float                                              SavedPlayRate;                                    		// 0x003C (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct CombatGame.CombatAudioChannelSystem.ChannelData
// 0x000C
struct FChannelData
{
	TArray< class UAudioComponent* >                   AudioComponents;                                  		// 0x0000 (0x000C) [0x0000000004580008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct CombatGame.CombatAwesomium.AwesomiumInfo
// 0x001C
struct FAwesomiumInfo
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     ImageURL;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LinkURL;                                          		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatBusterActor.SubObjectInfo
// 0x0034
struct FSubObjectInfo
{
	unsigned char                                      HealthPercentage;                                 		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class UStaticMeshComponent*                        MeshComp;                                         		// 0x0004 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UCombatExplosion*                            ExplosionTemplate;                                		// 0x0008 (0x0004) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	TArray< class USoundCue* >                         Sounds;                                           		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UParticleSystem* >                   ParticleTemplate;                                 		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bDeactiveParticleWhenChangeSubObject : 1;         		// 0x0024 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	TArray< class UParticleSystemComponent* >          PSC;                                              		// 0x0028 (0x000C) [0x0000000004482008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct CombatGame.CombatBusterActor.DamageInfo
// 0x0008
struct FDamageInfo
{
	class AController*                                 Controller;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                TotalDamage;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatBusterGame.ObjectDestoryBounsInfo
// 0x0008
struct FObjectDestoryBounsInfo
{
	float                                              RankExp;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              InGameCR;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatPC.DisplayOnlyPawnLocationInfo
// 0x0018
struct FDisplayOnlyPawnLocationInfo
{
	int                                                PlayerID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	unsigned long                                      bIsSameTeam : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              RegisterTime;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatPC.ObjectiveAnnouncementInfo
// 0x0010
struct FObjectiveAnnouncementInfo
{
	class USoundNodeWave*                              AnnouncementSound;                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     AnnouncementText;                                 		// 0x0004 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatChampionshipObserverPC.WatchingPlayerData
// 0x0005
struct FWatchingPlayerData
{
	int                                                playerIndex_zeroBase;                             		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      TeamIndex;                                        		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatCharacterTransaction.RecordRecentlyPlayed
// 0x003C
struct FRecordRecentlyPlayed
{
	struct FString                                     VsClanName;                                       		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                ModeID;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                MapID;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                WinningScore[ 0x2 ];                              		// 0x0014 (0x0008) [0x0000000000000000]              
	struct FTimeData                                   MatchEndTime;                                     		// 0x001C (0x0008) [0x0000000000000000]              
	int                                                Kill;                                             		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                Assist;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                Death;                                            		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned char                                      MatchResult;                                      		// 0x0030 (0x0001) [0x0000000000000000]              
	int                                                HeadShotKill;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                FatalShotKill;                                    		// 0x0038 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatCharacterTransaction.RecordRecentlyPlayedList
// 0x0010
struct FRecordRecentlyPlayedList
{
	int                                                modeFlag;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FRecordRecentlyPlayed >             List;                                             		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatChatManager.ChattingDisplayInfo
// 0x0058
struct FChattingDisplayInfo
{
	int                                                LabelID;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Label;                                            		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Msg_ColorList[ 0x2 ];                             		// 0x0010 (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CallSign_ColorList[ 0x2 ];                        		// 0x0028 (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClanNalme_ColorList[ 0x2 ];                       		// 0x0040 (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatRewardDataBase.RelatedKillDataInfo
// 0x0008
struct FRelatedKillDataInfo
{
	class ACombatPlayerReplicationInfo*                Target;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                KillCount;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatRewardDataBase.RecordDataType
// 0x0005
struct FRecordDataType
{
	int                                                TotalCount;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      CurrentCount;                                     		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatCommon_Option.LabelSettingInfo
// 0x0014
struct FLabelSettingInfo
{
	int                                                LabelID;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                TooltipID;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     FunctionName;                                     		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatCommon_Option.ButtonEnableInfo
// 0x0014
struct FButtonEnableInfo
{
	int                                                LabelID;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bActivate : 1;                                    		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bInvert : 1;                                      		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FString                                     FunctionName;                                     		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatCommon_Option.VideoOptionItemInfo
// 0x0054
struct FVideoOptionItemInfo
{
	struct FString                                     KeyName;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Type;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	TArray< int >                                      ItemNameID;                                       		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           ItemNameString;                                   		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SelectedIndex;                                    		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                OldSelectedIndex;                                 		// 0x002C (0x0004) [0x0000000000000000]              
	struct FString                                     FunctionName;                                     		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     InitDataFunctionName;                             		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SetValueFunctionName;                             		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatCommon_Option.VideoOptionPresetInfo
// 0x0014
struct FVideoOptionPresetInfo
{
	int                                                OptionItemIndex;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsCustom : 1;                                    		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< int >                                      SelectedByLevel;                                  		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatCommon_Option.ControlOptionItemInfo
// 0x0020
struct FControlOptionItemInfo
{
	struct FString                                     KeyName;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SelectedIndex;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                OldSelectedIndex;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FString                                     FunctionName;                                     		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatCommon_Option.SoundOptionItemInfo
// 0x0020
struct FSoundOptionItemInfo
{
	struct FString                                     KeyName;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SelectedIndex;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                OldSelectedIndex;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FString                                     FunctionName;                                     		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatCommon_Option.GamePlayOptionItemInfo
// 0x0020
struct FGamePlayOptionItemInfo
{
	struct FString                                     KeyName;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SelectedIndex;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                OldSelectedIndex;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FString                                     FunctionName;                                     		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatCommon_Option.OptionKeyBindingInfo
// 0x0020
struct FOptionKeyBindingInfo
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Command;                                          		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                LabelID;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bAlert : 1;                                       		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                SelectedKeyCode;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                OldSelectedKeyCode;                               		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatProfileSettings.KeymapDatum
// 0x0018
struct FKeymapDatum
{
	struct FName                                       FlashKeyname;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       UnrealKeyname;                                    		// 0x0008 (0x0008) [0x0000000000000000]              
	int                                                FlashKeyCode;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                LocalizedID;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatProfileSettings.FiexdKeyCommandInfo
// 0x0014
struct FFiexdKeyCommandInfo
{
	struct FString                                     Command;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       KeyName;                                          		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatGameViewportClient.__RESOLUTION
// 0x0014
struct F__RESOLUTION
{
	int                                                Width;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Height;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< int >                                      RefreshRate;                                      		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatGameViewportClient.__ASPECT
// 0x0014
struct F__ASPECT
{
	int                                                aspectHoriz;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                aspectVert;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< struct F__RESOLUTION >                     Resolution;                                       		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatCTFGameScore.ScoreStruct
// 0x0008
struct FScoreStruct
{
	float                                              Score;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              MissionScore;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatDataTable.DataEntry
// 0x0014
struct FDataEntry
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	class UCombatDataTableType*                        Object;                                           		// 0x0004 (0x0004) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class UCombatDataTable*                            Owner;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FName                                       ObjectName;                                       		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatDataTable.TypeAliasInfo
// 0x0014
struct FTypeAliasInfo
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     ClassType;                                        		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatDataTableRefInitItem.InitItemData
// 0x0010
struct FInitItemData
{
	struct FString                                     CodeName;                                         		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      IsActive : 1;                                     		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CombatGame.CombatDataTableRefQuest.QuestRewardData
// 0x0008
struct FQuestRewardData
{
	unsigned char                                      RewardType;                                       		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                Value;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatDataTableRefQuest.StepByStepRewardType
// 0x0010
struct FStepByStepRewardType
{
	int                                                Count;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FQuestRewardData >                  RewardList;                                       		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatDataTableRefRankUp.UnlockSkillData
// 0x000E
struct FUnlockSkillData
{
	struct FString                                     UnlockSkill;                                      		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      ClassType;                                        		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned char                                      Skilltype;                                        		// 0x000D (0x0001) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatDataTableRefReward.RewardData
// 0x0014
struct FRewardData
{
	struct FString                                     RewardItemCodeName;                               		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                RewardItemValue;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                RewardItemValueType;                              		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatDBManager.ExcelExternalCallType
// 0x0010
struct FExcelExternalCallType
{
	int                                                PublicID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                PersonalID;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                GameSetID;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                DBID;                                             		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatDestructibleObject.MaterialReplaceMod
// 0x0008
struct FMaterialReplaceMod
{
	class UMaterialInterface*                          NewMaterial;                                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaterialIndex;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatDestructibleObject.MaterialScalarParamMod
// 0x0010
struct FMaterialScalarParamMod
{
	class UMaterialInstanceConstant*                   MatInst;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ParamName;                                        		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              ScalarVal;                                        		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatDestructibleObject.MaterialTexParamMod
// 0x0010
struct FMaterialTexParamMod
{
	class UMaterialInstanceConstant*                   MatInst;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ParamName;                                        		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UTexture*                                    NewTexture;                                       		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatDestructibleObject.MaterialVectorParamMod
// 0x001C
struct FMaterialVectorParamMod
{
	class UMaterialInstanceConstant*                   MatInst;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ParamName;                                        		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                VectorVal;                                        		// 0x000C (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatDestructibleObject.DestroyedEffectParams
// 0x0028
struct FDestroyedEffectParams
{
	class UParticleSystem*                             ParticleEffect;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RelativeOffset;                                   		// 0x0004 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    RelativeRotation;                                 		// 0x0010 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxSpawnDist;                                     		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       SocketName;                                       		// 0x0020 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatDestructibleObject.ActorSpawnParams
// 0x005C
struct FActorSpawnParams
{
	class UActorFactory*                               Factory;                                          		// 0x0000 (0x0004) [0x0000000024400008]              ( CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline | CPF_Deprecated )
	class UStaticMesh*                                 RigidBodyMesh;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     MinLinearVel;                                     		// 0x0008 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     MaxLinearVel;                                     		// 0x0014 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     MinAngularVel;                                    		// 0x0020 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     MaxAngularVel;                                    		// 0x002C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      CollisionType;                                    		// 0x0038 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      RBChannel;                                        		// 0x0039 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RelativeOffset;                                   		// 0x003C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    RelativeRotation;                                 		// 0x0048 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              LifeTimeSeconds;                                  		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxSpawnDist;                                     		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatDestructibleObject.SplashDamageParams
// 0x0010
struct FSplashDamageParams
{
	float                                              BaseDamage;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageRadius;                                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      DamageType;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Momentum;                                         		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatDestructibleObject.ObjDamageModifierDependency
// 0x0010
struct FObjDamageModifierDependency
{
	struct FName                                       DependentSubObjName;                              		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxHealthToAllow;                                 		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                DependentSubObjIdx;                               		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct CombatGame.CombatDestructibleObject.ExplosionMod
// 0x002C
struct FExplosionMod
{
	struct FName                                       SocketName;                                       		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              Damage;                                           		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageRadius;                                     		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RelativeLocation;                                 		// 0x0010 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    RelativeRotation;                                 		// 0x001C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      ActorClassToIgnoreForDamage;                      		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatDestructibleObject.ObjectDamageModifier
// 0x00C8
struct FObjectDamageModifier
{
	struct FName                                       DamageModName;                                    		// 0x0000 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              HealthThreshold;                                  		// 0x0008 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UStaticMesh*                                 NewMesh;                                          		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStaticMeshComponent*                        LightingBuildComponent;                           		// 0x0010 (0x0004) [0x000000000408200A]              ( CPF_Const | CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	TArray< struct FMaterialReplaceMod >               MaterialReplacements;                             		// 0x0014 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< struct FMaterialScalarParamMod >           MaterialScalarParams;                             		// 0x0020 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< struct FMaterialTexParamMod >              MaterialTexParams;                                		// 0x002C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< struct FMaterialVectorParamMod >           MaterialVectorParams;                             		// 0x0038 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< class USoundCue* >                         Sounds;                                           		// 0x0044 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	unsigned long                                      bSelfDestruct : 1;                                		// 0x0050 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      bStopAmbientSound : 1;                            		// 0x0050 (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	TArray< struct FDestroyedEffectParams >            DestroyedEffects;                                 		// 0x0054 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bForceDisableAttachedCover : 1;                   		// 0x0060 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	TArray< struct FActorSpawnParams >                 ActorsToSpawn;                                    		// 0x0064 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FSplashDamageParams                         SplashDamage;                                     		// 0x0070 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< struct FObjDamageModifierDependency >      DependentSubObjs;                                 		// 0x0080 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	unsigned long                                      bApplied : 1;                                     		// 0x008C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	int                                                NextSpawnActorIdx;                                		// 0x0090 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bDisableAllCover : 1;                             		// 0x0094 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      bLowerAllCover : 1;                               		// 0x0094 (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	struct FExplosionMod                               ExploMod;                                         		// 0x0098 (0x002C) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bSelfDestructAll : 1;                             		// 0x00C4 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
};

// ScriptStruct CombatGame.CombatDestructibleObject.DestructibleSubobject
// 0x00EC
struct FDestructibleSubobject
{
	struct FName                                       SubObjName;                                       		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UStaticMeshComponent*                        Mesh;                                             		// 0x0008 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< struct FObjectDamageModifier >             DamageMods;                                       		// 0x000C (0x000C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	float                                              DefaultHealth;                                    		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FObjectDamageModifier                       UndoMod;                                          		// 0x001C (0x00C8) [0x0000000000482000]              ( CPF_Transient | CPF_Component | CPF_NeedCtorLink )
	int                                                ActiveDamageModIdx;                               		// 0x00E4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UClass*                                      LastHitDamageType;                                		// 0x00E8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct CombatGame.CombatDestructibleObject.SubObjectStaticLightingInfo
// 0x0034
struct FSubObjectStaticLightingInfo
{
	TArray< struct FObjectDamageModifierStaticLightingInfo > StaticLightingInfos;                              		// 0x0000 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FObjectDamageModifierStaticLightingInfo     UndamagedStaticLightingInfo;                      		// 0x000C (0x0028) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatDestructibleObject.ReplicatedDamageModInfo
// 0x0008
struct FReplicatedDamageModInfo
{
	unsigned char                                      ObjIdx;                                           		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      ModIdx;                                           		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned long                                      bPartial : 1;                                     		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CombatGame.CombatDestructibleObject.MITVMod
// 0x0008
struct FMITVMod
{
	class UMaterialInstanceTimeVarying*                NewMITV;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaterialIndex;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatDestructibleSMActor.MeshInfo
// 0x0008
struct FMeshInfo
{
	class UStaticMeshComponent*                        MeshComp;                                         		// 0x0000 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	int                                                DamageThreshold;                                  		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatFrontEnd_Base.FrontEndButtonStruct
// 0x0014
struct FFrontEndButtonStruct
{
	struct FString                                     MemberName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                LabelID;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      bDefaultDisabled : 1;                             		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDefaultSelected : 1;                             		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bDisabled : 1;                                    		// 0x0010 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bSelected : 1;                                    		// 0x0010 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct CombatGame.CombatFrontEnd_AwaitList.AwaitListPopUpItem
// 0x0008
struct FAwaitListPopUpItem
{
	int                                                LabelID;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bDisabled : 1;                                    		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDefaultDisabled : 1;                             		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct CombatGame.CombatFrontEnd_Maintenance.RISListDescStruct
// 0x0014
struct FRISListDescStruct
{
	struct FString                                     AddImagepath;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                AddNameID;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                DescNameID;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatFrontEnd_Maintenance.InfoTabStruct
// 0x000C
struct FInfoTabStruct
{
	struct FString                                     IconName;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatFrontEnd_Maintenance.ItemAbilityInfoStruct
// 0x002C
struct FItemAbilityInfoStruct
{
	struct FString                                     AbilityName;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ViewType;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     Spec;                                             		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                EquipSpec;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                EquipPercent;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                LookSpec;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                LookPercent;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatFrontEnd_Maintenance.ItemAddonStruct
// 0x0024
struct FItemAddonStruct
{
	struct FString                                     AddImg;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AddTitle;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AddDesc;                                          		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatFrontEnd_Maintenance.ItemDescStruct
// 0x0018
struct FItemDescStruct
{
	struct FString                                     Title;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Contents;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatFrontEnd_Maintenance.ItemBasicInfoStruct
// 0x0028
struct FItemBasicInfoStruct
{
	struct FString                                     ItemName;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemFeature;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemImg;                                          		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      IsProto : 1;                                      		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CombatGame.CombatFrontEnd_BaseShop.ShopTabStruct
// 0x0020
struct FShopTabStruct
{
	int                                                LabelID;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Label;                                            		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CodeName;                                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bDefaultDisabled : 1;                             		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDisabled : 1;                                    		// 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bSelected : 1;                                    		// 0x001C (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct CombatGame.CombatFrontEnd_BaseShop.UIShopItemInfo
// 0x009C
struct FUIShopItemInfo
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     ItemName;                                         		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemCategoryName;                                 		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemPrice;                                        		// 0x001C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     OnSale;                                           		// 0x0028 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      iconNew : 1;                                      		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      iconHot : 1;                                      		// 0x0034 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      iconProto : 1;                                    		// 0x0034 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      iconCheck : 1;                                    		// 0x0034 (0x0004) [0x0000000000000000] [0x00000008] 
	int                                                IconTag;                                          		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                WeaponIndex;                                      		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                moneytype;                                        		// 0x0040 (0x0004) [0x0000000000000000]              
	struct FString                                     ItemImg;                                          		// 0x0044 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     buyBtnLabel;                                      		// 0x0050 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                buyBtnState;                                      		// 0x005C (0x0004) [0x0000000000000000]              
	struct FString                                     rankImg;                                          		// 0x0060 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     addInfo;                                          		// 0x006C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ToolTip;                                          		// 0x0078 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemGrade;                                        		// 0x0084 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemGradeFrame;                                   		// 0x0090 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatFrontEnd_BaseShop.MonetaryUnitStruct
// 0x0014
struct FMonetaryUnitStruct
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Label;                                            		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Icon;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatFrontEnd_BaseShop.BuyPriceStruct
// 0x0020
struct FBuyPriceStruct
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Period;                                           		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     price;                                            		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Icon;                                             		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatFrontEnd_BaseShop.PresetItemStruct
// 0x0070
struct FPresetItemStruct
{
	struct FString                                     Label;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     mainTitle;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MainImg;                                          		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SubTitle;                                         		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SubImg;                                           		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     NearTitle;                                        		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     NearImg;                                          		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ThrowImg_Left;                                    		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ThrowImg_Right;                                   		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      MainProto : 1;                                    		// 0x006C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      SubProto : 1;                                     		// 0x006C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      NearProto : 1;                                    		// 0x006C (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct CombatGame.CombatFrontEnd_BaseShop.BuyItemStruct
// 0x0028
struct FBuyItemStruct
{
	struct FString                                     ItemName;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemCategory;                                     		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     imgURL;                                           		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      newIcon : 1;                                      		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      hotIcon : 1;                                      		// 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      protoIcon : 1;                                    		// 0x0024 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      buyIcon : 1;                                      		// 0x0024 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct CombatGame.CombatFrontEnd_BaseShop.PopupItemData
// 0x0004
struct FPopupItemData
{
	unsigned long                                      newIcon : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      protoIcon : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      buyIcon : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct CombatGame.CombatFrontEnd_BaseShop.BuyItemInfoStruct
// 0x0028
struct FBuyItemInfoStruct
{
	struct FString                                     ItemName;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemCategory;                                     		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     imgURL;                                           		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      newIcon : 1;                                      		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      buyIcon : 1;                                      		// 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      protoIcon : 1;                                    		// 0x0024 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct CombatGame.CombatItemTransaction.InventoryItemInfo
// 0x0038
struct FInventoryItemInfo
{
	struct FString                                     ItemName;                                         		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                InventorySlotIndex;                               		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                ReferenceIndex;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                InitRentalTime;                                   		// 0x0014 (0x0004) [0x0000000000100000]              
	float                                              InitTickCount;                                    		// 0x0018 (0x0004) [0x0000000000100000]              
	int                                                PassedSec;                                        		// 0x001C (0x0004) [0x0000000000100000]              
	TArray< unsigned char >                            DecoItems;                                        		// 0x0020 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      ItemState;                                        		// 0x002C (0x0001) [0x0000000000000000]              
	unsigned long                                      IsNew : 1;                                        		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IsEquip : 1;                                      		// 0x0030 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                StackCount;                                       		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatItemTransaction.EquipItemInfo
// 0x000C
struct FEquipItemInfo
{
	int                                                PresetIndex;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                InventorySlotIndex;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                EquipSlotType;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatItemTransaction.ShopItemInfo
// 0x002C
struct FShopItemInfo
{
	class UCombatDataTableRefShopItem*                 refShopItem;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     CodeName;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemName;                                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ReferenceIndex;                                   		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                Mainprice;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                PriceType;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsSelectedRepurchaseItem : 1;                     		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CombatGame.CombatItemTransaction.ExpiredItem
// 0x0018
struct FExpiredItem
{
	int                                                InventorySlotIndex;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                RefItemID;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     ItemName;                                         		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bShow : 1;                                        		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CombatGame.CombatItemTransaction.RepurchaseItem
// 0x000C
struct FRepurchaseItem
{
	int                                                InvenSlotIndex;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                RefItemID;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                RentalIndex;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatItemTransaction.S_BaseItemInfo
// 0x0020
struct FS_BaseItemInfo
{
	int                                                ItemID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                PresetIndex;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	class UCombatDataTableRefItem*                     RefItem;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                EquipSlot;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     ItemName;                                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SlotIndex;                                        		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatItemTransaction.FilterInfo
// 0x0010
struct FFilterInfo
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Filtertype1;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Filtertype2;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Filtertype3;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatItemTransaction.CallingCardInfo
// 0x0008
struct FCallingCardInfo
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Expiration_Time;                                  		// 0x0004 (0x0004) [0x0000000000100000]              
};

// ScriptStruct CombatGame.CombatFrontEnd_BuyItem.EquipSlotShopStruct
// 0x002C
struct FEquipSlotShopStruct
{
	int                                                slotType;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     ItemName;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemUrl;                                          		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemGradeUrl;                                     		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      IsProto : 1;                                      		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IsEvent : 1;                                      		// 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct CombatGame.CombatFrontEnd_Inventory.PresetTabStruct
// 0x0010
struct FPresetTabStruct
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Label;                                            		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatFrontEnd_Inventory.InvenTabStruct
// 0x0014
struct FInvenTabStruct
{
	int                                                LabelID;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Label;                                            		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bDefaultDisabled : 1;                             		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDisabled : 1;                                    		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bSelected : 1;                                    		// 0x0010 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct CombatGame.CombatFrontEnd_Inventory.InvenItemStruct
// 0x00A4
struct FInvenItemStruct
{
	unsigned long                                      Proto : 1;                                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bNewer : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bLock : 1;                                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bExpire : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	int                                                IconTag;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                SlotIndex;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                WeaponIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                SetType;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                PresetNumState[ 0x3 ];                            		// 0x0014 (0x000C) [0x0000000000000000]              
	int                                                CheckType;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                RepairType;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                DestroyType;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                ExpendType;                                       		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                KillCount;                                        		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                OverlapCount;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
	struct FString                                     ItemName;                                         		// 0x0038 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemCategoryName;                                 		// 0x0044 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemPath;                                         		// 0x0050 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     rankImgPath;                                      		// 0x005C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     addInfo;                                          		// 0x0068 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ToolTip;                                          		// 0x0074 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemGrade;                                        		// 0x0080 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemGradeFrame;                                   		// 0x008C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemActiveName;                                   		// 0x0098 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatFrontEnd_CharacterInfo_BattleTab.DisplayData
// 0x0050
struct FDisplayData
{
	int                                                Win;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Lose;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Kill;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                HeadShotKill;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                FatalKill;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Death;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                Suicide;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                Runaway;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                bestScore;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                bestKill;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                BestAssist;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                BestMission;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                Assist;                                           		// 0x0030 (0x0004) [0x0000000000000000]              
	struct FString                                     CreateIDTime;                                     		// 0x0034 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     PlayTime;                                         		// 0x0040 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                Score;                                            		// 0x004C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatFrontEnd_CharacterInfo_WeaponTab.WeaponStatType
// 0x0028
struct FWeaponStatType
{
	int                                                GrouppingWeaponID;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     DisplayName;                                      		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                KillCount;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                HeadshotKillCount;                                		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                FatalKillCount;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FString                                     ImgPath;                                          		// 0x001C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatFrontEnd_ClanList.ClanInformation
// 0x003C
struct FClanInformation
{
	struct FString                                     ClanName;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Rank;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     ClanMaster;                                       		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ClanPoint;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                ClanMembers;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                A_Match_Win;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                A_Match_Lose;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                B_Match_Win;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                B_Match_Lose;                                     		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                Total_Match_Win;                                  		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                Total_Match_Lose;                                 		// 0x0038 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatFrontEnd_Community.PopupItemInfo
// 0x0008
struct UCombatFrontEnd_Community_FPopupItemInfo
{
	unsigned char                                      ItemType;                                         		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned long                                      DisabledForOffline : 1;                           		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDefaultDisabled : 1;                             		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct CombatGame.CombatFrontEnd_Community.MessengerListStruct
// 0x0014
struct FMessengerListStruct
{
	int                                                LabelID;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Label;                                            		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bOpened : 1;                                      		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bOpenWhenInit : 1;                                		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct CombatGame.CombatFrontEnd_Community.UserInfoTooltipInfo
// 0x0064
struct FUserInfoTooltipInfo
{
	int                                                userID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     NickName;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Level;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FString                                     LevelName;                                        		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      SessionState;                                     		// 0x0020 (0x0001) [0x0000000000000000]              
	int                                                refChannelIndex;                                  		// 0x0024 (0x0004) [0x0000000000000000]              
	struct FString                                     ServerName;                                       		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      ChannelNumber;                                    		// 0x0034 (0x0001) [0x0000000000000000]              
	struct FString                                     ChannelName;                                      		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      MatchRoomNumber;                                  		// 0x0044 (0x0001) [0x0000000000000000]              
	int                                                RefModeIndex;                                     		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                RefModeGroupIndex;                                		// 0x004C (0x0004) [0x0000000000000000]              
	struct FString                                     ModeName;                                         		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                X;                                                		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                Y;                                                		// 0x0060 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatFrontEnd_Dashboard.PopupItemInfo
// 0x0014
struct UCombatFrontEnd_Dashboard_FPopupItemInfo
{
	unsigned char                                      Id;                                               		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                CaptionID;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     CodeName;                                         		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatFrontEnd_Dashboard.DashboardStruct
// 0x0028
struct FDashboardStruct
{
	int                                                LabelID;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                TooltipID;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Position;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     MemberName;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CodeName;                                         		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bDefaultSelected : 1;                             		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSelected : 1;                                    		// 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bDisabled : 1;                                    		// 0x0024 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct CombatGame.CombatFrontEnd_Dashboard.MyMoneyStruct
// 0x0014
struct FMyMoneyStruct
{
	int                                                TooltipID;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                LastMoney;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     MemberName;                                       		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatFrontEnd_Inventory.EquipSlotStruct
// 0x004C
struct FEquipSlotStruct
{
	int                                                slotType;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                SlotIndex;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                IconTag;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     ItemName;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemUrl;                                          		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemGradeUrl;                                     		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemGradeFrameUrl;                                		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Itemperiod;                                       		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      IsEquip : 1;                                      		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IsProto : 1;                                      		// 0x0048 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      IsExpire : 1;                                     		// 0x0048 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct CombatGame.CombatFrontEnd_ItemAlignment.AlignmentStruct
// 0x0008
struct FAlignmentStruct
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Label;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatFrontEnd_MakeRoom.Makeroom_MissionInfo
// 0x0020
struct FMakeroom_MissionInfo
{
	int                                                IndexID;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                RefID;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                DefaultModeRefID;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                DefaultModeGroupID;                               		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     Label;                                            		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bDisabled : 1;                                    		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CombatGame.CombatFrontEnd_MakeRoom.Makeroom_ModeInfo
// 0x0054
struct FMakeroom_ModeInfo
{
	int                                                IndexID;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                RefID;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                DefaultMapRefID;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                DefaultModeRefID;                                 		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      RandomMode : 1;                                   		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     Label;                                            		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Desc;                                             		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     RandomBGImgPath;                                  		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ButtonBGImgPath;                                  		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      BetaVersion : 1;                                  		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                MapCounts[ 0x3 ];                                 		// 0x0048 (0x000C) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatFrontEnd_MakeRoom.Makeroom_MapInfo
// 0x0068
struct FMakeroom_MapInfo
{
	int                                                IndexID;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                RefID;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                RefModeID;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                SizeType;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     Label;                                            		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     EventDesc;                                        		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SizeDesc;                                         		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MaxPlayerCountDesc;                               		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ButtonBGImgPath;                                  		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SummaryBGImgPath;                                 		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MinimapImgPath;                                   		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIcon_New : 1;                                    		// 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIcon_Event : 1;                                  		// 0x0064 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIcon_Pop : 1;                                    		// 0x0064 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bDisabled : 1;                                    		// 0x0064 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      BetaVersion : 1;                                  		// 0x0064 (0x0004) [0x0000000000000000] [0x00000010] 
};

// ScriptStruct CombatGame.CombatFrontEnd_MatchResult.UIScoreboardData
// 0x0070
struct FUIScoreboardData
{
	unsigned char                                      TeamIndex;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      TotalRanking;                                     		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned char                                      TeamRanking;                                      		// 0x0002 (0x0001) [0x0000000000000000]              
	struct FString                                     LevelIconPath;                                    		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClanIconPath;                                     		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     RankIconPath;                                     		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PlayerName;                                       		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CCardIconPath;                                    		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Score;                                            		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                Kill;                                             		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                Death;                                            		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                Assist;                                           		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                Gold;                                             		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                Exp;                                              		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                GoldPercent;                                      		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ExpPercent;                                       		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< unsigned char >                            BoosterItemList;                                  		// 0x0060 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bMe : 1;                                          		// 0x006C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CombatGame.CombatFrontEnd_MatchRoom.MatchroomButtonStruct
// 0x0024
struct FMatchroomButtonStruct
{
	int                                                TooltipID;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     ToolTip;                                          		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bDefaultSelected : 1;                             		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDefaultDisabled : 1;                             		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bSelected : 1;                                    		// 0x0010 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bDisabled : 1;                                    		// 0x0010 (0x0004) [0x0000000000000000] [0x00000008] 
	struct FString                                     MemberName;                                       		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bUpdateTooltip : 1;                               		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bUpdateSelected : 1;                              		// 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bUpdateDisabled : 1;                              		// 0x0020 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct CombatGame.CombatFrontEnd_MatchRoom.RClickPopupMenuItem
// 0x000C
struct FRClickPopupMenuItem
{
	int                                                NameCode;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                userID;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      Disabled : 1;                                     		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      HostOnly : 1;                                     		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct CombatGame.CombatFrontEnd_MatchRoom.GameOptionUIInfo
// 0x0028
struct FGameOptionUIInfo
{
	class UCombatUIDataProvider_MenuOption*            OptionSetting;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      UIID;                                             		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned long                                      bChangeable : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     TitleText;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      DefaultIndex;                                     		// 0x0018 (0x0001) [0x0000000000000000]              
	TArray< struct FString >                           GameOptionSet;                                    		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatFrontEnd_QuickStart.QuickStart_MissionInfo
// 0x0018
struct FQuickStart_MissionInfo
{
	int                                                RefID;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                DefaultModeRefID;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     Label;                                            		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bDisabled : 1;                                    		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CombatGame.CombatFrontEnd_QuickStart.QuickStart_ModeInfo
// 0x0038
struct FQuickStart_ModeInfo
{
	int                                                RefID;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                DefaultMapRefID;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     Label;                                            		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Desc;                                             		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ButtonBGImgPath;                                  		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MapCounts[ 0x3 ];                                 		// 0x002C (0x000C) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatFrontEnd_QuickStart.QuickStart_MapInfo
// 0x0060
struct FQuickStart_MapInfo
{
	int                                                RefID;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                SizeType;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     Label;                                            		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     EventDesc;                                        		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SizeDesc;                                         		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MaxPlayerCountDesc;                               		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ButtonBGImgPath;                                  		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SummaryBGImgPath;                                 		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MinimapImgPath;                                   		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIcon_New : 1;                                    		// 0x005C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIcon_Event : 1;                                  		// 0x005C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIcon_Pop : 1;                                    		// 0x005C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bDisabled : 1;                                    		// 0x005C (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct CombatGame.CombatFrontEnd_Repurchase.RepurchaseItemStruct
// 0x00A8
struct FRepurchaseItemStruct
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                moneytype;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                IconTag;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                periodSelect;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     ItemName;                                         		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemImg;                                          		// 0x001C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemGrade;                                        		// 0x0028 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     categoryName;                                     		// 0x0034 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemPrice;                                        		// 0x0040 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     OnSale;                                           		// 0x004C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     AddItemPath[ 0x5 ];                               		// 0x0058 (0x003C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Label;                                            		// 0x0094 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  Period;                                           		// 0x00A0 (0x0004) [0x0000000000000000]              
	unsigned long                                      nobuy : 1;                                        		// 0x00A4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      Select : 1;                                       		// 0x00A4 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      iconNew : 1;                                      		// 0x00A4 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      iconHot : 1;                                      		// 0x00A4 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      iconProto : 1;                                    		// 0x00A4 (0x0004) [0x0000000000000000] [0x00000010] 
};

// ScriptStruct CombatGame.CombatStatisticsTransaction.MatchResultData
// 0x002C
struct FMatchResultData
{
	unsigned char                                      RoundCountType;                                   		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      WinnerTeamIndex;                                  		// 0x0001 (0x0001) [0x0000000000000000]              
	int                                                RoundOverPoints[ 0x2 ];                           		// 0x0004 (0x0008) [0x0000000000000000]              
	int                                                BestScorePlayerUserID;                            		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                BestKillPlayerUserID;                             		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                BestAssistPlayerUserID;                           		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                BestMissionScorePlayerUserID;                     		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      bChangeTeam : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< struct FMatchResultPlayerData >            PlayerResultList;                                 		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatStatisticsTransaction.GrainInfoData
// 0x0010
struct FGrainInfoData
{
	int                                                GrainExp;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                GrainMoney;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                GrainClanExp;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                GrainClanTotalExp;                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatStatisticsTransaction.QuestInfoData
// 0x0028
struct FQuestInfoData
{
	int                                                QuestID;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                QuestType;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                QuestCurrentScore;                                		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                QuestCurrentStep;                                 		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned char                                      FirstQuest;                                       		// 0x0010 (0x0001) [0x0000000000000000]              
	unsigned long                                      bReceiveMedalReward : 1;                          		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bReceiveGoldReward : 1;                           		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                RewardGold;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                RewardMedal;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                RewardItem;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                RewardItemCount;                                  		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatFrontEndInfo.SceneInfo
// 0x0018
struct FSceneInfo
{
	unsigned char                                      Scene;                                            		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FName                                       StateName;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
	unsigned char                                      SceneType;                                        		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned char                                      PreScene;                                         		// 0x000D (0x0001) [0x0000000000000000]              
	unsigned char                                      NextScene;                                        		// 0x000E (0x0001) [0x0000000000000000]              
	struct FName                                       CameraName;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatFrontEndPC.InputExpireTimeInfo
// 0x000C
struct FInputExpireTimeInfo
{
	struct FName                                       StateName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              InputExpireTime;                                  		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatFrontEndPC.FrontEndCameraActorInfo
// 0x0010
struct FFrontEndCameraActorInfo
{
	class ACameraActor*                                FEComeraActor;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       CameraTag;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
	float                                              DefaultFOVAngle;                                  		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatGameTableDepot.DataTableInfo
// 0x0010
struct FDataTableInfo
{
	class UClass*                                      RefTableClass;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     XML;                                              		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatGameEngine.SYSTEMSETTING_DATA
// 0x0010
struct FSYSTEMSETTING_DATA
{
	struct FString                                     SectionName;                                      		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                Step;                                             		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatHostageActor.ReplicatedMeshInfo
// 0x001C
struct FReplicatedMeshInfo
{
	class USkeletalMeshComponent*                      MeshComponent;                                    		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FVector                                     NewLoc;                                           		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FRotator                                    NewRot;                                           		// 0x0010 (0x000C) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatHostageActor.HostageTakeHitInfo
// 0x0014
struct FHostageTakeHitInfo
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	class UClass*                                      DamageType;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              HitTime;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatHostageActor.PassiveWheel
// 0x0044
struct FPassiveWheel
{
	float                                              SteerFactor;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       SkelControlName;                                  		// 0x0004 (0x0008) [0x0000000000000000]              
	class USkelControlWheel*                           WheelControl;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              Radius;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FName                                       WheelBoneName;                                    		// 0x0014 (0x0008) [0x0000000000000000]              
	float                                              MaxTravel;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              TravelAdjustment;                                 		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned long                                      ParticleInitialised : 1;                          		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	class UClass*                                      WheelPSCClass;                                    		// 0x0028 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             ParticleTemplate;                                 		// 0x002C (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    WheelParticleComp;                                		// 0x0030 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       SlipParticleParamName;                            		// 0x0034 (0x0008) [0x0000000000000000]              
	struct FName                                       TraceStartSocket;                                 		// 0x003C (0x0008) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatHUD_IFFContainer.IFFObjectData
// 0x0008
struct FIFFObjectData
{
	unsigned long                                      bUsing : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class UCombatHUD_IFFObject*                        IFFObject;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatHUD_KillMark.KillMarkStringStruct
// 0x0010
struct FKillMarkStringStruct
{
	int                                                KMStringID;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     KMName;                                           		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatOccupiedAreaVolume.OccupyDataType
// 0x0008
struct FOccupyDataType
{
	unsigned char                                      OccupyState;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                OccupyingTeamIndex;                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatHUD_RadioMessage.LableDataType
// 0x0010
struct FLableDataType
{
	struct FString                                     ASBindingName;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ASLableIndex;                                     		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatHUD_SelectPosition.PositionStruct
// 0x001C
struct FPositionStruct
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     KeyValue;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Position;                                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatHUD_SelectPosition.SkillInfoStruct
// 0x0024
struct FSkillInfoStruct
{
	struct FString                                     ImageURL;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Name;                                             		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Desc;                                             		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatHUD_SelectPosition.PositionInfoStruct
// 0x0024
struct FPositionInfoStruct
{
	struct FString                                     PositionName;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PositionDesc;                                     		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSkillInfoStruct >                  SkillInfolist;                                    		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatHUD_TacticalMapAndScoreboard.IconRawData
// 0x0018
struct FIconRawData
{
	class UGFxObject*                                  Icon;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     FrameString;                                      		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                FrameInt;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUsed : 1;                                        		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CombatGame.CombatHUD_TacticalMapAndScoreboard.NameplateRawData
// 0x0024(0x003C - 0x0018)
struct FNameplateRawData : FIconRawData
{
	class UGFxObject*                                  ChampionshipObserverPlayerNameTF;                 		// 0x0018 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ChampionshipObserverIndexTF;                      		// 0x001C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  FriendlyPlayerNameTF;                             		// 0x0020 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ViewTargetHPMC;                                   		// 0x0024 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  VCHPMC;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  PMHPMC;                                           		// 0x002C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ViewTargetHP_GaugeMC;                             		// 0x0030 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  VCHPMC_GaugeMC;                                   		// 0x0034 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  PMHPMC_GaugeMC;                                   		// 0x0038 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatHUD_TacticalMapAndScoreboard.NameplateData
// 0x0024
struct FNameplateData
{
	TArray< struct FNameplateRawData >                 Icons;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LinkageName;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     BaseInstanceName;                                 		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatHUD_TacticalMapAndScoreboard.IconData
// 0x0024
struct FIconData
{
	TArray< struct FIconRawData >                      Icons;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LinkageName;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     BaseInstanceName;                                 		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatHUD_WarmUp.WarmUpInfo
// 0x0010
struct FWarmUpInfo
{
	struct FString                                     stUserName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bComplete : 1;                                    		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CombatGame.CombatInGameResourcePool.LandingZone
// 0x0008
struct FLandingZone
{
	class ACombatPlayerStart*                          Anchor;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UDecalComponent*                             LandingZoneDecal;                                 		// 0x0004 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
};

// ScriptStruct CombatGame.CombatInGameResourcePool.AnimSetCallbackData
// 0x0019
struct FAnimSetCallbackData
{
	class UObject*                                     CallbackOwner;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       CallBackFunctionName;                             		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     AnimSetName;                                      		// 0x000C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      Gender;                                           		// 0x0018 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatItemFXBase.SItemFX
// 0x0008
struct FSItemFX
{
	class UParticleSystem*                             PS_FX;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystemComponent*                    PSC_FX;                                           		// 0x0004 (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
};

// ScriptStruct CombatGame.CombatLCTFFlagActor.SkeletalMeshMaterial
// 0x0008
struct FSkeletalMeshMaterial
{
	int                                                MaterialIndex;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInterface*                          Material;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatLCTFGame.CarriedObjectBounsInfo
// 0x0008
struct FCarriedObjectBounsInfo
{
	float                                              RankExp;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              InGameCR;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatLCTFModePRI.LimitAddScoreCountStruct
// 0x0005
struct FLimitAddScoreCountStruct
{
	int                                                AddScoreCount;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      SpawnID;                                          		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatLog.PlayInfo
// 0x0014
struct FPlayInfo
{
	int                                                userID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Kill;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Death;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Assist;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Score;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatLog.RoundInfo
// 0x0024
struct FRoundInfo
{
	int                                                Round;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Winner;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                PlayTime;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	TArray< struct FPlayInfo >                         VCTeamInfo;                                       		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FPlayInfo >                         PMTeamInfo;                                       		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatLog.FireCountingInfo
// 0x0010
struct FFireCountingInfo
{
	int                                                userID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Round;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                WeaponID;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                FireCount;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatLog.HitCountingInfo
// 0x0020
struct FHitCountingInfo
{
	int                                                HitIndex;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                userID;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Round;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                WeaponID;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned char                                      HitPart;                                          		// 0x0010 (0x0001) [0x0000000000000000]              
	int                                                Distance;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                Damage;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      bKill : 1;                                        		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CombatGame.CombatLog.SavedTeamInfo
// 0x0010
struct FSavedTeamInfo
{
	int                                                TeamIndex;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     TeamName;                                         		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatLog.SavedUserInfo
// 0x0010
struct FSavedUserInfo
{
	int                                                Uid;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     UserName;                                         		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatLog.SavedWeaponInfo
// 0x0010
struct FSavedWeaponInfo
{
	int                                                WeaponIndex;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     WeaponName;                                       		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatLog.SavedHitPartInfo
// 0x0010
struct FSavedHitPartInfo
{
	unsigned char                                      HitPart;                                          		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     HitPartName;                                      		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatLogData.WeaponFireData
// 0x0014
struct FWeaponFireData
{
	int                                                WeaponID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     FireLocation_Transition;                          		// 0x0004 (0x000C) [0x0000000000000000]              
	int                                                DBWriterID;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatObjectPool.ObjectCacheDatum
// 0x001C
struct FObjectCacheDatum
{
	struct FString                                     ObjectName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      ObjectClass;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	class UObject*                                     ObjectData;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned char                                      ObjectType;                                       		// 0x0014 (0x0001) [0x0000000000000000]              
	int                                                ReferenceCounter;                                 		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatObjectPool.MergedMeshCacheDatum
// 0x0019
struct FMergedMeshCacheDatum
{
	struct Fdword                                      ObjectID;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FString >                           MeshPartName;                                     		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	class USkeletalMesh*                               MergedMesh;                                       		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ReferenceCounter;                                 		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      MeshGroupLabel;                                   		// 0x0018 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatObjectPool.MergedMeshList
// 0x000C
struct FMergedMeshList
{
	TArray< struct FMergedMeshCacheDatum >             MeshList;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatOccupiedAreaVolume.OccupiedTeamMemberInfo
// 0x0010
struct FOccupiedTeamMemberInfo
{
	int                                                TeamIndex;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< class APawn* >                             MemberPawn;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatOccupiedAreaVolume.FlagParticleParam
// 0x0014
struct FFlagParticleParam
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Vector;                                           		// 0x0008 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatPawn_TrophyTurret.STargetExplodeLocationInfo
// 0x0010
struct FSTargetExplodeLocationInfo
{
	unsigned char                                      btFlag;                                           		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatSeizeFlagActor.SkeletalMeshMaterialInfo
// 0x0008
struct FSkeletalMeshMaterialInfo
{
	int                                                MaterialIndex;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInterface*                          Material;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatServerRewardData.DamageStorage
// 0x0008
struct FDamageStorage
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              PendingClearTime;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatServerRewardData.DamagePerPlayer
// 0x0014
struct FDamagePerPlayer
{
	class ACombatPC*                                   Attacker;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FDamageStorage >                    DamageList;                                       		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	float                                              LastHitTime;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatSkelCtrl_Recoil.RecoilProfileData
// 0x0078
struct FRecoilProfileData
{
	struct FName                                       ProfileName;                                      		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FRecoilDef                                  Data;                                             		// 0x0008 (0x0070) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatSkelCtrl_WeaponLag.TranslationPack
// 0x0018
struct FTranslationPack
{
	struct FString                                     ProfileName;                                      		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FVector                                     Translation;                                      		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatSkelCtrl_WeaponLag.RotationPack
// 0x0018
struct FRotationPack
{
	struct FString                                     ProfileName;                                      		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FRotator                                    Rotation;                                         		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatSkillSoundGroup.SkillTeamAnnounceSound
// 0x0010
struct FSkillTeamAnnounceSound
{
	unsigned char                                      Skilltype;                                        		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                SkillUseTeamIndex;                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   OurTeamSound;                                     		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   EnemyTeamSound;                                   		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatSquadAI.AlternateRoute
// 0x000C
struct FAlternateRoute
{
	TArray< class ANavigationPoint* >                  RouteCache;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatStatisticsTransaction.MatchResultMapInfoData
// 0x0010
struct FMatchResultMapInfoData
{
	int                                                LastMissionRefID;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                LastModeGroupRefID;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                LastModeRefID;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                LastMapRefID;                                     		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatStatStorage.ExternalCallType
// 0x0010
struct FExternalCallType
{
	int                                                PublicID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                PersonalID;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                GameSetID;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Value;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatStatStorage.PlayerStatInfo
// 0x0008
struct FPlayerStatInfo
{
	int                                                DBID;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Value;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatStatStorage.StatSaveCondition
// 0x0004
struct FStatSaveCondition
{
	unsigned long                                      bLoseStat : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDesertionStat : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bOtherStat : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct CombatGame.CombatTrigger_Bomb.BombIndicatorInfo
// 0x002C
struct FBombIndicatorInfo
{
	struct FLinearColor                                TicTacLight[ 0x2 ];                               		// 0x0000 (0x0020) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   TictacSound;                                      		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxCycleTime;                                     		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinCycleTime;                                     		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatVoiceBase.NotifySoundInfo
// 0x000C
struct FNotifySoundInfo
{
	struct FName                                       NotifyName;                                       		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   NotifySound;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatVoiceBase.RadioDisplayInfo
// 0x0008
struct FRadioDisplayInfo
{
	class USoundCue*                                   Sound;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                LocalizedStrID;                                   		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatWeapon.RecoilFactor
// 0x0044
struct FRecoilFactor
{
	int                                                VerticalRecoil_Max;                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                VerticalRecoil_MinVariable;                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              VerticalRecoil_RefireAdded;                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                VerticalRecoil_InstantVariableMax;                		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                HorizonRecoil_Max;                                		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                HorizonRecoil_MinVariable;                        		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HorizonRecoil_RefireAdded;                        		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                HorizonRecoil_InstantVariableMax;                 		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                VerticalRecoil_RefireConstAdded;                  		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                HorizonRecoil_RefireConstAdded;                   		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Deviation_Start;                                  		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Deviation_Max;                                    		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Deviation_Added;                                  		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Deviation_RefireAdded;                            		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Deviation_RefireMax;                              		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                AddedPitchVerticalRecoilOffset;                   		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                AddedPitchVerticalRecoilMax;                      		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatWeapon.sDamageAdjustment
// 0x0008
struct FsDamageAdjustment
{
	float                                              DamageRate;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              penetrationRate;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatWeapon_Shotgun_Base.ActorHitInfo
// 0x005C
struct FActorHitInfo
{
	class AActor*                                      HitActor;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      NumHits;                                          		// 0x0004 (0x0001) [0x0000000000000000]              
	struct FImpactInfo                                 Impact;                                           		// 0x0008 (0x0054) [0x0000000000080000]              ( CPF_Component )
};

// ScriptStruct CombatGame.CombatWeaponBase_Melee.MeleeAttackFactor
// 0x002C
struct FMeleeAttackFactor
{
	unsigned char                                      UnknownData00[ 0x2 ];                             		// 0x0000 (0x0002) UNKNOWN PROPERTY: WordProperty CombatGame.CombatWeaponBase_Melee.MeleeAttackFactor.MeleeDamage_Max
	float                                              MeleeRange;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MeleeHitMomemtum;                                 		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MeleeHitMomemtumZ;                                		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MeleeHitedMomemtum;                               		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      AutoFire : 1;                                     		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bArcFire : 1;                                     		// 0x0014 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	TArray< float >                                    ArcSectAnimHitTimes;                              		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      ArcBrandishDir;                                   		// 0x0024 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              ArcAngleDegree;                                   		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatWeaponRISBase_Scope.ScopeMaterialVectorParameter
// 0x0018
struct FScopeMaterialVectorParameter
{
	struct FName                                       ParameterName;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                ParameterValue;                                   		// 0x0008 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.GamePlayEvent_Action.ActionTableDataType
// 0x001C
struct FActionTableDataType
{
	struct FName                                       Action;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       Event;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FString                                     CodeName;                                         		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.GamePlayEvent_Kill.KillTableDataType
// 0x0016
struct FKillTableDataType
{
	struct FName                                       State;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     CodeName;                                         		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      ContinueCount;                                    		// 0x0014 (0x0001) [0x0000000000000000]              
	unsigned char                                      Hit;                                              		// 0x0015 (0x0001) [0x0000000000000000]              
};

// ScriptStruct CombatGame.GamePlayEvent_Kill.TableInfoContainer
// 0x0044
struct FTableInfoContainer
{
	unsigned char                                      MaxContinueCount;                                 		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned long                                      bCheckHitPart : 1;                                		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x0008 (0x003C) UNKNOWN PROPERTY: MapProperty CombatGame.GamePlayEvent_Kill.TableInfoContainer.TableInfo
};

// ScriptStruct CombatGame.OnlineSubsystemCombatDedicatedSvr.PresetItemInfo
// 0x0008
struct FPresetItemInfo
{
	unsigned char                                      presetIdx;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      SlotIdx;                                          		// 0x0001 (0x0001) [0x0000000000000000]              
	int                                                ItemID;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.OnlineSubsystemCombatDedicatedSvr.AvatarItemInfo
// 0x0004
struct FAvatarItemInfo
{
	int                                                ItemID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.PresetManager.AmmorInfo
// 0x000C
struct FAmmorInfo
{
	unsigned char                                      ItemGrade;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                AP;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                APForExplosion;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.PresetManager.PresetData
// 0x0014
struct FPresetData
{
	int                                                ItemID;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UCombatDataTableRefItem*                     RefItem;                                          		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     ScriptFileName;                                   		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.USSWeaponAttachment.USSMaterialImpactEffect
// 0x0008
struct FUSSMaterialImpactEffect
{
	class USoundCue*                                   Sound;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             ParticleTemplate;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif