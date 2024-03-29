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
	 * 		Name   -> Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.Claim
	 * 		Flags  -> ()
	 */
	void UCharacterSheetBadgesTab_C::Claim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.Claim");
		
		UCharacterSheetBadgesTab_C_Claim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.BuildBadgeRewards
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        RewardDataId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bClaimable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bUnlockedAtLeastOnce                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCharacterSheetBadgesTab_C::BuildBadgeRewards(const class FName& RewardDataId, bool bClaimable, bool bUnlockedAtLeastOnce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.BuildBadgeRewards");
		
		UCharacterSheetBadgesTab_C_BuildBadgeRewards_Params params {};
		params.RewardDataId = RewardDataId;
		params.bClaimable = bClaimable;
		params.bUnlockedAtLeastOnce = bUnlockedAtLeastOnce;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.SetupSelectedBadge
	 * 		Flags  -> ()
	 */
	void UCharacterSheetBadgesTab_C::SetupSelectedBadge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.SetupSelectedBadge");
		
		UCharacterSheetBadgesTab_C_SetupSelectedBadge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.SetPage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewPageIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCharacterSheetBadgesTab_C::SetPage(int32_t NewPageIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.SetPage");
		
		UCharacterSheetBadgesTab_C_SetPage_Params params {};
		params.NewPageIndex = NewPageIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.OnFocusReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UCharacterSheetBadgesTab_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.OnFocusReceived");
		
		UCharacterSheetBadgesTab_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.NextPage
	 * 		Flags  -> ()
	 */
	void UCharacterSheetBadgesTab_C::NextPage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.NextPage");
		
		UCharacterSheetBadgesTab_C_NextPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.PreviousPage
	 * 		Flags  -> ()
	 */
	void UCharacterSheetBadgesTab_C::PreviousPage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.PreviousPage");
		
		UCharacterSheetBadgesTab_C_PreviousPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.UpdateGamepadPageNav
	 * 		Flags  -> ()
	 */
	void UCharacterSheetBadgesTab_C::UpdateGamepadPageNav()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.UpdateGamepadPageNav");
		
		UCharacterSheetBadgesTab_C_UpdateGamepadPageNav_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.OnBadgeClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBadgeSashEntry_C*                           badgeEntry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCharacterSheetBadgesTab_C::OnBadgeClicked(class UBadgeSashEntry_C* badgeEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.OnBadgeClicked");
		
		UCharacterSheetBadgesTab_C_OnBadgeClicked_Params params {};
		params.badgeEntry = badgeEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.OnBadgeUnhovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBadgeSashEntry_C*                           badgeEntry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCharacterSheetBadgesTab_C::OnBadgeUnhovered(class UBadgeSashEntry_C* badgeEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.OnBadgeUnhovered");
		
		UCharacterSheetBadgesTab_C_OnBadgeUnhovered_Params params {};
		params.badgeEntry = badgeEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.OnBadgeHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBadgeSashEntry_C*                           badgeEntry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCharacterSheetBadgesTab_C::OnBadgeHovered(class UBadgeSashEntry_C* badgeEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.OnBadgeHovered");
		
		UCharacterSheetBadgesTab_C_OnBadgeHovered_Params params {};
		params.badgeEntry = badgeEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.GetPageTitle
	 * 		Flags  -> ()
	 */
	class FText UCharacterSheetBadgesTab_C::GetPageTitle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.GetPageTitle");
		
		UCharacterSheetBadgesTab_C_GetPageTitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.Refresh
	 * 		Flags  -> ()
	 */
	void UCharacterSheetBadgesTab_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.Refresh");
		
		UCharacterSheetBadgesTab_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.RefreshBadgePages
	 * 		Flags  -> ()
	 */
	void UCharacterSheetBadgesTab_C::RefreshBadgePages()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.RefreshBadgePages");
		
		UCharacterSheetBadgesTab_C_RefreshBadgePages_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.SetupBadgeNavigation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     badge                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCharacterSheetBadgesTab_C::SetupBadgeNavigation(class UWidget* badge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.SetupBadgeNavigation");
		
		UCharacterSheetBadgesTab_C_SetupBadgeNavigation_Params params {};
		params.badge = badge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.Refresh Badges
	 * 		Flags  -> ()
	 */
	void UCharacterSheetBadgesTab_C::Refresh_Badges()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.Refresh Badges");
		
		UCharacterSheetBadgesTab_C_Refresh_Badges_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.Event_Refresh
	 * 		Flags  -> ()
	 */
	void UCharacterSheetBadgesTab_C::Event_Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.Event_Refresh");
		
		UCharacterSheetBadgesTab_C_Event_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.BndEvt__PreviousPageButton_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCharacterSheetBadgesTab_C::BndEvt__PreviousPageButton_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.BndEvt__PreviousPageButton_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UCharacterSheetBadgesTab_C_BndEvt__PreviousPageButton_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.BndEvt__NextPageButton_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCharacterSheetBadgesTab_C::BndEvt__NextPageButton_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.BndEvt__NextPageButton_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UCharacterSheetBadgesTab_C_BndEvt__NextPageButton_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.Construct
	 * 		Flags  -> ()
	 */
	void UCharacterSheetBadgesTab_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.Construct");
		
		UCharacterSheetBadgesTab_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.OnMenuInputSourceChanged
	 * 		Flags  -> ()
	 */
	void UCharacterSheetBadgesTab_C::OnMenuInputSourceChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.OnMenuInputSourceChanged");
		
		UCharacterSheetBadgesTab_C_OnMenuInputSourceChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.Destruct
	 * 		Flags  -> ()
	 */
	void UCharacterSheetBadgesTab_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.Destruct");
		
		UCharacterSheetBadgesTab_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.OnGamepadPageLeft
	 * 		Flags  -> ()
	 */
	void UCharacterSheetBadgesTab_C::OnGamepadPageLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.OnGamepadPageLeft");
		
		UCharacterSheetBadgesTab_C_OnGamepadPageLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.OnGamepadPageRight
	 * 		Flags  -> ()
	 */
	void UCharacterSheetBadgesTab_C::OnGamepadPageRight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.OnGamepadPageRight");
		
		UCharacterSheetBadgesTab_C_OnGamepadPageRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.Event_OnTabSelected
	 * 		Flags  -> ()
	 */
	void UCharacterSheetBadgesTab_C::Event_OnTabSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.Event_OnTabSelected");
		
		UCharacterSheetBadgesTab_C_Event_OnTabSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.Event_OnTabUnselected
	 * 		Flags  -> ()
	 */
	void UCharacterSheetBadgesTab_C::Event_OnTabUnselected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.Event_OnTabUnselected");
		
		UCharacterSheetBadgesTab_C_Event_OnTabUnselected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.BndEvt__CharacterSheetBadgesTab_ClaimRewardButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCharacterSheetBadgesTab_C::BndEvt__CharacterSheetBadgesTab_ClaimRewardButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.BndEvt__CharacterSheetBadgesTab_ClaimRewardButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UCharacterSheetBadgesTab_C_BndEvt__CharacterSheetBadgesTab_ClaimRewardButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.ExecuteUbergraph_CharacterSheetBadgesTab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCharacterSheetBadgesTab_C::ExecuteUbergraph_CharacterSheetBadgesTab(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.ExecuteUbergraph_CharacterSheetBadgesTab");
		
		UCharacterSheetBadgesTab_C_ExecuteUbergraph_CharacterSheetBadgesTab_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterSheetBadgesTab_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterSheetBadgesTab_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CharacterSheetBadgesTab.CharacterSheetBadgesTab_C");
		return ptr;
	}

}


