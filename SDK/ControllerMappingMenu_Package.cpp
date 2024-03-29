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
	 * 		Name   -> Function ControllerMappingMenu.ControllerMappingMenu_C.RefreshGamepadType
	 * 		Flags  -> ()
	 */
	void UControllerMappingMenu_C::RefreshGamepadType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControllerMappingMenu.ControllerMappingMenu_C.RefreshGamepadType");
		
		UControllerMappingMenu_C_RefreshGamepadType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ControllerMappingMenu.ControllerMappingMenu_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UControllerMappingMenu_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControllerMappingMenu.ControllerMappingMenu_C.PreConstruct");
		
		UControllerMappingMenu_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ControllerMappingMenu.ControllerMappingMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UControllerMappingMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControllerMappingMenu.ControllerMappingMenu_C.Construct");
		
		UControllerMappingMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ControllerMappingMenu.ControllerMappingMenu_C.BndEvt__BrightnessCalibrationMenu_ExitBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuButton_C*                             Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UControllerMappingMenu_C::BndEvt__BrightnessCalibrationMenu_ExitBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class URBMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControllerMappingMenu.ControllerMappingMenu_C.BndEvt__BrightnessCalibrationMenu_ExitBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UControllerMappingMenu_C_BndEvt__BrightnessCalibrationMenu_ExitBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ControllerMappingMenu.ControllerMappingMenu_C.BndEvt__ControllerMappingMenu_ResetDefaultsBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuButton_C*                             Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UControllerMappingMenu_C::BndEvt__ControllerMappingMenu_ResetDefaultsBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class URBMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControllerMappingMenu.ControllerMappingMenu_C.BndEvt__ControllerMappingMenu_ResetDefaultsBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UControllerMappingMenu_C_BndEvt__ControllerMappingMenu_ResetDefaultsBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ControllerMappingMenu.ControllerMappingMenu_C.OnPopupConfirm
	 * 		Flags  -> ()
	 */
	void UControllerMappingMenu_C::OnPopupConfirm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControllerMappingMenu.ControllerMappingMenu_C.OnPopupConfirm");
		
		UControllerMappingMenu_C_OnPopupConfirm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ControllerMappingMenu.ControllerMappingMenu_C.OnPopupPop
	 * 		Flags  -> ()
	 */
	void UControllerMappingMenu_C::OnPopupPop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControllerMappingMenu.ControllerMappingMenu_C.OnPopupPop");
		
		UControllerMappingMenu_C_OnPopupPop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ControllerMappingMenu.ControllerMappingMenu_C.BndEvt__ControllerMappingMenu_ApplyChangeBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuButton_C*                             Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UControllerMappingMenu_C::BndEvt__ControllerMappingMenu_ApplyChangeBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class URBMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControllerMappingMenu.ControllerMappingMenu_C.BndEvt__ControllerMappingMenu_ApplyChangeBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UControllerMappingMenu_C_BndEvt__ControllerMappingMenu_ApplyChangeBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ControllerMappingMenu.ControllerMappingMenu_C.UpdateApplyBtnVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasValueChanged                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UControllerMappingMenu_C::UpdateApplyBtnVisibility(bool HasValueChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControllerMappingMenu.ControllerMappingMenu_C.UpdateApplyBtnVisibility");
		
		UControllerMappingMenu_C_UpdateApplyBtnVisibility_Params params {};
		params.HasValueChanged = HasValueChanged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ControllerMappingMenu.ControllerMappingMenu_C.OnReleasedApply
	 * 		Flags  -> ()
	 */
	void UControllerMappingMenu_C::OnReleasedApply()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControllerMappingMenu.ControllerMappingMenu_C.OnReleasedApply");
		
		UControllerMappingMenu_C_OnReleasedApply_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ControllerMappingMenu.ControllerMappingMenu_C.OnReleasedReset
	 * 		Flags  -> ()
	 */
	void UControllerMappingMenu_C::OnReleasedReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControllerMappingMenu.ControllerMappingMenu_C.OnReleasedReset");
		
		UControllerMappingMenu_C_OnReleasedReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ControllerMappingMenu.ControllerMappingMenu_C.Event_MenuCancel_Pressed
	 * 		Flags  -> ()
	 */
	void UControllerMappingMenu_C::Event_MenuCancel_Pressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControllerMappingMenu.ControllerMappingMenu_C.Event_MenuCancel_Pressed");
		
		UControllerMappingMenu_C_Event_MenuCancel_Pressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ControllerMappingMenu.ControllerMappingMenu_C.OnGamepadTypeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGamepadType                                       newGamepadType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UControllerMappingMenu_C::OnGamepadTypeChanged(EGamepadType newGamepadType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControllerMappingMenu.ControllerMappingMenu_C.OnGamepadTypeChanged");
		
		UControllerMappingMenu_C_OnGamepadTypeChanged_Params params {};
		params.newGamepadType = newGamepadType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ControllerMappingMenu.ControllerMappingMenu_C.ExecuteUbergraph_ControllerMappingMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UControllerMappingMenu_C::ExecuteUbergraph_ControllerMappingMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControllerMappingMenu.ControllerMappingMenu_C.ExecuteUbergraph_ControllerMappingMenu");
		
		UControllerMappingMenu_C_ExecuteUbergraph_ControllerMappingMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControllerMappingMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControllerMappingMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ControllerMappingMenu.ControllerMappingMenu_C");
		return ptr;
	}

}


