/**
 * Name: OUTLAST
 * Version: 0.0.2_fixed
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.FixUp
	 * 		Flags  -> ()
	 */
	bool AFrequencyMatchPanel_BP_C::FixUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.FixUp");
		
		AFrequencyMatchPanel_BP_C_FixUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.Set Music Events (Server)
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAudioEvent*                               StartSound                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAkAudioEvent*                               StopSound                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrequencyMatchPanel_BP_C::SetMusicEventsServer(class UAkAudioEvent* StartSound, class UAkAudioEvent* StopSound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.Set Music Events (Server)");
		
		AFrequencyMatchPanel_BP_C_SetMusicEventsServer_Params params {};
		params.StartSound = StartSound;
		params.StopSound = StopSound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.UpdateCompletionRTPC
	 * 		Flags  -> ()
	 */
	void AFrequencyMatchPanel_BP_C::UpdateCompletionRTPC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.UpdateCompletionRTPC");
		
		AFrequencyMatchPanel_BP_C_UpdateCompletionRTPC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.UpdateMusic
	 * 		Flags  -> ()
	 */
	void AFrequencyMatchPanel_BP_C::UpdateMusic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.UpdateMusic");
		
		AFrequencyMatchPanel_BP_C_UpdateMusic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.OnRep_IsPlayingMusic1
	 * 		Flags  -> ()
	 */
	void AFrequencyMatchPanel_BP_C::OnRep_IsPlayingMusic1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.OnRep_IsPlayingMusic1");
		
		AFrequencyMatchPanel_BP_C_OnRep_IsPlayingMusic1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.UpdateOscilloscopeActivation
	 * 		Flags  -> ()
	 */
	void AFrequencyMatchPanel_BP_C::UpdateOscilloscopeActivation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.UpdateOscilloscopeActivation");
		
		AFrequencyMatchPanel_BP_C_UpdateOscilloscopeActivation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.StopOscilloscope
	 * 		Flags  -> ()
	 */
	void AFrequencyMatchPanel_BP_C::StopOscilloscope()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.StopOscilloscope");
		
		AFrequencyMatchPanel_BP_C_StopOscilloscope_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.StartOscilloscope
	 * 		Flags  -> ()
	 */
	void AFrequencyMatchPanel_BP_C::StartOscilloscope()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.StartOscilloscope");
		
		AFrequencyMatchPanel_BP_C_StartOscilloscope_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.RefreshOscilloscope
	 * 		Flags  -> ()
	 */
	void AFrequencyMatchPanel_BP_C::RefreshOscilloscope()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.RefreshOscilloscope");
		
		AFrequencyMatchPanel_BP_C_RefreshOscilloscope_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.RefreshCameraVisuals
	 * 		Flags  -> ()
	 */
	void AFrequencyMatchPanel_BP_C::RefreshCameraVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.RefreshCameraVisuals");
		
		AFrequencyMatchPanel_BP_C_RefreshCameraVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AFrequencyMatchPanel_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.UserConstructionScript");
		
		AFrequencyMatchPanel_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.OnPostActorsPasted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              pastedActors                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AFrequencyMatchPanel_BP_C::OnPostActorsPasted(TArray<class AActor*> pastedActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.OnPostActorsPasted");
		
		AFrequencyMatchPanel_BP_C_OnPostActorsPasted_Params params {};
		params.pastedActors = pastedActors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.PostAddedToLevel
	 * 		Flags  -> ()
	 */
	void AFrequencyMatchPanel_BP_C::PostAddedToLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.PostAddedToLevel");
		
		AFrequencyMatchPanel_BP_C_PostAddedToLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.PostDuplicated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      duplicationParent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrequencyMatchPanel_BP_C::PostDuplicated(class AActor* duplicationParent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.PostDuplicated");
		
		AFrequencyMatchPanel_BP_C_PostDuplicated_Params params {};
		params.duplicationParent = duplicationParent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.PostEditChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        PropertyName                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrequencyMatchPanel_BP_C::PostEditChange(const class FName& PropertyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.PostEditChange");
		
		AFrequencyMatchPanel_BP_C_PostEditChange_Params params {};
		params.PropertyName = PropertyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.PostEditMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFinished                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFrequencyMatchPanel_BP_C::PostEditMove(bool bFinished)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.PostEditMove");
		
		AFrequencyMatchPanel_BP_C_PostEditMove_Params params {};
		params.bFinished = bFinished;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.TickSelected
	 * 		Flags  -> ()
	 */
	void AFrequencyMatchPanel_BP_C::TickSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.TickSelected");
		
		AFrequencyMatchPanel_BP_C_TickSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void AFrequencyMatchPanel_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.Event_OnResetStage");
		
		AFrequencyMatchPanel_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.BndEvt__FrequencyMatchPanelComponent_BP_K2Node_ComponentBoundEvent_0_OnPanelEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractiblePanelComponent*               panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     pawnInteracting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrequencyMatchPanel_BP_C::BndEvt__FrequencyMatchPanelComponent_BP_K2Node_ComponentBoundEvent_0_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.BndEvt__FrequencyMatchPanelComponent_BP_K2Node_ComponentBoundEvent_0_OnPanelEvent__DelegateSignature");
		
		AFrequencyMatchPanel_BP_C_BndEvt__FrequencyMatchPanelComponent_BP_K2Node_ComponentBoundEvent_0_OnPanelEvent__DelegateSignature_Params params {};
		params.panel = panel;
		params.pawnInteracting = pawnInteracting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AFrequencyMatchPanel_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.ReceiveBeginPlay");
		
		AFrequencyMatchPanel_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.BndEvt__FrequencyMatchPanelComponent_BP_K2Node_ComponentBoundEvent_1_OnPanelEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractiblePanelComponent*               panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     pawnInteracting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrequencyMatchPanel_BP_C::BndEvt__FrequencyMatchPanelComponent_BP_K2Node_ComponentBoundEvent_1_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.BndEvt__FrequencyMatchPanelComponent_BP_K2Node_ComponentBoundEvent_1_OnPanelEvent__DelegateSignature");
		
		AFrequencyMatchPanel_BP_C_BndEvt__FrequencyMatchPanelComponent_BP_K2Node_ComponentBoundEvent_1_OnPanelEvent__DelegateSignature_Params params {};
		params.panel = panel;
		params.pawnInteracting = pawnInteracting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.PostToggled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bToggleEnabled                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFrequencyMatchPanel_BP_C::PostToggled(bool bToggleEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.PostToggled");
		
		AFrequencyMatchPanel_BP_C_PostToggled_Params params {};
		params.bToggleEnabled = bToggleEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.BndEvt__FrequencyMatchPanelComponent_BP_K2Node_ComponentBoundEvent_2_OnEnabledChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractionZoneComponent*                 Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrequencyMatchPanel_BP_C::BndEvt__FrequencyMatchPanelComponent_BP_K2Node_ComponentBoundEvent_2_OnEnabledChanged__DelegateSignature(class URBInteractionZoneComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.BndEvt__FrequencyMatchPanelComponent_BP_K2Node_ComponentBoundEvent_2_OnEnabledChanged__DelegateSignature");
		
		AFrequencyMatchPanel_BP_C_BndEvt__FrequencyMatchPanelComponent_BP_K2Node_ComponentBoundEvent_2_OnEnabledChanged__DelegateSignature_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.BndEvt__MonitorKnobComponent_BP2_K2Node_ComponentBoundEvent_3_OnFrequencyMatchKnobCurrentRatioChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBFrequencyMatchKnobComponent*              knob                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ratio                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrequencyMatchPanel_BP_C::BndEvt__MonitorKnobComponent_BP2_K2Node_ComponentBoundEvent_3_OnFrequencyMatchKnobCurrentRatioChanged__DelegateSignature(class URBFrequencyMatchKnobComponent* knob, float ratio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.BndEvt__MonitorKnobComponent_BP2_K2Node_ComponentBoundEvent_3_OnFrequencyMatchKnobCurrentRatioChanged__DelegateSignature");
		
		AFrequencyMatchPanel_BP_C_BndEvt__MonitorKnobComponent_BP2_K2Node_ComponentBoundEvent_3_OnFrequencyMatchKnobCurrentRatioChanged__DelegateSignature_Params params {};
		params.knob = knob;
		params.ratio = ratio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.BndEvt__BrightnessKnobComponent_BP_K2Node_ComponentBoundEvent_4_OnFrequencyMatchKnobCurrentRatioChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBFrequencyMatchKnobComponent*              knob                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ratio                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrequencyMatchPanel_BP_C::BndEvt__BrightnessKnobComponent_BP_K2Node_ComponentBoundEvent_4_OnFrequencyMatchKnobCurrentRatioChanged__DelegateSignature(class URBFrequencyMatchKnobComponent* knob, float ratio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.BndEvt__BrightnessKnobComponent_BP_K2Node_ComponentBoundEvent_4_OnFrequencyMatchKnobCurrentRatioChanged__DelegateSignature");
		
		AFrequencyMatchPanel_BP_C_BndEvt__BrightnessKnobComponent_BP_K2Node_ComponentBoundEvent_4_OnFrequencyMatchKnobCurrentRatioChanged__DelegateSignature_Params params {};
		params.knob = knob;
		params.ratio = ratio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.BndEvt__TrackingKnobComponent_BP1_K2Node_ComponentBoundEvent_5_OnFrequencyMatchKnobCurrentRatioChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBFrequencyMatchKnobComponent*              knob                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ratio                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrequencyMatchPanel_BP_C::BndEvt__TrackingKnobComponent_BP1_K2Node_ComponentBoundEvent_5_OnFrequencyMatchKnobCurrentRatioChanged__DelegateSignature(class URBFrequencyMatchKnobComponent* knob, float ratio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.BndEvt__TrackingKnobComponent_BP1_K2Node_ComponentBoundEvent_5_OnFrequencyMatchKnobCurrentRatioChanged__DelegateSignature");
		
		AFrequencyMatchPanel_BP_C_BndEvt__TrackingKnobComponent_BP1_K2Node_ComponentBoundEvent_5_OnFrequencyMatchKnobCurrentRatioChanged__DelegateSignature_Params params {};
		params.knob = knob;
		params.ratio = ratio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.BndEvt__FrequencyMatchPanelComponent_BP_K2Node_ComponentBoundEvent_6_OnPanelEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractiblePanelComponent*               panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     pawnInteracting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrequencyMatchPanel_BP_C::BndEvt__FrequencyMatchPanelComponent_BP_K2Node_ComponentBoundEvent_6_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.BndEvt__FrequencyMatchPanelComponent_BP_K2Node_ComponentBoundEvent_6_OnPanelEvent__DelegateSignature");
		
		AFrequencyMatchPanel_BP_C_BndEvt__FrequencyMatchPanelComponent_BP_K2Node_ComponentBoundEvent_6_OnPanelEvent__DelegateSignature_Params params {};
		params.panel = panel;
		params.pawnInteracting = pawnInteracting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.BndEvt__FrequencyMatchPanel_BP_RandomizableHelper_K2Node_ComponentBoundEvent_7_OnRandomStateChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AFrequencyMatchPanel_BP_C::BndEvt__FrequencyMatchPanel_BP_RandomizableHelper_K2Node_ComponentBoundEvent_7_OnRandomStateChangedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.BndEvt__FrequencyMatchPanel_BP_RandomizableHelper_K2Node_ComponentBoundEvent_7_OnRandomStateChangedEvent__DelegateSignature");
		
		AFrequencyMatchPanel_BP_C_BndEvt__FrequencyMatchPanel_BP_RandomizableHelper_K2Node_ComponentBoundEvent_7_OnRandomStateChangedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.OnEditorPostLoad
	 * 		Flags  -> ()
	 */
	void AFrequencyMatchPanel_BP_C::OnEditorPostLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.OnEditorPostLoad");
		
		AFrequencyMatchPanel_BP_C_OnEditorPostLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.Multicast_SetMusic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAudioEvent*                               StartEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAkAudioEvent*                               StopEvent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrequencyMatchPanel_BP_C::Multicast_SetMusic(class UAkAudioEvent* StartEvent, class UAkAudioEvent* StopEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.Multicast_SetMusic");
		
		AFrequencyMatchPanel_BP_C_Multicast_SetMusic_Params params {};
		params.StartEvent = StartEvent;
		params.StopEvent = StopEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.ExecuteUbergraph_FrequencyMatchPanel_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrequencyMatchPanel_BP_C::ExecuteUbergraph_FrequencyMatchPanel_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C.ExecuteUbergraph_FrequencyMatchPanel_BP");
		
		AFrequencyMatchPanel_BP_C_ExecuteUbergraph_FrequencyMatchPanel_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFrequencyMatchPanel_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFrequencyMatchPanel_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FrequencyMatchPanel_BP.FrequencyMatchPanel_BP_C");
		return ptr;
	}

}


