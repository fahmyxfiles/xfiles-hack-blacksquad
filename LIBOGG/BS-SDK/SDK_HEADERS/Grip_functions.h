/*
#############################################################################################
# BlackSquad (1.0.10246.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: Grip_functions.h
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
# Functions
# ========================================================================================= #
*/

// Function Grip.GripActionFramework.GetStatus
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UGripAFActionHandle*     Handle                         ( CPF_Parm )

unsigned char UGripActionFramework::GetStatus ( class UGripAFActionHandle* Handle )
{
	static UFunction* pFnGetStatus = NULL;

	if ( ! pFnGetStatus )
		pFnGetStatus = (UFunction*) UObject::GObjObjects()->Data[ 40693 ];

	UGripActionFramework_execGetStatus_Parms GetStatus_Parms;
	GetStatus_Parms.Handle = Handle;

	pFnGetStatus->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetStatus, &GetStatus_Parms, NULL );

	pFnGetStatus->FunctionFlags |= 0x400;

	return GetStatus_Parms.ReturnValue;
}

// Function Grip.GripActionFramework.Execute
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UGripAFActionHandle*     Action                         ( CPF_Parm )

bool UGripActionFramework::Execute ( class UGripAFActionHandle* Action )
{
	static UFunction* pFnExecute = NULL;

	if ( ! pFnExecute )
		pFnExecute = (UFunction*) UObject::GObjObjects()->Data[ 40690 ];

	UGripActionFramework_execExecute_Parms Execute_Parms;
	Execute_Parms.Action = Action;

	pFnExecute->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnExecute, &Execute_Parms, NULL );

	pFnExecute->FunctionFlags |= 0x400;

	return Execute_Parms.ReturnValue;
}

// Function Grip.GripBlackboard.FlagStatesAsUsed
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGripBlackboard::FlagStatesAsUsed ( )
{
	static UFunction* pFnFlagStatesAsUsed = NULL;

	if ( ! pFnFlagStatesAsUsed )
		pFnFlagStatesAsUsed = (UFunction*) UObject::GObjObjects()->Data[ 40701 ];

	UGripBlackboard_execFlagStatesAsUsed_Parms FlagStatesAsUsed_Parms;

	pFnFlagStatesAsUsed->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFlagStatesAsUsed, &FlagStatesAsUsed_Parms, NULL );

	pFnFlagStatesAsUsed->FunctionFlags |= 0x400;
}

// Function Grip.GripBlackboard.ContainState
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 StateName                      ( CPF_Parm | CPF_NeedCtorLink )

bool UGripBlackboard::ContainState ( struct FString StateName )
{
	static UFunction* pFnContainState = NULL;

	if ( ! pFnContainState )
		pFnContainState = (UFunction*) UObject::GObjObjects()->Data[ 40698 ];

	UGripBlackboard_execContainState_Parms ContainState_Parms;
	memcpy ( &ContainState_Parms.StateName, &StateName, 0xC );

	pFnContainState->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnContainState, &ContainState_Parms, NULL );

	pFnContainState->FunctionFlags |= 0x400;

	return ContainState_Parms.ReturnValue;
}

// Function Grip.GripBTNode.GetFamily
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char UGripBTNode::GetFamily ( )
{
	static UFunction* pFnGetFamily = NULL;

	if ( ! pFnGetFamily )
		pFnGetFamily = (UFunction*) UObject::GObjObjects()->Data[ 40726 ];

	UGripBTNode_execGetFamily_Parms GetFamily_Parms;

	this->ProcessEvent ( pFnGetFamily, &GetFamily_Parms, NULL );

	return GetFamily_Parms.ReturnValue;
}

// Function Grip.GripBTAnd.GetFamily
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char UGripBTAnd::GetFamily ( )
{
	static UFunction* pFnGetFamily = NULL;

	if ( ! pFnGetFamily )
		pFnGetFamily = (UFunction*) UObject::GObjObjects()->Data[ 40728 ];

	UGripBTAnd_execGetFamily_Parms GetFamily_Parms;

	this->ProcessEvent ( pFnGetFamily, &GetFamily_Parms, NULL );

	return GetFamily_Parms.ReturnValue;
}

// Function Grip.GripBTBooleanCondition.GetFamily
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char UGripBTBooleanCondition::GetFamily ( )
{
	static UFunction* pFnGetFamily = NULL;

	if ( ! pFnGetFamily )
		pFnGetFamily = (UFunction*) UObject::GObjObjects()->Data[ 40731 ];

	UGripBTBooleanCondition_execGetFamily_Parms GetFamily_Parms;

	this->ProcessEvent ( pFnGetFamily, &GetFamily_Parms, NULL );

	return GetFamily_Parms.ReturnValue;
}

// Function Grip.GripBTCooldown.GetFamily
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char UGripBTCooldown::GetFamily ( )
{
	static UFunction* pFnGetFamily = NULL;

	if ( ! pFnGetFamily )
		pFnGetFamily = (UFunction*) UObject::GObjObjects()->Data[ 40736 ];

	UGripBTCooldown_execGetFamily_Parms GetFamily_Parms;

	this->ProcessEvent ( pFnGetFamily, &GetFamily_Parms, NULL );

	return GetFamily_Parms.ReturnValue;
}

// Function Grip.GripBTDynamicPriority.GetFamily
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char UGripBTDynamicPriority::GetFamily ( )
{
	static UFunction* pFnGetFamily = NULL;

	if ( ! pFnGetFamily )
		pFnGetFamily = (UFunction*) UObject::GObjObjects()->Data[ 40753 ];

	UGripBTDynamicPriority_execGetFamily_Parms GetFamily_Parms;

	this->ProcessEvent ( pFnGetFamily, &GetFamily_Parms, NULL );

	return GetFamily_Parms.ReturnValue;
}

