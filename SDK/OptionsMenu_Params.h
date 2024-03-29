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
	 * Function OptionsMenu.OptionsMenu_C.UpdateApplyChangesBtnVisibility
	 */
	struct UOptionsMenu_C_UpdateApplyChangesBtnVisibility_Params
	{	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.CreateOptionEntry
	 */
	struct UOptionsMenu_C_CreateOptionEntry_Params
	{
	public:
		class UOptionsTab_C*                                       OptionTab;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FOptionData                                         OptionData;                                              // 0x0008(0x00E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class URBMenuOptionsEntry*                                 Entry_Created;                                           // 0x00E8(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.CreateOptionTabs
	 */
	struct UOptionsMenu_C_CreateOptionTabs_Params
	{	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.ConditionalShowApplyDialog
	 */
	struct UOptionsMenu_C_ConditionalShowApplyDialog_Params
	{
	public:
		class FText                                                Prompt;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       Return;                                                  // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4IGA[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.Get_ApplyChangeBtn_Visibility_1
	 */
	struct UOptionsMenu_C_Get_ApplyChangeBtn_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.PreNavigationChangeAction
	 */
	struct UOptionsMenu_C_PreNavigationChangeAction_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.Event_UpdateNavigation
	 */
	struct UOptionsMenu_C_Event_UpdateNavigation_Params
	{
	public:
		bool                                                       CanExitMenu;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.OnSubButtonClicked
	 */
	struct UOptionsMenu_C_OnSubButtonClicked_Params
	{
	public:
		class URBMenuOptionsEntry*                                 Entry;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.ExecuteChangesDecision
	 */
	struct UOptionsMenu_C_ExecuteChangesDecision_Params
	{	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.ApplyChangesToCurrentTab
	 */
	struct UOptionsMenu_C_ApplyChangesToCurrentTab_Params
	{	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.Finished_B30461B244A64F1C78C486945F767F0A
	 */
	struct UOptionsMenu_C_Finished_B30461B244A64F1C78C486945F767F0A_Params
	{	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.PreConstruct
	 */
	struct UOptionsMenu_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.Construct
	 */
	struct UOptionsMenu_C_Construct_Params
	{	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.BndEvt__RBMenuButton_83_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UOptionsMenu_C_BndEvt__RBMenuButton_83_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	public:
		class URBMenuButton_C*                                     Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.BndEvt__RBMenuButton_177_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UOptionsMenu_C_BndEvt__RBMenuButton_177_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{
	public:
		class URBMenuButton_C*                                     Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.BndEvt__RBMenuButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UOptionsMenu_C_BndEvt__RBMenuButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{
	public:
		class URBMenuButton_C*                                     Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.Event_StartTransitionIn
	 */
	struct UOptionsMenu_C_Event_StartTransitionIn_Params
	{	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.Event_StartTransitionOut
	 */
	struct UOptionsMenu_C_Event_StartTransitionOut_Params
	{	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.OnReleasedApply
	 */
	struct UOptionsMenu_C_OnReleasedApply_Params
	{	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.OnReleasedReset
	 */
	struct UOptionsMenu_C_OnReleasedReset_Params
	{	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.OnFullscreenOrDesktopSettingsChanged
	 */
	struct UOptionsMenu_C_OnFullscreenOrDesktopSettingsChanged_Params
	{	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.Event_OnMenuTabSwitched
	 */
	struct UOptionsMenu_C_Event_OnMenuTabSwitched_Params
	{
	public:
		int32_t                                                    previousIndex;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.Event_InputSourceChanged
	 */
	struct UOptionsMenu_C_Event_InputSourceChanged_Params
	{
	public:
		bool                                                       bIsGamepad;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.Event_RefreshAllEntries
	 */
	struct UOptionsMenu_C_Event_RefreshAllEntries_Params
	{	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.Event_OnFocusMenu
	 */
	struct UOptionsMenu_C_Event_OnFocusMenu_Params
	{	};

	/**
	 * Function OptionsMenu.OptionsMenu_C.ExecuteUbergraph_OptionsMenu
	 */
	struct UOptionsMenu_C_ExecuteUbergraph_OptionsMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
