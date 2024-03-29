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
	 * 		Name   -> Function SocialMenu_ContextualMenu_Action.SocialMenu_ContextualMenu_Action_C.SetHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInHovered                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USocialMenu_ContextualMenu_Action_C::SetHovered(bool bInHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_ContextualMenu_Action.SocialMenu_ContextualMenu_Action_C.SetHovered");
		
		USocialMenu_ContextualMenu_Action_C_SetHovered_Params params {};
		params.bInHovered = bInHovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_ContextualMenu_Action.SocialMenu_ContextualMenu_Action_C.Refresh
	 * 		Flags  -> ()
	 */
	void USocialMenu_ContextualMenu_Action_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_ContextualMenu_Action.SocialMenu_ContextualMenu_Action_C.Refresh");
		
		USocialMenu_ContextualMenu_Action_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_ContextualMenu_Action.SocialMenu_ContextualMenu_Action_C.SetButtonText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USocialMenu_ContextualMenu_Action_C::SetButtonText(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_ContextualMenu_Action.SocialMenu_ContextualMenu_Action_C.SetButtonText");
		
		USocialMenu_ContextualMenu_Action_C_SetButtonText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_ContextualMenu_Action.SocialMenu_ContextualMenu_Action_C.SetEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USocialMenu_ContextualMenu_Action_C::SetEnabled(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_ContextualMenu_Action.SocialMenu_ContextualMenu_Action_C.SetEnabled");
		
		USocialMenu_ContextualMenu_Action_C_SetEnabled_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_ContextualMenu_Action.SocialMenu_ContextualMenu_Action_C.BndEvt__btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USocialMenu_ContextualMenu_Action_C::BndEvt__btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_ContextualMenu_Action.SocialMenu_ContextualMenu_Action_C.BndEvt__btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		USocialMenu_ContextualMenu_Action_C_BndEvt__btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_ContextualMenu_Action.SocialMenu_ContextualMenu_Action_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USocialMenu_ContextualMenu_Action_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_ContextualMenu_Action.SocialMenu_ContextualMenu_Action_C.PreConstruct");
		
		USocialMenu_ContextualMenu_Action_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_ContextualMenu_Action.SocialMenu_ContextualMenu_Action_C.BndEvt__SocialMenu_ContextualMenu_Action_btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USocialMenu_ContextualMenu_Action_C::BndEvt__SocialMenu_ContextualMenu_Action_btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_ContextualMenu_Action.SocialMenu_ContextualMenu_Action_C.BndEvt__SocialMenu_ContextualMenu_Action_btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		USocialMenu_ContextualMenu_Action_C_BndEvt__SocialMenu_ContextualMenu_Action_btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_ContextualMenu_Action.SocialMenu_ContextualMenu_Action_C.BndEvt__SocialMenu_ContextualMenu_Action_btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USocialMenu_ContextualMenu_Action_C::BndEvt__SocialMenu_ContextualMenu_Action_btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_ContextualMenu_Action.SocialMenu_ContextualMenu_Action_C.BndEvt__SocialMenu_ContextualMenu_Action_btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		USocialMenu_ContextualMenu_Action_C_BndEvt__SocialMenu_ContextualMenu_Action_btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_ContextualMenu_Action.SocialMenu_ContextualMenu_Action_C.ExecuteUbergraph_SocialMenu_ContextualMenu_Action
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USocialMenu_ContextualMenu_Action_C::ExecuteUbergraph_SocialMenu_ContextualMenu_Action(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_ContextualMenu_Action.SocialMenu_ContextualMenu_Action_C.ExecuteUbergraph_SocialMenu_ContextualMenu_Action");
		
		USocialMenu_ContextualMenu_Action_C_ExecuteUbergraph_SocialMenu_ContextualMenu_Action_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_ContextualMenu_Action.SocialMenu_ContextualMenu_Action_C.OnActionTriggered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERBSocialMenuEntryAction                           action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USocialMenu_ContextualMenu_Action_C::OnActionTriggered__DelegateSignature(ERBSocialMenuEntryAction action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SocialMenu_ContextualMenu_Action.SocialMenu_ContextualMenu_Action_C.OnActionTriggered__DelegateSignature");
		
		USocialMenu_ContextualMenu_Action_C_OnActionTriggered__DelegateSignature_Params params {};
		params.action = action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USocialMenu_ContextualMenu_Action_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USocialMenu_ContextualMenu_Action_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SocialMenu_ContextualMenu_Action.SocialMenu_ContextualMenu_Action_C");
		return ptr;
	}

}


