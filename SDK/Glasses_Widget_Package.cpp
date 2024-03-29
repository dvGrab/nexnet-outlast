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
	 * 		Name   -> Function Glasses_Widget.Glasses_Widget_C.CustomEvent_2
	 * 		Flags  -> ()
	 */
	void UGlasses_Widget_C::CustomEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Glasses_Widget.Glasses_Widget_C.CustomEvent_2");
		
		UGlasses_Widget_C_CustomEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Glasses_Widget.Glasses_Widget_C.ExecuteUbergraph_Glasses_Widget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGlasses_Widget_C::ExecuteUbergraph_Glasses_Widget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Glasses_Widget.Glasses_Widget_C.ExecuteUbergraph_Glasses_Widget");
		
		UGlasses_Widget_C_ExecuteUbergraph_Glasses_Widget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGlasses_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGlasses_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Glasses_Widget.Glasses_Widget_C");
		return ptr;
	}

}


