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
	 * 		Name   -> Function W_BadAIActionReporter.W_BadAIActionReporter_C.IsReportButtonEnabled
	 * 		Flags  -> ()
	 */
	bool UW_BadAIActionReporter_C::IsReportButtonEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_BadAIActionReporter.W_BadAIActionReporter_C.IsReportButtonEnabled");
		
		UW_BadAIActionReporter_C_IsReportButtonEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_BadAIActionReporter.W_BadAIActionReporter_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_BadAIActionReporter_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_BadAIActionReporter.W_BadAIActionReporter_C.Construct");
		
		UW_BadAIActionReporter_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_BadAIActionReporter.W_BadAIActionReporter_C.BndEvt__W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_BadAIActionReporter_C::BndEvt__W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_BadAIActionReporter.W_BadAIActionReporter_C.BndEvt__W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");
		
		UW_BadAIActionReporter_C_BndEvt__W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_BadAIActionReporter.W_BadAIActionReporter_C.BndEvt__Cancel_Button_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_BadAIActionReporter_C::BndEvt__Cancel_Button_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_BadAIActionReporter.W_BadAIActionReporter_C.BndEvt__Cancel_Button_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");
		
		UW_BadAIActionReporter_C_BndEvt__Cancel_Button_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_BadAIActionReporter.W_BadAIActionReporter_C.ExecuteUbergraph_W_BadAIActionReporter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_BadAIActionReporter_C::ExecuteUbergraph_W_BadAIActionReporter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_BadAIActionReporter.W_BadAIActionReporter_C.ExecuteUbergraph_W_BadAIActionReporter");
		
		UW_BadAIActionReporter_C_ExecuteUbergraph_W_BadAIActionReporter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_BadAIActionReporter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_BadAIActionReporter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_BadAIActionReporter.W_BadAIActionReporter_C");
		return ptr;
	}

}


