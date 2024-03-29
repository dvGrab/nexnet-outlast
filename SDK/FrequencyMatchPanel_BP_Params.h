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
	 * Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.FixUp
	 */
	struct AFrequencyMatchPanel_BP_C_FixUp_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.Set Music Events (Server)
	 */
	struct AFrequencyMatchPanel_BP_C_SetMusicEventsServer_Params
	{
	public:
		class UAkAudioEvent*                                       StartSound;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAkAudioEvent*                                       StopSound;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.UpdateCompletionRTPC
	 */
	struct AFrequencyMatchPanel_BP_C_UpdateCompletionRTPC_Params
	{	};

	/**
	 * Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.UpdateMusic
	 */
	struct AFrequencyMatchPanel_BP_C_UpdateMusic_Params
	{	};

	/**
	 * Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.OnRep_IsPlayingMusic1
	 */
	struct AFrequencyMatchPanel_BP_C_OnRep_IsPlayingMusic1_Params
	{	};

	/**
	 * Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.UpdateOscilloscopeActivation
	 */
	struct AFrequencyMatchPanel_BP_C_UpdateOscilloscopeActivation_Params
	{	};

	/**
	 * Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.StopOscilloscope
	 */
	struct AFrequencyMatchPanel_BP_C_StopOscilloscope_Params
	{	};

	/**
	 * Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.StartOscilloscope
	 */
	struct AFrequencyMatchPanel_BP_C_StartOscilloscope_Params
	{	};

	/**
	 * Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.RefreshOscilloscope
	 */
	struct AFrequencyMatchPanel_BP_C_RefreshOscilloscope_Params
	{	};

	/**
	 * Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.RefreshCameraVisuals
	 */
	struct AFrequencyMatchPanel_BP_C_RefreshCameraVisuals_Params
	{	};

	/**
	 * Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.UserConstructionScript
	 */
	struct AFrequencyMatchPanel_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.OnPostActorsPasted
	 */
	struct AFrequencyMatchPanel_BP_C_OnPostActorsPasted_Params
	{
	public:
		TArray<class AActor*>                                      pastedActors;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.PostAddedToLevel
	 */
	struct AFrequencyMatchPanel_BP_C_PostAddedToLevel_Params
	{	};

	/**
	 * Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.PostDuplicated
	 */
	struct AFrequencyMatchPanel_BP_C_PostDuplicated_Params
	{
	public:
		class AActor*                                              duplicationParent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.PostEditChange
	 */
	struct AFrequencyMatchPanel_BP_C_PostEditChange_Params
	{
	public:
		class FName                                                PropertyName;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.PostEditMove
	 */
	struct AFrequencyMatchPanel_BP_C_PostEditMove_Params
	{
	public:
		bool                                                       bFinished;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.TickSelected
	 */
	struct AFrequencyMatchPanel_BP_C_TickSelected_Params
	{	};

	/**
	 * Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.Event_OnResetStage
	 */
	struct AFrequencyMatchPanel_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.BndEvt__FrequencyMatchPanelComponent_BP_K2Node_ComponentBoundEvent_0_OnPanelEvent__DelegateSignature
	 */
	struct AFrequencyMatchPanel_BP_C_BndEvt__FrequencyMatchPanelComponent_BP_K2Node_ComponentBoundEvent_0_OnPanelEvent__DelegateSignature_Params
	{
	public:
		class URBInteractiblePanelComponent*                       panel;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             pawnInteracting;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.ReceiveBeginPlay
	 */
	struct AFrequencyMatchPanel_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.BndEvt__FrequencyMatchPanelComponent_BP_K2Node_ComponentBoundEvent_1_OnPanelEvent__DelegateSignature
	 */
	struct AFrequencyMatchPanel_BP_C_BndEvt__FrequencyMatchPanelComponent_BP_K2Node_ComponentBoundEvent_1_OnPanelEvent__DelegateSignature_Params
	{
	public:
		class URBInteractiblePanelComponent*                       panel;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             pawnInteracting;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.PostToggled
	 */
	struct AFrequencyMatchPanel_BP_C_PostToggled_Params
	{
	public:
		bool                                                       bToggleEnabled;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.BndEvt__FrequencyMatchPanelComponent_BP_K2Node_ComponentBoundEvent_2_OnEnabledChanged__DelegateSignature
	 */
	struct AFrequencyMatchPanel_BP_C_BndEvt__FrequencyMatchPanelComponent_BP_K2Node_ComponentBoundEvent_2_OnEnabledChanged__DelegateSignature_Params
	{
	public:
		class URBInteractionZoneComponent*                         Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.BndEvt__MonitorKnobComponent_BP2_K2Node_ComponentBoundEvent_3_OnFrequencyMatchKnobCurrentRatioChanged__DelegateSignature
	 */
	struct AFrequencyMatchPanel_BP_C_BndEvt__MonitorKnobComponent_BP2_K2Node_ComponentBoundEvent_3_OnFrequencyMatchKnobCurrentRatioChanged__DelegateSignature_Params
	{
	public:
		class URBFrequencyMatchKnobComponent*                      knob;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ratio;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.BndEvt__BrightnessKnobComponent_BP_K2Node_ComponentBoundEvent_4_OnFrequencyMatchKnobCurrentRatioChanged__DelegateSignature
	 */
	struct AFrequencyMatchPanel_BP_C_BndEvt__BrightnessKnobComponent_BP_K2Node_ComponentBoundEvent_4_OnFrequencyMatchKnobCurrentRatioChanged__DelegateSignature_Params
	{
	public:
		class URBFrequencyMatchKnobComponent*                      knob;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ratio;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.BndEvt__TrackingKnobComponent_BP1_K2Node_ComponentBoundEvent_5_OnFrequencyMatchKnobCurrentRatioChanged__DelegateSignature
	 */
	struct AFrequencyMatchPanel_BP_C_BndEvt__TrackingKnobComponent_BP1_K2Node_ComponentBoundEvent_5_OnFrequencyMatchKnobCurrentRatioChanged__DelegateSignature_Params
	{
	public:
		class URBFrequencyMatchKnobComponent*                      knob;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ratio;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.BndEvt__FrequencyMatchPanelComponent_BP_K2Node_ComponentBoundEvent_6_OnPanelEvent__DelegateSignature
	 */
	struct AFrequencyMatchPanel_BP_C_BndEvt__FrequencyMatchPanelComponent_BP_K2Node_ComponentBoundEvent_6_OnPanelEvent__DelegateSignature_Params
	{
	public:
		class URBInteractiblePanelComponent*                       panel;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             pawnInteracting;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.BndEvt__FrequencyMatchPanel_BP_RandomizableHelper_K2Node_ComponentBoundEvent_7_OnRandomStateChangedEvent__DelegateSignature
	 */
	struct AFrequencyMatchPanel_BP_C_BndEvt__FrequencyMatchPanel_BP_RandomizableHelper_K2Node_ComponentBoundEvent_7_OnRandomStateChangedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.OnEditorPostLoad
	 */
	struct AFrequencyMatchPanel_BP_C_OnEditorPostLoad_Params
	{	};

	/**
	 * Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.Multicast_SetMusic
	 */
	struct AFrequencyMatchPanel_BP_C_Multicast_SetMusic_Params
	{
	public:
		class UAkAudioEvent*                                       StartEvent;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAkAudioEvent*                                       StopEvent;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.ExecuteUbergraph_FrequencyMatchPanel_BP
	 */
	struct AFrequencyMatchPanel_BP_C_ExecuteUbergraph_FrequencyMatchPanel_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
