#pragma once

/**
 * Name: TRIALS
 * Version: FINAL
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
	 * Function GrinderBase_BP.GrinderBase_BP_C.UpdateShreddingEffectsParameters
	 */
	struct AGrinderBase_BP_C_UpdateShreddingEffectsParameters_Params
	{
	public:
		class UAkAudioEvent*                                       AdditionalGrindingSoundStop;                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAkAudioEvent*                                       AdditionalGrindingSoundStart;                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GrinderBase_BP.GrinderBase_BP_C.OnRep_bAlwaysSpin
	 */
	struct AGrinderBase_BP_C_OnRep_bAlwaysSpin_Params
	{	};

	/**
	 * Function GrinderBase_BP.GrinderBase_BP_C.UpdateGrindingAnim
	 */
	struct AGrinderBase_BP_C_UpdateGrindingAnim_Params
	{	};

	/**
	 * Function GrinderBase_BP.GrinderBase_BP_C.OnRep_bShredding
	 */
	struct AGrinderBase_BP_C_OnRep_bShredding_Params
	{	};

	/**
	 * Function GrinderBase_BP.GrinderBase_BP_C.UserConstructionScript
	 */
	struct AGrinderBase_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function GrinderBase_BP.GrinderBase_BP_C.ReceiveBeginPlay
	 */
	struct AGrinderBase_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function GrinderBase_BP.GrinderBase_BP_C.Event_OnResetStage
	 */
	struct AGrinderBase_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function GrinderBase_BP.GrinderBase_BP_C.ReinitializeRolls
	 */
	struct AGrinderBase_BP_C_ReinitializeRolls_Params
	{	};

	/**
	 * Function GrinderBase_BP.GrinderBase_BP_C.TriggerGrindAnimation
	 */
	struct AGrinderBase_BP_C_TriggerGrindAnimation_Params
	{
	public:
		class ARBLargePickup*                                      largeObject;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GrinderBase_BP.GrinderBase_BP_C.OnShreddingDone
	 */
	struct AGrinderBase_BP_C_OnShreddingDone_Params
	{	};

	/**
	 * Function GrinderBase_BP.GrinderBase_BP_C.BndEvt__ChildrenGrinder-03_BP_ChildrenGrinder_InteractionPanel_BP_K2Node_ComponentBoundEvent_0_OnLargeObjectPanelDoAction__DelegateSignature
	 */
	struct AGrinderBase_BP_C_BndEvt__ChildrenGrinder__BP_ChildrenGrinder_InteractionPanel_BP_K2Node_ComponentBoundEvent_0_OnLargeObjectPanelDoAction__DelegateSignature_Params
	{
	public:
		class URBLargeObjectInteractionPanelComponent*             largeObjectPanel;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBLargePickup*                                      largePickup;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             interactor;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GrinderBase_BP.GrinderBase_BP_C.BndEvt__ChildrenGrinder-03_BP_ChildrenGrinder_InteractionPanel_BP_K2Node_ComponentBoundEvent_1_OnPanelEvent__DelegateSignature
	 */
	struct AGrinderBase_BP_C_BndEvt__ChildrenGrinder__BP_ChildrenGrinder_InteractionPanel_BP_K2Node_ComponentBoundEvent_1_OnPanelEvent__DelegateSignature_Params
	{
	public:
		class URBInteractiblePanelComponent*                       panel;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             pawnInteracting;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GrinderBase_BP.GrinderBase_BP_C.ExecuteUbergraph_GrinderBase_BP
	 */
	struct AGrinderBase_BP_C_ExecuteUbergraph_GrinderBase_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GrinderBase_BP.GrinderBase_BP_C.GrindingCompleted__DelegateSignature
	 */
	struct AGrinderBase_BP_C_GrindingCompleted__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
