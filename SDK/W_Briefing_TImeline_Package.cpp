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
	 * 		Name   -> Function W_Briefing_TImeline.W_Briefing_TImeline_C.Playing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CurrentPlayTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Briefing_TImeline_C::Playing(float CurrentPlayTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_TImeline.W_Briefing_TImeline_C.Playing");
		
		UW_Briefing_TImeline_C_Playing_Params params {};
		params.CurrentPlayTime = CurrentPlayTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_TImeline.W_Briefing_TImeline_C.SetPlayState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_Briefing_Audio_PlayStates                        AudioPlayState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Briefing_TImeline_C::SetPlayState(E_Briefing_Audio_PlayStates AudioPlayState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_TImeline.W_Briefing_TImeline_C.SetPlayState");
		
		UW_Briefing_TImeline_C_SetPlayState_Params params {};
		params.AudioPlayState = AudioPlayState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_TImeline.W_Briefing_TImeline_C.AudioPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Start                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Briefing_TImeline_C::AudioPlay(float Start)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_TImeline.W_Briefing_TImeline_C.AudioPlay");
		
		UW_Briefing_TImeline_C_AudioPlay_Params params {};
		params.Start = Start;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_TImeline.W_Briefing_TImeline_C.AudioRestart
	 * 		Flags  -> ()
	 */
	void UW_Briefing_TImeline_C::AudioRestart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_TImeline.W_Briefing_TImeline_C.AudioRestart");
		
		UW_Briefing_TImeline_C_AudioRestart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_TImeline.W_Briefing_TImeline_C.AudioPause
	 * 		Flags  -> ()
	 */
	void UW_Briefing_TImeline_C::AudioPause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_TImeline.W_Briefing_TImeline_C.AudioPause");
		
		UW_Briefing_TImeline_C_AudioPause_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_TImeline.W_Briefing_TImeline_C.AudioScrub
	 * 		Flags  -> ()
	 */
	void UW_Briefing_TImeline_C::AudioScrub()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_TImeline.W_Briefing_TImeline_C.AudioScrub");
		
		UW_Briefing_TImeline_C_AudioScrub_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_TImeline.W_Briefing_TImeline_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_Briefing_TImeline_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_TImeline.W_Briefing_TImeline_C.PreConstruct");
		
		UW_Briefing_TImeline_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_TImeline.W_Briefing_TImeline_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FTimelineEvent>                      Events                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class USoundWave*                                  AudioWaveAsset                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Briefing_TImeline_C::Initialize(TArray<struct FTimelineEvent> Events, class USoundWave* AudioWaveAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_TImeline.W_Briefing_TImeline_C.Initialize");
		
		UW_Briefing_TImeline_C_Initialize_Params params {};
		params.Events = Events;
		params.AudioWaveAsset = AudioWaveAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_TImeline.W_Briefing_TImeline_C.DemoMode
	 * 		Flags  -> ()
	 */
	void UW_Briefing_TImeline_C::DemoMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_TImeline.W_Briefing_TImeline_C.DemoMode");
		
		UW_Briefing_TImeline_C_DemoMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_TImeline.W_Briefing_TImeline_C.BndEvt__W_Briefing_Timeline_TrackWave_K2Node_ComponentBoundEvent_1_TimelineEventEnded__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              EventId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Briefing_TImeline_C::BndEvt__W_Briefing_Timeline_TrackWave_K2Node_ComponentBoundEvent_1_TimelineEventEnded__DelegateSignature(float EventId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_TImeline.W_Briefing_TImeline_C.BndEvt__W_Briefing_Timeline_TrackWave_K2Node_ComponentBoundEvent_1_TimelineEventEnded__DelegateSignature");
		
		UW_Briefing_TImeline_C_BndEvt__W_Briefing_Timeline_TrackWave_K2Node_ComponentBoundEvent_1_TimelineEventEnded__DelegateSignature_Params params {};
		params.EventId = EventId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_TImeline.W_Briefing_TImeline_C.ExecuteUbergraph_W_Briefing_TImeline
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Briefing_TImeline_C::ExecuteUbergraph_W_Briefing_TImeline(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_TImeline.W_Briefing_TImeline_C.ExecuteUbergraph_W_Briefing_TImeline");
		
		UW_Briefing_TImeline_C_ExecuteUbergraph_W_Briefing_TImeline_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_Briefing_TImeline_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_Briefing_TImeline_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Briefing_TImeline.W_Briefing_TImeline_C");
		return ptr;
	}

}