// Function Grip.GripBTFloatCondition.GetFamily
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char UGripBTFloatCondition::GetFamily ( )
{
	static UFunction* pFnGetFamily = NULL;

	if ( ! pFnGetFamily )
		pFnGetFamily = (UFunction*) UObject::GObjObjects()->Data[ 40761 ];

	UGripBTFloatCondition_execGetFamily_Parms GetFamily_Parms;

	this->ProcessEvent ( pFnGetFamily, &GetFamily_Parms, NULL );

	return GetFamily_Parms.ReturnValue;
}

// Function Grip.GripBTLoop.GetFamily
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char UGripBTLoop::GetFamily ( )
{
	static UFunction* pFnGetFamily = NULL;

	if ( ! pFnGetFamily )
		pFnGetFamily = (UFunction*) UObject::GObjObjects()->Data[ 40771 ];

	UGripBTLoop_execGetFamily_Parms GetFamily_Parms;

	this->ProcessEvent ( pFnGetFamily, &GetFamily_Parms, NULL );

	return GetFamily_Parms.ReturnValue;
}

// Function Grip.GripBTLoop.SetIteration
// [0x00020002] 
// Parameters infos:
// int                            iter                           ( CPF_Parm )

void UGripBTLoop::SetIteration ( int iter )
{
	static UFunction* pFnSetIteration = NULL;

	if ( ! pFnSetIteration )
		pFnSetIteration = (UFunction*) UObject::GObjObjects()->Data[ 40769 ];

	UGripBTLoop_execSetIteration_Parms SetIteration_Parms;
	SetIteration_Parms.iter = iter;

	this->ProcessEvent ( pFnSetIteration, &SetIteration_Parms, NULL );
}

// Function Grip.GripBTNonInterruptibleSequence.GetFamily
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char UGripBTNonInterruptibleSequence::GetFamily ( )
{
	static UFunction* pFnGetFamily = NULL;

	if ( ! pFnGetFamily )
		pFnGetFamily = (UFunction*) UObject::GObjObjects()->Data[ 40773 ];

	UGripBTNonInterruptibleSequence_execGetFamily_Parms GetFamily_Parms;

	this->ProcessEvent ( pFnGetFamily, &GetFamily_Parms, NULL );

	return GetFamily_Parms.ReturnValue;
}

// Function Grip.GripBTNumericCondition.GetFamily
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char UGripBTNumericCondition::GetFamily ( )
{
	static UFunction* pFnGetFamily = NULL;

	if ( ! pFnGetFamily )
		pFnGetFamily = (UFunction*) UObject::GObjObjects()->Data[ 40741 ];

	UGripBTNumericCondition_execGetFamily_Parms GetFamily_Parms;

	this->ProcessEvent ( pFnGetFamily, &GetFamily_Parms, NULL );

	return GetFamily_Parms.ReturnValue;
}

// Function Grip.GripBTCutoff.GetFamily
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char UGripBTCutoff::GetFamily ( )
{
	static UFunction* pFnGetFamily = NULL;

	if ( ! pFnGetFamily )
		pFnGetFamily = (UFunction*) UObject::GObjObjects()->Data[ 40746 ];

	UGripBTCutoff_execGetFamily_Parms GetFamily_Parms;

	this->ProcessEvent ( pFnGetFamily, &GetFamily_Parms, NULL );

	return GetFamily_Parms.ReturnValue;
}

// Function Grip.GripBTCutoff.SetCutoff
// [0x00020002] 
// Parameters infos:
// int                            newCutoff                      ( CPF_Parm )

void UGripBTCutoff::SetCutoff ( int newCutoff )
{
	static UFunction* pFnSetCutoff = NULL;

	if ( ! pFnSetCutoff )
		pFnSetCutoff = (UFunction*) UObject::GObjObjects()->Data[ 40744 ];

	UGripBTCutoff_execSetCutoff_Parms SetCutoff_Parms;
	SetCutoff_Parms.newCutoff = newCutoff;

	this->ProcessEvent ( pFnSetCutoff, &SetCutoff_Parms, NULL );
}

// Function Grip.GripBTOr.GetFamily
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char UGripBTOr::GetFamily ( )
{
	static UFunction* pFnGetFamily = NULL;

	if ( ! pFnGetFamily )
		pFnGetFamily = (UFunction*) UObject::GObjObjects()->Data[ 40775 ];

	UGripBTOr_execGetFamily_Parms GetFamily_Parms;

	this->ProcessEvent ( pFnGetFamily, &GetFamily_Parms, NULL );

	return GetFamily_Parms.ReturnValue;
}

// Function Grip.GripBTParallel.GetFamily
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char UGripBTParallel::GetFamily ( )
{
	static UFunction* pFnGetFamily = NULL;

	if ( ! pFnGetFamily )
		pFnGetFamily = (UFunction*) UObject::GObjObjects()->Data[ 40777 ];

	UGripBTParallel_execGetFamily_Parms GetFamily_Parms;

	this->ProcessEvent ( pFnGetFamily, &GetFamily_Parms, NULL );

	return GetFamily_Parms.ReturnValue;
}

// Function Grip.GripBTPriority.GetFamily
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char UGripBTPriority::GetFamily ( )
{
	static UFunction* pFnGetFamily = NULL;

	if ( ! pFnGetFamily )
		pFnGetFamily = (UFunction*) UObject::GObjObjects()->Data[ 40779 ];

	UGripBTPriority_execGetFamily_Parms GetFamily_Parms;

	this->ProcessEvent ( pFnGetFamily, &GetFamily_Parms, NULL );

	return GetFamily_Parms.ReturnValue;
}

// Function Grip.GripBTPushForFinishOverride.GetFamily
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char UGripBTPushForFinishOverride::GetFamily ( )
{
	static UFunction* pFnGetFamily = NULL;

	if ( ! pFnGetFamily )
		pFnGetFamily = (UFunction*) UObject::GObjObjects()->Data[ 40781 ];

	UGripBTPushForFinishOverride_execGetFamily_Parms GetFamily_Parms;

	this->ProcessEvent ( pFnGetFamily, &GetFamily_Parms, NULL );

	return GetFamily_Parms.ReturnValue;
}

