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
	 * 		Name   -> Function BrightnessCalibrationMenu.BrightnessCalibrationMenu_C.RefreshSliders
	 * 		Flags  -> ()
	 */
	void UBrightnessCalibrationMenu_C::RefreshSliders()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrightnessCalibrationMenu.BrightnessCalibrationMenu_C.RefreshSliders");
		
		UBrightnessCalibrationMenu_C_RefreshSliders_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BrightnessCalibrationMenu.BrightnessCalibrationMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UBrightnessCalibrationMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrightnessCalibrationMenu.BrightnessCalibrationMenu_C.Construct");
		
		UBrightnessCalibrationMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BrightnessCalibrationMenu.BrightnessCalibrationMenu_C.BndEvt__BrightnessCalibrationMenu_ExitBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuButton_C*                             Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBrightnessCalibrationMenu_C::BndEvt__BrightnessCalibrationMenu_ExitBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class URBMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrightnessCalibrationMenu.BrightnessCalibrationMenu_C.BndEvt__BrightnessCalibrationMenu_ExitBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UBrightnessCalibrationMenu_C_BndEvt__BrightnessCalibrationMenu_ExitBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BrightnessCalibrationMenu.BrightnessCalibrationMenu_C.Event_OnPush
	 * 		Flags  -> ()
	 */
	void UBrightnessCalibrationMenu_C::Event_OnPush()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrightnessCalibrationMenu.BrightnessCalibrationMenu_C.Event_OnPush");
		
		UBrightnessCalibrationMenu_C_Event_OnPush_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BrightnessCalibrationMenu.BrightnessCalibrationMenu_C.Event_OnPop
	 * 		Flags  -> ()
	 */
	void UBrightnessCalibrationMenu_C::Event_OnPop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrightnessCalibrationMenu.BrightnessCalibrationMenu_C.Event_OnPop");
		
		UBrightnessCalibrationMenu_C_Event_OnPop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BrightnessCalibrationMenu.BrightnessCalibrationMenu_C.BndEvt__BrightnessCalibrationMenu_ResetDefaultsBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuButton_C*                             Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBrightnessCalibrationMenu_C::BndEvt__BrightnessCalibrationMenu_ResetDefaultsBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class URBMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrightnessCalibrationMenu.BrightnessCalibrationMenu_C.BndEvt__BrightnessCalibrationMenu_ResetDefaultsBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UBrightnessCalibrationMenu_C_BndEvt__BrightnessCalibrationMenu_ResetDefaultsBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BrightnessCalibrationMenu.BrightnessCalibrationMenu_C.Event_SetToDefaults
	 * 		Flags  -> ()
	 */
	void UBrightnessCalibrationMenu_C::Event_SetToDefaults()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrightnessCalibrationMenu.BrightnessCalibrationMenu_C.Event_SetToDefaults");
		
		UBrightnessCalibrationMenu_C_Event_SetToDefaults_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BrightnessCalibrationMenu.BrightnessCalibrationMenu_C.BndEvt__BrightnessCalibrationMenu_HDRPaperwhiteEntry_K2Node_ComponentBoundEvent_4_OnOptionValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuOptionsEntry*                         OptionEntry                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBrightnessCalibrationMenu_C::BndEvt__BrightnessCalibrationMenu_HDRPaperwhiteEntry_K2Node_ComponentBoundEvent_4_OnOptionValueChanged__DelegateSignature(class URBMenuOptionsEntry* OptionEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrightnessCalibrationMenu.BrightnessCalibrationMenu_C.BndEvt__BrightnessCalibrationMenu_HDRPaperwhiteEntry_K2Node_ComponentBoundEvent_4_OnOptionValueChanged__DelegateSignature");
		
		UBrightnessCalibrationMenu_C_BndEvt__BrightnessCalibrationMenu_HDRPaperwhiteEntry_K2Node_ComponentBoundEvent_4_OnOptionValueChanged__DelegateSignature_Params params {};
		params.OptionEntry = OptionEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BrightnessCalibrationMenu.BrightnessCalibrationMenu_C.BndEvt__BrightnessCalibrationMenu_HDRUserInterfaceEntry_K2Node_ComponentBoundEvent_6_OnOptionValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuOptionsEntry*                         OptionEntry                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBrightnessCalibrationMenu_C::BndEvt__BrightnessCalibrationMenu_HDRUserInterfaceEntry_K2Node_ComponentBoundEvent_6_OnOptionValueChanged__DelegateSignature(class URBMenuOptionsEntry* OptionEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrightnessCalibrationMenu.BrightnessCalibrationMenu_C.BndEvt__BrightnessCalibrationMenu_HDRUserInterfaceEntry_K2Node_ComponentBoundEvent_6_OnOptionValueChanged__DelegateSignature");
		
		UBrightnessCalibrationMenu_C_BndEvt__BrightnessCalibrationMenu_HDRUserInterfaceEntry_K2Node_ComponentBoundEvent_6_OnOptionValueChanged__DelegateSignature_Params params {};
		params.OptionEntry = OptionEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BrightnessCalibrationMenu.BrightnessCalibrationMenu_C.BndEvt__BrightnessCalibrationMenu_BrightnessEntry_K2Node_ComponentBoundEvent_7_OnOptionValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuOptionsEntry*                         OptionEntry                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBrightnessCalibrationMenu_C::BndEvt__BrightnessCalibrationMenu_BrightnessEntry_K2Node_ComponentBoundEvent_7_OnOptionValueChanged__DelegateSignature(class URBMenuOptionsEntry* OptionEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrightnessCalibrationMenu.BrightnessCalibrationMenu_C.BndEvt__BrightnessCalibrationMenu_BrightnessEntry_K2Node_ComponentBoundEvent_7_OnOptionValueChanged__DelegateSignature");
		
		UBrightnessCalibrationMenu_C_BndEvt__BrightnessCalibrationMenu_BrightnessEntry_K2Node_ComponentBoundEvent_7_OnOptionValueChanged__DelegateSignature_Params params {};
		params.OptionEntry = OptionEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BrightnessCalibrationMenu.BrightnessCalibrationMenu_C.ExecuteUbergraph_BrightnessCalibrationMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBrightnessCalibrationMenu_C::ExecuteUbergraph_BrightnessCalibrationMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrightnessCalibrationMenu.BrightnessCalibrationMenu_C.ExecuteUbergraph_BrightnessCalibrationMenu");
		
		UBrightnessCalibrationMenu_C_ExecuteUbergraph_BrightnessCalibrationMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBrightnessCalibrationMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBrightnessCalibrationMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BrightnessCalibrationMenu.BrightnessCalibrationMenu_C");
		return ptr;
	}

}


