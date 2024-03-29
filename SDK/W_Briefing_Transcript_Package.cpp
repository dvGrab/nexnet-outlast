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
	 * 		Name   -> Function W_Briefing_Transcript.W_Briefing_Transcript_C.HighlightEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              EntryID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Briefing_Transcript_C::HighlightEntry(float EntryID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Transcript.W_Briefing_Transcript_C.HighlightEntry");
		
		UW_Briefing_Transcript_C_HighlightEntry_Params params {};
		params.EntryID = EntryID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Transcript.W_Briefing_Transcript_C.Playing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CurrentPlayTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Briefing_Transcript_C::Playing(float CurrentPlayTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Transcript.W_Briefing_Transcript_C.Playing");
		
		UW_Briefing_Transcript_C_Playing_Params params {};
		params.CurrentPlayTime = CurrentPlayTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Transcript.W_Briefing_Transcript_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_Briefing_Transcript_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Transcript.W_Briefing_Transcript_C.Construct");
		
		UW_Briefing_Transcript_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Transcript.W_Briefing_Transcript_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FTranscript>                         TranscriptEvents                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_Briefing_Transcript_C::Initialize(TArray<struct FTranscript> TranscriptEvents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Transcript.W_Briefing_Transcript_C.Initialize");
		
		UW_Briefing_Transcript_C_Initialize_Params params {};
		params.TranscriptEvents = TranscriptEvents;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Transcript.W_Briefing_Transcript_C.OnTranscriptEntryClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              EntryID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Briefing_Transcript_C::OnTranscriptEntryClicked(float EntryID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Transcript.W_Briefing_Transcript_C.OnTranscriptEntryClicked");
		
		UW_Briefing_Transcript_C_OnTranscriptEntryClicked_Params params {};
		params.EntryID = EntryID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Transcript.W_Briefing_Transcript_C.ExecuteUbergraph_W_Briefing_Transcript
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Briefing_Transcript_C::ExecuteUbergraph_W_Briefing_Transcript(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Transcript.W_Briefing_Transcript_C.ExecuteUbergraph_W_Briefing_Transcript");
		
		UW_Briefing_Transcript_C_ExecuteUbergraph_W_Briefing_Transcript_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Transcript.W_Briefing_Transcript_C.TranscriptClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ClipStartTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Briefing_Transcript_C::TranscriptClicked__DelegateSignature(float ClipStartTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Transcript.W_Briefing_Transcript_C.TranscriptClicked__DelegateSignature");
		
		UW_Briefing_Transcript_C_TranscriptClicked__DelegateSignature_Params params {};
		params.ClipStartTime = ClipStartTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_Briefing_Transcript_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_Briefing_Transcript_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Briefing_Transcript.W_Briefing_Transcript_C");
		return ptr;
	}

}


