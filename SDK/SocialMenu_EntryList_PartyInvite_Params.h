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
	 * Function SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C.UpdateGamepadPageNav
	 */
	struct USocialMenu_EntryList_PartyInvite_C_UpdateGamepadPageNav_Params
	{	};

	/**
	 * Function SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C.SlotHasFocus
	 */
	struct USocialMenu_EntryList_PartyInvite_C_SlotHasFocus_Params
	{
	public:
		int32_t                                                    column;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    row;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bHasFocus;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PP5P[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C.SetupInitialFocus
	 */
	struct USocialMenu_EntryList_PartyInvite_C_SetupInitialFocus_Params
	{	};

	/**
	 * Function SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C.OnFocusReceived
	 */
	struct USocialMenu_EntryList_PartyInvite_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C.GetPreviousPageButtonEnabled
	 */
	struct USocialMenu_EntryList_PartyInvite_C_GetPreviousPageButtonEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C.GetNextPageButtonEnabled
	 */
	struct USocialMenu_EntryList_PartyInvite_C_GetNextPageButtonEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3VYN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C.SetupEditorPreview
	 */
	struct USocialMenu_EntryList_PartyInvite_C_SetupEditorPreview_Params
	{	};

	/**
	 * Function SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C.UpdateEntry
	 */
	struct USocialMenu_EntryList_PartyInvite_C_UpdateEntry_Params
	{
	public:
		class UWidget*                                             Entry;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    column;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    row;                                                     // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C.Setup
	 */
	struct USocialMenu_EntryList_PartyInvite_C_Setup_Params
	{	};

	/**
	 * Function SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C.Construct
	 */
	struct USocialMenu_EntryList_PartyInvite_C_Construct_Params
	{	};

	/**
	 * Function SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C.Event_RemoveEntry
	 */
	struct USocialMenu_EntryList_PartyInvite_C_Event_RemoveEntry_Params
	{
	public:
		class URBUserWidget*                                       Entry;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C.Event_UpdateEntry
	 */
	struct USocialMenu_EntryList_PartyInvite_C_Event_UpdateEntry_Params
	{
	public:
		class URBUserWidget*                                       Entry;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    column;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    row;                                                     // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C.Event_Clear
	 */
	struct USocialMenu_EntryList_PartyInvite_C_Event_Clear_Params
	{	};

	/**
	 * Function SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C.PreConstruct
	 */
	struct USocialMenu_EntryList_PartyInvite_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C.BndEvt__PreviousPageButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct USocialMenu_EntryList_PartyInvite_C_BndEvt__PreviousPageButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C.BndEvt__NextPageButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct USocialMenu_EntryList_PartyInvite_C_BndEvt__NextPageButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C.Event_OnDataPending
	 */
	struct USocialMenu_EntryList_PartyInvite_C_Event_OnDataPending_Params
	{
	public:
		bool                                                       bIsDataPending;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C.Event_OnEmptyStateChanged
	 */
	struct USocialMenu_EntryList_PartyInvite_C_Event_OnEmptyStateChanged_Params
	{
	public:
		bool                                                       bIsEmpty;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C.OnMenuInputSourceChanged
	 */
	struct USocialMenu_EntryList_PartyInvite_C_OnMenuInputSourceChanged_Params
	{	};

	/**
	 * Function SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C.Destruct
	 */
	struct USocialMenu_EntryList_PartyInvite_C_Destruct_Params
	{	};

	/**
	 * Function SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C.OnGamepadPageLeft
	 */
	struct USocialMenu_EntryList_PartyInvite_C_OnGamepadPageLeft_Params
	{	};

	/**
	 * Function SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C.OnGamepadPageRight
	 */
	struct USocialMenu_EntryList_PartyInvite_C_OnGamepadPageRight_Params
	{	};

	/**
	 * Function SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C.ExecuteUbergraph_SocialMenu_EntryList_PartyInvite
	 */
	struct USocialMenu_EntryList_PartyInvite_C_ExecuteUbergraph_SocialMenu_EntryList_PartyInvite_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SocialMenu_EntryList_PartyInvite.SocialMenu_EntryList_PartyInvite_C.OnNoFocusPossible__DelegateSignature
	 */
	struct USocialMenu_EntryList_PartyInvite_C_OnNoFocusPossible__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
