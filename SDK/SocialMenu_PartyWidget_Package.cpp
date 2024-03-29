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
	 * 		Name   -> Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.GetLeavePartyBtnVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility USocialMenu_PartyWidget_C::GetLeavePartyBtnVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.GetLeavePartyBtnVisibility");
		
		USocialMenu_PartyWidget_C_GetLeavePartyBtnVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.SlotHasFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            column                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            row                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bHasFocus                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USocialMenu_PartyWidget_C::SlotHasFocus(int32_t column, int32_t row, bool* bHasFocus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.SlotHasFocus");
		
		USocialMenu_PartyWidget_C_SlotHasFocus_Params params {};
		params.column = column;
		params.row = row;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bHasFocus != nullptr)
			*bHasFocus = params.bHasFocus;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.SetupInitialFocus
	 * 		Flags  -> ()
	 */
	void USocialMenu_PartyWidget_C::SetupInitialFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.SetupInitialFocus");
		
		USocialMenu_PartyWidget_C_SetupInitialFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.OnFocusReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply USocialMenu_PartyWidget_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.OnFocusReceived");
		
		USocialMenu_PartyWidget_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.SetupPartySettings
	 * 		Flags  -> ()
	 */
	void USocialMenu_PartyWidget_C::SetupPartySettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.SetupPartySettings");
		
		USocialMenu_PartyWidget_C_SetupPartySettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.Setup Editor Preview
	 * 		Flags  -> ()
	 */
	void USocialMenu_PartyWidget_C::Setup_Editor_Preview()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.Setup Editor Preview");
		
		USocialMenu_PartyWidget_C_Setup_Editor_Preview_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.UpdateEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Entry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            column                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            row                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USocialMenu_PartyWidget_C::UpdateEntry(class UWidget* Entry, int32_t column, int32_t row)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.UpdateEntry");
		
		USocialMenu_PartyWidget_C_UpdateEntry_Params params {};
		params.Entry = Entry;
		params.column = column;
		params.row = row;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.Setup
	 * 		Flags  -> ()
	 */
	void USocialMenu_PartyWidget_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.Setup");
		
		USocialMenu_PartyWidget_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void USocialMenu_PartyWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.Construct");
		
		USocialMenu_PartyWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.Event_RemoveEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBUserWidget*                               Entry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USocialMenu_PartyWidget_C::Event_RemoveEntry(class URBUserWidget* Entry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.Event_RemoveEntry");
		
		USocialMenu_PartyWidget_C_Event_RemoveEntry_Params params {};
		params.Entry = Entry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.Event_UpdateEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBUserWidget*                               Entry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            column                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            row                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USocialMenu_PartyWidget_C::Event_UpdateEntry(class URBUserWidget* Entry, int32_t column, int32_t row)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.Event_UpdateEntry");
		
		USocialMenu_PartyWidget_C_Event_UpdateEntry_Params params {};
		params.Entry = Entry;
		params.column = column;
		params.row = row;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.Event_Clear
	 * 		Flags  -> ()
	 */
	void USocialMenu_PartyWidget_C::Event_Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.Event_Clear");
		
		USocialMenu_PartyWidget_C_Event_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USocialMenu_PartyWidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.PreConstruct");
		
		USocialMenu_PartyWidget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.Event_OnDataPending
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsDataPending                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USocialMenu_PartyWidget_C::Event_OnDataPending(bool bIsDataPending)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.Event_OnDataPending");
		
		USocialMenu_PartyWidget_C_Event_OnDataPending_Params params {};
		params.bIsDataPending = bIsDataPending;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.Event_RefreshPartyOptions
	 * 		Flags  -> ()
	 */
	void USocialMenu_PartyWidget_C::Event_RefreshPartyOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.Event_RefreshPartyOptions");
		
		USocialMenu_PartyWidget_C_Event_RefreshPartyOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.BndEvt__PrivacyOption_K2Node_ComponentBoundEvent_0_OnValueUpdated__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USocialMenu_PartyWidget_C::BndEvt__PrivacyOption_K2Node_ComponentBoundEvent_0_OnValueUpdated__DelegateSignature(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.BndEvt__PrivacyOption_K2Node_ComponentBoundEvent_0_OnValueUpdated__DelegateSignature");
		
		USocialMenu_PartyWidget_C_BndEvt__PrivacyOption_K2Node_ComponentBoundEvent_0_OnValueUpdated__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.BndEvt__PartyMembersCanInviteOption_K2Node_ComponentBoundEvent_1_OnValueUpdated__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USocialMenu_PartyWidget_C::BndEvt__PartyMembersCanInviteOption_K2Node_ComponentBoundEvent_1_OnValueUpdated__DelegateSignature(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.BndEvt__PartyMembersCanInviteOption_K2Node_ComponentBoundEvent_1_OnValueUpdated__DelegateSignature");
		
		USocialMenu_PartyWidget_C_BndEvt__PartyMembersCanInviteOption_K2Node_ComponentBoundEvent_1_OnValueUpdated__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.BndEvt__IgnoreInviteRequestsOption_K2Node_ComponentBoundEvent_2_OnValueUpdated__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USocialMenu_PartyWidget_C::BndEvt__IgnoreInviteRequestsOption_K2Node_ComponentBoundEvent_2_OnValueUpdated__DelegateSignature(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.BndEvt__IgnoreInviteRequestsOption_K2Node_ComponentBoundEvent_2_OnValueUpdated__DelegateSignature");
		
		USocialMenu_PartyWidget_C_BndEvt__IgnoreInviteRequestsOption_K2Node_ComponentBoundEvent_2_OnValueUpdated__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.BndEvt__SocialMenu_PartyWidget_LeavePartyBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USocialMenu_PartyWidget_C::BndEvt__SocialMenu_PartyWidget_LeavePartyBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.BndEvt__SocialMenu_PartyWidget_LeavePartyBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");
		
		USocialMenu_PartyWidget_C_BndEvt__SocialMenu_PartyWidget_LeavePartyBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.Event_EntriesUpdated
	 * 		Flags  -> ()
	 */
	void USocialMenu_PartyWidget_C::Event_EntriesUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.Event_EntriesUpdated");
		
		USocialMenu_PartyWidget_C_Event_EntriesUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.ExecuteUbergraph_SocialMenu_PartyWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USocialMenu_PartyWidget_C::ExecuteUbergraph_SocialMenu_PartyWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.ExecuteUbergraph_SocialMenu_PartyWidget");
		
		USocialMenu_PartyWidget_C_ExecuteUbergraph_SocialMenu_PartyWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USocialMenu_PartyWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USocialMenu_PartyWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SocialMenu_PartyWidget.SocialMenu_PartyWidget_C");
		return ptr;
	}

}


