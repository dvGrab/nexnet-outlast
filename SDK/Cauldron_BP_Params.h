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
	 * Function Cauldron_BP.Cauldron_BP_C.OnRep_bIsBoiling
	 */
	struct ACauldron_BP_C_OnRep_bIsBoiling_Params
	{	};

	/**
	 * Function Cauldron_BP.Cauldron_BP_C.ShouldBPTick
	 */
	struct ACauldron_BP_C_ShouldBPTick_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7POO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Cauldron_BP.Cauldron_BP_C.Set Boiling
	 */
	struct ACauldron_BP_C_Set_Boiling_Params
	{
	public:
		bool                                                       boilingOn;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Cauldron_BP.Cauldron_BP_C.UpdateTargetAcidLevel
	 */
	struct ACauldron_BP_C_UpdateTargetAcidLevel_Params
	{	};

	/**
	 * Function Cauldron_BP.Cauldron_BP_C.SetWaveLevel
	 */
	struct ACauldron_BP_C_SetWaveLevel_Params
	{
	public:
		float                                                      Level;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Cauldron_BP.Cauldron_BP_C.GetTargetWaveLevel
	 */
	struct ACauldron_BP_C_GetTargetWaveLevel_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Cauldron_BP.Cauldron_BP_C.UpdateAcidLevel
	 */
	struct ACauldron_BP_C_UpdateAcidLevel_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Cauldron_BP.Cauldron_BP_C.UpdateWaveLevel
	 */
	struct ACauldron_BP_C_UpdateWaveLevel_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Cauldron_BP.Cauldron_BP_C.SetTargetAcidLevel
	 */
	struct ACauldron_BP_C_SetTargetAcidLevel_Params
	{
	public:
		float                                                      Level;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Cauldron_BP.Cauldron_BP_C.SetAcidLevel
	 */
	struct ACauldron_BP_C_SetAcidLevel_Params
	{
	public:
		float                                                      AcidLevel;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       completed;                                               // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SV2K[0xB];                                   // 0x0005(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Cauldron_BP.Cauldron_BP_C.UserConstructionScript
	 */
	struct ACauldron_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Cauldron_BP.Cauldron_BP_C.Timeline_0__FinishedFunc
	 */
	struct ACauldron_BP_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function Cauldron_BP.Cauldron_BP_C.Timeline_0__UpdateFunc
	 */
	struct ACauldron_BP_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function Cauldron_BP.Cauldron_BP_C.OnWorldPopulateFinished
	 */
	struct ACauldron_BP_C_OnWorldPopulateFinished_Params
	{	};

	/**
	 * Function Cauldron_BP.Cauldron_BP_C.ReceiveBeginPlay
	 */
	struct ACauldron_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Cauldron_BP.Cauldron_BP_C.Event_OnResetStage
	 */
	struct ACauldron_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function Cauldron_BP.Cauldron_BP_C.StartDrainBathAnimation
	 */
	struct ACauldron_BP_C_StartDrainBathAnimation_Params
	{	};

	/**
	 * Function Cauldron_BP.Cauldron_BP_C.ReceiveTick
	 */
	struct ACauldron_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Cauldron_BP.Cauldron_BP_C.Event_OnTriggered
	 */
	struct ACauldron_BP_C_Event_OnTriggered_Params
	{	};

	/**
	 * Function Cauldron_BP.Cauldron_BP_C.BndEvt__Cauldron_BP_Cauldron_InteractionPanel_BP_K2Node_ComponentBoundEvent_2_OnPanelEvent__DelegateSignature
	 */
	struct ACauldron_BP_C_BndEvt__Cauldron_BP_Cauldron_InteractionPanel_BP_K2Node_ComponentBoundEvent_2_OnPanelEvent__DelegateSignature_Params
	{
	public:
		class URBInteractiblePanelComponent*                       panel;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             pawnInteracting;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Cauldron_BP.Cauldron_BP_C.BndEvt__Cauldron_BP_Cauldron_InteractionPanel_BP_K2Node_ComponentBoundEvent_3_OnPanelEvent__DelegateSignature
	 */
	struct ACauldron_BP_C_BndEvt__Cauldron_BP_Cauldron_InteractionPanel_BP_K2Node_ComponentBoundEvent_3_OnPanelEvent__DelegateSignature_Params
	{
	public:
		class URBInteractiblePanelComponent*                       panel;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             pawnInteracting;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Cauldron_BP.Cauldron_BP_C.OnWorldFullyLoaded
	 */
	struct ACauldron_BP_C_OnWorldFullyLoaded_Params
	{	};

	/**
	 * Function Cauldron_BP.Cauldron_BP_C.ExecuteUbergraph_Cauldron_BP
	 */
	struct ACauldron_BP_C_ExecuteUbergraph_Cauldron_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
