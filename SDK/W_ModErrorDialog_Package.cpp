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
	 * 		Name   -> Function W_ModErrorDialog.W_ModErrorDialog_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_ModErrorDialog_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModErrorDialog.W_ModErrorDialog_C.Construct");
		
		UW_ModErrorDialog_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModErrorDialog.W_ModErrorDialog_C.BndEvt__W_ModErrorDialog_W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ModErrorDialog_C::BndEvt__W_ModErrorDialog_W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModErrorDialog.W_ModErrorDialog_C.BndEvt__W_ModErrorDialog_W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");
		
		UW_ModErrorDialog_C_BndEvt__W_ModErrorDialog_W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModErrorDialog.W_ModErrorDialog_C.SetError
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_ModErrorDialog_C::SetError(const class FText& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModErrorDialog.W_ModErrorDialog_C.SetError");
		
		UW_ModErrorDialog_C_SetError_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModErrorDialog.W_ModErrorDialog_C.ExecuteUbergraph_W_ModErrorDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ModErrorDialog_C::ExecuteUbergraph_W_ModErrorDialog(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModErrorDialog.W_ModErrorDialog_C.ExecuteUbergraph_W_ModErrorDialog");
		
		UW_ModErrorDialog_C_ExecuteUbergraph_W_ModErrorDialog_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModErrorDialog.W_ModErrorDialog_C.OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_ModErrorDialog_C::OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModErrorDialog.W_ModErrorDialog_C.OnClosed__DelegateSignature");
		
		UW_ModErrorDialog_C_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_ModErrorDialog_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_ModErrorDialog_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_ModErrorDialog.W_ModErrorDialog_C");
		return ptr;
	}

}


