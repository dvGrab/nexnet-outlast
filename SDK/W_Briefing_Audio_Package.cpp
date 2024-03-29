/**
 * Name: READYORNOT
 * Version: 0.0.1
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
	 * 		Name   -> Function W_Briefing_Audio.W_Briefing_Audio_C.Set Current Audio Text
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CurrentTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Briefing_Audio_C::Set_Current_Audio_Text(float CurrentTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Audio.W_Briefing_Audio_C.Set Current Audio Text");
		
		UW_Briefing_Audio_C_Set_Current_Audio_Text_Params params {};
		params.CurrentTime = CurrentTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Audio.W_Briefing_Audio_C.GetEventEntries
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ForceUpdate                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TMap<float, struct FTimelineEvent>                 EventEntries1                                              (Parm, OutParm)
	 */
	void UW_Briefing_Audio_C::GetEventEntries(bool ForceUpdate, TMap<float, struct FTimelineEvent>* EventEntries1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Audio.W_Briefing_Audio_C.GetEventEntries");
		
		UW_Briefing_Audio_C_GetEventEntries_Params params {};
		params.ForceUpdate = ForceUpdate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EventEntries1 != nullptr)
			*EventEntries1 = params.EventEntries1;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Audio.W_Briefing_Audio_C.SetAudioPlayProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundWave*                                  PlayingSoundWave                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PlaybackPercent                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Briefing_Audio_C::SetAudioPlayProgress(class USoundWave* PlayingSoundWave, float PlaybackPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Audio.W_Briefing_Audio_C.SetAudioPlayProgress");
		
		UW_Briefing_Audio_C_SetAudioPlayProgress_Params params {};
		params.PlayingSoundWave = PlayingSoundWave;
		params.PlaybackPercent = PlaybackPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Audio.W_Briefing_Audio_C.SetLoop
	 * 		Flags  -> ()
	 */
	void UW_Briefing_Audio_C::SetLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Audio.W_Briefing_Audio_C.SetLoop");
		
		UW_Briefing_Audio_C_SetLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Audio.W_Briefing_Audio_C.Restart
	 * 		Flags  -> ()
	 */
	void UW_Briefing_Audio_C::Restart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Audio.W_Briefing_Audio_C.Restart");
		
		UW_Briefing_Audio_C_Restart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Audio.W_Briefing_Audio_C.Stop
	 * 		Flags  -> ()
	 */
	void UW_Briefing_Audio_C::Stop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Audio.W_Briefing_Audio_C.Stop");
		
		UW_Briefing_Audio_C_Stop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Audio.W_Briefing_Audio_C.GetTimerText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time_sec                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        TimerText                                                  (Parm, OutParm)
	 */
	void UW_Briefing_Audio_C::GetTimerText(float Time_sec, class FText* TimerText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Audio.W_Briefing_Audio_C.GetTimerText");
		
		UW_Briefing_Audio_C_GetTimerText_Params params {};
		params.Time_sec = Time_sec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TimerText != nullptr)
			*TimerText = params.TimerText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Audio.W_Briefing_Audio_C.Play
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              StartTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Briefing_Audio_C::Play(float StartTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Audio.W_Briefing_Audio_C.Play");
		
		UW_Briefing_Audio_C_Play_Params params {};
		params.StartTime = StartTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_2_Loop__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Briefing_Audio_C::BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_2_Loop__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_2_Loop__DelegateSignature");
		
		UW_Briefing_Audio_C_BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_2_Loop__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_4_Rewind__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Briefing_Audio_C::BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_4_Rewind__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_4_Rewind__DelegateSignature");
		
		UW_Briefing_Audio_C_BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_4_Rewind__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_5_FastForward__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Briefing_Audio_C::BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_5_FastForward__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_5_FastForward__DelegateSignature");
		
		UW_Briefing_Audio_C_BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_5_FastForward__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_6_Restart__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Briefing_Audio_C::BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_6_Restart__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_6_Restart__DelegateSignature");
		
		UW_Briefing_Audio_C_BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_6_Restart__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Audio.W_Briefing_Audio_C.OnAudioFinished
	 * 		Flags  -> ()
	 */
	void UW_Briefing_Audio_C::OnAudioFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Audio.W_Briefing_Audio_C.OnAudioFinished");
		
		UW_Briefing_Audio_C_OnAudioFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Audio.W_Briefing_Audio_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Briefing_Audio_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Audio.W_Briefing_Audio_C.Tick");
		
		UW_Briefing_Audio_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Audio.W_Briefing_Audio_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_Briefing_Audio_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Audio.W_Briefing_Audio_C.PreConstruct");
		
		UW_Briefing_Audio_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_1_Stop__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Briefing_Audio_C::BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_1_Stop__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_1_Stop__DelegateSignature");
		
		UW_Briefing_Audio_C_BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_1_Stop__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_0_Play__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Briefing_Audio_C::BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_0_Play__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_0_Play__DelegateSignature");
		
		UW_Briefing_Audio_C_BndEvt__W_Briefing_AudioControls_K2Node_ComponentBoundEvent_0_Play__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Audio.W_Briefing_Audio_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMissionAudio                               Audio                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		TArray<struct FTimelineEvent>                      TimelineEvents                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_Briefing_Audio_C::Initialize(const struct FMissionAudio& Audio, TArray<struct FTimelineEvent> TimelineEvents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Audio.W_Briefing_Audio_C.Initialize");
		
		UW_Briefing_Audio_C_Initialize_Params params {};
		params.Audio = Audio;
		params.TimelineEvents = TimelineEvents;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_Transcript_K2Node_ComponentBoundEvent_7_TranscriptClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ClipStartTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Briefing_Audio_C::BndEvt__W_Briefing_Transcript_K2Node_ComponentBoundEvent_7_TranscriptClicked__DelegateSignature(float ClipStartTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_Transcript_K2Node_ComponentBoundEvent_7_TranscriptClicked__DelegateSignature");
		
		UW_Briefing_Audio_C_BndEvt__W_Briefing_Transcript_K2Node_ComponentBoundEvent_7_TranscriptClicked__DelegateSignature_Params params {};
		params.ClipStartTime = ClipStartTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_3_Play__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Briefing_Audio_C::BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_3_Play__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_3_Play__DelegateSignature");
		
		UW_Briefing_Audio_C_BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_3_Play__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_8_Stop__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Briefing_Audio_C::BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_8_Stop__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_8_Stop__DelegateSignature");
		
		UW_Briefing_Audio_C_BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_8_Stop__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_9_Rewind__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Briefing_Audio_C::BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_9_Rewind__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_9_Rewind__DelegateSignature");
		
		UW_Briefing_Audio_C_BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_9_Rewind__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_10_Restart__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Briefing_Audio_C::BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_10_Restart__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_10_Restart__DelegateSignature");
		
		UW_Briefing_Audio_C_BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_10_Restart__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_11_Loop__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Briefing_Audio_C::BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_11_Loop__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_11_Loop__DelegateSignature");
		
		UW_Briefing_Audio_C_BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_11_Loop__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_12_FastForward__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Briefing_Audio_C::BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_12_FastForward__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_12_FastForward__DelegateSignature");
		
		UW_Briefing_Audio_C_BndEvt__W_Briefing_AudioControls_1_K2Node_ComponentBoundEvent_12_FastForward__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_Timeline_TrackWave_Simple_K2Node_ComponentBoundEvent_13_TimelineEventFired__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              EventId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Briefing_Audio_C::BndEvt__W_Briefing_Timeline_TrackWave_Simple_K2Node_ComponentBoundEvent_13_TimelineEventFired__DelegateSignature(float EventId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__W_Briefing_Timeline_TrackWave_Simple_K2Node_ComponentBoundEvent_13_TimelineEventFired__DelegateSignature");
		
		UW_Briefing_Audio_C_BndEvt__W_Briefing_Timeline_TrackWave_Simple_K2Node_ComponentBoundEvent_13_TimelineEventFired__DelegateSignature_Params params {};
		params.EventId = EventId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__Events_K2Node_ComponentBoundEvent_15_OnEventClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              EventAudioStart                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              EventAudioDuration                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Briefing_Audio_C::BndEvt__Events_K2Node_ComponentBoundEvent_15_OnEventClicked__DelegateSignature(float EventAudioStart, float EventAudioDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Audio.W_Briefing_Audio_C.BndEvt__Events_K2Node_ComponentBoundEvent_15_OnEventClicked__DelegateSignature");
		
		UW_Briefing_Audio_C_BndEvt__Events_K2Node_ComponentBoundEvent_15_OnEventClicked__DelegateSignature_Params params {};
		params.EventAudioStart = EventAudioStart;
		params.EventAudioDuration = EventAudioDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Audio.W_Briefing_Audio_C.Destruct
	 * 		Flags  -> ()
	 */
	void UW_Briefing_Audio_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Audio.W_Briefing_Audio_C.Destruct");
		
		UW_Briefing_Audio_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Audio.W_Briefing_Audio_C.ExecuteUbergraph_W_Briefing_Audio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Briefing_Audio_C::ExecuteUbergraph_W_Briefing_Audio(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Audio.W_Briefing_Audio_C.ExecuteUbergraph_W_Briefing_Audio");
		
		UW_Briefing_Audio_C_ExecuteUbergraph_W_Briefing_Audio_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_Briefing_Audio_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_Briefing_Audio_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Briefing_Audio.W_Briefing_Audio_C");
		return ptr;
	}

}


