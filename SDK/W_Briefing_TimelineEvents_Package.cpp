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
	 * 		Name   -> Function W_Briefing_TimelineEvents.W_Briefing_TimelineEvents_C.Finished_CEF1E049428EE21AB58B96A8441038EA
	 * 		Flags  -> ()
	 */
	void UW_Briefing_TimelineEvents_C::Finished_CEF1E049428EE21AB58B96A8441038EA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_TimelineEvents.W_Briefing_TimelineEvents_C.Finished_CEF1E049428EE21AB58B96A8441038EA");
		
		UW_Briefing_TimelineEvents_C_Finished_CEF1E049428EE21AB58B96A8441038EA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_TimelineEvents.W_Briefing_TimelineEvents_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<float, struct FTimelineEvent>                 EventEntries                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_Briefing_TimelineEvents_C::Initialize(TMap<float, struct FTimelineEvent> EventEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_TimelineEvents.W_Briefing_TimelineEvents_C.Initialize");
		
		UW_Briefing_TimelineEvents_C_Initialize_Params params {};
		params.EventEntries = EventEntries;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_TimelineEvents.W_Briefing_TimelineEvents_C.AddEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              EventId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Briefing_TimelineEvents_C::AddEvent(float EventId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_TimelineEvents.W_Briefing_TimelineEvents_C.AddEvent");
		
		UW_Briefing_TimelineEvents_C_AddEvent_Params params {};
		params.EventId = EventId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_TimelineEvents.W_Briefing_TimelineEvents_C.EventClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              EventAudioStart                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              EventAudioDuration                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Briefing_TimelineEvents_C::EventClicked(float EventAudioStart, float EventAudioDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_TimelineEvents.W_Briefing_TimelineEvents_C.EventClicked");
		
		UW_Briefing_TimelineEvents_C_EventClicked_Params params {};
		params.EventAudioStart = EventAudioStart;
		params.EventAudioDuration = EventAudioDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_TimelineEvents.W_Briefing_TimelineEvents_C.ExecuteUbergraph_W_Briefing_TimelineEvents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Briefing_TimelineEvents_C::ExecuteUbergraph_W_Briefing_TimelineEvents(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_TimelineEvents.W_Briefing_TimelineEvents_C.ExecuteUbergraph_W_Briefing_TimelineEvents");
		
		UW_Briefing_TimelineEvents_C_ExecuteUbergraph_W_Briefing_TimelineEvents_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_TimelineEvents.W_Briefing_TimelineEvents_C.OnEventClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              EventAudioStart                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              EventAudioDuration                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Briefing_TimelineEvents_C::OnEventClicked__DelegateSignature(float EventAudioStart, float EventAudioDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_TimelineEvents.W_Briefing_TimelineEvents_C.OnEventClicked__DelegateSignature");
		
		UW_Briefing_TimelineEvents_C_OnEventClicked__DelegateSignature_Params params {};
		params.EventAudioStart = EventAudioStart;
		params.EventAudioDuration = EventAudioDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_Briefing_TimelineEvents_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_Briefing_TimelineEvents_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Briefing_TimelineEvents.W_Briefing_TimelineEvents_C");
		return ptr;
	}

}


