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
	 * 		Name   -> Function W_ModAuthenticationDialog.W_ModAuthenticationDialog_C.OnErrorSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ErrorMessage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UW_ModAuthenticationDialog_C::OnErrorSet(const class FString& ErrorMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModAuthenticationDialog.W_ModAuthenticationDialog_C.OnErrorSet");
		
		UW_ModAuthenticationDialog_C_OnErrorSet_Params params {};
		params.ErrorMessage = ErrorMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModAuthenticationDialog.W_ModAuthenticationDialog_C.BndEvt__W_ModAuthenticationDialog_EditableTextBox_95_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ModAuthenticationDialog_C::BndEvt__W_ModAuthenticationDialog_EditableTextBox_95_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModAuthenticationDialog.W_ModAuthenticationDialog_C.BndEvt__W_ModAuthenticationDialog_EditableTextBox_95_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");
		
		UW_ModAuthenticationDialog_C_BndEvt__W_ModAuthenticationDialog_EditableTextBox_95_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModAuthenticationDialog.W_ModAuthenticationDialog_C.BndEvt__W_ModAuthenticationDialog_W_Button_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ModAuthenticationDialog_C::BndEvt__W_ModAuthenticationDialog_W_Button_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModAuthenticationDialog.W_ModAuthenticationDialog_C.BndEvt__W_ModAuthenticationDialog_W_Button_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");
		
		UW_ModAuthenticationDialog_C_BndEvt__W_ModAuthenticationDialog_W_Button_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModAuthenticationDialog.W_ModAuthenticationDialog_C.OnEmailRequested
	 * 		Flags  -> ()
	 */
	void UW_ModAuthenticationDialog_C::OnEmailRequested()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModAuthenticationDialog.W_ModAuthenticationDialog_C.OnEmailRequested");
		
		UW_ModAuthenticationDialog_C_OnEmailRequested_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModAuthenticationDialog.W_ModAuthenticationDialog_C.OnSecurityCodeRequested
	 * 		Flags  -> ()
	 */
	void UW_ModAuthenticationDialog_C::OnSecurityCodeRequested()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModAuthenticationDialog.W_ModAuthenticationDialog_C.OnSecurityCodeRequested");
		
		UW_ModAuthenticationDialog_C_OnSecurityCodeRequested_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModAuthenticationDialog.W_ModAuthenticationDialog_C.BndEvt__W_ModAuthenticationDialog_W_Button_2_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ModAuthenticationDialog_C::BndEvt__W_ModAuthenticationDialog_W_Button_2_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModAuthenticationDialog.W_ModAuthenticationDialog_C.BndEvt__W_ModAuthenticationDialog_W_Button_2_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature");
		
		UW_ModAuthenticationDialog_C_BndEvt__W_ModAuthenticationDialog_W_Button_2_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModAuthenticationDialog.W_ModAuthenticationDialog_C.BndEvt__W_ModAuthenticationDialog_W_Button_3_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ModAuthenticationDialog_C::BndEvt__W_ModAuthenticationDialog_W_Button_3_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModAuthenticationDialog.W_ModAuthenticationDialog_C.BndEvt__W_ModAuthenticationDialog_W_Button_3_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature");
		
		UW_ModAuthenticationDialog_C_BndEvt__W_ModAuthenticationDialog_W_Button_3_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModAuthenticationDialog.W_ModAuthenticationDialog_C.BndEvt__W_ModAuthenticationDialog_SecurityCodeSubmitButton_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ModAuthenticationDialog_C::BndEvt__W_ModAuthenticationDialog_SecurityCodeSubmitButton_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModAuthenticationDialog.W_ModAuthenticationDialog_C.BndEvt__W_ModAuthenticationDialog_SecurityCodeSubmitButton_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature");
		
		UW_ModAuthenticationDialog_C_BndEvt__W_ModAuthenticationDialog_SecurityCodeSubmitButton_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModAuthenticationDialog.W_ModAuthenticationDialog_C.BndEvt__W_ModAuthenticationDialog_SecurityCodeEntryBox_K2Node_ComponentBoundEvent_7_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ModAuthenticationDialog_C::BndEvt__W_ModAuthenticationDialog_SecurityCodeEntryBox_K2Node_ComponentBoundEvent_7_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModAuthenticationDialog.W_ModAuthenticationDialog_C.BndEvt__W_ModAuthenticationDialog_SecurityCodeEntryBox_K2Node_ComponentBoundEvent_7_OnEditableTextBoxCommittedEvent__DelegateSignature");
		
		UW_ModAuthenticationDialog_C_BndEvt__W_ModAuthenticationDialog_SecurityCodeEntryBox_K2Node_ComponentBoundEvent_7_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModAuthenticationDialog.W_ModAuthenticationDialog_C.BndEvt__W_ModAuthenticationDialog_btn_EmailLogin_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ModAuthenticationDialog_C::BndEvt__W_ModAuthenticationDialog_btn_EmailLogin_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModAuthenticationDialog.W_ModAuthenticationDialog_C.BndEvt__W_ModAuthenticationDialog_btn_EmailLogin_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");
		
		UW_ModAuthenticationDialog_C_BndEvt__W_ModAuthenticationDialog_btn_EmailLogin_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModAuthenticationDialog.W_ModAuthenticationDialog_C.BndEvt__W_ModAuthenticationDialog_btn_SteamLogin_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ModAuthenticationDialog_C::BndEvt__W_ModAuthenticationDialog_btn_SteamLogin_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModAuthenticationDialog.W_ModAuthenticationDialog_C.BndEvt__W_ModAuthenticationDialog_btn_SteamLogin_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature");
		
		UW_ModAuthenticationDialog_C_BndEvt__W_ModAuthenticationDialog_btn_SteamLogin_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModAuthenticationDialog.W_ModAuthenticationDialog_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_ModAuthenticationDialog_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModAuthenticationDialog.W_ModAuthenticationDialog_C.Construct");
		
		UW_ModAuthenticationDialog_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModAuthenticationDialog.W_ModAuthenticationDialog_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ModAuthenticationDialog_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModAuthenticationDialog.W_ModAuthenticationDialog_C.PreConstruct");
		
		UW_ModAuthenticationDialog_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModAuthenticationDialog.W_ModAuthenticationDialog_C.OnTermsOfUseAcceptanceRequested
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Terms                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FTermsOfUse                                 Localization                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_ModAuthenticationDialog_C::OnTermsOfUseAcceptanceRequested(const class FString& Terms, const struct FTermsOfUse& Localization)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModAuthenticationDialog.W_ModAuthenticationDialog_C.OnTermsOfUseAcceptanceRequested");
		
		UW_ModAuthenticationDialog_C_OnTermsOfUseAcceptanceRequested_Params params {};
		params.Terms = Terms;
		params.Localization = Localization;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModAuthenticationDialog.W_ModAuthenticationDialog_C.BndEvt__W_ModAuthenticationDialog_btn_SteamDecline_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ModAuthenticationDialog_C::BndEvt__W_ModAuthenticationDialog_btn_SteamDecline_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModAuthenticationDialog.W_ModAuthenticationDialog_C.BndEvt__W_ModAuthenticationDialog_btn_SteamDecline_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature");
		
		UW_ModAuthenticationDialog_C_BndEvt__W_ModAuthenticationDialog_btn_SteamDecline_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModAuthenticationDialog.W_ModAuthenticationDialog_C.BndEvt__W_ModAuthenticationDialog_btn_CancelLogin_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ModAuthenticationDialog_C::BndEvt__W_ModAuthenticationDialog_btn_CancelLogin_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModAuthenticationDialog.W_ModAuthenticationDialog_C.BndEvt__W_ModAuthenticationDialog_btn_CancelLogin_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature");
		
		UW_ModAuthenticationDialog_C_BndEvt__W_ModAuthenticationDialog_btn_CancelLogin_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModAuthenticationDialog.W_ModAuthenticationDialog_C.ReturnToMethodSelect
	 * 		Flags  -> ()
	 */
	void UW_ModAuthenticationDialog_C::ReturnToMethodSelect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModAuthenticationDialog.W_ModAuthenticationDialog_C.ReturnToMethodSelect");
		
		UW_ModAuthenticationDialog_C_ReturnToMethodSelect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModAuthenticationDialog.W_ModAuthenticationDialog_C.BndEvt__W_ModAuthenticationDialog_btn_SteamAgree_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ModAuthenticationDialog_C::BndEvt__W_ModAuthenticationDialog_btn_SteamAgree_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModAuthenticationDialog.W_ModAuthenticationDialog_C.BndEvt__W_ModAuthenticationDialog_btn_SteamAgree_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature");
		
		UW_ModAuthenticationDialog_C_BndEvt__W_ModAuthenticationDialog_btn_SteamAgree_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModAuthenticationDialog.W_ModAuthenticationDialog_C.BndEvt__W_ModAuthenticationDialog_btn_ModioPrivacy_K2Node_ComponentBoundEvent_11_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ModAuthenticationDialog_C::BndEvt__W_ModAuthenticationDialog_btn_ModioPrivacy_K2Node_ComponentBoundEvent_11_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModAuthenticationDialog.W_ModAuthenticationDialog_C.BndEvt__W_ModAuthenticationDialog_btn_ModioPrivacy_K2Node_ComponentBoundEvent_11_Clicked__DelegateSignature");
		
		UW_ModAuthenticationDialog_C_BndEvt__W_ModAuthenticationDialog_btn_ModioPrivacy_K2Node_ComponentBoundEvent_11_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModAuthenticationDialog.W_ModAuthenticationDialog_C.BndEvt__W_ModAuthenticationDialog_btn_ModioTerms_K2Node_ComponentBoundEvent_12_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ModAuthenticationDialog_C::BndEvt__W_ModAuthenticationDialog_btn_ModioTerms_K2Node_ComponentBoundEvent_12_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModAuthenticationDialog.W_ModAuthenticationDialog_C.BndEvt__W_ModAuthenticationDialog_btn_ModioTerms_K2Node_ComponentBoundEvent_12_Clicked__DelegateSignature");
		
		UW_ModAuthenticationDialog_C_BndEvt__W_ModAuthenticationDialog_btn_ModioTerms_K2Node_ComponentBoundEvent_12_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModAuthenticationDialog.W_ModAuthenticationDialog_C.ExecuteUbergraph_W_ModAuthenticationDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ModAuthenticationDialog_C::ExecuteUbergraph_W_ModAuthenticationDialog(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ModAuthenticationDialog.W_ModAuthenticationDialog_C.ExecuteUbergraph_W_ModAuthenticationDialog");
		
		UW_ModAuthenticationDialog_C_ExecuteUbergraph_W_ModAuthenticationDialog_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_ModAuthenticationDialog_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_ModAuthenticationDialog_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_ModAuthenticationDialog.W_ModAuthenticationDialog_C");
		return ptr;
	}

}


