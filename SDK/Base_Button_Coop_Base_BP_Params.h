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
	 * Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.GetStateName
	 */
	struct ABase_ButtonCoop_Base_BP_C_GetStateName_Params
	{
	public:
		class FString                                              stateA;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              stateB;                                                  // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.IsStateA
	 */
	struct ABase_ButtonCoop_Base_BP_C_IsStateA_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.ShouldBeIgnoredForLots
	 */
	struct ABase_ButtonCoop_Base_BP_C_ShouldBeIgnoredForLots_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.FixUp
	 */
	struct ABase_ButtonCoop_Base_BP_C_FixUp_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.GetProgressionRatio
	 */
	struct ABase_ButtonCoop_Base_BP_C_GetProgressionRatio_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PEN9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.GetTriggerActionBehavior
	 */
	struct ABase_ButtonCoop_Base_BP_C_GetTriggerActionBehavior_Params
	{
	public:
		ETriggerableActionBehavior                                 ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_45ML[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.UserConstructionScript
	 */
	struct ABase_ButtonCoop_Base_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.ButtonTimeline__FinishedFunc
	 */
	struct ABase_ButtonCoop_Base_BP_C_ButtonTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.ButtonTimeline__UpdateFunc
	 */
	struct ABase_ButtonCoop_Base_BP_C_ButtonTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.PrepareState
	 */
	struct ABase_ButtonCoop_Base_BP_C_PrepareState_Params
	{
	public:
		bool                                                       bStateA;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_85QF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              randomOwner;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.OnEditorPostLoad
	 */
	struct ABase_ButtonCoop_Base_BP_C_OnEditorPostLoad_Params
	{	};

	/**
	 * Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.OnPostActorsPasted
	 */
	struct ABase_ButtonCoop_Base_BP_C_OnPostActorsPasted_Params
	{
	public:
		TArray<class AActor*>                                      pastedActors;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.PostAddedToLevel
	 */
	struct ABase_ButtonCoop_Base_BP_C_PostAddedToLevel_Params
	{	};

	/**
	 * Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.PostDuplicated
	 */
	struct ABase_ButtonCoop_Base_BP_C_PostDuplicated_Params
	{
	public:
		class AActor*                                              duplicationParent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.PostEditChange
	 */
	struct ABase_ButtonCoop_Base_BP_C_PostEditChange_Params
	{
	public:
		class FName                                                PropertyName;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.PostEditMove
	 */
	struct ABase_ButtonCoop_Base_BP_C_PostEditMove_Params
	{
	public:
		bool                                                       bFinished;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.TickSelected
	 */
	struct ABase_ButtonCoop_Base_BP_C_TickSelected_Params
	{	};

	/**
	 * Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.OnTriggerableActivated
	 */
	struct ABase_ButtonCoop_Base_BP_C_OnTriggerableActivated_Params
	{
	public:
		class ARBTriggerable*                                      triggerable;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.OnTriggerableDeactivated
	 */
	struct ABase_ButtonCoop_Base_BP_C_OnTriggerableDeactivated_Params
	{
	public:
		class ARBTriggerable*                                      triggerable;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.BndEvt__Base_Button-Coop_Base_BP_OperatableComponent_K2Node_ComponentBoundEvent_1_OnCoopOperatableEvent__DelegateSignature
	 */
	struct ABase_ButtonCoop_Base_BP_C_BndEvt__Base_ButtonCoop_Base_BP_OperatableComponent_K2Node_ComponentBoundEvent_1_OnCoopOperatableEvent__DelegateSignature_Params
	{
	public:
		class URBCoopOperatableComponent*                          Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.BndEvt__Base_Button-Coop_Base_BP_OperatableComponent_K2Node_ComponentBoundEvent_0_OnEnabledChanged__DelegateSignature
	 */
	struct ABase_ButtonCoop_Base_BP_C_BndEvt__Base_ButtonCoop_Base_BP_OperatableComponent_K2Node_ComponentBoundEvent_0_OnEnabledChanged__DelegateSignature_Params
	{
	public:
		class URBInteractionZoneComponent*                         Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.ChangeButtonState
	 */
	struct ABase_ButtonCoop_Base_BP_C_ChangeButtonState_Params
	{	};

	/**
	 * Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.SetState
	 */
	struct ABase_ButtonCoop_Base_BP_C_SetState_Params
	{
	public:
		bool                                                       bStateA;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.SetShouldBeIgnoredForLots
	 */
	struct ABase_ButtonCoop_Base_BP_C_SetShouldBeIgnoredForLots_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.ExecuteUbergraph_Base_Button-Coop_Base_BP
	 */
	struct ABase_ButtonCoop_Base_BP_C_ExecuteUbergraph_Base_ButtonCoop_Base_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
