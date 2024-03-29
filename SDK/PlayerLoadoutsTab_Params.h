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
	 * Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.HandleMenuTabRight
	 */
	struct UPlayerLoadoutsTab_C_HandleMenuTabRight_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.HandleMenuTabLeft
	 */
	struct UPlayerLoadoutsTab_C_HandleMenuTabLeft_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.SetCategoryFocus
	 */
	struct UPlayerLoadoutsTab_C_SetCategoryFocus_Params
	{	};

	/**
	 * Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.OnFocusReceived
	 */
	struct UPlayerLoadoutsTab_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.OnMenuRightClick
	 */
	struct UPlayerLoadoutsTab_C_OnMenuRightClick_Params
	{	};

	/**
	 * Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.Refresh
	 */
	struct UPlayerLoadoutsTab_C_Refresh_Params
	{	};

	/**
	 * Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.GetPageSubtitle
	 */
	struct UPlayerLoadoutsTab_C_GetPageSubtitle_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.ShouldShowNavigation
	 */
	struct UPlayerLoadoutsTab_C_ShouldShowNavigation_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.GetPageTitle
	 */
	struct UPlayerLoadoutsTab_C_GetPageTitle_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.IsReadyToClose
	 */
	struct UPlayerLoadoutsTab_C_IsReadyToClose_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.GetPageSpecificButtons
	 */
	struct UPlayerLoadoutsTab_C_GetPageSpecificButtons_Params
	{
	public:
		TArray<class UUserWidget*>                                 outButtons;                                              // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.SaveLoadout
	 */
	struct UPlayerLoadoutsTab_C_SaveLoadout_Params
	{	};

	/**
	 * Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.ChangeCategory
	 */
	struct UPlayerLoadoutsTab_C_ChangeCategory_Params
	{
	public:
		ELoadoutElementType                                        Category;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.Construct
	 */
	struct UPlayerLoadoutsTab_C_Construct_Params
	{	};

	/**
	 * Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.Event_OnParentPopped
	 */
	struct UPlayerLoadoutsTab_C_Event_OnParentPopped_Params
	{	};

	/**
	 * Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.BndEvt__PlayerLoadoutsTab_RigList_K2Node_ComponentBoundEvent_1_OnRigClicked__DelegateSignature
	 */
	struct UPlayerLoadoutsTab_C_BndEvt__PlayerLoadoutsTab_RigList_K2Node_ComponentBoundEvent_1_OnRigClicked__DelegateSignature_Params
	{
	public:
		class FName                                                ItemId;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EActiveSkillType                                           ActiveSkillType;                                         // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.OnBackRequested
	 */
	struct UPlayerLoadoutsTab_C_OnBackRequested_Params
	{	};

	/**
	 * Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.BndEvt__PlayerLoadoutsTab_CoreUpgradeTierList_K2Node_ComponentBoundEvent_2_OnTierClicked__DelegateSignature
	 */
	struct UPlayerLoadoutsTab_C_BndEvt__PlayerLoadoutsTab_CoreUpgradeTierList_K2Node_ComponentBoundEvent_2_OnTierClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    tier;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.BndEvt__PlayerLoadoutsTab_LoadoutRecap_K2Node_ComponentBoundEvent_0_OnRigButtonClicked__DelegateSignature
	 */
	struct UPlayerLoadoutsTab_C_BndEvt__PlayerLoadoutsTab_LoadoutRecap_K2Node_ComponentBoundEvent_0_OnRigButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.BndEvt__PlayerLoadoutsTab_LoadoutRecap_K2Node_ComponentBoundEvent_3_OnPerkSlotsButtonClicked__DelegateSignature
	 */
	struct UPlayerLoadoutsTab_C_BndEvt__PlayerLoadoutsTab_LoadoutRecap_K2Node_ComponentBoundEvent_3_OnPerkSlotsButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.BndEvt__PlayerLoadoutsTab_PerkList_K2Node_ComponentBoundEvent_4_OnUpgradeClicked__DelegateSignature
	 */
	struct UPlayerLoadoutsTab_C_BndEvt__PlayerLoadoutsTab_PerkList_K2Node_ComponentBoundEvent_4_OnUpgradeClicked__DelegateSignature_Params
	{
	public:
		class FName                                                ItemId;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.BndEvt__PlayerLoadoutsTab_LoadoutRecap_K2Node_ComponentBoundEvent_5_OnCoreUpgradesButtonClicked__DelegateSignature
	 */
	struct UPlayerLoadoutsTab_C_BndEvt__PlayerLoadoutsTab_LoadoutRecap_K2Node_ComponentBoundEvent_5_OnCoreUpgradesButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.BndEvt__PlayerLoadoutsTab_RigList_K2Node_ComponentBoundEvent_6_OnRigHovered__DelegateSignature
	 */
	struct UPlayerLoadoutsTab_C_BndEvt__PlayerLoadoutsTab_RigList_K2Node_ComponentBoundEvent_6_OnRigHovered__DelegateSignature_Params
	{
	public:
		class FName                                                ItemId;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EActiveSkillType                                           ActiveSkillType;                                         // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.Event_OnTabUnselected
	 */
	struct UPlayerLoadoutsTab_C_Event_OnTabUnselected_Params
	{	};

	/**
	 * Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.ExecuteUbergraph_PlayerLoadoutsTab
	 */
	struct UPlayerLoadoutsTab_C_ExecuteUbergraph_PlayerLoadoutsTab_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerLoadoutsTab.PlayerLoadoutsTab_C.EventRequestTutorial__DelegateSignature
	 */
	struct UPlayerLoadoutsTab_C_EventRequestTutorial__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