// Function Grip.GripBTRandom.GetFamily
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char UGripBTRandom::GetFamily ( )
{
	static UFunction* pFnGetFamily = NULL;

	if ( ! pFnGetFamily )
		pFnGetFamily = (UFunction*) UObject::GObjObjects()->Data[ 40785 ];

	UGripBTRandom_execGetFamily_Parms GetFamily_Parms;

	this->ProcessEvent ( pFnGetFamily, &GetFamily_Parms, NULL );

	return GetFamily_Parms.ReturnValue;
}

// Function Grip.GripBTScriptNode.ExecutePass
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UGripBTInterface*        BTInterface                    ( CPF_Parm )
// unsigned long                  FirstExecution                 ( CPF_Parm )
// unsigned long                  PushToFinish                   ( CPF_Parm )

unsigned char UGripBTScriptNode::eventExecutePass ( class UGripBTInterface* BTInterface, unsigned long FirstExecution, unsigned long PushToFinish )
{
	static UFunction* pFnExecutePass = NULL;

	if ( ! pFnExecutePass )
		pFnExecutePass = (UFunction*) UObject::GObjObjects()->Data[ 40798 ];

	UGripBTScriptNode_eventExecutePass_Parms ExecutePass_Parms;
	ExecutePass_Parms.BTInterface = BTInterface;
	ExecutePass_Parms.FirstExecution = FirstExecution;
	ExecutePass_Parms.PushToFinish = PushToFinish;

	this->ProcessEvent ( pFnExecutePass, &ExecutePass_Parms, NULL );

	return ExecutePass_Parms.ReturnValue;
}

// Function Grip.GripBTScriptNode.GetNodeTitle
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UGripBTScriptNode::eventGetNodeTitle ( )
{
	static UFunction* pFnGetNodeTitle = NULL;

	if ( ! pFnGetNodeTitle )
		pFnGetNodeTitle = (UFunction*) UObject::GObjObjects()->Data[ 40796 ];

	UGripBTScriptNode_eventGetNodeTitle_Parms GetNodeTitle_Parms;

	this->ProcessEvent ( pFnGetNodeTitle, &GetNodeTitle_Parms, NULL );

	return GetNodeTitle_Parms.ReturnValue;
}

// Function Grip.GripBTScriptNode.ComputeCondition
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UGripBTInterface*        BTInterface                    ( CPF_Parm )

bool UGripBTScriptNode::ComputeCondition ( class UGripBTInterface* BTInterface )
{
	static UFunction* pFnComputeCondition = NULL;

	if ( ! pFnComputeCondition )
		pFnComputeCondition = (UFunction*) UObject::GObjObjects()->Data[ 40793 ];

	UGripBTScriptNode_execComputeCondition_Parms ComputeCondition_Parms;
	ComputeCondition_Parms.BTInterface = BTInterface;

	this->ProcessEvent ( pFnComputeCondition, &ComputeCondition_Parms, NULL );

	return ComputeCondition_Parms.ReturnValue;
}

// Function Grip.GripBTScriptNode.FlagUsedBBMembers
// [0x00020000] 
// Parameters infos:
// class UGripBlackboard*         Blackboard                     ( CPF_Parm )

void UGripBTScriptNode::FlagUsedBBMembers ( class UGripBlackboard* Blackboard )
{
	static UFunction* pFnFlagUsedBBMembers = NULL;

	if ( ! pFnFlagUsedBBMembers )
		pFnFlagUsedBBMembers = (UFunction*) UObject::GObjObjects()->Data[ 40791 ];

	UGripBTScriptNode_execFlagUsedBBMembers_Parms FlagUsedBBMembers_Parms;
	FlagUsedBBMembers_Parms.Blackboard = Blackboard;

	this->ProcessEvent ( pFnFlagUsedBBMembers, &FlagUsedBBMembers_Parms, NULL );
}

// Function Grip.GripBTScriptNode.Initialize
// [0x00020000] 
// Parameters infos:

void UGripBTScriptNode::Initialize ( )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->Data[ 40790 ];

	UGripBTScriptNode_execInitialize_Parms Initialize_Parms;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );
}

// Function Grip.GripBTScriptBehavior.ExecutePass
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UGripBTInterface*        BTInterface                    ( CPF_Parm )
// unsigned long                  FirstExecution                 ( CPF_Parm )
// unsigned long                  PushToFinish                   ( CPF_Parm )

unsigned char UGripBTScriptBehavior::eventExecutePass ( class UGripBTInterface* BTInterface, unsigned long FirstExecution, unsigned long PushToFinish )
{
	static UFunction* pFnExecutePass = NULL;

	if ( ! pFnExecutePass )
		pFnExecutePass = (UFunction*) UObject::GObjObjects()->Data[ 40815 ];

	UGripBTScriptBehavior_eventExecutePass_Parms ExecutePass_Parms;
	ExecutePass_Parms.BTInterface = BTInterface;
	ExecutePass_Parms.FirstExecution = FirstExecution;
	ExecutePass_Parms.PushToFinish = PushToFinish;

	this->ProcessEvent ( pFnExecutePass, &ExecutePass_Parms, NULL );

	return ExecutePass_Parms.ReturnValue;
}

// Function Grip.GripBTScriptBehavior.ExecutePost
// [0x00020000] 
// Parameters infos:
// class UGripBTInterface*        BTInterface                    ( CPF_Parm )

void UGripBTScriptBehavior::ExecutePost ( class UGripBTInterface* BTInterface )
{
	static UFunction* pFnExecutePost = NULL;

	if ( ! pFnExecutePost )
		pFnExecutePost = (UFunction*) UObject::GObjObjects()->Data[ 40813 ];

	UGripBTScriptBehavior_execExecutePost_Parms ExecutePost_Parms;
	ExecutePost_Parms.BTInterface = BTInterface;

	this->ProcessEvent ( pFnExecutePost, &ExecutePost_Parms, NULL );
}

// Function Grip.GripBTScriptBehavior.Execute
// [0x00020000] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UGripBTInterface*        BTInterface                    ( CPF_Parm )
// unsigned long                  PushToFinish                   ( CPF_Parm )

