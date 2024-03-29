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
	 * Function KeyItemDestination_Device_Base_BP.KeyItemDestination_Device_Base_BP_C.GetAssociatedInvestigationComponent
	 */
	struct AKeyItemDestination_Device_Base_BP_C_GetAssociatedInvestigationComponent_Params
	{
	public:
		class URBPlayerInvestigationZoneComponent*                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function KeyItemDestination_Device_Base_BP.KeyItemDestination_Device_Base_BP_C.GetClue
	 */
	struct AKeyItemDestination_Device_Base_BP_C_GetClue_Params
	{
	public:
		struct FClueData                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor)
	};

	/**
	 * Function KeyItemDestination_Device_Base_BP.KeyItemDestination_Device_Base_BP_C.Unlock
	 */
	struct AKeyItemDestination_Device_Base_BP_C_Unlock_Params
	{	};

	/**
	 * Function KeyItemDestination_Device_Base_BP.KeyItemDestination_Device_Base_BP_C.UserConstructionScript
	 */
	struct AKeyItemDestination_Device_Base_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function KeyItemDestination_Device_Base_BP.KeyItemDestination_Device_Base_BP_C.Timeline_0__FinishedFunc
	 */
	struct AKeyItemDestination_Device_Base_BP_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function KeyItemDestination_Device_Base_BP.KeyItemDestination_Device_Base_BP_C.Timeline_0__UpdateFunc
	 */
	struct AKeyItemDestination_Device_Base_BP_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function KeyItemDestination_Device_Base_BP.KeyItemDestination_Device_Base_BP_C.BndEvt__KeyItemDestination_Device_BP_KeyItemDestination_PanelComponent_BP_K2Node_ComponentBoundEvent_1_OnPanelEvent__DelegateSignature
	 */
	struct AKeyItemDestination_Device_Base_BP_C_BndEvt__KeyItemDestination_Device_BP_KeyItemDestination_PanelComponent_BP_K2Node_ComponentBoundEvent_1_OnPanelEvent__DelegateSignature_Params
	{
	public:
		class URBInteractiblePanelComponent*                       panel;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             pawnInteracting;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function KeyItemDestination_Device_Base_BP.KeyItemDestination_Device_Base_BP_C.OnUnlock_Event
	 */
	struct AKeyItemDestination_Device_Base_BP_C_OnUnlock_Event_Params
	{	};

	/**
	 * Function KeyItemDestination_Device_Base_BP.KeyItemDestination_Device_Base_BP_C.SetClue
	 */
	struct AKeyItemDestination_Device_Base_BP_C_SetClue_Params
	{
	public:
		struct FClueData                                           ClueData;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function KeyItemDestination_Device_Base_BP.KeyItemDestination_Device_Base_BP_C.BndEvt__KeyItemDestination_Device_BP_KeyItemDestination_PanelComponent_BP_K2Node_ComponentBoundEvent_2_OnEnabledChanged__DelegateSignature
	 */
	struct AKeyItemDestination_Device_Base_BP_C_BndEvt__KeyItemDestination_Device_BP_KeyItemDestination_PanelComponent_BP_K2Node_ComponentBoundEvent_2_OnEnabledChanged__DelegateSignature_Params
	{
	public:
		class URBInteractionZoneComponent*                         Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function KeyItemDestination_Device_Base_BP.KeyItemDestination_Device_Base_BP_C.Event_OnResetStage
	 */
	struct AKeyItemDestination_Device_Base_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function KeyItemDestination_Device_Base_BP.KeyItemDestination_Device_Base_BP_C.BndEvt__KeyItemDestination_Device_Base_BP_KeyItemDestination_PanelComponent_BP_K2Node_ComponentBoundEvent_3_OnPanelEvent__DelegateSignature
	 */
	struct AKeyItemDestination_Device_Base_BP_C_BndEvt__KeyItemDestination_Device_Base_BP_KeyItemDestination_PanelComponent_BP_K2Node_ComponentBoundEvent_3_OnPanelEvent__DelegateSignature_Params
	{
	public:
		class URBInteractiblePanelComponent*                       panel;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             pawnInteracting;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function KeyItemDestination_Device_Base_BP.KeyItemDestination_Device_Base_BP_C.ExecuteUbergraph_KeyItemDestination_Device_Base_BP
	 */
	struct AKeyItemDestination_Device_Base_BP_C_ExecuteUbergraph_KeyItemDestination_Device_Base_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
