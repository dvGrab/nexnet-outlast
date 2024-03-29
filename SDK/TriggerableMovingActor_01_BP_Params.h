#pragma once

/**
 * Name: OUTLAST
 * Version: 0.0.2_fixed
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function TriggerableMovingActor-01_BP.TriggerableMovingActor-01_BP_C.ShouldBeIgnoredForLots
	 */
	struct ATriggerableMovingActor01_BP_C_ShouldBeIgnoredForLots_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TriggerableMovingActor-01_BP.TriggerableMovingActor-01_BP_C.IsStateA
	 */
	struct ATriggerableMovingActor01_BP_C_IsStateA_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TriggerableMovingActor-01_BP.TriggerableMovingActor-01_BP_C.GetStateName
	 */
	struct ATriggerableMovingActor01_BP_C_GetStateName_Params
	{
	public:
		class FString                                              stateA;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              stateB;                                                  // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TriggerableMovingActor-01_BP.TriggerableMovingActor-01_BP_C.SetDestinationMaterials
	 */
	struct ATriggerableMovingActor01_BP_C_SetDestinationMaterials_Params
	{
	public:
		class UStaticMeshComponent*                                StaticMeshComp;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TriggerableMovingActor-01_BP.TriggerableMovingActor-01_BP_C.SetMainMaterials
	 */
	struct ATriggerableMovingActor01_BP_C_SetMainMaterials_Params
	{
	public:
		class UStaticMeshComponent*                                StaticMeshComp;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TriggerableMovingActor-01_BP.TriggerableMovingActor-01_BP_C.Initialize
	 */
	struct ATriggerableMovingActor01_BP_C_Initialize_Params
	{	};

	/**
	 * Function TriggerableMovingActor-01_BP.TriggerableMovingActor-01_BP_C.TryRefreshSoundConnector
	 */
	struct ATriggerableMovingActor01_BP_C_TryRefreshSoundConnector_Params
	{	};

	/**
	 * Function TriggerableMovingActor-01_BP.TriggerableMovingActor-01_BP_C.OnTimelineUpdate
	 */
	struct ATriggerableMovingActor01_BP_C_OnTimelineUpdate_Params
	{
	public:
		float                                                      ratio;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E7VX[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TriggerableMovingActor-01_BP.TriggerableMovingActor-01_BP_C.OnTimelineStabilized
	 */
	struct ATriggerableMovingActor01_BP_C_OnTimelineStabilized_Params
	{
	public:
		bool                                                       triggered;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TriggerableMovingActor-01_BP.TriggerableMovingActor-01_BP_C.UserConstructionScript
	 */
	struct ATriggerableMovingActor01_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TriggerableMovingActor-01_BP.TriggerableMovingActor-01_BP_C.AnimationTimeline__FinishedFunc
	 */
	struct ATriggerableMovingActor01_BP_C_AnimationTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function TriggerableMovingActor-01_BP.TriggerableMovingActor-01_BP_C.AnimationTimeline__UpdateFunc
	 */
	struct ATriggerableMovingActor01_BP_C_AnimationTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function TriggerableMovingActor-01_BP.TriggerableMovingActor-01_BP_C.PrepareState
	 */
	struct ATriggerableMovingActor01_BP_C_PrepareState_Params
	{
	public:
		bool                                                       bStateA;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5AMH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              randomOwner;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TriggerableMovingActor-01_BP.TriggerableMovingActor-01_BP_C.ReceiveBeginPlay
	 */
	struct ATriggerableMovingActor01_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TriggerableMovingActor-01_BP.TriggerableMovingActor-01_BP_C.Event_OnOperatableProgressChanged
	 */
	struct ATriggerableMovingActor01_BP_C_Event_OnOperatableProgressChanged_Params
	{
	public:
		class UObject*                                             operatable;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      oldProgress;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      currentProgress;                                         // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSnap;                                                   // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TriggerableMovingActor-01_BP.TriggerableMovingActor-01_BP_C.Event_OnTriggered
	 */
	struct ATriggerableMovingActor01_BP_C_Event_OnTriggered_Params
	{	};

	/**
	 * Function TriggerableMovingActor-01_BP.TriggerableMovingActor-01_BP_C.Event_OnUntriggered
	 */
	struct ATriggerableMovingActor01_BP_C_Event_OnUntriggered_Params
	{	};

	/**
	 * Function TriggerableMovingActor-01_BP.TriggerableMovingActor-01_BP_C.SetState
	 */
	struct ATriggerableMovingActor01_BP_C_SetState_Params
	{
	public:
		bool                                                       bStateA;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TriggerableMovingActor-01_BP.TriggerableMovingActor-01_BP_C.Event_SnapToState
	 */
	struct ATriggerableMovingActor01_BP_C_Event_SnapToState_Params
	{	};

	/**
	 * Function TriggerableMovingActor-01_BP.TriggerableMovingActor-01_BP_C.TriggerAction
	 */
	struct ATriggerableMovingActor01_BP_C_TriggerAction_Params
	{	};

	/**
	 * Function TriggerableMovingActor-01_BP.TriggerableMovingActor-01_BP_C.UntriggerAction
	 */
	struct ATriggerableMovingActor01_BP_C_UntriggerAction_Params
	{	};

	/**
	 * Function TriggerableMovingActor-01_BP.TriggerableMovingActor-01_BP_C.SetShouldBeIgnoredForLots
	 */
	struct ATriggerableMovingActor01_BP_C_SetShouldBeIgnoredForLots_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TriggerableMovingActor-01_BP.TriggerableMovingActor-01_BP_C.BndEvt__TriggerableMovingActor-01_BP_RBRandomizableHelper_K2Node_ComponentBoundEvent_0_OnRandomStateChangedEvent__DelegateSignature
	 */
	struct ATriggerableMovingActor01_BP_C_BndEvt__TriggerableMovingActor01_BP_RBRandomizableHelper_K2Node_ComponentBoundEvent_0_OnRandomStateChangedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function TriggerableMovingActor-01_BP.TriggerableMovingActor-01_BP_C.ExecuteUbergraph_TriggerableMovingActor-01_BP
	 */
	struct ATriggerableMovingActor01_BP_C_ExecuteUbergraph_TriggerableMovingActor01_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TriggerableMovingActor-01_BP.TriggerableMovingActor-01_BP_C.AnimationCompletedBackward__DelegateSignature
	 */
	struct ATriggerableMovingActor01_BP_C_AnimationCompletedBackward__DelegateSignature_Params
	{	};

	/**
	 * Function TriggerableMovingActor-01_BP.TriggerableMovingActor-01_BP_C.AnimationCompletedForward__DelegateSignature
	 */
	struct ATriggerableMovingActor01_BP_C_AnimationCompletedForward__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