unsigned char UGripBTScriptBehavior::Execute ( class UGripBTInterface* BTInterface, unsigned long PushToFinish )
{
	static UFunction* pFnExecute = NULL;

	if ( ! pFnExecute )
		pFnExecute = (UFunction*) UObject::GObjObjects()->Data[ 40809 ];

	UGripBTScriptBehavior_execExecute_Parms Execute_Parms;
	Execute_Parms.BTInterface = BTInterface;
	Execute_Parms.PushToFinish = PushToFinish;

	this->ProcessEvent ( pFnExecute, &Execute_Parms, NULL );

	return Execute_Parms.ReturnValue;
}

// Function Grip.GripBTScriptBehavior.ExecutePre
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UGripBTInterface*        BTInterface                    ( CPF_Parm )

bool UGripBTScriptBehavior::ExecutePre ( class UGripBTInterface* BTInterface )
{
	static UFunction* pFnExecutePre = NULL;

	if ( ! pFnExecutePre )
		pFnExecutePre = (UFunction*) UObject::GObjObjects()->Data[ 40806 ];

	UGripBTScriptBehavior_execExecutePre_Parms ExecutePre_Parms;
	ExecutePre_Parms.BTInterface = BTInterface;

	this->ProcessEvent ( pFnExecutePre, &ExecutePre_Parms, NULL );

	return ExecutePre_Parms.ReturnValue;
}

// Function Grip.GripBTScriptBehavior.ComputeCondition
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UGripBTInterface*        BTInterface                    ( CPF_Parm )

bool UGripBTScriptBehavior::ComputeCondition ( class UGripBTInterface* BTInterface )
{
	static UFunction* pFnComputeCondition = NULL;

	if ( ! pFnComputeCondition )
		pFnComputeCondition = (UFunction*) UObject::GObjObjects()->Data[ 40803 ];

	UGripBTScriptBehavior_execComputeCondition_Parms ComputeCondition_Parms;
	ComputeCondition_Parms.BTInterface = BTInterface;

	this->ProcessEvent ( pFnComputeCondition, &ComputeCondition_Parms, NULL );

	return ComputeCondition_Parms.ReturnValue;
}

// Function Grip.GripBTScriptCondition.GetFamily
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char UGripBTScriptCondition::GetFamily ( )
{
	static UFunction* pFnGetFamily = NULL;

	if ( ! pFnGetFamily )
		pFnGetFamily = (UFunction*) UObject::GObjObjects()->Data[ 40825 ];

	UGripBTScriptCondition_execGetFamily_Parms GetFamily_Parms;

	this->ProcessEvent ( pFnGetFamily, &GetFamily_Parms, NULL );

	return GetFamily_Parms.ReturnValue;
}

// Function Grip.GripBTScriptCondition.ComputeCondition
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UGripBTInterface*        BTInterface                    ( CPF_Parm )

bool UGripBTScriptCondition::ComputeCondition ( class UGripBTInterface* BTInterface )
{
	static UFunction* pFnComputeCondition = NULL;

	if ( ! pFnComputeCondition )
		pFnComputeCondition = (UFunction*) UObject::GObjObjects()->Data[ 40822 ];

	UGripBTScriptCondition_execComputeCondition_Parms ComputeCondition_Parms;
	ComputeCondition_Parms.BTInterface = BTInterface;

	this->ProcessEvent ( pFnComputeCondition, &ComputeCondition_Parms, NULL );

	return ComputeCondition_Parms.ReturnValue;
}

// Function Grip.GripBTSequence.GetFamily
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char UGripBTSequence::GetFamily ( )
{
	static UFunction* pFnGetFamily = NULL;

	if ( ! pFnGetFamily )
		pFnGetFamily = (UFunction*) UObject::GObjObjects()->Data[ 40837 ];

	UGripBTSequence_execGetFamily_Parms GetFamily_Parms;

	this->ProcessEvent ( pFnGetFamily, &GetFamily_Parms, NULL );

	return GetFamily_Parms.ReturnValue;
}

// Function Grip.GripBTSequenceOr.GetFamily
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char UGripBTSequenceOr::GetFamily ( )
{
	static UFunction* pFnGetFamily = NULL;

	if ( ! pFnGetFamily )
		pFnGetFamily = (UFunction*) UObject::GObjObjects()->Data[ 40839 ];

	UGripBTSequenceOr_execGetFamily_Parms GetFamily_Parms;

	this->ProcessEvent ( pFnGetFamily, &GetFamily_Parms, NULL );

	return GetFamily_Parms.ReturnValue;
}

// Function Grip.GripBTTimer.GetFamily
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char UGripBTTimer::GetFamily ( )
{
	static UFunction* pFnGetFamily = NULL;

	if ( ! pFnGetFamily )
		pFnGetFamily = (UFunction*) UObject::GObjObjects()->Data[ 40845 ];

	UGripBTTimer_execGetFamily_Parms GetFamily_Parms;

	this->ProcessEvent ( pFnGetFamily, &GetFamily_Parms, NULL );

	return GetFamily_Parms.ReturnValue;
}

// Function Grip.GripBTScriptNodeCache.CacheAllConditions
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UGripBTInterface*        BTInterface                    ( CPF_Parm )

void UGripBTScriptNodeCache::eventCacheAllConditions ( class UGripBTInterface* BTInterface )
{
	static UFunction* pFnCacheAllConditions = NULL;

	if ( ! pFnCacheAllConditions )
		pFnCacheAllConditions = (UFunction*) UObject::GObjObjects()->Data[ 40834 ];

	UGripBTScriptNodeCache_eventCacheAllConditions_Parms CacheAllConditions_Parms;
	CacheAllConditions_Parms.BTInterface = BTInterface;

	this->ProcessEvent ( pFnCacheAllConditions, &CacheAllConditions_Parms, NULL );
}

// Function Grip.GripBTScriptNodeCache.SurveyUsedBBMembers
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UGripBlackboard*         Blackboard                     ( CPF_Parm )

