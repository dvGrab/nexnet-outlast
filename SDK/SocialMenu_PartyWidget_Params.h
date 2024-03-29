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
	 * Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.GetLeavePartyBtnVisibility
	 */
	struct USocialMenu_PartyWidget_C_GetLeavePartyBtnVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.SlotHasFocus
	 */
	struct USocialMenu_PartyWidget_C_SlotHasFocus_Params
	{
	public:
		int32_t                                                    column;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    row;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bHasFocus;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BL9C[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.SetupInitialFocus
	 */
	struct USocialMenu_PartyWidget_C_SetupInitialFocus_Params
	{	};

	/**
	 * Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.OnFocusReceived
	 */
	struct USocialMenu_PartyWidget_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.SetupPartySettings
	 */
	struct USocialMenu_PartyWidget_C_SetupPartySettings_Params
	{	};

	/**
	 * Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.Setup Editor Preview
	 */
	struct USocialMenu_PartyWidget_C_Setup_Editor_Preview_Params
	{	};

	/**
	 * Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.UpdateEntry
	 */
	struct USocialMenu_PartyWidget_C_UpdateEntry_Params
	{
	public:
		class UWidget*                                             Entry;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    column;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    row;                                                     // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.Setup
	 */
	struct USocialMenu_PartyWidget_C_Setup_Params
	{	};

	/**
	 * Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.Construct
	 */
	struct USocialMenu_PartyWidget_C_Construct_Params
	{	};

	/**
	 * Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.Event_RemoveEntry
	 */
	struct USocialMenu_PartyWidget_C_Event_RemoveEntry_Params
	{
	public:
		class URBUserWidget*                                       Entry;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.Event_UpdateEntry
	 */
	struct USocialMenu_PartyWidget_C_Event_UpdateEntry_Params
	{
	public:
		class URBUserWidget*                                       Entry;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    column;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    row;                                                     // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.Event_Clear
	 */
	struct USocialMenu_PartyWidget_C_Event_Clear_Params
	{	};

	/**
	 * Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.PreConstruct
	 */
	struct USocialMenu_PartyWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.Event_OnDataPending
	 */
	struct USocialMenu_PartyWidget_C_Event_OnDataPending_Params
	{
	public:
		bool                                                       bIsDataPending;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.Event_RefreshPartyOptions
	 */
	struct USocialMenu_PartyWidget_C_Event_RefreshPartyOptions_Params
	{	};

	/**
	 * Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.BndEvt__PrivacyOption_K2Node_ComponentBoundEvent_0_OnValueUpdated__DelegateSignature
	 */
	struct USocialMenu_PartyWidget_C_BndEvt__PrivacyOption_K2Node_ComponentBoundEvent_0_OnValueUpdated__DelegateSignature_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.BndEvt__PartyMembersCanInviteOption_K2Node_ComponentBoundEvent_1_OnValueUpdated__DelegateSignature
	 */
	struct USocialMenu_PartyWidget_C_BndEvt__PartyMembersCanInviteOption_K2Node_ComponentBoundEvent_1_OnValueUpdated__DelegateSignature_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.BndEvt__IgnoreInviteRequestsOption_K2Node_ComponentBoundEvent_2_OnValueUpdated__DelegateSignature
	 */
	struct USocialMenu_PartyWidget_C_BndEvt__IgnoreInviteRequestsOption_K2Node_ComponentBoundEvent_2_OnValueUpdated__DelegateSignature_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.BndEvt__SocialMenu_PartyWidget_LeavePartyBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct USocialMenu_PartyWidget_C_BndEvt__SocialMenu_PartyWidget_LeavePartyBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.Event_EntriesUpdated
	 */
	struct USocialMenu_PartyWidget_C_Event_EntriesUpdated_Params
	{	};

	/**
	 * Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.ExecuteUbergraph_SocialMenu_PartyWidget
	 */
	struct USocialMenu_PartyWidget_C_ExecuteUbergraph_SocialMenu_PartyWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H4CE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
