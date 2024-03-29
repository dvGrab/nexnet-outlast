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
	 * 		Name   -> Function SocialMenu_ContextualMenu.SocialMenu_ContextualMenu_C.OnFocusReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply USocialMenu_ContextualMenu_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_ContextualMenu.SocialMenu_ContextualMenu_C.OnFocusReceived");
		
		USocialMenu_ContextualMenu_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function SocialMenu_ContextualMenu.SocialMenu_ContextualMenu_C.DoCustomNavigation_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* USocialMenu_ContextualMenu_C::DoCustomNavigation_1(EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_ContextualMenu.SocialMenu_ContextualMenu_C.DoCustomNavigation_1");
		
		USocialMenu_ContextualMenu_C_DoCustomNavigation_1_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_ContextualMenu.SocialMenu_ContextualMenu_C.GetActionText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERBSocialMenuEntryAction                           Enumerator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FText USocialMenu_ContextualMenu_C::GetActionText(ERBSocialMenuEntryAction Enumerator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_ContextualMenu.SocialMenu_ContextualMenu_C.GetActionText");
		
		USocialMenu_ContextualMenu_C_GetActionText_Params params {};
		params.Enumerator = Enumerator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_ContextualMenu.SocialMenu_ContextualMenu_C.Event_Refresh
	 * 		Flags  -> ()
	 */
	void USocialMenu_ContextualMenu_C::Event_Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_ContextualMenu.SocialMenu_ContextualMenu_C.Event_Refresh");
		
		USocialMenu_ContextualMenu_C_Event_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_ContextualMenu.SocialMenu_ContextualMenu_C.OnActionTriggered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERBSocialMenuEntryAction                           action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USocialMenu_ContextualMenu_C::OnActionTriggered(ERBSocialMenuEntryAction action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_ContextualMenu.SocialMenu_ContextualMenu_C.OnActionTriggered");
		
		USocialMenu_ContextualMenu_C_OnActionTriggered_Params params {};
		params.action = action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_ContextualMenu.SocialMenu_ContextualMenu_C.BndEvt__SocialMenu_ContextualMenu_VoiceChatVolumeSlider_K2Node_ComponentBoundEvent_0_OnValueUpdated__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USocialMenu_ContextualMenu_C::BndEvt__SocialMenu_ContextualMenu_VoiceChatVolumeSlider_K2Node_ComponentBoundEvent_0_OnValueUpdated__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_ContextualMenu.SocialMenu_ContextualMenu_C.BndEvt__SocialMenu_ContextualMenu_VoiceChatVolumeSlider_K2Node_ComponentBoundEvent_0_OnValueUpdated__DelegateSignature");
		
		USocialMenu_ContextualMenu_C_BndEvt__SocialMenu_ContextualMenu_VoiceChatVolumeSlider_K2Node_ComponentBoundEvent_0_OnValueUpdated__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_ContextualMenu.SocialMenu_ContextualMenu_C.ExecuteUbergraph_SocialMenu_ContextualMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USocialMenu_ContextualMenu_C::ExecuteUbergraph_SocialMenu_ContextualMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_ContextualMenu.SocialMenu_ContextualMenu_C.ExecuteUbergraph_SocialMenu_ContextualMenu");
		
		USocialMenu_ContextualMenu_C_ExecuteUbergraph_SocialMenu_ContextualMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USocialMenu_ContextualMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USocialMenu_ContextualMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SocialMenu_ContextualMenu.SocialMenu_ContextualMenu_C");
		return ptr;
	}

}