void UGripBTScriptNodeCache::eventSurveyUsedBBMembers ( class UGripBlackboard* Blackboard )
{
	static UFunction* pFnSurveyUsedBBMembers = NULL;

	if ( ! pFnSurveyUsedBBMembers )
		pFnSurveyUsedBBMembers = (UFunction*) UObject::GObjObjects()->Data[ 40831 ];

	UGripBTScriptNodeCache_eventSurveyUsedBBMembers_Parms SurveyUsedBBMembers_Parms;
	SurveyUsedBBMembers_Parms.Blackboard = Blackboard;

	this->ProcessEvent ( pFnSurveyUsedBBMembers, &SurveyUsedBBMembers_Parms, NULL );
}

// Function Grip.GripBTScriptNodeCache.InitializeAllNodes
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UGripBTScriptNodeCache::eventInitializeAllNodes ( )
{
	static UFunction* pFnInitializeAllNodes = NULL;

	if ( ! pFnInitializeAllNodes )
		pFnInitializeAllNodes = (UFunction*) UObject::GObjObjects()->Data[ 40829 ];

	UGripBTScriptNodeCache_eventInitializeAllNodes_Parms InitializeAllNodes_Parms;

	this->ProcessEvent ( pFnInitializeAllNodes, &InitializeAllNodes_Parms, NULL );
}

// Function Grip.GripCheatManager.GripDebugViewNPCFromBrainID
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// int                            BrainID                        ( CPF_Parm )

void AGripCheatManager::GripDebugViewNPCFromBrainID ( int BrainID )
{
	static UFunction* pFnGripDebugViewNPCFromBrainID = NULL;

	if ( ! pFnGripDebugViewNPCFromBrainID )
		pFnGripDebugViewNPCFromBrainID = (UFunction*) UObject::GObjObjects()->Data[ 40860 ];

	AGripCheatManager_execGripDebugViewNPCFromBrainID_Parms GripDebugViewNPCFromBrainID_Parms;
	GripDebugViewNPCFromBrainID_Parms.BrainID = BrainID;

	this->ProcessEvent ( pFnGripDebugViewNPCFromBrainID, &GripDebugViewNPCFromBrainID_Parms, NULL );
}

// Function Grip.GripCheatManager.StopGripLogging
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void AGripCheatManager::StopGripLogging ( )
{
	static UFunction* pFnStopGripLogging = NULL;

	if ( ! pFnStopGripLogging )
		pFnStopGripLogging = (UFunction*) UObject::GObjObjects()->Data[ 40859 ];

	AGripCheatManager_execStopGripLogging_Parms StopGripLogging_Parms;

	this->ProcessEvent ( pFnStopGripLogging, &StopGripLogging_Parms, NULL );
}

// Function Grip.GripCheatManager.StartGripLogging
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void AGripCheatManager::StartGripLogging ( )
{
	static UFunction* pFnStartGripLogging = NULL;

	if ( ! pFnStartGripLogging )
		pFnStartGripLogging = (UFunction*) UObject::GObjObjects()->Data[ 40858 ];

	AGripCheatManager_execStartGripLogging_Parms StartGripLogging_Parms;

	this->ProcessEvent ( pFnStartGripLogging, &StartGripLogging_Parms, NULL );
}

// Function Grip.GripCheatManager.StopGripDebug
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void AGripCheatManager::StopGripDebug ( )
{
	static UFunction* pFnStopGripDebug = NULL;

	if ( ! pFnStopGripDebug )
		pFnStopGripDebug = (UFunction*) UObject::GObjObjects()->Data[ 40857 ];

	AGripCheatManager_execStopGripDebug_Parms StopGripDebug_Parms;

	this->ProcessEvent ( pFnStopGripDebug, &StopGripDebug_Parms, NULL );
}

// Function Grip.GripCheatManager.StartGripDebug
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void AGripCheatManager::StartGripDebug ( )
{
	static UFunction* pFnStartGripDebug = NULL;

	if ( ! pFnStartGripDebug )
		pFnStartGripDebug = (UFunction*) UObject::GObjObjects()->Data[ 40856 ];

	AGripCheatManager_execStartGripDebug_Parms StartGripDebug_Parms;

	this->ProcessEvent ( pFnStartGripDebug, &StartGripDebug_Parms, NULL );
}

// Function Grip.GripCheatManager.CCSDebugOptions
// [0x00024202] ( FUNC_Exec )
// Parameters infos:
// struct FString                 infoType                       ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void AGripCheatManager::CCSDebugOptions ( struct FString infoType )
{
	static UFunction* pFnCCSDebugOptions = NULL;

	if ( ! pFnCCSDebugOptions )
		pFnCCSDebugOptions = (UFunction*) UObject::GObjObjects()->Data[ 40854 ];

	AGripCheatManager_execCCSDebugOptions_Parms CCSDebugOptions_Parms;
	memcpy ( &CCSDebugOptions_Parms.infoType, &infoType, 0xC );

	this->ProcessEvent ( pFnCCSDebugOptions, &CCSDebugOptions_Parms, NULL );
}

// Function Grip.GripCheatManager.DESDebugOptions
// [0x00024202] ( FUNC_Exec )
// Parameters infos:
// struct FString                 infoType                       ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void AGripCheatManager::DESDebugOptions ( struct FString infoType )
{
	static UFunction* pFnDESDebugOptions = NULL;

	if ( ! pFnDESDebugOptions )
		pFnDESDebugOptions = (UFunction*) UObject::GObjObjects()->Data[ 40852 ];

	AGripCheatManager_execDESDebugOptions_Parms DESDebugOptions_Parms;
	memcpy ( &DESDebugOptions_Parms.infoType, &infoType, 0xC );

	this->ProcessEvent ( pFnDESDebugOptions, &DESDebugOptions_Parms, NULL );
}

