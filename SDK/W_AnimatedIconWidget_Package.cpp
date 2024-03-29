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
	 * 		Name   -> Function W_AnimatedIconWidget.W_AnimatedIconWidget_C.SetInteractState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bValid                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_AnimatedIconWidget_C::SetInteractState(bool bValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AnimatedIconWidget.W_AnimatedIconWidget_C.SetInteractState");
		
		UW_AnimatedIconWidget_C_SetInteractState_Params params {};
		params.bValid = bValid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AnimatedIconWidget.W_AnimatedIconWidget_C.ExecuteUbergraph_W_AnimatedIconWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_AnimatedIconWidget_C::ExecuteUbergraph_W_AnimatedIconWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AnimatedIconWidget.W_AnimatedIconWidget_C.ExecuteUbergraph_W_AnimatedIconWidget");
		
		UW_AnimatedIconWidget_C_ExecuteUbergraph_W_AnimatedIconWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_AnimatedIconWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_AnimatedIconWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_AnimatedIconWidget.W_AnimatedIconWidget_C");
		return ptr;
	}

}


