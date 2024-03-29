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
	 * Function AcidBath_BP.AcidBath_BP_C.ShouldTick
	 */
	struct AAcidBath_BP_C_ShouldTick_Params
	{
	public:
		bool                                                       bShouldTick;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AcidBath_BP.AcidBath_BP_C.UpdateTargetAcidLevel
	 */
	struct AAcidBath_BP_C_UpdateTargetAcidLevel_Params
	{	};

	/**
	 * Function AcidBath_BP.AcidBath_BP_C.SetWaveLevel
	 */
	struct AAcidBath_BP_C_SetWaveLevel_Params
	{
	public:
		float                                                      Level;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AcidBath_BP.AcidBath_BP_C.GetTargetWaveLevel
	 */
	struct AAcidBath_BP_C_GetTargetWaveLevel_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AcidBath_BP.AcidBath_BP_C.UpdateAcidLevel
	 */
	struct AAcidBath_BP_C_UpdateAcidLevel_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AcidBath_BP.AcidBath_BP_C.UpdateWaveLevel
	 */
	struct AAcidBath_BP_C_UpdateWaveLevel_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AcidBath_BP.AcidBath_BP_C.SetTargetAcidLevel
	 */
	struct AAcidBath_BP_C_SetTargetAcidLevel_Params
	{
	public:
		float                                                      Level;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AcidBath_BP.AcidBath_BP_C.SetAcidLevel
	 */
	struct AAcidBath_BP_C_SetAcidLevel_Params
	{
	public:
		float                                                      AcidLevel;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       completed;                                               // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X121[0xB];                                   // 0x0005(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function AcidBath_BP.AcidBath_BP_C.UserConstructionScript
	 */
	struct AAcidBath_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function AcidBath_BP.AcidBath_BP_C.Timeline_0__FinishedFunc
	 */
	struct AAcidBath_BP_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function AcidBath_BP.AcidBath_BP_C.Timeline_0__UpdateFunc
	 */
	struct AAcidBath_BP_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function AcidBath_BP.AcidBath_BP_C.ReceiveBeginPlay
	 */
	struct AAcidBath_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function AcidBath_BP.AcidBath_BP_C.Event_OnResetStage
	 */
	struct AAcidBath_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function AcidBath_BP.AcidBath_BP_C.StartDrainBathAnimation
	 */
	struct AAcidBath_BP_C_StartDrainBathAnimation_Params
	{	};

	/**
	 * Function AcidBath_BP.AcidBath_BP_C.ReceiveTick
	 */
	struct AAcidBath_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AcidBath_BP.AcidBath_BP_C.BndEvt__AcidBath_BP_AcidBath_InteractionPanel_BP_K2Node_ComponentBoundEvent_0_OnPanelEvent__DelegateSignature
	 */
	struct AAcidBath_BP_C_BndEvt__AcidBath_BP_AcidBath_InteractionPanel_BP_K2Node_ComponentBoundEvent_0_OnPanelEvent__DelegateSignature_Params
	{
	public:
		class URBInteractiblePanelComponent*                       panel;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             pawnInteracting;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AcidBath_BP.AcidBath_BP_C.BndEvt__AcidBath_BP_AcidBath_InteractionPanel_BP_K2Node_ComponentBoundEvent_1_OnPanelEvent__DelegateSignature
	 */
	struct AAcidBath_BP_C_BndEvt__AcidBath_BP_AcidBath_InteractionPanel_BP_K2Node_ComponentBoundEvent_1_OnPanelEvent__DelegateSignature_Params
	{
	public:
		class URBInteractiblePanelComponent*                       panel;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             pawnInteracting;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AcidBath_BP.AcidBath_BP_C.ExecuteUbergraph_AcidBath_BP
	 */
	struct AAcidBath_BP_C_ExecuteUbergraph_AcidBath_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
