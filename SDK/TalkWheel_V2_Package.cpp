/**
 * Name: TRIALS
 * Version: FINAL
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
	 * 		Name   -> Function TalkWheel_V2.TalkWheel_V2_C.RefreshSlices
	 * 		Flags  -> ()
	 */
	void UTalkWheel_V2_C::RefreshSlices()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TalkWheel_V2.TalkWheel_V2_C.RefreshSlices");
		
		UTalkWheel_V2_C_RefreshSlices_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TalkWheel_V2.TalkWheel_V2_C.Highlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SliceIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTalkWheel_V2_C::Highlight(int32_t SliceIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TalkWheel_V2.TalkWheel_V2_C.Highlight");
		
		UTalkWheel_V2_C_Highlight_Params params {};
		params.SliceIndex = SliceIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TalkWheel_V2.TalkWheel_V2_C.ShouldShow
	 * 		Flags  -> ()
	 */
	bool UTalkWheel_V2_C::ShouldShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TalkWheel_V2.TalkWheel_V2_C.ShouldShow");
		
		UTalkWheel_V2_C_ShouldShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TalkWheel_V2.TalkWheel_V2_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTalkWheel_V2_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TalkWheel_V2.TalkWheel_V2_C.PreConstruct");
		
		UTalkWheel_V2_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TalkWheel_V2.TalkWheel_V2_C.Event_Show
	 * 		Flags  -> ()
	 */
	void UTalkWheel_V2_C::Event_Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TalkWheel_V2.TalkWheel_V2_C.Event_Show");
		
		UTalkWheel_V2_C_Event_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TalkWheel_V2.TalkWheel_V2_C.Event_Hide
	 * 		Flags  -> ()
	 */
	void UTalkWheel_V2_C::Event_Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TalkWheel_V2.TalkWheel_V2_C.Event_Hide");
		
		UTalkWheel_V2_C_Event_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TalkWheel_V2.TalkWheel_V2_C.Event_HighlightWheel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            wheelIndexValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTalkWheel_V2_C::Event_HighlightWheel(int32_t wheelIndexValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TalkWheel_V2.TalkWheel_V2_C.Event_HighlightWheel");
		
		UTalkWheel_V2_C_Event_HighlightWheel_Params params {};
		params.wheelIndexValue = wheelIndexValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TalkWheel_V2.TalkWheel_V2_C.Event_RefreshSlices
	 * 		Flags  -> ()
	 */
	void UTalkWheel_V2_C::Event_RefreshSlices()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TalkWheel_V2.TalkWheel_V2_C.Event_RefreshSlices");
		
		UTalkWheel_V2_C_Event_RefreshSlices_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TalkWheel_V2.TalkWheel_V2_C.ExecuteUbergraph_TalkWheel_V2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTalkWheel_V2_C::ExecuteUbergraph_TalkWheel_V2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TalkWheel_V2.TalkWheel_V2_C.ExecuteUbergraph_TalkWheel_V2");
		
		UTalkWheel_V2_C_ExecuteUbergraph_TalkWheel_V2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTalkWheel_V2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTalkWheel_V2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TalkWheel_V2.TalkWheel_V2_C");
		return ptr;
	}

}


