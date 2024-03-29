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
	 * 		Name   -> Function SocialMenu_Tab_Party.SocialMenu_Tab_Party_C.OnFocusReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply USocialMenu_Tab_Party_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Tab_Party.SocialMenu_Tab_Party_C.OnFocusReceived");
		
		USocialMenu_Tab_Party_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function SocialMenu_Tab_Party.SocialMenu_Tab_Party_C.Refresh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bCanSendPartyInvite                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USocialMenu_Tab_Party_C::Refresh(bool bCanSendPartyInvite)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Tab_Party.SocialMenu_Tab_Party_C.Refresh");
		
		USocialMenu_Tab_Party_C_Refresh_Params params {};
		params.bCanSendPartyInvite = bCanSendPartyInvite;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Tab_Party.SocialMenu_Tab_Party_C.Deactivate
	 * 		Flags  -> ()
	 */
	void USocialMenu_Tab_Party_C::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Tab_Party.SocialMenu_Tab_Party_C.Deactivate");
		
		USocialMenu_Tab_Party_C_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Tab_Party.SocialMenu_Tab_Party_C.Activate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBSocialMenuManager*                        SocialMenu                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USocialMenu_Tab_Party_C::Activate(class URBSocialMenuManager* SocialMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Tab_Party.SocialMenu_Tab_Party_C.Activate");
		
		USocialMenu_Tab_Party_C_Activate_Params params {};
		params.SocialMenu = SocialMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Tab_Party.SocialMenu_Tab_Party_C.BndEvt__SocialMenu_Tab_Party_SocialMenuPartyInviteEntries_K2Node_ComponentBoundEvent_0_OnNoFocusPossible__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USocialMenu_Tab_Party_C::BndEvt__SocialMenu_Tab_Party_SocialMenuPartyInviteEntries_K2Node_ComponentBoundEvent_0_OnNoFocusPossible__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Tab_Party.SocialMenu_Tab_Party_C.BndEvt__SocialMenu_Tab_Party_SocialMenuPartyInviteEntries_K2Node_ComponentBoundEvent_0_OnNoFocusPossible__DelegateSignature");
		
		USocialMenu_Tab_Party_C_BndEvt__SocialMenu_Tab_Party_SocialMenuPartyInviteEntries_K2Node_ComponentBoundEvent_0_OnNoFocusPossible__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Tab_Party.SocialMenu_Tab_Party_C.ExecuteUbergraph_SocialMenu_Tab_Party
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USocialMenu_Tab_Party_C::ExecuteUbergraph_SocialMenu_Tab_Party(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_Tab_Party.SocialMenu_Tab_Party_C.ExecuteUbergraph_SocialMenu_Tab_Party");
		
		USocialMenu_Tab_Party_C_ExecuteUbergraph_SocialMenu_Tab_Party_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USocialMenu_Tab_Party_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USocialMenu_Tab_Party_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SocialMenu_Tab_Party.SocialMenu_Tab_Party_C");
		return ptr;
	}

}


