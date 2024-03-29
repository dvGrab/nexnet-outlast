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
	 * 		Name   -> Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.OnFocusReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply USocialMenu_Entry_Self_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.OnFocusReceived");
		
		USocialMenu_Entry_Self_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.IsConsideredHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bConsideredHovered                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USocialMenu_Entry_Self_C::IsConsideredHovered(bool* bConsideredHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.IsConsideredHovered");
		
		USocialMenu_Entry_Self_C_IsConsideredHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bConsideredHovered != nullptr)
			*bConsideredHovered = params.bConsideredHovered;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.Set Focused
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInFocused                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USocialMenu_Entry_Self_C::Set_Focused(bool bInFocused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.Set Focused");
		
		USocialMenu_Entry_Self_C_Set_Focused_Params params {};
		params.bInFocused = bInFocused;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.SetHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInHovered                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USocialMenu_Entry_Self_C::SetHovered(bool bInHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.SetHovered");
		
		USocialMenu_Entry_Self_C_SetHovered_Params params {};
		params.bInHovered = bInHovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.RefreshContextualMenu
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_Self_C::RefreshContextualMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.RefreshContextualMenu");
		
		USocialMenu_Entry_Self_C_RefreshContextualMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.CreateContextualMenu
	 * 		Flags  -> ()
	 */
	class UUserWidget* USocialMenu_Entry_Self_C::CreateContextualMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.CreateContextualMenu");
		
		USocialMenu_Entry_Self_C_CreateContextualMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.SetPlayerLevel
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_Self_C::SetPlayerLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.SetPlayerLevel");
		
		USocialMenu_Entry_Self_C_SetPlayerLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.SetProfileIcon
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_Self_C::SetProfileIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.SetProfileIcon");
		
		USocialMenu_Entry_Self_C_SetProfileIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.SetPartyLeaderIcon
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_Self_C::SetPartyLeaderIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.SetPartyLeaderIcon");
		
		USocialMenu_Entry_Self_C_SetPartyLeaderIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.ShowLoading
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_Self_C::ShowLoading()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.ShowLoading");
		
		USocialMenu_Entry_Self_C_ShowLoading_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.SetBackground
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_Self_C::SetBackground()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.SetBackground");
		
		USocialMenu_Entry_Self_C_SetBackground_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.SetOnlineStatus
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_Self_C::SetOnlineStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.SetOnlineStatus");
		
		USocialMenu_Entry_Self_C_SetOnlineStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.SetName
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_Self_C::SetName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.SetName");
		
		USocialMenu_Entry_Self_C_SetName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.SetPlatformIcon
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_Self_C::SetPlatformIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.SetPlatformIcon");
		
		USocialMenu_Entry_Self_C_SetPlatformIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.Event_Refresh
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_Self_C::Event_Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.Event_Refresh");
		
		USocialMenu_Entry_Self_C_Event_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.Event_ActionRequested
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_Self_C::Event_ActionRequested()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.Event_ActionRequested");
		
		USocialMenu_Entry_Self_C_Event_ActionRequested_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.Event_OpenContextualMenu
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_Self_C::Event_OpenContextualMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.Event_OpenContextualMenu");
		
		USocialMenu_Entry_Self_C_Event_OpenContextualMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.Event_CloseContextualMenu
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_Self_C::Event_CloseContextualMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.Event_CloseContextualMenu");
		
		USocialMenu_Entry_Self_C_Event_CloseContextualMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.BndEvt__ContextualMenuButton_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_Self_C::BndEvt__ContextualMenuButton_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.BndEvt__ContextualMenuButton_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature");
		
		USocialMenu_Entry_Self_C_BndEvt__ContextualMenuButton_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.OnFocusLost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void USocialMenu_Entry_Self_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.OnFocusLost");
		
		USocialMenu_Entry_Self_C_OnFocusLost_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.Construct
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_Self_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.Construct");
		
		USocialMenu_Entry_Self_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.OnMenuInputSourceChanged
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_Self_C::OnMenuInputSourceChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.OnMenuInputSourceChanged");
		
		USocialMenu_Entry_Self_C_OnMenuInputSourceChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.Destruct
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_Self_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.Destruct");
		
		USocialMenu_Entry_Self_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.BndEvt__SocialMenu_Entry_Self_InteractionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_Self_C::BndEvt__SocialMenu_Entry_Self_InteractionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.BndEvt__SocialMenu_Entry_Self_InteractionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		USocialMenu_Entry_Self_C_BndEvt__SocialMenu_Entry_Self_InteractionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.BndEvt__SocialMenu_Entry_Self_InteractionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_Self_C::BndEvt__SocialMenu_Entry_Self_InteractionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.BndEvt__SocialMenu_Entry_Self_InteractionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		USocialMenu_Entry_Self_C_BndEvt__SocialMenu_Entry_Self_InteractionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.BndEvt__SocialMenu_Entry_Self_InteractionButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_Self_C::BndEvt__SocialMenu_Entry_Self_InteractionButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.BndEvt__SocialMenu_Entry_Self_InteractionButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		USocialMenu_Entry_Self_C_BndEvt__SocialMenu_Entry_Self_InteractionButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.ExecuteUbergraph_SocialMenu_Entry_Self
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USocialMenu_Entry_Self_C::ExecuteUbergraph_SocialMenu_Entry_Self(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Self.SocialMenu_Entry_Self_C.ExecuteUbergraph_SocialMenu_Entry_Self");
		
		USocialMenu_Entry_Self_C_ExecuteUbergraph_SocialMenu_Entry_Self_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USocialMenu_Entry_Self_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USocialMenu_Entry_Self_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SocialMenu_Entry_Self.SocialMenu_Entry_Self_C");
		return ptr;
	}

}


