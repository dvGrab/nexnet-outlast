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
	 * 		Name   -> Function ReportPlayerMenu.ReportPlayerMenu_C.OnFocusReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UReportPlayerMenu_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReportPlayerMenu.ReportPlayerMenu_C.OnFocusReceived");
		
		UReportPlayerMenu_C_OnFocusReceived_Params params {};
		params.MyGeometry = MyGeometry;
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReportPlayerMenu.ReportPlayerMenu_C.Event_Refresh
	 * 		Flags  -> ()
	 */
	void UReportPlayerMenu_C::Event_Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReportPlayerMenu.ReportPlayerMenu_C.Event_Refresh");
		
		UReportPlayerMenu_C_Event_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReportPlayerMenu.ReportPlayerMenu_C.BndEvt__ReportPlayerMenu_GroupFinderStartBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UReportPlayerMenu_C::BndEvt__ReportPlayerMenu_GroupFinderStartBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReportPlayerMenu.ReportPlayerMenu_C.BndEvt__ReportPlayerMenu_GroupFinderStartBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UReportPlayerMenu_C_BndEvt__ReportPlayerMenu_GroupFinderStartBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReportPlayerMenu.ReportPlayerMenu_C.BndEvt__ReportPlayerMenu_ExitButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuButton_C*                             Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UReportPlayerMenu_C::BndEvt__ReportPlayerMenu_ExitButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class URBMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReportPlayerMenu.ReportPlayerMenu_C.BndEvt__ReportPlayerMenu_ExitButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UReportPlayerMenu_C_BndEvt__ReportPlayerMenu_ExitButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReportPlayerMenu.ReportPlayerMenu_C.OnFocusLost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UReportPlayerMenu_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReportPlayerMenu.ReportPlayerMenu_C.OnFocusLost");
		
		UReportPlayerMenu_C_OnFocusLost_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReportPlayerMenu.ReportPlayerMenu_C.Event_MenuCancel_Pressed
	 * 		Flags  -> ()
	 */
	void UReportPlayerMenu_C::Event_MenuCancel_Pressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReportPlayerMenu.ReportPlayerMenu_C.Event_MenuCancel_Pressed");
		
		UReportPlayerMenu_C_Event_MenuCancel_Pressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReportPlayerMenu.ReportPlayerMenu_C.BndEvt__ReportPlayerMenu_DetailsTextBox_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UReportPlayerMenu_C::BndEvt__ReportPlayerMenu_DetailsTextBox_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReportPlayerMenu.ReportPlayerMenu_C.BndEvt__ReportPlayerMenu_DetailsTextBox_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature");
		
		UReportPlayerMenu_C_BndEvt__ReportPlayerMenu_DetailsTextBox_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReportPlayerMenu.ReportPlayerMenu_C.BndEvt__ReportPlayerMenu_DetailsTextBox_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UReportPlayerMenu_C::BndEvt__ReportPlayerMenu_DetailsTextBox_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReportPlayerMenu.ReportPlayerMenu_C.BndEvt__ReportPlayerMenu_DetailsTextBox_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature");
		
		UReportPlayerMenu_C_BndEvt__ReportPlayerMenu_DetailsTextBox_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReportPlayerMenu.ReportPlayerMenu_C.ExecuteUbergraph_ReportPlayerMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UReportPlayerMenu_C::ExecuteUbergraph_ReportPlayerMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReportPlayerMenu.ReportPlayerMenu_C.ExecuteUbergraph_ReportPlayerMenu");
		
		UReportPlayerMenu_C_ExecuteUbergraph_ReportPlayerMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReportPlayerMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReportPlayerMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ReportPlayerMenu.ReportPlayerMenu_C");
		return ptr;
	}

}


