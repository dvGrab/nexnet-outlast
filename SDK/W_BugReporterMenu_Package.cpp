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
	 * 		Name   -> Function W_BugReporterMenu.W_BugReporterMenu_C.GetOkButtonEnabled
	 * 		Flags  -> ()
	 */
	bool UW_BugReporterMenu_C::GetOkButtonEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_BugReporterMenu.W_BugReporterMenu_C.GetOkButtonEnabled");
		
		UW_BugReporterMenu_C_GetOkButtonEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_BugReporterMenu.W_BugReporterMenu_C.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_BugReporterMenu_C::BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_BugReporterMenu.W_BugReporterMenu_C.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");
		
		UW_BugReporterMenu_C_BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_BugReporterMenu.W_BugReporterMenu_C.BndEvt__btn_Submit_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_BugReporterMenu_C::BndEvt__btn_Submit_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_BugReporterMenu.W_BugReporterMenu_C.BndEvt__btn_Submit_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature");
		
		UW_BugReporterMenu_C_BndEvt__btn_Submit_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_BugReporterMenu.W_BugReporterMenu_C.ExecuteUbergraph_W_BugReporterMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_BugReporterMenu_C::ExecuteUbergraph_W_BugReporterMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_BugReporterMenu.W_BugReporterMenu_C.ExecuteUbergraph_W_BugReporterMenu");
		
		UW_BugReporterMenu_C_ExecuteUbergraph_W_BugReporterMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_BugReporterMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_BugReporterMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_BugReporterMenu.W_BugReporterMenu_C");
		return ptr;
	}

}


