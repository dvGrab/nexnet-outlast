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
	 * 		Name   -> Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.ShowNotificationIcon
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_Party_C::ShowNotificationIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.ShowNotificationIcon");
		
		USocialMenu_Entry_Party_C_ShowNotificationIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.OnFocusReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply USocialMenu_Entry_Party_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.OnFocusReceived");
		
		USocialMenu_Entry_Party_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.IsConsideredHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bConsideredHovered                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USocialMenu_Entry_Party_C::IsConsideredHovered(bool* bConsideredHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.IsConsideredHovered");
		
		USocialMenu_Entry_Party_C_IsConsideredHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bConsideredHovered != nullptr)
			*bConsideredHovered = params.bConsideredHovered;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.SetFocused
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInFocused                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USocialMenu_Entry_Party_C::SetFocused(bool bInFocused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.SetFocused");
		
		USocialMenu_Entry_Party_C_SetFocused_Params params {};
		params.bInFocused = bInFocused;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.SetHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInHovered                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USocialMenu_Entry_Party_C::SetHovered(bool bInHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.SetHovered");
		
		USocialMenu_Entry_Party_C_SetHovered_Params params {};
		params.bInHovered = bInHovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.RefreshContextualMenu
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_Party_C::RefreshContextualMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.RefreshContextualMenu");
		
		USocialMenu_Entry_Party_C_RefreshContextualMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.SetPlayerLevel
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_Party_C::SetPlayerLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.SetPlayerLevel");
		
		USocialMenu_Entry_Party_C_SetPlayerLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.CreateContextualMenu
	 * 		Flags  -> ()
	 */
	class UUserWidget* USocialMenu_Entry_Party_C::CreateContextualMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.CreateContextualMenu");
		
		USocialMenu_Entry_Party_C_CreateContextualMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.SetProfileIcon
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_Party_C::SetProfileIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.SetProfileIcon");
		
		USocialMenu_Entry_Party_C_SetProfileIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.SetPartyLeaderIcon
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_Party_C::SetPartyLeaderIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.SetPartyLeaderIcon");
		
		USocialMenu_Entry_Party_C_SetPartyLeaderIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.ShowLoading
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_Party_C::ShowLoading()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.ShowLoading");
		
		USocialMenu_Entry_Party_C_ShowLoading_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.SetBackground
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_Party_C::SetBackground()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.SetBackground");
		
		USocialMenu_Entry_Party_C_SetBackground_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.SetInGameStatus
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_Party_C::SetInGameStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.SetInGameStatus");
		
		USocialMenu_Entry_Party_C_SetInGameStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.SetName
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_Party_C::SetName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.SetName");
		
		USocialMenu_Entry_Party_C_SetName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.SetPlatformIcon
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_Party_C::SetPlatformIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.SetPlatformIcon");
		
		USocialMenu_Entry_Party_C_SetPlatformIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.Event_Refresh
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_Party_C::Event_Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.Event_Refresh");
		
		USocialMenu_Entry_Party_C_Event_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.Event_ActionRequested
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_Party_C::Event_ActionRequested()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.Event_ActionRequested");
		
		USocialMenu_Entry_Party_C_Event_ActionRequested_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.Event_OpenContextualMenu
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_Party_C::Event_OpenContextualMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.Event_OpenContextualMenu");
		
		USocialMenu_Entry_Party_C_Event_OpenContextualMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.Event_CloseContextualMenu
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_Party_C::Event_CloseContextualMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.Event_CloseContextualMenu");
		
		USocialMenu_Entry_Party_C_Event_CloseContextualMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.BndEvt__ContextualMenuButton_K2Node_ComponentBoundEvent_1_EventClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_Party_C::BndEvt__ContextualMenuButton_K2Node_ComponentBoundEvent_1_EventClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.BndEvt__ContextualMenuButton_K2Node_ComponentBoundEvent_1_EventClicked__DelegateSignature");
		
		USocialMenu_Entry_Party_C_BndEvt__ContextualMenuButton_K2Node_ComponentBoundEvent_1_EventClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.OnFocusLost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void USocialMenu_Entry_Party_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.OnFocusLost");
		
		USocialMenu_Entry_Party_C_OnFocusLost_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.Construct
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_Party_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.Construct");
		
		USocialMenu_Entry_Party_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.OnMenuInputSourceChanged
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_Party_C::OnMenuInputSourceChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.OnMenuInputSourceChanged");
		
		USocialMenu_Entry_Party_C_OnMenuInputSourceChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.Destruct
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_Party_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.Destruct");
		
		USocialMenu_Entry_Party_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.BndEvt__SocialMenu_Entry_Party_InteractionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_Party_C::BndEvt__SocialMenu_Entry_Party_InteractionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.BndEvt__SocialMenu_Entry_Party_InteractionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		USocialMenu_Entry_Party_C_BndEvt__SocialMenu_Entry_Party_InteractionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.BndEvt__SocialMenu_Entry_Party_InteractionButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_Party_C::BndEvt__SocialMenu_Entry_Party_InteractionButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.BndEvt__SocialMenu_Entry_Party_InteractionButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		USocialMenu_Entry_Party_C_BndEvt__SocialMenu_Entry_Party_InteractionButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.BndEvt__SocialMenu_Entry_Party_InteractionButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_Party_C::BndEvt__SocialMenu_Entry_Party_InteractionButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.BndEvt__SocialMenu_Entry_Party_InteractionButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		USocialMenu_Entry_Party_C_BndEvt__SocialMenu_Entry_Party_InteractionButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.ExecuteUbergraph_SocialMenu_Entry_Party
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USocialMenu_Entry_Party_C::ExecuteUbergraph_SocialMenu_Entry_Party(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.ExecuteUbergraph_SocialMenu_Entry_Party");
		
		USocialMenu_Entry_Party_C_ExecuteUbergraph_SocialMenu_Entry_Party_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USocialMenu_Entry_Party_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USocialMenu_Entry_Party_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SocialMenu_Entry_Party.SocialMenu_Entry_Party_C");
		return ptr;
	}

}


