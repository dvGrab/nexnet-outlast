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
	 * 		Name   -> Function RButton.RButton_C.ShouldInvertHoverColors?
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Invert                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URButton_C::ShouldInvertHoverColors(bool Invert)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RButton.RButton_C.ShouldInvertHoverColors?");
		
		URButton_C_ShouldInvertHoverColors_Params params {};
		params.Invert = Invert;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RButton.RButton_C.SetDefaultColor
	 * 		Flags  -> ()
	 */
	void URButton_C::SetDefaultColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RButton.RButton_C.SetDefaultColor");
		
		URButton_C_SetDefaultColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RButton.RButton_C.SetSelectedColor
	 * 		Flags  -> ()
	 */
	void URButton_C::SetSelectedColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RButton.RButton_C.SetSelectedColor");
		
		URButton_C_SetSelectedColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RButton.RButton_C.BndEvt__Btn_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URButton_C::BndEvt__Btn_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RButton.RButton_C.BndEvt__Btn_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature");
		
		URButton_C_BndEvt__Btn_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RButton.RButton_C.Construct
	 * 		Flags  -> ()
	 */
	void URButton_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RButton.RButton_C.Construct");
		
		URButton_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RButton.RButton_C.BndEvt__Btn_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URButton_C::BndEvt__Btn_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RButton.RButton_C.BndEvt__Btn_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature");
		
		URButton_C_BndEvt__Btn_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RButton.RButton_C.OnHovered
	 * 		Flags  -> ()
	 */
	void URButton_C::OnHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RButton.RButton_C.OnHovered");
		
		URButton_C_OnHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RButton.RButton_C.OnUnhovered
	 * 		Flags  -> ()
	 */
	void URButton_C::OnUnhovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RButton.RButton_C.OnUnhovered");
		
		URButton_C_OnUnhovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RButton.RButton_C.ExecuteUbergraph_RButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URButton_C::ExecuteUbergraph_RButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RButton.RButton_C.ExecuteUbergraph_RButton");
		
		URButton_C_ExecuteUbergraph_RButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RButton.RButton_C");
		return ptr;
	}

}


