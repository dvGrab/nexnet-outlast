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
	 * 		Name   -> Function AddFriendWidget.AddFriendWidget_C.Reset
	 * 		Flags  -> ()
	 */
	void UAddFriendWidget_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AddFriendWidget.AddFriendWidget_C.Reset");
		
		UAddFriendWidget_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AddFriendWidget.AddFriendWidget_C.OnFocusReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UAddFriendWidget_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AddFriendWidget.AddFriendWidget_C.OnFocusReceived");
		
		UAddFriendWidget_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function AddFriendWidget.AddFriendWidget_C.Refresh
	 * 		Flags  -> ()
	 */
	void UAddFriendWidget_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AddFriendWidget.AddFriendWidget_C.Refresh");
		
		UAddFriendWidget_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AddFriendWidget.AddFriendWidget_C.Finished_ADCAA9EE48D9ECCB3494DC85E0915EEF
	 * 		Flags  -> ()
	 */
	void UAddFriendWidget_C::Finished_ADCAA9EE48D9ECCB3494DC85E0915EEF()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AddFriendWidget.AddFriendWidget_C.Finished_ADCAA9EE48D9ECCB3494DC85E0915EEF");
		
		UAddFriendWidget_C_Finished_ADCAA9EE48D9ECCB3494DC85E0915EEF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AddFriendWidget.AddFriendWidget_C.Event_Refresh
	 * 		Flags  -> ()
	 */
	void UAddFriendWidget_C::Event_Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AddFriendWidget.AddFriendWidget_C.Event_Refresh");
		
		UAddFriendWidget_C_Event_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AddFriendWidget.AddFriendWidget_C.BndEvt__FriendCodeInputBox_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAddFriendWidget_C::BndEvt__FriendCodeInputBox_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AddFriendWidget.AddFriendWidget_C.BndEvt__FriendCodeInputBox_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature");
		
		UAddFriendWidget_C_BndEvt__FriendCodeInputBox_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AddFriendWidget.AddFriendWidget_C.BndEvt__FriendCodeInputBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UAddFriendWidget_C::BndEvt__FriendCodeInputBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AddFriendWidget.AddFriendWidget_C.BndEvt__FriendCodeInputBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature");
		
		UAddFriendWidget_C_BndEvt__FriendCodeInputBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AddFriendWidget.AddFriendWidget_C.BndEvt__AddFriendMenu_ViewProfileButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UAddFriendWidget_C::BndEvt__AddFriendMenu_ViewProfileButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AddFriendWidget.AddFriendWidget_C.BndEvt__AddFriendMenu_ViewProfileButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");
		
		UAddFriendWidget_C_BndEvt__AddFriendMenu_ViewProfileButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AddFriendWidget.AddFriendWidget_C.BndEvt__AddFriendMenu_SendFriendRequestButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UAddFriendWidget_C::BndEvt__AddFriendMenu_SendFriendRequestButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AddFriendWidget.AddFriendWidget_C.BndEvt__AddFriendMenu_SendFriendRequestButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");
		
		UAddFriendWidget_C_BndEvt__AddFriendMenu_SendFriendRequestButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AddFriendWidget.AddFriendWidget_C.BndEvt__AddFriendMenu_CopyFriendCodeButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UAddFriendWidget_C::BndEvt__AddFriendMenu_CopyFriendCodeButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AddFriendWidget.AddFriendWidget_C.BndEvt__AddFriendMenu_CopyFriendCodeButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");
		
		UAddFriendWidget_C_BndEvt__AddFriendMenu_CopyFriendCodeButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AddFriendWidget.AddFriendWidget_C.BndEvt__AddFriendWidget_SearchButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UAddFriendWidget_C::BndEvt__AddFriendWidget_SearchButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AddFriendWidget.AddFriendWidget_C.BndEvt__AddFriendWidget_SearchButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UAddFriendWidget_C_BndEvt__AddFriendWidget_SearchButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AddFriendWidget.AddFriendWidget_C.Event_Init
	 * 		Flags  -> ()
	 */
	void UAddFriendWidget_C::Event_Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AddFriendWidget.AddFriendWidget_C.Event_Init");
		
		UAddFriendWidget_C_Event_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AddFriendWidget.AddFriendWidget_C.Event_ResolveCompleted
	 * 		Flags  -> ()
	 */
	void UAddFriendWidget_C::Event_ResolveCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AddFriendWidget.AddFriendWidget_C.Event_ResolveCompleted");
		
		UAddFriendWidget_C_Event_ResolveCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AddFriendWidget.AddFriendWidget_C.Event_Done
	 * 		Flags  -> ()
	 */
	void UAddFriendWidget_C::Event_Done()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AddFriendWidget.AddFriendWidget_C.Event_Done");
		
		UAddFriendWidget_C_Event_Done_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AddFriendWidget.AddFriendWidget_C.Event_OnError
	 * 		Flags  -> ()
	 */
	void UAddFriendWidget_C::Event_OnError()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AddFriendWidget.AddFriendWidget_C.Event_OnError");
		
		UAddFriendWidget_C_Event_OnError_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AddFriendWidget.AddFriendWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UAddFriendWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AddFriendWidget.AddFriendWidget_C.Construct");
		
		UAddFriendWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AddFriendWidget.AddFriendWidget_C.ExecuteUbergraph_AddFriendWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAddFriendWidget_C::ExecuteUbergraph_AddFriendWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AddFriendWidget.AddFriendWidget_C.ExecuteUbergraph_AddFriendWidget");
		
		UAddFriendWidget_C_ExecuteUbergraph_AddFriendWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AddFriendWidget.AddFriendWidget_C.OnBackRequested__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UAddFriendWidget_C::OnBackRequested__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AddFriendWidget.AddFriendWidget_C.OnBackRequested__DelegateSignature");
		
		UAddFriendWidget_C_OnBackRequested__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddFriendWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddFriendWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AddFriendWidget.AddFriendWidget_C");
		return ptr;
	}

}