// Function Grip.GripCheatManager.ShowDESInfo
// [0x00024202] ( FUNC_Exec )
// Parameters infos:
// struct FString                 infoType                       ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void AGripCheatManager::ShowDESInfo ( struct FString infoType )
{
	static UFunction* pFnShowDESInfo = NULL;

	if ( ! pFnShowDESInfo )
		pFnShowDESInfo = (UFunction*) UObject::GObjObjects()->Data[ 40850 ];

	AGripCheatManager_execShowDESInfo_Parms ShowDESInfo_Parms;
	memcpy ( &ShowDESInfo_Parms.infoType, &infoType, 0xC );

	this->ProcessEvent ( pFnShowDESInfo, &ShowDESInfo_Parms, NULL );
}

// Function Grip.GripDebug.GripDebugViewNPCFromBrainID
// [0x00822002] 
// Parameters infos:
// int                            BrainID                        ( CPF_Parm )

void UGripDebug::GripDebugViewNPCFromBrainID ( int BrainID )
{
	static UFunction* pFnGripDebugViewNPCFromBrainID = NULL;

	if ( ! pFnGripDebugViewNPCFromBrainID )
		pFnGripDebugViewNPCFromBrainID = (UFunction*) UObject::GObjObjects()->Data[ 40884 ];

	UGripDebug_execGripDebugViewNPCFromBrainID_Parms GripDebugViewNPCFromBrainID_Parms;
	GripDebugViewNPCFromBrainID_Parms.BrainID = BrainID;

	this->ProcessEvent ( pFnGripDebugViewNPCFromBrainID, &GripDebugViewNPCFromBrainID_Parms, NULL );
}

// Function Grip.GripDebug.GetLocationAndRotationFromBrainID
// [0x00422400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            BrainID                        ( CPF_Parm )
// struct FVector                 ActorLocation                  ( CPF_Parm | CPF_OutParm )
// struct FVector                 ActorRotation                  ( CPF_Parm | CPF_OutParm )

bool UGripDebug::GetLocationAndRotationFromBrainID ( int BrainID, struct FVector* ActorLocation, struct FVector* ActorRotation )
{
	static UFunction* pFnGetLocationAndRotationFromBrainID = NULL;

	if ( ! pFnGetLocationAndRotationFromBrainID )
		pFnGetLocationAndRotationFromBrainID = (UFunction*) UObject::GObjObjects()->Data[ 40879 ];

	UGripDebug_execGetLocationAndRotationFromBrainID_Parms GetLocationAndRotationFromBrainID_Parms;
	GetLocationAndRotationFromBrainID_Parms.BrainID = BrainID;

	pFnGetLocationAndRotationFromBrainID->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetLocationAndRotationFromBrainID, &GetLocationAndRotationFromBrainID_Parms, NULL );

	pFnGetLocationAndRotationFromBrainID->FunctionFlags |= 0x400;

	if ( ActorLocation )
		memcpy ( ActorLocation, &GetLocationAndRotationFromBrainID_Parms.ActorLocation, 0xC );

	if ( ActorRotation )
		memcpy ( ActorRotation, &GetLocationAndRotationFromBrainID_Parms.ActorRotation, 0xC );

	return GetLocationAndRotationFromBrainID_Parms.ReturnValue;
}

// Function Grip.GripDebug.NextBrainDebugRenderType
// [0x00022400] ( FUNC_Native )
// Parameters infos:

void UGripDebug::NextBrainDebugRenderType ( )
{
	static UFunction* pFnNextBrainDebugRenderType = NULL;

	if ( ! pFnNextBrainDebugRenderType )
		pFnNextBrainDebugRenderType = (UFunction*) UObject::GObjObjects()->Data[ 40878 ];

	UGripDebug_execNextBrainDebugRenderType_Parms NextBrainDebugRenderType_Parms;

	pFnNextBrainDebugRenderType->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNextBrainDebugRenderType, &NextBrainDebugRenderType_Parms, NULL );

	pFnNextBrainDebugRenderType->FunctionFlags |= 0x400;
}

// Function Grip.GripDebug.ToggleDisableNPC
// [0x00022400] ( FUNC_Native )
// Parameters infos:

void UGripDebug::ToggleDisableNPC ( )
{
	static UFunction* pFnToggleDisableNPC = NULL;

	if ( ! pFnToggleDisableNPC )
		pFnToggleDisableNPC = (UFunction*) UObject::GObjObjects()->Data[ 40877 ];

	UGripDebug_execToggleDisableNPC_Parms ToggleDisableNPC_Parms;

	pFnToggleDisableNPC->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleDisableNPC, &ToggleDisableNPC_Parms, NULL );

	pFnToggleDisableNPC->FunctionFlags |= 0x400;
}

// Function Grip.GripDebug.SelectDebugPawn
// [0x00022400] ( FUNC_Native )
// Parameters infos:

void UGripDebug::SelectDebugPawn ( )
{
	static UFunction* pFnSelectDebugPawn = NULL;

	if ( ! pFnSelectDebugPawn )
		pFnSelectDebugPawn = (UFunction*) UObject::GObjObjects()->Data[ 40876 ];

	UGripDebug_execSelectDebugPawn_Parms SelectDebugPawn_Parms;

	pFnSelectDebugPawn->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSelectDebugPawn, &SelectDebugPawn_Parms, NULL );

	pFnSelectDebugPawn->FunctionFlags |= 0x400;
}

// Function Grip.GripDebug.GripStopAdvanceSim
// [0x00022400] ( FUNC_Native )
// Parameters infos:

void UGripDebug::GripStopAdvanceSim ( )
{
	static UFunction* pFnGripStopAdvanceSim = NULL;

	if ( ! pFnGripStopAdvanceSim )
		pFnGripStopAdvanceSim = (UFunction*) UObject::GObjObjects()->Data[ 40875 ];

	UGripDebug_execGripStopAdvanceSim_Parms GripStopAdvanceSim_Parms;

	pFnGripStopAdvanceSim->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGripStopAdvanceSim, &GripStopAdvanceSim_Parms, NULL );

	pFnGripStopAdvanceSim->FunctionFlags |= 0x400;
}

