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
	 * Function CharacterSheet.CharacterSheet_C.RefreshNewState
	 */
	struct UCharacterSheet_C_RefreshNewState_Params
	{	};

	/**
	 * Function CharacterSheet.CharacterSheet_C.TryShowStatsTutorial
	 */
	struct UCharacterSheet_C_TryShowStatsTutorial_Params
	{
	public:
		bool                                                       isShowingTutorial;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E5Y8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CharacterSheet.CharacterSheet_C.Refresh
	 */
	struct UCharacterSheet_C_Refresh_Params
	{	};

	/**
	 * Function CharacterSheet.CharacterSheet_C.UpdateTrialBoardTutorialAnchors
	 */
	struct UCharacterSheet_C_UpdateTrialBoardTutorialAnchors_Params
	{	};

	/**
	 * Function CharacterSheet.CharacterSheet_C.GetSelfOverheadPosition
	 */
	struct UCharacterSheet_C_GetSelfOverheadPosition_Params
	{
	public:
		float                                                      Left;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Top;                                                     // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterSheet.CharacterSheet_C.TryShowTrialBoardTutorial
	 */
	struct UCharacterSheet_C_TryShowTrialBoardTutorial_Params
	{
	public:
		bool                                                       isShowingTutorial;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CharacterSheet.CharacterSheet_C.TryShowEvidenceTutorial
	 */
	struct UCharacterSheet_C_TryShowEvidenceTutorial_Params
	{
	public:
		bool                                                       isShowingTutorial;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6AE1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CharacterSheet.CharacterSheet_C.ChangeActiveSkill
	 */
	struct UCharacterSheet_C_ChangeActiveSkill_Params
	{	};

	/**
	 * Function CharacterSheet.CharacterSheet_C.OnFocusReceived
	 */
	struct UCharacterSheet_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function CharacterSheet.CharacterSheet_C.TryShowLoadoutTutorial
	 */
	struct UCharacterSheet_C_TryShowLoadoutTutorial_Params
	{
	public:
		bool                                                       isShowingTutorial;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CharacterSheet.CharacterSheet_C.TryStartNextMenuTutorial
	 */
	struct UCharacterSheet_C_TryStartNextMenuTutorial_Params
	{	};

	/**
	 * Function CharacterSheet.CharacterSheet_C.Event_OnMenuTabSwitched
	 */
	struct UCharacterSheet_C_Event_OnMenuTabSwitched_Params
	{
	public:
		int32_t                                                    previousIndex;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterSheet.CharacterSheet_C.Event_UpdateNavigation
	 */
	struct UCharacterSheet_C_Event_UpdateNavigation_Params
	{
	public:
		bool                                                       CanExitMenu;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CharacterSheet.CharacterSheet_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UCharacterSheet_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{
	public:
		class URBMenuButton_C*                                     Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterSheet.CharacterSheet_C.Event_OnPush
	 */
	struct UCharacterSheet_C_Event_OnPush_Params
	{	};

	/**
	 * Function CharacterSheet.CharacterSheet_C.Event_OnMenuTutorialSeen
	 */
	struct UCharacterSheet_C_Event_OnMenuTutorialSeen_Params
	{	};

	/**
	 * Function CharacterSheet.CharacterSheet_C.EventRequestTutorial_Event_1
	 */
	struct UCharacterSheet_C_EventRequestTutorial_Event_1_Params
	{	};

	/**
	 * Function CharacterSheet.CharacterSheet_C.Event_StartTransitionOut
	 */
	struct UCharacterSheet_C_Event_StartTransitionOut_Params
	{	};

	/**
	 * Function CharacterSheet.CharacterSheet_C.BndEvt__ReplayMenuTutorialButton_K2Node_ComponentBoundEvent_0_Event_OnClicked__DelegateSignature
	 */
	struct UCharacterSheet_C_BndEvt__ReplayMenuTutorialButton_K2Node_ComponentBoundEvent_0_Event_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function CharacterSheet.CharacterSheet_C.Construct
	 */
	struct UCharacterSheet_C_Construct_Params
	{	};

	/**
	 * Function CharacterSheet.CharacterSheet_C.Event_OnFocusMenu
	 */
	struct UCharacterSheet_C_Event_OnFocusMenu_Params
	{	};

	/**
	 * Function CharacterSheet.CharacterSheet_C.ShowSocialMenu
	 */
	struct UCharacterSheet_C_ShowSocialMenu_Params
	{	};

	/**
	 * Function CharacterSheet.CharacterSheet_C.Destruct
	 */
	struct UCharacterSheet_C_Destruct_Params
	{	};

	/**
	 * Function CharacterSheet.CharacterSheet_C.BndEvt__CharacterSheet_SocialMenuButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UCharacterSheet_C_BndEvt__CharacterSheet_SocialMenuButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{
	public:
		class URBMenuButton_C*                                     Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterSheet.CharacterSheet_C.Tick
	 */
	struct UCharacterSheet_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterSheet.CharacterSheet_C.Event_MenuTabRight_Pressed
	 */
	struct UCharacterSheet_C_Event_MenuTabRight_Pressed_Params
	{	};

	/**
	 * Function CharacterSheet.CharacterSheet_C.Event_MenuTabLeft_Pressed
	 */
	struct UCharacterSheet_C_Event_MenuTabLeft_Pressed_Params
	{	};

	/**
	 * Function CharacterSheet.CharacterSheet_C.BndEvt__CharacterSheet_CharacterSheetDocumentsTab_K2Node_ComponentBoundEvent_3_OnDocumentSeenEvent__DelegateSignature
	 */
	struct UCharacterSheet_C_BndEvt__CharacterSheet_CharacterSheetDocumentsTab_K2Node_ComponentBoundEvent_3_OnDocumentSeenEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CharacterSheet.CharacterSheet_C.BndEvt__CharacterSheet_TrialBoardTab_K2Node_ComponentBoundEvent_4_OnCurrentSectionChanged__DelegateSignature
	 */
	struct UCharacterSheet_C_BndEvt__CharacterSheet_TrialBoardTab_K2Node_ComponentBoundEvent_4_OnCurrentSectionChanged__DelegateSignature_Params
	{	};

	/**
	 * Function CharacterSheet.CharacterSheet_C.ExecuteUbergraph_CharacterSheet
	 */
	struct UCharacterSheet_C_ExecuteUbergraph_CharacterSheet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
