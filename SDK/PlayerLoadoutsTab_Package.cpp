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
	 * 		Name   -> Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.HandleMenuTabRight
	 * 		Flags  -> ()
	 */
	bool UPlayerLoadoutsTab_C::HandleMenuTabRight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.HandleMenuTabRight");
		
		UPlayerLoadoutsTab_C_HandleMenuTabRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.HandleMenuTabLeft
	 * 		Flags  -> ()
	 */
	bool UPlayerLoadoutsTab_C::HandleMenuTabLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.HandleMenuTabLeft");
		
		UPlayerLoadoutsTab_C_HandleMenuTabLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.SetCategoryFocus
	 * 		Flags  -> ()
	 */
	void UPlayerLoadoutsTab_C::SetCategoryFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.SetCategoryFocus");
		
		UPlayerLoadoutsTab_C_SetCategoryFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.OnFocusReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UPlayerLoadoutsTab_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.OnFocusReceived");
		
		UPlayerLoadoutsTab_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.OnMenuRightClick
	 * 		Flags  -> ()
	 */
	void UPlayerLoadoutsTab_C::OnMenuRightClick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.OnMenuRightClick");
		
		UPlayerLoadoutsTab_C_OnMenuRightClick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.Refresh
	 * 		Flags  -> ()
	 */
	void UPlayerLoadoutsTab_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.Refresh");
		
		UPlayerLoadoutsTab_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.GetPageSubtitle
	 * 		Flags  -> ()
	 */
	class FText UPlayerLoadoutsTab_C::GetPageSubtitle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.GetPageSubtitle");
		
		UPlayerLoadoutsTab_C_GetPageSubtitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.ShouldShowNavigation
	 * 		Flags  -> ()
	 */
	bool UPlayerLoadoutsTab_C::ShouldShowNavigation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.ShouldShowNavigation");
		
		UPlayerLoadoutsTab_C_ShouldShowNavigation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.GetPageTitle
	 * 		Flags  -> ()
	 */
	class FText UPlayerLoadoutsTab_C::GetPageTitle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.GetPageTitle");
		
		UPlayerLoadoutsTab_C_GetPageTitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.IsReadyToClose
	 * 		Flags  -> ()
	 */
	bool UPlayerLoadoutsTab_C::IsReadyToClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.IsReadyToClose");
		
		UPlayerLoadoutsTab_C_IsReadyToClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.GetPageSpecificButtons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UUserWidget*>                         outButtons                                                 (Parm, OutParm, ContainsInstancedReference)
	 */
	void UPlayerLoadoutsTab_C::GetPageSpecificButtons(TArray<class UUserWidget*>* outButtons)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.GetPageSpecificButtons");
		
		UPlayerLoadoutsTab_C_GetPageSpecificButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outButtons != nullptr)
			*outButtons = params.outButtons;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.SaveLoadout
	 * 		Flags  -> ()
	 */
	void UPlayerLoadoutsTab_C::SaveLoadout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.SaveLoadout");
		
		UPlayerLoadoutsTab_C_SaveLoadout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.ChangeCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELoadoutElementType                                Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerLoadoutsTab_C::ChangeCategory(ELoadoutElementType Category)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.ChangeCategory");
		
		UPlayerLoadoutsTab_C_ChangeCategory_Params params {};
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.Construct
	 * 		Flags  -> ()
	 */
	void UPlayerLoadoutsTab_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.Construct");
		
		UPlayerLoadoutsTab_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.Event_OnParentPopped
	 * 		Flags  -> ()
	 */
	void UPlayerLoadoutsTab_C::Event_OnParentPopped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.Event_OnParentPopped");
		
		UPlayerLoadoutsTab_C_Event_OnParentPopped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.BndEvt__PlayerLoadoutsTab_RigList_K2Node_ComponentBoundEvent_1_OnRigClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EActiveSkillType                                   ActiveSkillType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerLoadoutsTab_C::BndEvt__PlayerLoadoutsTab_RigList_K2Node_ComponentBoundEvent_1_OnRigClicked__DelegateSignature(const class FName& ItemId, EActiveSkillType ActiveSkillType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.BndEvt__PlayerLoadoutsTab_RigList_K2Node_ComponentBoundEvent_1_OnRigClicked__DelegateSignature");
		
		UPlayerLoadoutsTab_C_BndEvt__PlayerLoadoutsTab_RigList_K2Node_ComponentBoundEvent_1_OnRigClicked__DelegateSignature_Params params {};
		params.ItemId = ItemId;
		params.ActiveSkillType = ActiveSkillType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.OnBackRequested
	 * 		Flags  -> ()
	 */
	void UPlayerLoadoutsTab_C::OnBackRequested()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.OnBackRequested");
		
		UPlayerLoadoutsTab_C_OnBackRequested_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.BndEvt__PlayerLoadoutsTab_CoreUpgradeTierList_K2Node_ComponentBoundEvent_2_OnTierClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            tier                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerLoadoutsTab_C::BndEvt__PlayerLoadoutsTab_CoreUpgradeTierList_K2Node_ComponentBoundEvent_2_OnTierClicked__DelegateSignature(int32_t tier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.BndEvt__PlayerLoadoutsTab_CoreUpgradeTierList_K2Node_ComponentBoundEvent_2_OnTierClicked__DelegateSignature");
		
		UPlayerLoadoutsTab_C_BndEvt__PlayerLoadoutsTab_CoreUpgradeTierList_K2Node_ComponentBoundEvent_2_OnTierClicked__DelegateSignature_Params params {};
		params.tier = tier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.BndEvt__PlayerLoadoutsTab_LoadoutRecap_K2Node_ComponentBoundEvent_0_OnRigButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPlayerLoadoutsTab_C::BndEvt__PlayerLoadoutsTab_LoadoutRecap_K2Node_ComponentBoundEvent_0_OnRigButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.BndEvt__PlayerLoadoutsTab_LoadoutRecap_K2Node_ComponentBoundEvent_0_OnRigButtonClicked__DelegateSignature");
		
		UPlayerLoadoutsTab_C_BndEvt__PlayerLoadoutsTab_LoadoutRecap_K2Node_ComponentBoundEvent_0_OnRigButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.BndEvt__PlayerLoadoutsTab_LoadoutRecap_K2Node_ComponentBoundEvent_3_OnPerkSlotsButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPlayerLoadoutsTab_C::BndEvt__PlayerLoadoutsTab_LoadoutRecap_K2Node_ComponentBoundEvent_3_OnPerkSlotsButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.BndEvt__PlayerLoadoutsTab_LoadoutRecap_K2Node_ComponentBoundEvent_3_OnPerkSlotsButtonClicked__DelegateSignature");
		
		UPlayerLoadoutsTab_C_BndEvt__PlayerLoadoutsTab_LoadoutRecap_K2Node_ComponentBoundEvent_3_OnPerkSlotsButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.BndEvt__PlayerLoadoutsTab_PerkList_K2Node_ComponentBoundEvent_4_OnUpgradeClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerLoadoutsTab_C::BndEvt__PlayerLoadoutsTab_PerkList_K2Node_ComponentBoundEvent_4_OnUpgradeClicked__DelegateSignature(const class FName& ItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.BndEvt__PlayerLoadoutsTab_PerkList_K2Node_ComponentBoundEvent_4_OnUpgradeClicked__DelegateSignature");
		
		UPlayerLoadoutsTab_C_BndEvt__PlayerLoadoutsTab_PerkList_K2Node_ComponentBoundEvent_4_OnUpgradeClicked__DelegateSignature_Params params {};
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.BndEvt__PlayerLoadoutsTab_LoadoutRecap_K2Node_ComponentBoundEvent_5_OnCoreUpgradesButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPlayerLoadoutsTab_C::BndEvt__PlayerLoadoutsTab_LoadoutRecap_K2Node_ComponentBoundEvent_5_OnCoreUpgradesButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.BndEvt__PlayerLoadoutsTab_LoadoutRecap_K2Node_ComponentBoundEvent_5_OnCoreUpgradesButtonClicked__DelegateSignature");
		
		UPlayerLoadoutsTab_C_BndEvt__PlayerLoadoutsTab_LoadoutRecap_K2Node_ComponentBoundEvent_5_OnCoreUpgradesButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.BndEvt__PlayerLoadoutsTab_RigList_K2Node_ComponentBoundEvent_6_OnRigHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EActiveSkillType                                   ActiveSkillType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerLoadoutsTab_C::BndEvt__PlayerLoadoutsTab_RigList_K2Node_ComponentBoundEvent_6_OnRigHovered__DelegateSignature(const class FName& ItemId, EActiveSkillType ActiveSkillType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.BndEvt__PlayerLoadoutsTab_RigList_K2Node_ComponentBoundEvent_6_OnRigHovered__DelegateSignature");
		
		UPlayerLoadoutsTab_C_BndEvt__PlayerLoadoutsTab_RigList_K2Node_ComponentBoundEvent_6_OnRigHovered__DelegateSignature_Params params {};
		params.ItemId = ItemId;
		params.ActiveSkillType = ActiveSkillType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.Event_OnTabUnselected
	 * 		Flags  -> ()
	 */
	void UPlayerLoadoutsTab_C::Event_OnTabUnselected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.Event_OnTabUnselected");
		
		UPlayerLoadoutsTab_C_Event_OnTabUnselected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.ExecuteUbergraph_PlayerLoadoutsTab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerLoadoutsTab_C::ExecuteUbergraph_PlayerLoadoutsTab(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.ExecuteUbergraph_PlayerLoadoutsTab");
		
		UPlayerLoadoutsTab_C_ExecuteUbergraph_PlayerLoadoutsTab_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.EventRequestTutorial__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPlayerLoadoutsTab_C::EventRequestTutorial__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.EventRequestTutorial__DelegateSignature");
		
		UPlayerLoadoutsTab_C_EventRequestTutorial__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerLoadoutsTab_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerLoadoutsTab_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerLoadoutsTab.PlayerLoadoutsTab_C");
		return ptr;
	}

}


