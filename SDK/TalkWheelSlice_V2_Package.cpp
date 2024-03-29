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
	 * 		Name   -> Function TalkWheelSlice_V2.TalkWheelSlice_V2_C.Downlight
	 * 		Flags  -> ()
	 */
	void UTalkWheelSlice_V2_C::Downlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TalkWheelSlice_V2.TalkWheelSlice_V2_C.Downlight");
		
		UTalkWheelSlice_V2_C_Downlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TalkWheelSlice_V2.TalkWheelSlice_V2_C.Highlight
	 * 		Flags  -> ()
	 */
	void UTalkWheelSlice_V2_C::Highlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TalkWheelSlice_V2.TalkWheelSlice_V2_C.Highlight");
		
		UTalkWheelSlice_V2_C_Highlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TalkWheelSlice_V2.TalkWheelSlice_V2_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTalkWheelSlice_V2_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TalkWheelSlice_V2.TalkWheelSlice_V2_C.PreConstruct");
		
		UTalkWheelSlice_V2_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TalkWheelSlice_V2.TalkWheelSlice_V2_C.ExecuteUbergraph_TalkWheelSlice_V2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTalkWheelSlice_V2_C::ExecuteUbergraph_TalkWheelSlice_V2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TalkWheelSlice_V2.TalkWheelSlice_V2_C.ExecuteUbergraph_TalkWheelSlice_V2");
		
		UTalkWheelSlice_V2_C_ExecuteUbergraph_TalkWheelSlice_V2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTalkWheelSlice_V2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTalkWheelSlice_V2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TalkWheelSlice_V2.TalkWheelSlice_V2_C");
		return ptr;
	}

}


