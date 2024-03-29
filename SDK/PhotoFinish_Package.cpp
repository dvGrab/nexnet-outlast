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
	 * 		Name   -> Function PhotoFinish.PhotoFinish_C.SetupMurkoffCommentScale
	 * 		Flags  -> ()
	 */
	void UPhotoFinish_C::SetupMurkoffCommentScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinish.PhotoFinish_C.SetupMurkoffCommentScale");
		
		UPhotoFinish_C_SetupMurkoffCommentScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinish.PhotoFinish_C.StopXpSound
	 * 		Flags  -> ()
	 */
	void UPhotoFinish_C::StopXpSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinish.PhotoFinish_C.StopXpSound");
		
		UPhotoFinish_C_StopXpSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinish.PhotoFinish_C.StartXpSound
	 * 		Flags  -> ()
	 */
	void UPhotoFinish_C::StartXpSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinish.PhotoFinish_C.StartXpSound");
		
		UPhotoFinish_C_StartXpSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinish.PhotoFinish_C.StopScoreLinesSound
	 * 		Flags  -> ()
	 */
	void UPhotoFinish_C::StopScoreLinesSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinish.PhotoFinish_C.StopScoreLinesSound");
		
		UPhotoFinish_C_StopScoreLinesSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinish.PhotoFinish_C.StartScoreLinesSound
	 * 		Flags  -> ()
	 */
	void UPhotoFinish_C::StartScoreLinesSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinish.PhotoFinish_C.StartScoreLinesSound");
		
		UPhotoFinish_C_StartScoreLinesSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinish.PhotoFinish_C.GetRewardWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRewardUIData                               RewardUIData                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		class UProgramTrialRewardWidget_C*                 rewardWidget                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bCreated                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPhotoFinish_C::GetRewardWidget(const struct FRewardUIData& RewardUIData, class UProgramTrialRewardWidget_C** rewardWidget, bool* bCreated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinish.PhotoFinish_C.GetRewardWidget");
		
		UPhotoFinish_C_GetRewardWidget_Params params {};
		params.RewardUIData = RewardUIData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (rewardWidget != nullptr)
			*rewardWidget = params.rewardWidget;
		if (bCreated != nullptr)
			*bCreated = params.bCreated;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinish.PhotoFinish_C.AddPendingReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRewardUIData                               RewardUIData                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UPhotoFinish_C::AddPendingReward(const struct FRewardUIData& RewardUIData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinish.PhotoFinish_C.AddPendingReward");
		
		UPhotoFinish_C_AddPendingReward_Params params {};
		params.RewardUIData = RewardUIData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinish.PhotoFinish_C.OnFocusReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UPhotoFinish_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinish.PhotoFinish_C.OnFocusReceived");
		
		UPhotoFinish_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function PhotoFinish.PhotoFinish_C.SetupXpCounterDisplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPhotoFinish_C::SetupXpCounterDisplay(int32_t Level, int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinish.PhotoFinish_C.SetupXpCounterDisplay");
		
		UPhotoFinish_C_SetupXpCounterDisplay_Params params {};
		params.Level = Level;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinish.PhotoFinish_C.OnBadgeUnhovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBadgeSashEntry_C*                           BadgeSettings                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPhotoFinish_C::OnBadgeUnhovered(class UBadgeSashEntry_C* BadgeSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinish.PhotoFinish_C.OnBadgeUnhovered");
		
		UPhotoFinish_C_OnBadgeUnhovered_Params params {};
		params.BadgeSettings = BadgeSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinish.PhotoFinish_C.OnBadgeHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBadgeSashEntry_C*                           badgeEntry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPhotoFinish_C::OnBadgeHovered(class UBadgeSashEntry_C* badgeEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinish.PhotoFinish_C.OnBadgeHovered");
		
		UPhotoFinish_C_OnBadgeHovered_Params params {};
		params.badgeEntry = badgeEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinish.PhotoFinish_C.RefreshBadgeButtons
	 * 		Flags  -> ()
	 */
	void UPhotoFinish_C::RefreshBadgeButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinish.PhotoFinish_C.RefreshBadgeButtons");
		
		UPhotoFinish_C_RefreshBadgeButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinish.PhotoFinish_C.OnLevelUp
	 * 		Flags  -> ()
	 */
	void UPhotoFinish_C::OnLevelUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinish.PhotoFinish_C.OnLevelUp");
		
		UPhotoFinish_C_OnLevelUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinish.PhotoFinish_C.TryStartNextProgressionAnimation
	 * 		Flags  -> ()
	 */
	void UPhotoFinish_C::TryStartNextProgressionAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinish.PhotoFinish_C.TryStartNextProgressionAnimation");
		
		UPhotoFinish_C_TryStartNextProgressionAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinish.PhotoFinish_C.ShowProgression
	 * 		Flags  -> ()
	 */
	void UPhotoFinish_C::ShowProgression()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinish.PhotoFinish_C.ShowProgression");
		
		UPhotoFinish_C_ShowProgression_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinish.PhotoFinish_C.ShowScore
	 * 		Flags  -> ()
	 */
	void UPhotoFinish_C::ShowScore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinish.PhotoFinish_C.ShowScore");
		
		UPhotoFinish_C_ShowScore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinish.PhotoFinish_C.ShowSummary
	 * 		Flags  -> ()
	 */
	void UPhotoFinish_C::ShowSummary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinish.PhotoFinish_C.ShowSummary");
		
		UPhotoFinish_C_ShowSummary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinish.PhotoFinish_C.RefreshActionButtons
	 * 		Flags  -> ()
	 */
	void UPhotoFinish_C::RefreshActionButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinish.PhotoFinish_C.RefreshActionButtons");
		
		UPhotoFinish_C_RefreshActionButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinish.PhotoFinish_C.SetupInitialLevelData
	 * 		Flags  -> ()
	 */
	void UPhotoFinish_C::SetupInitialLevelData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinish.PhotoFinish_C.SetupInitialLevelData");
		
		UPhotoFinish_C_SetupInitialLevelData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinish.PhotoFinish_C.SetupBadges
	 * 		Flags  -> ()
	 */
	void UPhotoFinish_C::SetupBadges()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinish.PhotoFinish_C.SetupBadges");
		
		UPhotoFinish_C_SetupBadges_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinish.PhotoFinish_C.SetupScoreLines
	 * 		Flags  -> ()
	 */
	void UPhotoFinish_C::SetupScoreLines()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinish.PhotoFinish_C.SetupScoreLines");
		
		UPhotoFinish_C_SetupScoreLines_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinish.PhotoFinish_C.SetupGroupDetails
	 * 		Flags  -> ()
	 */
	void UPhotoFinish_C::SetupGroupDetails()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinish.PhotoFinish_C.SetupGroupDetails");
		
		UPhotoFinish_C_SetupGroupDetails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinish.PhotoFinish_C.SetupMurkoffComment
	 * 		Flags  -> ()
	 */
	void UPhotoFinish_C::SetupMurkoffComment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinish.PhotoFinish_C.SetupMurkoffComment");
		
		UPhotoFinish_C_SetupMurkoffComment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinish.PhotoFinish_C.SetupVariators
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHorizontalBox*                              targetHBox                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPhotoFinish_C::SetupVariators(class UHorizontalBox* targetHBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinish.PhotoFinish_C.SetupVariators");
		
		UPhotoFinish_C_SetupVariators_Params params {};
		params.targetHBox = targetHBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinish.PhotoFinish_C.Setup
	 * 		Flags  -> ()
	 */
	void UPhotoFinish_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinish.PhotoFinish_C.Setup");
		
		UPhotoFinish_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinish.PhotoFinish_C.Finished_B770552149C35E96E54C2788A8B201FC
	 * 		Flags  -> ()
	 */
	void UPhotoFinish_C::Finished_B770552149C35E96E54C2788A8B201FC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinish.PhotoFinish_C.Finished_B770552149C35E96E54C2788A8B201FC");
		
		UPhotoFinish_C_Finished_B770552149C35E96E54C2788A8B201FC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinish.PhotoFinish_C.Construct
	 * 		Flags  -> ()
	 */
	void UPhotoFinish_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinish.PhotoFinish_C.Construct");
		
		UPhotoFinish_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinish.PhotoFinish_C.Event_StartAnimations
	 * 		Flags  -> ()
	 */
	void UPhotoFinish_C::Event_StartAnimations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinish.PhotoFinish_C.Event_StartAnimations");
		
		UPhotoFinish_C_Event_StartAnimations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinish.PhotoFinish_C.Event_Refresh
	 * 		Flags  -> ()
	 */
	void UPhotoFinish_C::Event_Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinish.PhotoFinish_C.Event_Refresh");
		
		UPhotoFinish_C_Event_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinish.PhotoFinish_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuButton_C*                             Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPhotoFinish_C::BndEvt__LeaveButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class URBMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinish.PhotoFinish_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UPhotoFinish_C_BndEvt__LeaveButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinish.PhotoFinish_C.Event_OnFocusMenu
	 * 		Flags  -> ()
	 */
	void UPhotoFinish_C::Event_OnFocusMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinish.PhotoFinish_C.Event_OnFocusMenu");
		
		UPhotoFinish_C_Event_OnFocusMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinish.PhotoFinish_C.NextInputPressed
	 * 		Flags  -> ()
	 */
	void UPhotoFinish_C::NextInputPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinish.PhotoFinish_C.NextInputPressed");
		
		UPhotoFinish_C_NextInputPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinish.PhotoFinish_C.Destruct
	 * 		Flags  -> ()
	 */
	void UPhotoFinish_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinish.PhotoFinish_C.Destruct");
		
		UPhotoFinish_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinish.PhotoFinish_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPhotoFinish_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinish.PhotoFinish_C.PreConstruct");
		
		UPhotoFinish_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinish.PhotoFinish_C.BndEvt__PhotoFinish_SummaryButtom_K2Node_ComponentBoundEvent_0_OnMenuTabButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuTabButton*                            Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPhotoFinish_C::BndEvt__PhotoFinish_SummaryButtom_K2Node_ComponentBoundEvent_0_OnMenuTabButtonClicked__DelegateSignature(class URBMenuTabButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinish.PhotoFinish_C.BndEvt__PhotoFinish_SummaryButtom_K2Node_ComponentBoundEvent_0_OnMenuTabButtonClicked__DelegateSignature");
		
		UPhotoFinish_C_BndEvt__PhotoFinish_SummaryButtom_K2Node_ComponentBoundEvent_0_OnMenuTabButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinish.PhotoFinish_C.BndEvt__PhotoFinish_ScoreButton_K2Node_ComponentBoundEvent_2_OnMenuTabButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuTabButton*                            Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPhotoFinish_C::BndEvt__PhotoFinish_ScoreButton_K2Node_ComponentBoundEvent_2_OnMenuTabButtonClicked__DelegateSignature(class URBMenuTabButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinish.PhotoFinish_C.BndEvt__PhotoFinish_ScoreButton_K2Node_ComponentBoundEvent_2_OnMenuTabButtonClicked__DelegateSignature");
		
		UPhotoFinish_C_BndEvt__PhotoFinish_ScoreButton_K2Node_ComponentBoundEvent_2_OnMenuTabButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinish.PhotoFinish_C.BndEvt__PhotoFinish_ProgressionButton_K2Node_ComponentBoundEvent_3_OnMenuTabButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuTabButton*                            Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPhotoFinish_C::BndEvt__PhotoFinish_ProgressionButton_K2Node_ComponentBoundEvent_3_OnMenuTabButtonClicked__DelegateSignature(class URBMenuTabButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinish.PhotoFinish_C.BndEvt__PhotoFinish_ProgressionButton_K2Node_ComponentBoundEvent_3_OnMenuTabButtonClicked__DelegateSignature");
		
		UPhotoFinish_C_BndEvt__PhotoFinish_ProgressionButton_K2Node_ComponentBoundEvent_3_OnMenuTabButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinish.PhotoFinish_C.Event_MenuTabLeft_Pressed
	 * 		Flags  -> ()
	 */
	void UPhotoFinish_C::Event_MenuTabLeft_Pressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinish.PhotoFinish_C.Event_MenuTabLeft_Pressed");
		
		UPhotoFinish_C_Event_MenuTabLeft_Pressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinish.PhotoFinish_C.Event_MenuTabRight_Pressed
	 * 		Flags  -> ()
	 */
	void UPhotoFinish_C::Event_MenuTabRight_Pressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinish.PhotoFinish_C.Event_MenuTabRight_Pressed");
		
		UPhotoFinish_C_Event_MenuTabRight_Pressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinish.PhotoFinish_C.BndEvt__PhotoFinish_PreviousPageButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPhotoFinish_C::BndEvt__PhotoFinish_PreviousPageButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinish.PhotoFinish_C.BndEvt__PhotoFinish_PreviousPageButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UPhotoFinish_C_BndEvt__PhotoFinish_PreviousPageButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinish.PhotoFinish_C.BndEvt__PhotoFinish_NextBadgesButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPhotoFinish_C::BndEvt__PhotoFinish_NextBadgesButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinish.PhotoFinish_C.BndEvt__PhotoFinish_NextBadgesButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		UPhotoFinish_C_BndEvt__PhotoFinish_NextBadgesButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinish.PhotoFinish_C.BndEvt__PhotoFinish_BadgesScrollBox_K2Node_ComponentBoundEvent_6_OnUserScrolledEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CurrentOffset                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPhotoFinish_C::BndEvt__PhotoFinish_BadgesScrollBox_K2Node_ComponentBoundEvent_6_OnUserScrolledEvent__DelegateSignature(float CurrentOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinish.PhotoFinish_C.BndEvt__PhotoFinish_BadgesScrollBox_K2Node_ComponentBoundEvent_6_OnUserScrolledEvent__DelegateSignature");
		
		UPhotoFinish_C_BndEvt__PhotoFinish_BadgesScrollBox_K2Node_ComponentBoundEvent_6_OnUserScrolledEvent__DelegateSignature_Params params {};
		params.CurrentOffset = CurrentOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinish.PhotoFinish_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPhotoFinish_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinish.PhotoFinish_C.Tick");
		
		UPhotoFinish_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinish.PhotoFinish_C.Event_OnPush
	 * 		Flags  -> ()
	 */
	void UPhotoFinish_C::Event_OnPush()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinish.PhotoFinish_C.Event_OnPush");
		
		UPhotoFinish_C_Event_OnPush_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhotoFinish.PhotoFinish_C.ExecuteUbergraph_PhotoFinish
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPhotoFinish_C::ExecuteUbergraph_PhotoFinish(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoFinish.PhotoFinish_C.ExecuteUbergraph_PhotoFinish");
		
		UPhotoFinish_C_ExecuteUbergraph_PhotoFinish_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPhotoFinish_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhotoFinish_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PhotoFinish.PhotoFinish_C");
		return ptr;
	}

}


