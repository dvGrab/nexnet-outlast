#pragma once

/**
 * Name: TRIALS
 * Version: FINAL
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function PhotoFinish.PhotoFinish_C.SetupMurkoffCommentScale
	 */
	struct UPhotoFinish_C_SetupMurkoffCommentScale_Params
	{	};

	/**
	 * Function PhotoFinish.PhotoFinish_C.StopXpSound
	 */
	struct UPhotoFinish_C_StopXpSound_Params
	{	};

	/**
	 * Function PhotoFinish.PhotoFinish_C.StartXpSound
	 */
	struct UPhotoFinish_C_StartXpSound_Params
	{	};

	/**
	 * Function PhotoFinish.PhotoFinish_C.StopScoreLinesSound
	 */
	struct UPhotoFinish_C_StopScoreLinesSound_Params
	{	};

	/**
	 * Function PhotoFinish.PhotoFinish_C.StartScoreLinesSound
	 */
	struct UPhotoFinish_C_StartScoreLinesSound_Params
	{	};

	/**
	 * Function PhotoFinish.PhotoFinish_C.GetRewardWidget
	 */
	struct UPhotoFinish_C_GetRewardWidget_Params
	{
	public:
		struct FRewardUIData                                       RewardUIData;                                            // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		class UProgramTrialRewardWidget_C*                         rewardWidget;                                            // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bCreated;                                                // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PhotoFinish.PhotoFinish_C.AddPendingReward
	 */
	struct UPhotoFinish_C_AddPendingReward_Params
	{
	public:
		struct FRewardUIData                                       RewardUIData;                                            // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function PhotoFinish.PhotoFinish_C.OnFocusReceived
	 */
	struct UPhotoFinish_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function PhotoFinish.PhotoFinish_C.SetupXpCounterDisplay
	 */
	struct UPhotoFinish_C_SetupXpCounterDisplay_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Value;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PhotoFinish.PhotoFinish_C.OnBadgeUnhovered
	 */
	struct UPhotoFinish_C_OnBadgeUnhovered_Params
	{
	public:
		class UBadgeSashEntry_C*                                   BadgeSettings;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PhotoFinish.PhotoFinish_C.OnBadgeHovered
	 */
	struct UPhotoFinish_C_OnBadgeHovered_Params
	{
	public:
		class UBadgeSashEntry_C*                                   badgeEntry;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PhotoFinish.PhotoFinish_C.RefreshBadgeButtons
	 */
	struct UPhotoFinish_C_RefreshBadgeButtons_Params
	{	};

	/**
	 * Function PhotoFinish.PhotoFinish_C.OnLevelUp
	 */
	struct UPhotoFinish_C_OnLevelUp_Params
	{	};

	/**
	 * Function PhotoFinish.PhotoFinish_C.TryStartNextProgressionAnimation
	 */
	struct UPhotoFinish_C_TryStartNextProgressionAnimation_Params
	{	};

	/**
	 * Function PhotoFinish.PhotoFinish_C.ShowProgression
	 */
	struct UPhotoFinish_C_ShowProgression_Params
	{	};

	/**
	 * Function PhotoFinish.PhotoFinish_C.ShowScore
	 */
	struct UPhotoFinish_C_ShowScore_Params
	{	};

	/**
	 * Function PhotoFinish.PhotoFinish_C.ShowSummary
	 */
	struct UPhotoFinish_C_ShowSummary_Params
	{	};

	/**
	 * Function PhotoFinish.PhotoFinish_C.RefreshActionButtons
	 */
	struct UPhotoFinish_C_RefreshActionButtons_Params
	{	};

	/**
	 * Function PhotoFinish.PhotoFinish_C.SetupInitialLevelData
	 */
	struct UPhotoFinish_C_SetupInitialLevelData_Params
	{	};

	/**
	 * Function PhotoFinish.PhotoFinish_C.SetupBadges
	 */
	struct UPhotoFinish_C_SetupBadges_Params
	{	};

	/**
	 * Function PhotoFinish.PhotoFinish_C.SetupScoreLines
	 */
	struct UPhotoFinish_C_SetupScoreLines_Params
	{	};

	/**
	 * Function PhotoFinish.PhotoFinish_C.SetupGroupDetails
	 */
	struct UPhotoFinish_C_SetupGroupDetails_Params
	{	};

	/**
	 * Function PhotoFinish.PhotoFinish_C.SetupMurkoffComment
	 */
	struct UPhotoFinish_C_SetupMurkoffComment_Params
	{	};

	/**
	 * Function PhotoFinish.PhotoFinish_C.SetupVariators
	 */
	struct UPhotoFinish_C_SetupVariators_Params
	{
	public:
		class UHorizontalBox*                                      targetHBox;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PhotoFinish.PhotoFinish_C.Setup
	 */
	struct UPhotoFinish_C_Setup_Params
	{	};

	/**
	 * Function PhotoFinish.PhotoFinish_C.Finished_B770552149C35E96E54C2788A8B201FC
	 */
	struct UPhotoFinish_C_Finished_B770552149C35E96E54C2788A8B201FC_Params
	{	};

	/**
	 * Function PhotoFinish.PhotoFinish_C.Construct
	 */
	struct UPhotoFinish_C_Construct_Params
	{	};

	/**
	 * Function PhotoFinish.PhotoFinish_C.Event_StartAnimations
	 */
	struct UPhotoFinish_C_Event_StartAnimations_Params
	{	};

	/**
	 * Function PhotoFinish.PhotoFinish_C.Event_Refresh
	 */
	struct UPhotoFinish_C_Event_Refresh_Params
	{	};

	/**
	 * Function PhotoFinish.PhotoFinish_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UPhotoFinish_C_BndEvt__LeaveButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{
	public:
		class URBMenuButton_C*                                     Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PhotoFinish.PhotoFinish_C.Event_OnFocusMenu
	 */
	struct UPhotoFinish_C_Event_OnFocusMenu_Params
	{	};

	/**
	 * Function PhotoFinish.PhotoFinish_C.NextInputPressed
	 */
	struct UPhotoFinish_C_NextInputPressed_Params
	{	};

	/**
	 * Function PhotoFinish.PhotoFinish_C.Destruct
	 */
	struct UPhotoFinish_C_Destruct_Params
	{	};

	/**
	 * Function PhotoFinish.PhotoFinish_C.PreConstruct
	 */
	struct UPhotoFinish_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PhotoFinish.PhotoFinish_C.BndEvt__PhotoFinish_SummaryButtom_K2Node_ComponentBoundEvent_0_OnMenuTabButtonClicked__DelegateSignature
	 */
	struct UPhotoFinish_C_BndEvt__PhotoFinish_SummaryButtom_K2Node_ComponentBoundEvent_0_OnMenuTabButtonClicked__DelegateSignature_Params
	{
	public:
		class URBMenuTabButton*                                    Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PhotoFinish.PhotoFinish_C.BndEvt__PhotoFinish_ScoreButton_K2Node_ComponentBoundEvent_2_OnMenuTabButtonClicked__DelegateSignature
	 */
	struct UPhotoFinish_C_BndEvt__PhotoFinish_ScoreButton_K2Node_ComponentBoundEvent_2_OnMenuTabButtonClicked__DelegateSignature_Params
	{
	public:
		class URBMenuTabButton*                                    Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PhotoFinish.PhotoFinish_C.BndEvt__PhotoFinish_ProgressionButton_K2Node_ComponentBoundEvent_3_OnMenuTabButtonClicked__DelegateSignature
	 */
	struct UPhotoFinish_C_BndEvt__PhotoFinish_ProgressionButton_K2Node_ComponentBoundEvent_3_OnMenuTabButtonClicked__DelegateSignature_Params
	{
	public:
		class URBMenuTabButton*                                    Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PhotoFinish.PhotoFinish_C.Event_MenuTabLeft_Pressed
	 */
	struct UPhotoFinish_C_Event_MenuTabLeft_Pressed_Params
	{	};

	/**
	 * Function PhotoFinish.PhotoFinish_C.Event_MenuTabRight_Pressed
	 */
	struct UPhotoFinish_C_Event_MenuTabRight_Pressed_Params
	{	};

	/**
	 * Function PhotoFinish.PhotoFinish_C.BndEvt__PhotoFinish_PreviousPageButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UPhotoFinish_C_BndEvt__PhotoFinish_PreviousPageButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function PhotoFinish.PhotoFinish_C.BndEvt__PhotoFinish_NextBadgesButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UPhotoFinish_C_BndEvt__PhotoFinish_NextBadgesButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function PhotoFinish.PhotoFinish_C.BndEvt__PhotoFinish_BadgesScrollBox_K2Node_ComponentBoundEvent_6_OnUserScrolledEvent__DelegateSignature
	 */
	struct UPhotoFinish_C_BndEvt__PhotoFinish_BadgesScrollBox_K2Node_ComponentBoundEvent_6_OnUserScrolledEvent__DelegateSignature_Params
	{
	public:
		float                                                      CurrentOffset;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PhotoFinish.PhotoFinish_C.Tick
	 */
	struct UPhotoFinish_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PhotoFinish.PhotoFinish_C.Event_OnPush
	 */
	struct UPhotoFinish_C_Event_OnPush_Params
	{	};

	/**
	 * Function PhotoFinish.PhotoFinish_C.ExecuteUbergraph_PhotoFinish
	 */
	struct UPhotoFinish_C_ExecuteUbergraph_PhotoFinish_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
