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
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.FixUp
	 */
	struct APrototype_GeneratorObjective_BP_C_FixUp_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.UpdatePanelStatusOnCrank
	 */
	struct APrototype_GeneratorObjective_BP_C_UpdatePanelStatusOnCrank_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.GetStatusPanelColor
	 */
	struct APrototype_GeneratorObjective_BP_C_GetStatusPanelColor_Params
	{
	public:
		bool                                                       bCompleted;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F8Y0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        Color;                                                   // 0x0004(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.Construct_EditorClearanceComponent
	 */
	struct APrototype_GeneratorObjective_BP_C_Construct_EditorClearanceComponent_Params
	{
	public:
		unsigned char                                              UnknownData_SRS8[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.GetLinkedLights
	 */
	struct APrototype_GeneratorObjective_BP_C_GetLinkedLights_Params
	{
	public:
		TArray<class ARBLight_BP_C*>                               LinkedLights;                                            // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.GetLinkedWaypoints
	 */
	struct APrototype_GeneratorObjective_BP_C_GetLinkedWaypoints_Params
	{
	public:
		TArray<class ARBWaypoint*>                                 LinkedWaypoints;                                         // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.GetDiodeColor
	 */
	struct APrototype_GeneratorObjective_BP_C_GetDiodeColor_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5PS9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        Color;                                                   // 0x0004(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.UserConstructionScript
	 */
	struct APrototype_GeneratorObjective_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.LeftMainSwitch__FinishedFunc
	 */
	struct APrototype_GeneratorObjective_BP_C_LeftMainSwitch__FinishedFunc_Params
	{	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.LeftMainSwitch__UpdateFunc
	 */
	struct APrototype_GeneratorObjective_BP_C_LeftMainSwitch__UpdateFunc_Params
	{	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.LeftMainSwitch__Activate Electricity__EventFunc
	 */
	struct APrototype_GeneratorObjective_BP_C_LeftMainSwitch__ActivateElectricity__EventFunc_Params
	{	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.RightMainSwitch__FinishedFunc
	 */
	struct APrototype_GeneratorObjective_BP_C_RightMainSwitch__FinishedFunc_Params
	{	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.RightMainSwitch__UpdateFunc
	 */
	struct APrototype_GeneratorObjective_BP_C_RightMainSwitch__UpdateFunc_Params
	{	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.RightMainSwitch__Activate Electricity__EventFunc
	 */
	struct APrototype_GeneratorObjective_BP_C_RightMainSwitch__ActivateElectricity__EventFunc_Params
	{	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.Timeline_1__FinishedFunc
	 */
	struct APrototype_GeneratorObjective_BP_C_Timeline_1__FinishedFunc_Params
	{	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.Timeline_1__UpdateFunc
	 */
	struct APrototype_GeneratorObjective_BP_C_Timeline_1__UpdateFunc_Params
	{	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.Timeline_1__NewTrack_2__EventFunc
	 */
	struct APrototype_GeneratorObjective_BP_C_Timeline_1__NewTrack_2__EventFunc_Params
	{	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.Timeline_0__FinishedFunc
	 */
	struct APrototype_GeneratorObjective_BP_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.Timeline_0__UpdateFunc
	 */
	struct APrototype_GeneratorObjective_BP_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.OnEditorPostLoad
	 */
	struct APrototype_GeneratorObjective_BP_C_OnEditorPostLoad_Params
	{	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.OnPostActorsPasted
	 */
	struct APrototype_GeneratorObjective_BP_C_OnPostActorsPasted_Params
	{
	public:
		TArray<class AActor*>                                      pastedActors;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.PostAddedToLevel
	 */
	struct APrototype_GeneratorObjective_BP_C_PostAddedToLevel_Params
	{	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.PostDuplicated
	 */
	struct APrototype_GeneratorObjective_BP_C_PostDuplicated_Params
	{
	public:
		class AActor*                                              duplicationParent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.PostEditChange
	 */
	struct APrototype_GeneratorObjective_BP_C_PostEditChange_Params
	{
	public:
		class FName                                                PropertyName;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.PostEditMove
	 */
	struct APrototype_GeneratorObjective_BP_C_PostEditMove_Params
	{
	public:
		bool                                                       bFinished;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.TickSelected
	 */
	struct APrototype_GeneratorObjective_BP_C_TickSelected_Params
	{	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.Event_OnResetStage
	 */
	struct APrototype_GeneratorObjective_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.ReceiveBeginPlay
	 */
	struct APrototype_GeneratorObjective_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.RefreshLeftSwitchPanelState
	 */
	struct APrototype_GeneratorObjective_BP_C_RefreshLeftSwitchPanelState_Params
	{	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.RefreshRightSwitchPanelState
	 */
	struct APrototype_GeneratorObjective_BP_C_RefreshRightSwitchPanelState_Params
	{	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.BndEvt__Prototype_GeneratorObjective_BP_GasContainer_InteractionPanel_BP_K2Node_ComponentBoundEvent_2_OnPanelEvent__DelegateSignature
	 */
	struct APrototype_GeneratorObjective_BP_C_BndEvt__Prototype_GeneratorObjective_BP_GasContainer_InteractionPanel_BP_K2Node_ComponentBoundEvent_2_OnPanelEvent__DelegateSignature_Params
	{
	public:
		class URBInteractiblePanelComponent*                       panel;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             pawnInteracting;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.RefreshGasReservoirPanelState
	 */
	struct APrototype_GeneratorObjective_BP_C_RefreshGasReservoirPanelState_Params
	{	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.BndEvt__Prototype_GeneratorObjective_BP_Generator_ZoneTimingPanelComponent_BP_K2Node_ComponentBoundEvent_3_OnPanelEvent__DelegateSignature
	 */
	struct APrototype_GeneratorObjective_BP_C_BndEvt__Prototype_GeneratorObjective_BP_Generator_ZoneTimingPanelComponent_BP_K2Node_ComponentBoundEvent_3_OnPanelEvent__DelegateSignature_Params
	{
	public:
		class URBInteractiblePanelComponent*                       panel;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             pawnInteracting;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.RefreshCrankPanelState
	 */
	struct APrototype_GeneratorObjective_BP_C_RefreshCrankPanelState_Params
	{	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.BndEvt__Prototype_GeneratorObjective_BP_Generator_ZoneTimingPanelComponent_BP_K2Node_ComponentBoundEvent_4_OnTimingPanelInputEvent__DelegateSignature
	 */
	struct APrototype_GeneratorObjective_BP_C_BndEvt__Prototype_GeneratorObjective_BP_Generator_ZoneTimingPanelComponent_BP_K2Node_ComponentBoundEvent_4_OnTimingPanelInputEvent__DelegateSignature_Params
	{
	public:
		class URBZoneTimingPanelComponent*                         panel;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPlayer*                                           Player;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    targetIndex;                                             // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Timestamp;                                               // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ETimingInputResultType                                     Result;                                                  // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.Event_OnCompletionStateChanged
	 */
	struct APrototype_GeneratorObjective_BP_C_Event_OnCompletionStateChanged_Params
	{	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.BndEvt__Prototype_GeneratorObjective_BP_LeftSwitchesMatchPanel_K2Node_ComponentBoundEvent_5_OnPanelEvent__DelegateSignature
	 */
	struct APrototype_GeneratorObjective_BP_C_BndEvt__Prototype_GeneratorObjective_BP_LeftSwitchesMatchPanel_K2Node_ComponentBoundEvent_5_OnPanelEvent__DelegateSignature_Params
	{
	public:
		class URBInteractiblePanelComponent*                       panel;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             pawnInteracting;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.BndEvt__Prototype_GeneratorObjective_BP_RightSwitchesMatchPanel_K2Node_ComponentBoundEvent_6_OnPanelEvent__DelegateSignature
	 */
	struct APrototype_GeneratorObjective_BP_C_BndEvt__Prototype_GeneratorObjective_BP_RightSwitchesMatchPanel_K2Node_ComponentBoundEvent_6_OnPanelEvent__DelegateSignature_Params
	{
	public:
		class URBInteractiblePanelComponent*                       panel;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             pawnInteracting;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.Event_OnInteractibleStateChanged
	 */
	struct APrototype_GeneratorObjective_BP_C_Event_OnInteractibleStateChanged_Params
	{	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.PostToggled
	 */
	struct APrototype_GeneratorObjective_BP_C_PostToggled_Params
	{
	public:
		bool                                                       bToggleEnabled;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.BndEvt__Prototype_GeneratorObjective_BP_Generator_ZoneTimingPanelComponent_BP_K2Node_ComponentBoundEvent_0_OnEnabledChanged__DelegateSignature
	 */
	struct APrototype_GeneratorObjective_BP_C_BndEvt__Prototype_GeneratorObjective_BP_Generator_ZoneTimingPanelComponent_BP_K2Node_ComponentBoundEvent_0_OnEnabledChanged__DelegateSignature_Params
	{
	public:
		class URBInteractionZoneComponent*                         Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.RefreshGeneratorState
	 */
	struct APrototype_GeneratorObjective_BP_C_RefreshGeneratorState_Params
	{	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.ToggleActivationLights
	 */
	struct APrototype_GeneratorObjective_BP_C_ToggleActivationLights_Params
	{
	public:
		bool                                                       LightState;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.Cheat_ToggleGeneratorsState
	 */
	struct APrototype_GeneratorObjective_BP_C_Cheat_ToggleGeneratorsState_Params
	{	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.ReceiveTick
	 */
	struct APrototype_GeneratorObjective_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.CrankStatusLightFlashingStarted
	 */
	struct APrototype_GeneratorObjective_BP_C_CrankStatusLightFlashingStarted_Params
	{	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.CrankStatusLightFlashingStopped
	 */
	struct APrototype_GeneratorObjective_BP_C_CrankStatusLightFlashingStopped_Params
	{	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.Event_OnBreak
	 */
	struct APrototype_GeneratorObjective_BP_C_Event_OnBreak_Params
	{	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.BndEvt__Prototype_GeneratorObjective_BP_GasContainer_InteractionPanel_BP_K2Node_ComponentBoundEvent_1_UpdateGaugeNeedle__DelegateSignature
	 */
	struct APrototype_GeneratorObjective_BP_C_BndEvt__Prototype_GeneratorObjective_BP_GasContainer_InteractionPanel_BP_K2Node_ComponentBoundEvent_1_UpdateGaugeNeedle__DelegateSignature_Params
	{
	public:
		float                                                      needleRatio;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.BndEvt__Prototype_GeneratorObjective_BP_GasContainer_InteractionPanel_BP_K2Node_ComponentBoundEvent_7_UpdateGasLight__DelegateSignature
	 */
	struct APrototype_GeneratorObjective_BP_C_BndEvt__Prototype_GeneratorObjective_BP_GasContainer_InteractionPanel_BP_K2Node_ComponentBoundEvent_7_UpdateGasLight__DelegateSignature_Params
	{
	public:
		bool                                                       bLightOn;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.Overload
	 */
	struct APrototype_GeneratorObjective_BP_C_Overload_Params
	{	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.lightCrank
	 */
	struct APrototype_GeneratorObjective_BP_C_lightCrank_Params
	{	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.lightFadeIn
	 */
	struct APrototype_GeneratorObjective_BP_C_lightFadeIn_Params
	{	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.Event_OnPreFueledStateChanged
	 */
	struct APrototype_GeneratorObjective_BP_C_Event_OnPreFueledStateChanged_Params
	{	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.BndEvt__Prototype_GeneratorObjective_BP_GasContainer_InteractionPanel_BP_K2Node_ComponentBoundEvent_8_OnPanelEvent__DelegateSignature
	 */
	struct APrototype_GeneratorObjective_BP_C_BndEvt__Prototype_GeneratorObjective_BP_GasContainer_InteractionPanel_BP_K2Node_ComponentBoundEvent_8_OnPanelEvent__DelegateSignature_Params
	{
	public:
		class URBInteractiblePanelComponent*                       panel;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             pawnInteracting;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.ExecuteUbergraph_Prototype_GeneratorObjective_BP
	 */
	struct APrototype_GeneratorObjective_BP_C_ExecuteUbergraph_Prototype_GeneratorObjective_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
