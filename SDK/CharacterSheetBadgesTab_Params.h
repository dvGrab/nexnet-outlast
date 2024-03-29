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
	 * Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.Claim
	 */
	struct UCharacterSheetBadgesTab_C_Claim_Params
	{	};

	/**
	 * Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.BuildBadgeRewards
	 */
	struct UCharacterSheetBadgesTab_C_BuildBadgeRewards_Params
	{
	public:
		class FName                                                RewardDataId;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bClaimable;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bUnlockedAtLeastOnce;                                    // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BZNQ[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.SetupSelectedBadge
	 */
	struct UCharacterSheetBadgesTab_C_SetupSelectedBadge_Params
	{	};

	/**
	 * Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.SetPage
	 */
	struct UCharacterSheetBadgesTab_C_SetPage_Params
	{
	public:
		int32_t                                                    NewPageIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.OnFocusReceived
	 */
	struct UCharacterSheetBadgesTab_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.NextPage
	 */
	struct UCharacterSheetBadgesTab_C_NextPage_Params
	{	};

	/**
	 * Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.PreviousPage
	 */
	struct UCharacterSheetBadgesTab_C_PreviousPage_Params
	{	};

	/**
	 * Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.UpdateGamepadPageNav
	 */
	struct UCharacterSheetBadgesTab_C_UpdateGamepadPageNav_Params
	{	};

	/**
	 * Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.OnBadgeClicked
	 */
	struct UCharacterSheetBadgesTab_C_OnBadgeClicked_Params
	{
	public:
		class UBadgeSashEntry_C*                                   badgeEntry;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.OnBadgeUnhovered
	 */
	struct UCharacterSheetBadgesTab_C_OnBadgeUnhovered_Params
	{
	public:
		class UBadgeSashEntry_C*                                   badgeEntry;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.OnBadgeHovered
	 */
	struct UCharacterSheetBadgesTab_C_OnBadgeHovered_Params
	{
	public:
		class UBadgeSashEntry_C*                                   badgeEntry;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.GetPageTitle
	 */
	struct UCharacterSheetBadgesTab_C_GetPageTitle_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.Refresh
	 */
	struct UCharacterSheetBadgesTab_C_Refresh_Params
	{	};

	/**
	 * Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.RefreshBadgePages
	 */
	struct UCharacterSheetBadgesTab_C_RefreshBadgePages_Params
	{	};

	/**
	 * Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.SetupBadgeNavigation
	 */
	struct UCharacterSheetBadgesTab_C_SetupBadgeNavigation_Params
	{
	public:
		class UWidget*                                             badge;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.Refresh Badges
	 */
	struct UCharacterSheetBadgesTab_C_Refresh_Badges_Params
	{	};

	/**
	 * Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.Event_Refresh
	 */
	struct UCharacterSheetBadgesTab_C_Event_Refresh_Params
	{	};

	/**
	 * Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.BndEvt__PreviousPageButton_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCharacterSheetBadgesTab_C_BndEvt__PreviousPageButton_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.BndEvt__NextPageButton_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCharacterSheetBadgesTab_C_BndEvt__NextPageButton_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.Construct
	 */
	struct UCharacterSheetBadgesTab_C_Construct_Params
	{	};

	/**
	 * Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.OnMenuInputSourceChanged
	 */
	struct UCharacterSheetBadgesTab_C_OnMenuInputSourceChanged_Params
	{	};

	/**
	 * Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.Destruct
	 */
	struct UCharacterSheetBadgesTab_C_Destruct_Params
	{	};

	/**
	 * Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.OnGamepadPageLeft
	 */
	struct UCharacterSheetBadgesTab_C_OnGamepadPageLeft_Params
	{	};

	/**
	 * Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.OnGamepadPageRight
	 */
	struct UCharacterSheetBadgesTab_C_OnGamepadPageRight_Params
	{	};

	/**
	 * Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.Event_OnTabSelected
	 */
	struct UCharacterSheetBadgesTab_C_Event_OnTabSelected_Params
	{	};

	/**
	 * Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.Event_OnTabUnselected
	 */
	struct UCharacterSheetBadgesTab_C_Event_OnTabUnselected_Params
	{	};

	/**
	 * Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.BndEvt__CharacterSheetBadgesTab_ClaimRewardButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UCharacterSheetBadgesTab_C_BndEvt__CharacterSheetBadgesTab_ClaimRewardButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.ExecuteUbergraph_CharacterSheetBadgesTab
	 */
	struct UCharacterSheetBadgesTab_C_ExecuteUbergraph_CharacterSheetBadgesTab_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
