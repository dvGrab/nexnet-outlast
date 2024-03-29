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
	 * 		Name   -> Function InputBindingsMenu.InputBindingsMenu_C.UpdateNavigationButtons
	 * 		Flags  -> ()
	 */
	void UInputBindingsMenu_C::UpdateNavigationButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputBindingsMenu.InputBindingsMenu_C.UpdateNavigationButtons");
		
		UInputBindingsMenu_C_UpdateNavigationButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputBindingsMenu.InputBindingsMenu_C.Init
	 * 		Flags  -> ()
	 */
	void UInputBindingsMenu_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputBindingsMenu.InputBindingsMenu_C.Init");
		
		UInputBindingsMenu_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputBindingsMenu.InputBindingsMenu_C.RefreshDisplay
	 * 		Flags  -> ()
	 */
	void UInputBindingsMenu_C::RefreshDisplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputBindingsMenu.InputBindingsMenu_C.RefreshDisplay");
		
		UInputBindingsMenu_C_RefreshDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputBindingsMenu.InputBindingsMenu_C.BndEvt__ExitBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuButton_C*                             Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInputBindingsMenu_C::BndEvt__ExitBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class URBMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputBindingsMenu.InputBindingsMenu_C.BndEvt__ExitBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UInputBindingsMenu_C_BndEvt__ExitBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputBindingsMenu.InputBindingsMenu_C.BndEvt__ResetDefaultsBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuButton_C*                             Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInputBindingsMenu_C::BndEvt__ResetDefaultsBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class URBMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputBindingsMenu.InputBindingsMenu_C.BndEvt__ResetDefaultsBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UInputBindingsMenu_C_BndEvt__ResetDefaultsBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputBindingsMenu.InputBindingsMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UInputBindingsMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputBindingsMenu.InputBindingsMenu_C.Construct");
		
		UInputBindingsMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputBindingsMenu.InputBindingsMenu_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInputBindingsMenu_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputBindingsMenu.InputBindingsMenu_C.PreConstruct");
		
		UInputBindingsMenu_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputBindingsMenu.InputBindingsMenu_C.OnResetOptionsPressed
	 * 		Flags  -> ()
	 */
	void UInputBindingsMenu_C::OnResetOptionsPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputBindingsMenu.InputBindingsMenu_C.OnResetOptionsPressed");
		
		UInputBindingsMenu_C_OnResetOptionsPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputBindingsMenu.InputBindingsMenu_C.Event_UpdateRebindStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isRebindInProgress                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInputBindingsMenu_C::Event_UpdateRebindStatus(bool isRebindInProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputBindingsMenu.InputBindingsMenu_C.Event_UpdateRebindStatus");
		
		UInputBindingsMenu_C_Event_UpdateRebindStatus_Params params {};
		params.isRebindInProgress = isRebindInProgress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputBindingsMenu.InputBindingsMenu_C.ExecuteUbergraph_InputBindingsMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInputBindingsMenu_C::ExecuteUbergraph_InputBindingsMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputBindingsMenu.InputBindingsMenu_C.ExecuteUbergraph_InputBindingsMenu");
		
		UInputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputBindingsMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputBindingsMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InputBindingsMenu.InputBindingsMenu_C");
		return ptr;
	}

}


