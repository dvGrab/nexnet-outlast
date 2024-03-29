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
	 * Function TrialBoardTab.TrialBoardTab_C.SetupCanvasEntryNavigationRules
	 */
	struct UTrialBoardTab_C_SetupCanvasEntryNavigationRules_Params
	{
	public:
		class UWidget*                                             Entry;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.StartGroupFinder
	 */
	struct UTrialBoardTab_C_StartGroupFinder_Params
	{	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.GetFindAGroupButtonNavigation
	 */
	struct UTrialBoardTab_C_GetFindAGroupButtonNavigation_Params
	{
	public:
		EUINavigation                                              Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VZJY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.GetSelectedTrialNavigation
	 */
	struct UTrialBoardTab_C_GetSelectedTrialNavigation_Params
	{
	public:
		EUINavigation                                              Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OTKB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.GetSelectedProgramNavigation
	 */
	struct UTrialBoardTab_C_GetSelectedProgramNavigation_Params
	{
	public:
		EUINavigation                                              Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0EYA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.GetAnyTrialNavigation
	 */
	struct UTrialBoardTab_C_GetAnyTrialNavigation_Params
	{
	public:
		EUINavigation                                              Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XO21[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.ChangeFilter
	 */
	struct UTrialBoardTab_C_ChangeFilter_Params
	{	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.OnFilterButtonClicked
	 */
	struct UTrialBoardTab_C_OnFilterButtonClicked_Params
	{
	public:
		class URBMenuButton_C*                                     Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.UpdateDisplayedTrialOptions
	 */
	struct UTrialBoardTab_C_UpdateDisplayedTrialOptions_Params
	{	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.ToggleGroupFinder
	 */
	struct UTrialBoardTab_C_ToggleGroupFinder_Params
	{	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.OnAddAFriendButtonClicked
	 */
	struct UTrialBoardTab_C_OnAddAFriendButtonClicked_Params
	{
	public:
		class URBMenuButton_C*                                     Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.ShowAddAFriend
	 */
	struct UTrialBoardTab_C_ShowAddAFriend_Params
	{	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.GetPageSubtitle
	 */
	struct UTrialBoardTab_C_GetPageSubtitle_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.OnInputSourceChanged
	 */
	struct UTrialBoardTab_C_OnInputSourceChanged_Params
	{
	public:
		bool                                                       bIsGamepad;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VI5Z[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.GetFocusSelectTrialButton
	 */
	struct UTrialBoardTab_C_GetFocusSelectTrialButton_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.FocusNextVariator
	 */
	struct UTrialBoardTab_C_FocusNextVariator_Params
	{
	public:
		EUINavigation                                              Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LLU1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.FocusPreviousVariator
	 */
	struct UTrialBoardTab_C_FocusPreviousVariator_Params
	{
	public:
		EUINavigation                                              Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VWCM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.FocusFirstVariator
	 */
	struct UTrialBoardTab_C_FocusFirstVariator_Params
	{	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.FocusNextTrial
	 */
	struct UTrialBoardTab_C_FocusNextTrial_Params
	{
	public:
		EUINavigation                                              Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TQNS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.FocusPreviousTrial
	 */
	struct UTrialBoardTab_C_FocusPreviousTrial_Params
	{
	public:
		EUINavigation                                              Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KUIJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.FocusInitialTrial
	 */
	struct UTrialBoardTab_C_FocusInitialTrial_Params
	{	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.IsTrialListScrollButtonDownEnabled
	 */
	struct UTrialBoardTab_C_IsTrialListScrollButtonDownEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P8TV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.IsTrialListScrollButtonTopEnabled
	 */
	struct UTrialBoardTab_C_IsTrialListScrollButtonTopEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y3EO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.GetTrialBlockNumber
	 */
	struct UTrialBoardTab_C_GetTrialBlockNumber_Params
	{
	public:
		class FName                                                TrialId;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    blockNumber;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.OnTrialSelected
	 */
	struct UTrialBoardTab_C_OnTrialSelected_Params
	{
	public:
		class FName                                                TrialId;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.GetTrioNavigation
	 */
	struct UTrialBoardTab_C_GetTrioNavigation_Params
	{
	public:
		EUINavigation                                              Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E58G[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.GetQuadNavigation
	 */
	struct UTrialBoardTab_C_GetQuadNavigation_Params
	{
	public:
		EUINavigation                                              Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XM1L[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.GetGroupFinderBtnVisibility
	 */
	struct UTrialBoardTab_C_GetGroupFinderBtnVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.UpdateGroupFinderOptions
	 */
	struct UTrialBoardTab_C_UpdateGroupFinderOptions_Params
	{	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.ShowGroupFinder
	 */
	struct UTrialBoardTab_C_ShowGroupFinder_Params
	{	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.GamepadNav_NavRightFromGroupFinderButton
	 */
	struct UTrialBoardTab_C_GamepadNav_NavRightFromGroupFinderButton_Params
	{
	public:
		EUINavigation                                              Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TFX5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.GamepadNav_CycleTrialBoardSocialEntries
	 */
	struct UTrialBoardTab_C_GamepadNav_CycleTrialBoardSocialEntries_Params
	{
	public:
		EUINavigation                                              Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_X9G6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.GamepadNav_NavToTrialBoardSocialEntries
	 */
	struct UTrialBoardTab_C_GamepadNav_NavToTrialBoardSocialEntries_Params
	{
	public:
		EUINavigation                                              Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YJDM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.SortTrialBoardSocialEntries
	 */
	struct UTrialBoardTab_C_SortTrialBoardSocialEntries_Params
	{
	public:
		class URBSocialMenuEntry*                                  Entry;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.GamepadNav_NavToMMButtons
	 */
	struct UTrialBoardTab_C_GamepadNav_NavToMMButtons_Params
	{
	public:
		EUINavigation                                              Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WJCO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.OnFocusReceived
	 */
	struct UTrialBoardTab_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.GetCancelButtonVisibility
	 */
	struct UTrialBoardTab_C_GetCancelButtonVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.GetStartButtonVisibility
	 */
	struct UTrialBoardTab_C_GetStartButtonVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.IsInTrialBoardPage
	 */
	struct UTrialBoardTab_C_IsInTrialBoardPage_Params
	{
	public:
		bool                                                       bIntrialBoardPage;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.Get_PosterButton_ToolTipWidget_1
	 */
	struct UTrialBoardTab_C_Get_PosterButton_ToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.HandleMenuTabRight
	 */
	struct UTrialBoardTab_C_HandleMenuTabRight_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D20K[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.HandleMenuTabLeft
	 */
	struct UTrialBoardTab_C_HandleMenuTabLeft_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JI2U[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.BuildProgramList
	 */
	struct UTrialBoardTab_C_BuildProgramList_Params
	{	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.GetTrialOptionsBtnVisibility
	 */
	struct UTrialBoardTab_C_GetTrialOptionsBtnVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.HideVariatorDetails
	 */
	struct UTrialBoardTab_C_HideVariatorDetails_Params
	{
	public:
		class UProgramTrialVariatorWidget_C*                       Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.ShowVariatorDetails
	 */
	struct UTrialBoardTab_C_ShowVariatorDetails_Params
	{
	public:
		class UProgramTrialVariatorWidget_C*                       Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.AddProgramUnlockReward
	 */
	struct UTrialBoardTab_C_AddProgramUnlockReward_Params
	{
	public:
		class FName                                                TrialId;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.BuildTrialRewards
	 */
	struct UTrialBoardTab_C_BuildTrialRewards_Params
	{
	public:
		class FName                                                RewardDataId;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bPerfect;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bAcquired;                                               // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XVSM[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.ShowTrialDetails
	 */
	struct UTrialBoardTab_C_ShowTrialDetails_Params
	{	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.ShowProgram
	 */
	struct UTrialBoardTab_C_ShowProgram_Params
	{
	public:
		class FName                                                ProgramId;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.ShowProgramSelection
	 */
	struct UTrialBoardTab_C_ShowProgramSelection_Params
	{	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.ShowTrialBoard
	 */
	struct UTrialBoardTab_C_ShowTrialBoard_Params
	{	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.ShowSocial
	 */
	struct UTrialBoardTab_C_ShowSocial_Params
	{	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.RefreshCurrentTrialDetails
	 */
	struct UTrialBoardTab_C_RefreshCurrentTrialDetails_Params
	{	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.Refresh
	 */
	struct UTrialBoardTab_C_Refresh_Params
	{	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.OnMouseButtonDown
	 */
	struct UTrialBoardTab_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.DeactivateCurrentSection
	 */
	struct UTrialBoardTab_C_DeactivateCurrentSection_Params
	{	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.ActivateSocialTab
	 */
	struct UTrialBoardTab_C_ActivateSocialTab_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.ShouldShowNavigation
	 */
	struct UTrialBoardTab_C_ShouldShowNavigation_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.ShouldShowPageTitle
	 */
	struct UTrialBoardTab_C_ShouldShowPageTitle_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.IsReadyToClose
	 */
	struct UTrialBoardTab_C_IsReadyToClose_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GVMO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.GetPageSpecificButtons
	 */
	struct UTrialBoardTab_C_GetPageSpecificButtons_Params
	{
	public:
		TArray<class UUserWidget*>                                 outButtons;                                              // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.GetPageTitle
	 */
	struct UTrialBoardTab_C_GetPageTitle_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.PreConstruct
	 */
	struct UTrialBoardTab_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.Construct
	 */
	struct UTrialBoardTab_C_Construct_Params
	{	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.Event_ChangeActiveSkill
	 */
	struct UTrialBoardTab_C_Event_ChangeActiveSkill_Params
	{	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.OnBackRequested
	 */
	struct UTrialBoardTab_C_OnBackRequested_Params
	{	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_FriendsButton_K2Node_ComponentBoundEvent_0_OnMenuTabButtonClicked__DelegateSignature
	 */
	struct UTrialBoardTab_C_BndEvt__TrialBoardTab_FriendsButton_K2Node_ComponentBoundEvent_0_OnMenuTabButtonClicked__DelegateSignature_Params
	{
	public:
		class URBMenuTabButton*                                    Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_SleepRoomButton_K2Node_ComponentBoundEvent_1_OnMenuTabButtonClicked__DelegateSignature
	 */
	struct UTrialBoardTab_C_BndEvt__TrialBoardTab_SleepRoomButton_K2Node_ComponentBoundEvent_1_OnMenuTabButtonClicked__DelegateSignature_Params
	{
	public:
		class URBMenuTabButton*                                    Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_RecentButton_K2Node_ComponentBoundEvent_2_OnMenuTabButtonClicked__DelegateSignature
	 */
	struct UTrialBoardTab_C_BndEvt__TrialBoardTab_RecentButton_K2Node_ComponentBoundEvent_2_OnMenuTabButtonClicked__DelegateSignature_Params
	{
	public:
		class URBMenuTabButton*                                    Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_BlockedButton_K2Node_ComponentBoundEvent_3_OnMenuTabButtonClicked__DelegateSignature
	 */
	struct UTrialBoardTab_C_BndEvt__TrialBoardTab_BlockedButton_K2Node_ComponentBoundEvent_3_OnMenuTabButtonClicked__DelegateSignature_Params
	{
	public:
		class URBMenuTabButton*                                    Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.Event_ShowOptions
	 */
	struct UTrialBoardTab_C_Event_ShowOptions_Params
	{	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.Event_Refresh
	 */
	struct UTrialBoardTab_C_Event_Refresh_Params
	{	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_CancelBtn_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
	 */
	struct UTrialBoardTab_C_BndEvt__TrialBoardTab_CancelBtn_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_StartBtn_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
	 */
	struct UTrialBoardTab_C_BndEvt__TrialBoardTab_StartBtn_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_PosterButton_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
	 */
	struct UTrialBoardTab_C_BndEvt__TrialBoardTab_PosterButton_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_PosterButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
	 */
	struct UTrialBoardTab_C_BndEvt__TrialBoardTab_PosterButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_PosterButton_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
	 */
	struct UTrialBoardTab_C_BndEvt__TrialBoardTab_PosterButton_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.Event_AddEntry
	 */
	struct UTrialBoardTab_C_Event_AddEntry_Params
	{
	public:
		class URBSocialMenuEntry*                                  Entry;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.Event_RemoveEntry
	 */
	struct UTrialBoardTab_C_Event_RemoveEntry_Params
	{
	public:
		class URBSocialMenuEntry*                                  Entry;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.Event_SetEntryPosition
	 */
	struct UTrialBoardTab_C_Event_SetEntryPosition_Params
	{
	public:
		class URBSocialMenuEntry*                                  Entry;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           Position;                                                // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_PartyButton_K2Node_ComponentBoundEvent_4_OnMenuTabButtonClicked__DelegateSignature
	 */
	struct UTrialBoardTab_C_BndEvt__TrialBoardTab_PartyButton_K2Node_ComponentBoundEvent_4_OnMenuTabButtonClicked__DelegateSignature_Params
	{
	public:
		class URBMenuTabButton*                                    Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_DuoButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature
	 */
	struct UTrialBoardTab_C_BndEvt__TrialBoardTab_DuoButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_TrioButton_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature
	 */
	struct UTrialBoardTab_C_BndEvt__TrialBoardTab_TrioButton_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_QuadButton_K2Node_ComponentBoundEvent_21_OnClicked__DelegateSignature
	 */
	struct UTrialBoardTab_C_BndEvt__TrialBoardTab_QuadButton_K2Node_ComponentBoundEvent_21_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_StartBtn_1_K2Node_ComponentBoundEvent_22_OnClicked__DelegateSignature
	 */
	struct UTrialBoardTab_C_BndEvt__TrialBoardTab_StartBtn_1_K2Node_ComponentBoundEvent_22_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_ProgramPosterCarrousel_K2Node_ComponentBoundEvent_12_OnPosterClicked__DelegateSignature
	 */
	struct UTrialBoardTab_C_BndEvt__TrialBoardTab_ProgramPosterCarrousel_K2Node_ComponentBoundEvent_12_OnPosterClicked__DelegateSignature_Params
	{
	public:
		class FName                                                ProgramId;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_SelectTrialButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 */
	struct UTrialBoardTab_C_BndEvt__TrialBoardTab_SelectTrialButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_ArrowUpButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct UTrialBoardTab_C_BndEvt__TrialBoardTab_ArrowUpButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_ArrowDownButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 */
	struct UTrialBoardTab_C_BndEvt__TrialBoardTab_ArrowDownButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.Event_InputSourceChanged
	 */
	struct UTrialBoardTab_C_Event_InputSourceChanged_Params
	{
	public:
		bool                                                       bIsGamepad;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.Event_OnTabSelected
	 */
	struct UTrialBoardTab_C_Event_OnTabSelected_Params
	{	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.Event_OnTabUnselected
	 */
	struct UTrialBoardTab_C_Event_OnTabUnselected_Params
	{	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_AddFriendWidget_K2Node_ComponentBoundEvent_8_OnBackRequested__DelegateSignature
	 */
	struct UTrialBoardTab_C_BndEvt__TrialBoardTab_AddFriendWidget_K2Node_ComponentBoundEvent_8_OnBackRequested__DelegateSignature_Params
	{	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_GroupFinderBtn_1_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
	 */
	struct UTrialBoardTab_C_BndEvt__TrialBoardTab_GroupFinderBtn_1_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.Event_OnFilterChanged
	 */
	struct UTrialBoardTab_C_Event_OnFilterChanged_Params
	{
	public:
		ERBSocialMenuEntryFilter                                   Filter;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_AnyTrialButton_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature
	 */
	struct UTrialBoardTab_C_BndEvt__TrialBoardTab_AnyTrialButton_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_SelectedProgramButton_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature
	 */
	struct UTrialBoardTab_C_BndEvt__TrialBoardTab_SelectedProgramButton_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.BndEvt__TrialBoardTab_SelectedTrialButton_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature
	 */
	struct UTrialBoardTab_C_BndEvt__TrialBoardTab_SelectedTrialButton_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.ExecuteUbergraph_TrialBoardTab
	 */
	struct UTrialBoardTab_C_ExecuteUbergraph_TrialBoardTab_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrialBoardTab.TrialBoardTab_C.OnCurrentSectionChanged__DelegateSignature
	 */
	struct UTrialBoardTab_C_OnCurrentSectionChanged__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
