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
	 * 		Name   -> Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.UpdatePresenceAndDetailsText
	 * 		Flags  -> ()
	 */
	class FText USocialMenu_Entry_PartyInvite_C::UpdatePresenceAndDetailsText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.UpdatePresenceAndDetailsText");
		
		USocialMenu_Entry_PartyInvite_C_UpdatePresenceAndDetailsText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.GetPartyText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        DetailsText                                                (Parm, OutParm)
	 */
	void USocialMenu_Entry_PartyInvite_C::GetPartyText(class FText* DetailsText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.GetPartyText");
		
		USocialMenu_Entry_PartyInvite_C_GetPartyText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DetailsText != nullptr)
			*DetailsText = params.DetailsText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.OnFocusReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply USocialMenu_Entry_PartyInvite_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.OnFocusReceived");
		
		USocialMenu_Entry_PartyInvite_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.IsConsideredHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bConsideredHovered                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USocialMenu_Entry_PartyInvite_C::IsConsideredHovered(bool* bConsideredHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.IsConsideredHovered");
		
		USocialMenu_Entry_PartyInvite_C_IsConsideredHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bConsideredHovered != nullptr)
			*bConsideredHovered = params.bConsideredHovered;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.SetFocused
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInFocused                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USocialMenu_Entry_PartyInvite_C::SetFocused(bool bInFocused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.SetFocused");
		
		USocialMenu_Entry_PartyInvite_C_SetFocused_Params params {};
		params.bInFocused = bInFocused;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.SetHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInHovered                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USocialMenu_Entry_PartyInvite_C::SetHovered(bool bInHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.SetHovered");
		
		USocialMenu_Entry_PartyInvite_C_SetHovered_Params params {};
		params.bInHovered = bInHovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.SetPlayerLevel
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_PartyInvite_C::SetPlayerLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.SetPlayerLevel");
		
		USocialMenu_Entry_PartyInvite_C_SetPlayerLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.CreateContextualMenu
	 * 		Flags  -> ()
	 */
	class UUserWidget* USocialMenu_Entry_PartyInvite_C::CreateContextualMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.CreateContextualMenu");
		
		USocialMenu_Entry_PartyInvite_C_CreateContextualMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.SetProfileIcon
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_PartyInvite_C::SetProfileIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.SetProfileIcon");
		
		USocialMenu_Entry_PartyInvite_C_SetProfileIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.IsPendingFriendRequest
	 * 		Flags  -> ()
	 */
	bool USocialMenu_Entry_PartyInvite_C::IsPendingFriendRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.IsPendingFriendRequest");
		
		USocialMenu_Entry_PartyInvite_C_IsPendingFriendRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.ShowLoading
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_PartyInvite_C::ShowLoading()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.ShowLoading");
		
		USocialMenu_Entry_PartyInvite_C_ShowLoading_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.SetBackground
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_PartyInvite_C::SetBackground()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.SetBackground");
		
		USocialMenu_Entry_PartyInvite_C_SetBackground_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.SetOnlineStatus
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_PartyInvite_C::SetOnlineStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.SetOnlineStatus");
		
		USocialMenu_Entry_PartyInvite_C_SetOnlineStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.SetName
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_PartyInvite_C::SetName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.SetName");
		
		USocialMenu_Entry_PartyInvite_C_SetName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.SetPlatformIcon
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_PartyInvite_C::SetPlatformIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.SetPlatformIcon");
		
		USocialMenu_Entry_PartyInvite_C_SetPlatformIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.Event_Refresh
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_PartyInvite_C::Event_Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.Event_Refresh");
		
		USocialMenu_Entry_PartyInvite_C_Event_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.BndEvt__SendInviteButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_PartyInvite_C::BndEvt__SendInviteButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.BndEvt__SendInviteButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		USocialMenu_Entry_PartyInvite_C_BndEvt__SendInviteButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.OnFocusLost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void USocialMenu_Entry_PartyInvite_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.OnFocusLost");
		
		USocialMenu_Entry_PartyInvite_C_OnFocusLost_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.Construct
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_PartyInvite_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.Construct");
		
		USocialMenu_Entry_PartyInvite_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.OnMenuInputSourceChanged
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_PartyInvite_C::OnMenuInputSourceChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.OnMenuInputSourceChanged");
		
		USocialMenu_Entry_PartyInvite_C_OnMenuInputSourceChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.Destruct
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_PartyInvite_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.Destruct");
		
		USocialMenu_Entry_PartyInvite_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.BndEvt__SocialMenu_Entry_PartyInvite_InteractionButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_PartyInvite_C::BndEvt__SocialMenu_Entry_PartyInvite_InteractionButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.BndEvt__SocialMenu_Entry_PartyInvite_InteractionButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		USocialMenu_Entry_PartyInvite_C_BndEvt__SocialMenu_Entry_PartyInvite_InteractionButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.BndEvt__SocialMenu_Entry_PartyInvite_InteractionButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_PartyInvite_C::BndEvt__SocialMenu_Entry_PartyInvite_InteractionButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.BndEvt__SocialMenu_Entry_PartyInvite_InteractionButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		USocialMenu_Entry_PartyInvite_C_BndEvt__SocialMenu_Entry_PartyInvite_InteractionButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.BndEvt__SocialMenu_Entry_PartyInvite_InteractionButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USocialMenu_Entry_PartyInvite_C::BndEvt__SocialMenu_Entry_PartyInvite_InteractionButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.BndEvt__SocialMenu_Entry_PartyInvite_InteractionButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");
		
		USocialMenu_Entry_PartyInvite_C_BndEvt__SocialMenu_Entry_PartyInvite_InteractionButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.ExecuteUbergraph_SocialMenu_Entry_PartyInvite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USocialMenu_Entry_PartyInvite_C::ExecuteUbergraph_SocialMenu_Entry_PartyInvite(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.ExecuteUbergraph_SocialMenu_Entry_PartyInvite");
		
		USocialMenu_Entry_PartyInvite_C_ExecuteUbergraph_SocialMenu_Entry_PartyInvite_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USocialMenu_Entry_PartyInvite_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USocialMenu_Entry_PartyInvite_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C");
		return ptr;
	}

}