// Function Grip.GripDebug.GripAdvanceSim
// [0x00022400] ( FUNC_Native )
// Parameters infos:

void UGripDebug::GripAdvanceSim ( )
{
	static UFunction* pFnGripAdvanceSim = NULL;

	if ( ! pFnGripAdvanceSim )
		pFnGripAdvanceSim = (UFunction*) UObject::GObjObjects()->Data[ 40874 ];

	UGripDebug_execGripAdvanceSim_Parms GripAdvanceSim_Parms;

	pFnGripAdvanceSim->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGripAdvanceSim, &GripAdvanceSim_Parms, NULL );

	pFnGripAdvanceSim->FunctionFlags |= 0x400;
}

// Function Grip.GripDebug.StopGripLogging
// [0x00022400] ( FUNC_Native )
// Parameters infos:

void UGripDebug::StopGripLogging ( )
{
	static UFunction* pFnStopGripLogging = NULL;

	if ( ! pFnStopGripLogging )
		pFnStopGripLogging = (UFunction*) UObject::GObjObjects()->Data[ 40873 ];

	UGripDebug_execStopGripLogging_Parms StopGripLogging_Parms;

	pFnStopGripLogging->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopGripLogging, &StopGripLogging_Parms, NULL );

	pFnStopGripLogging->FunctionFlags |= 0x400;
}

// Function Grip.GripDebug.StartGripLogging
// [0x00022400] ( FUNC_Native )
// Parameters infos:

void UGripDebug::StartGripLogging ( )
{
	static UFunction* pFnStartGripLogging = NULL;

	if ( ! pFnStartGripLogging )
		pFnStartGripLogging = (UFunction*) UObject::GObjObjects()->Data[ 40872 ];

	UGripDebug_execStartGripLogging_Parms StartGripLogging_Parms;

	pFnStartGripLogging->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStartGripLogging, &StartGripLogging_Parms, NULL );

	pFnStartGripLogging->FunctionFlags |= 0x400;
}

// Function Grip.GripDebug.StopGripDebug
// [0x00022400] ( FUNC_Native )
// Parameters infos:

void UGripDebug::StopGripDebug ( )
{
	static UFunction* pFnStopGripDebug = NULL;

	if ( ! pFnStopGripDebug )
		pFnStopGripDebug = (UFunction*) UObject::GObjObjects()->Data[ 40871 ];

	UGripDebug_execStopGripDebug_Parms StopGripDebug_Parms;

	pFnStopGripDebug->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopGripDebug, &StopGripDebug_Parms, NULL );

	pFnStopGripDebug->FunctionFlags |= 0x400;
}

// Function Grip.GripDebug.StartGripDebug
// [0x00022400] ( FUNC_Native )
// Parameters infos:

void UGripDebug::StartGripDebug ( )
{
	static UFunction* pFnStartGripDebug = NULL;

	if ( ! pFnStartGripDebug )
		pFnStartGripDebug = (UFunction*) UObject::GObjObjects()->Data[ 40870 ];

	UGripDebug_execStartGripDebug_Parms StartGripDebug_Parms;

	pFnStartGripDebug->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStartGripDebug, &StartGripDebug_Parms, NULL );

	pFnStartGripDebug->FunctionFlags |= 0x400;
}

// Function Grip.GripDebug.IsDebugEnabled
// [0x00022400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGripDebug::IsDebugEnabled ( )
{
	static UFunction* pFnIsDebugEnabled = NULL;

	if ( ! pFnIsDebugEnabled )
		pFnIsDebugEnabled = (UFunction*) UObject::GObjObjects()->Data[ 40868 ];

	UGripDebug_execIsDebugEnabled_Parms IsDebugEnabled_Parms;

	pFnIsDebugEnabled->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsDebugEnabled, &IsDebugEnabled_Parms, NULL );

	pFnIsDebugEnabled->FunctionFlags |= 0x400;

	return IsDebugEnabled_Parms.ReturnValue;
}

// Function Grip.GripDebug.CCSDebugOptions
// [0x00026400] ( FUNC_Native )
// Parameters infos:
// struct FString                 Options                        ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void UGripDebug::CCSDebugOptions ( struct FString Options )
{
	static UFunction* pFnCCSDebugOptions = NULL;

	if ( ! pFnCCSDebugOptions )
		pFnCCSDebugOptions = (UFunction*) UObject::GObjObjects()->Data[ 40866 ];

	UGripDebug_execCCSDebugOptions_Parms CCSDebugOptions_Parms;
	memcpy ( &CCSDebugOptions_Parms.Options, &Options, 0xC );

	pFnCCSDebugOptions->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCCSDebugOptions, &CCSDebugOptions_Parms, NULL );

	pFnCCSDebugOptions->FunctionFlags |= 0x400;
}

// Function Grip.GripDebug.DESDebugOptions
// [0x00026400] ( FUNC_Native )
// Parameters infos:
// struct FString                 Options                        ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void UGripDebug::DESDebugOptions ( struct FString Options )
{
	static UFunction* pFnDESDebugOptions = NULL;

	if ( ! pFnDESDebugOptions )
		pFnDESDebugOptions = (UFunction*) UObject::GObjObjects()->Data[ 40864 ];

	UGripDebug_execDESDebugOptions_Parms DESDebugOptions_Parms;
	memcpy ( &DESDebugOptions_Parms.Options, &Options, 0xC );

	pFnDESDebugOptions->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDESDebugOptions, &DESDebugOptions_Parms, NULL );

	pFnDESDebugOptions->FunctionFlags |= 0x400;
}

// Function Grip.GripDebug.ShowDESInfo
// [0x00026400] ( FUNC_Native )
// Parameters infos:
// struct FString                 infoType                       ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void UGripDebug::ShowDESInfo ( struct FString infoType )
{
	static UFunction* pFnShowDESInfo = NULL;

	if ( ! pFnShowDESInfo )
		pFnShowDESInfo = (UFunction*) UObject::GObjObjects()->Data[ 40862 ];

	UGripDebug_execShowDESInfo_Parms ShowDESInfo_Parms;
	memcpy ( &ShowDESInfo_Parms.infoType, &infoType, 0xC );

	pFnShowDESInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowDESInfo, &ShowDESInfo_Parms, NULL );

	pFnShowDESInfo->FunctionFlags |= 0x400;
}

