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
	 * 		Name   -> Function Goggles_Widget.Goggles_Widget_C.CustomEvent_2
	 * 		Flags  -> ()
	 */
	void UGoggles_Widget_C::CustomEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Goggles_Widget.Goggles_Widget_C.CustomEvent_2");
		
		UGoggles_Widget_C_CustomEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Goggles_Widget.Goggles_Widget_C.ExecuteUbergraph_Goggles_Widget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGoggles_Widget_C::ExecuteUbergraph_Goggles_Widget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Goggles_Widget.Goggles_Widget_C.ExecuteUbergraph_Goggles_Widget");
		
		UGoggles_Widget_C_ExecuteUbergraph_Goggles_Widget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGoggles_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGoggles_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Goggles_Widget.Goggles_Widget_C");
		return ptr;
	}

}


