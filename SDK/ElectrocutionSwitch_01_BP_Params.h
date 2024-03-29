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
	 * Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.Update Display Enabled
	 */
	struct AElectrocutionSwitch01_BP_C_UpdateDisplayEnabled_Params
	{	};

	/**
	 * Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.CalculateTargetNeedleRatio
	 */
	struct AElectrocutionSwitch01_BP_C_CalculateTargetNeedleRatio_Params
	{	};

	/**
	 * Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.SetCurrentNeedleAngle
	 */
	struct AElectrocutionSwitch01_BP_C_SetCurrentNeedleAngle_Params
	{
	public:
		float                                                      ratio;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.SetTargetNeedleAngle
	 */
	struct AElectrocutionSwitch01_BP_C_SetTargetNeedleAngle_Params
	{
	public:
		float                                                      Angle;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SnapToValue;                                             // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.UpdateNeedlePosition
	 */
	struct AElectrocutionSwitch01_BP_C_UpdateNeedlePosition_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.IsUpdatingNeedle
	 */
	struct AElectrocutionSwitch01_BP_C_IsUpdatingNeedle_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.StopAllSounds
	 */
	struct AElectrocutionSwitch01_BP_C_StopAllSounds_Params
	{	};

	/**
	 * Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.UpdateNumberOfVisibleLights
	 */
	struct AElectrocutionSwitch01_BP_C_UpdateNumberOfVisibleLights_Params
	{	};

	/**
	 * Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.HasInteractingPawn
	 */
	struct AElectrocutionSwitch01_BP_C_HasInteractingPawn_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SGS1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.Timeline_0__FinishedFunc
	 */
	struct AElectrocutionSwitch01_BP_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.Timeline_0__UpdateFunc
	 */
	struct AElectrocutionSwitch01_BP_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.Event_OnResetStage
	 */
	struct AElectrocutionSwitch01_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.ReceiveBeginPlay
	 */
	struct AElectrocutionSwitch01_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.UpdateLightDisplay
	 */
	struct AElectrocutionSwitch01_BP_C_UpdateLightDisplay_Params
	{	};

	/**
	 * Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.BndEvt__ElectrocutionSwitch-01_BP_ElectrocutionSitchPanelComponent_BP_K2Node_ComponentBoundEvent_0_OnPanelEvent__DelegateSignature
	 */
	struct AElectrocutionSwitch01_BP_C_BndEvt__ElectrocutionSwitch01_BP_ElectrocutionSitchPanelComponent_BP_K2Node_ComponentBoundEvent_0_OnPanelEvent__DelegateSignature_Params
	{
	public:
		class URBInteractiblePanelComponent*                       panel;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             pawnInteracting;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.BndEvt__ElectrocutionSwitch-01_BP_ElectrocutionSitchPanelComponent_BP_K2Node_ComponentBoundEvent_1_OnPanelEvent__DelegateSignature
	 */
	struct AElectrocutionSwitch01_BP_C_BndEvt__ElectrocutionSwitch01_BP_ElectrocutionSitchPanelComponent_BP_K2Node_ComponentBoundEvent_1_OnPanelEvent__DelegateSignature_Params
	{
	public:
		class URBInteractiblePanelComponent*                       panel;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             pawnInteracting;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.ReceiveTick
	 */
	struct AElectrocutionSwitch01_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.BndEvt__ElectrocutionSwitch-01_BP_ElectrocutionSitchPanelComponent_BP_K2Node_ComponentBoundEvent_2_OnEnabledChanged__DelegateSignature
	 */
	struct AElectrocutionSwitch01_BP_C_BndEvt__ElectrocutionSwitch01_BP_ElectrocutionSitchPanelComponent_BP_K2Node_ComponentBoundEvent_2_OnEnabledChanged__DelegateSignature_Params
	{
	public:
		class URBInteractionZoneComponent*                         Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.ElecticalVFX
	 */
	struct AElectrocutionSwitch01_BP_C_ElecticalVFX_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.ExecuteUbergraph_ElectrocutionSwitch-01_BP
	 */
	struct AElectrocutionSwitch01_BP_C_ExecuteUbergraph_ElectrocutionSwitch01_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ElectrocutionSwitch-01_BP.ElectrocutionSwitch-01_BP_C.OnWaitingForResetCompletedChanged__DelegateSignature
	 */
	struct AElectrocutionSwitch01_BP_C_OnWaitingForResetCompletedChanged__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