// Function Grip.GripDrawHUD.DrawHUD
// [0x00022400] ( FUNC_Native )
// Parameters infos:
// class UCanvas*                 CanvasObject                   ( CPF_Parm )

void UGripDrawHUD::DrawHUD ( class UCanvas* CanvasObject )
{
	static UFunction* pFnDrawHUD = NULL;

	if ( ! pFnDrawHUD )
		pFnDrawHUD = (UFunction*) UObject::GObjObjects()->Data[ 40915 ];

	UGripDrawHUD_execDrawHUD_Parms DrawHUD_Parms;
	DrawHUD_Parms.CanvasObject = CanvasObject;

	pFnDrawHUD->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDrawHUD, &DrawHUD_Parms, NULL );

	pFnDrawHUD->FunctionFlags |= 0x400;
}

// Function Grip.GripDebugCameraController.GripDebugViewNPCFromBrainID
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// int                            BrainID                        ( CPF_Parm )

void AGripDebugCameraController::GripDebugViewNPCFromBrainID ( int BrainID )
{
	static UFunction* pFnGripDebugViewNPCFromBrainID = NULL;

	if ( ! pFnGripDebugViewNPCFromBrainID )
		pFnGripDebugViewNPCFromBrainID = (UFunction*) UObject::GObjObjects()->Data[ 40899 ];

	AGripDebugCameraController_execGripDebugViewNPCFromBrainID_Parms GripDebugViewNPCFromBrainID_Parms;
	GripDebugViewNPCFromBrainID_Parms.BrainID = BrainID;

	this->ProcessEvent ( pFnGripDebugViewNPCFromBrainID, &GripDebugViewNPCFromBrainID_Parms, NULL );
}

// Function Grip.GripDebugCameraController.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AGripDebugCameraController::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 40897 ];

	AGripDebugCameraController_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
}

// Function Grip.GripDebugCameraHUD.PostRender
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGripDebugCameraHUD::eventPostRender ( )
{
	static UFunction* pFnPostRender = NULL;

	if ( ! pFnPostRender )
		pFnPostRender = (UFunction*) UObject::GObjObjects()->Data[ 40904 ];

	AGripDebugCameraHUD_eventPostRender_Parms PostRender_Parms;

	this->ProcessEvent ( pFnPostRender, &PostRender_Parms, NULL );
}

// Function Grip.GripDebugCameraInput.InputKey
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ControllerId                   ( CPF_Parm )
// struct FName                   Key                            ( CPF_Parm )
// unsigned char                  Event                          ( CPF_Parm )
// float                          AmountDepressed                ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bGamepad                       ( CPF_OptionalParm | CPF_Parm )

bool UGripDebugCameraInput::InputKey ( int ControllerId, struct FName Key, unsigned char Event, float AmountDepressed, unsigned long bGamepad )
{
	static UFunction* pFnInputKey = NULL;

	if ( ! pFnInputKey )
		pFnInputKey = (UFunction*) UObject::GObjObjects()->Data[ 40907 ];

	UGripDebugCameraInput_execInputKey_Parms InputKey_Parms;
	InputKey_Parms.ControllerId = ControllerId;
	memcpy ( &InputKey_Parms.Key, &Key, 0x8 );
	InputKey_Parms.Event = Event;
	InputKey_Parms.AmountDepressed = AmountDepressed;
	InputKey_Parms.bGamepad = bGamepad;

	this->ProcessEvent ( pFnInputKey, &InputKey_Parms, NULL );

	return InputKey_Parms.ReturnValue;
}

// Function Grip.GripPlayerInput.ProcessKey
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APlayerController*       OwnerCtrl                      ( CPF_Parm )
// struct FName                   Key                            ( CPF_Parm )
// unsigned char                  Event                          ( CPF_Parm )

bool UGripPlayerInput::ProcessKey ( class APlayerController* OwnerCtrl, struct FName Key, unsigned char Event )
{
	static UFunction* pFnProcessKey = NULL;

	if ( ! pFnProcessKey )
		pFnProcessKey = (UFunction*) UObject::GObjObjects()->Data[ 40925 ];

	UGripPlayerInput_execProcessKey_Parms ProcessKey_Parms;
	ProcessKey_Parms.OwnerCtrl = OwnerCtrl;
	memcpy ( &ProcessKey_Parms.Key, &Key, 0x8 );
	ProcessKey_Parms.Event = Event;

	this->ProcessEvent ( pFnProcessKey, &ProcessKey_Parms, NULL );

	return ProcessKey_Parms.ReturnValue;
}

// Function Grip.GripPlayerInput.InputKey
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ControllerId                   ( CPF_Parm )
// struct FName                   Key                            ( CPF_Parm )
// unsigned char                  Event                          ( CPF_Parm )
// float                          AmountDepressed                ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bGamepad                       ( CPF_OptionalParm | CPF_Parm )

bool UGripPlayerInput::InputKey ( int ControllerId, struct FName Key, unsigned char Event, float AmountDepressed, unsigned long bGamepad )
{
	static UFunction* pFnInputKey = NULL;

	if ( ! pFnInputKey )
		pFnInputKey = (UFunction*) UObject::GObjObjects()->Data[ 40918 ];

	UGripPlayerInput_execInputKey_Parms InputKey_Parms;
	InputKey_Parms.ControllerId = ControllerId;
	memcpy ( &InputKey_Parms.Key, &Key, 0x8 );
	InputKey_Parms.Event = Event;
	InputKey_Parms.AmountDepressed = AmountDepressed;
	InputKey_Parms.bGamepad = bGamepad;

	this->ProcessEvent ( pFnInputKey, &InputKey_Parms, NULL );

	return InputKey_Parms.ReturnValue;
}


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif