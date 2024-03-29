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
	 * 		Name   -> Function W_Briefing_Transcript_Entry.W_Briefing_Transcript_Entry_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_Briefing_Transcript_Entry_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Transcript_Entry.W_Briefing_Transcript_Entry_C.Construct");
		
		UW_Briefing_Transcript_Entry_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Transcript_Entry.W_Briefing_Transcript_Entry_C.BndEvt__W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Briefing_Transcript_Entry_C::BndEvt__W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Transcript_Entry.W_Briefing_Transcript_Entry_C.BndEvt__W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");
		
		UW_Briefing_Transcript_Entry_C_BndEvt__W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Transcript_Entry.W_Briefing_Transcript_Entry_C.Reveal
	 * 		Flags  -> ()
	 */
	void UW_Briefing_Transcript_Entry_C::Reveal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Transcript_Entry.W_Briefing_Transcript_Entry_C.Reveal");
		
		UW_Briefing_Transcript_Entry_C_Reveal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Transcript_Entry.W_Briefing_Transcript_Entry_C.SetActive
	 * 		Flags  -> ()
	 */
	void UW_Briefing_Transcript_Entry_C::SetActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Transcript_Entry.W_Briefing_Transcript_Entry_C.SetActive");
		
		UW_Briefing_Transcript_Entry_C_SetActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Transcript_Entry.W_Briefing_Transcript_Entry_C.ExecuteUbergraph_W_Briefing_Transcript_Entry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Briefing_Transcript_Entry_C::ExecuteUbergraph_W_Briefing_Transcript_Entry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Transcript_Entry.W_Briefing_Transcript_Entry_C.ExecuteUbergraph_W_Briefing_Transcript_Entry");
		
		UW_Briefing_Transcript_Entry_C_ExecuteUbergraph_W_Briefing_Transcript_Entry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Transcript_Entry.W_Briefing_Transcript_Entry_C.TranscriptEntryClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              EntryID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Briefing_Transcript_Entry_C::TranscriptEntryClicked__DelegateSignature(float EntryID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Transcript_Entry.W_Briefing_Transcript_Entry_C.TranscriptEntryClicked__DelegateSignature");
		
		UW_Briefing_Transcript_Entry_C_TranscriptEntryClicked__DelegateSignature_Params params {};
		params.EntryID = EntryID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_Briefing_Transcript_Entry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_Briefing_Transcript_Entry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Briefing_Transcript_Entry.W_Briefing_Transcript_Entry_C");
		return ptr;
	}

}


