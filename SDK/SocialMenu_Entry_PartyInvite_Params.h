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
	 * Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.UpdatePresenceAndDetailsText
	 */
	struct USocialMenu_Entry_PartyInvite_C_UpdatePresenceAndDetailsText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.GetPartyText
	 */
	struct USocialMenu_Entry_PartyInvite_C_GetPartyText_Params
	{
	public:
		class FText                                                DetailsText;                                             // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.OnFocusReceived
	 */
	struct USocialMenu_Entry_PartyInvite_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.IsConsideredHovered
	 */
	struct USocialMenu_Entry_PartyInvite_C_IsConsideredHovered_Params
	{
	public:
		bool                                                       bConsideredHovered;                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.SetFocused
	 */
	struct USocialMenu_Entry_PartyInvite_C_SetFocused_Params
	{
	public:
		bool                                                       bInFocused;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.SetHovered
	 */
	struct USocialMenu_Entry_PartyInvite_C_SetHovered_Params
	{
	public:
		bool                                                       bInHovered;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.SetPlayerLevel
	 */
	struct USocialMenu_Entry_PartyInvite_C_SetPlayerLevel_Params
	{	};

	/**
	 * Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.CreateContextualMenu
	 */
	struct USocialMenu_Entry_PartyInvite_C_CreateContextualMenu_Params
	{
	public:
		class UUserWidget*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.SetProfileIcon
	 */
	struct USocialMenu_Entry_PartyInvite_C_SetProfileIcon_Params
	{	};

	/**
	 * Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.IsPendingFriendRequest
	 */
	struct USocialMenu_Entry_PartyInvite_C_IsPendingFriendRequest_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.ShowLoading
	 */
	struct USocialMenu_Entry_PartyInvite_C_ShowLoading_Params
	{	};

	/**
	 * Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.SetBackground
	 */
	struct USocialMenu_Entry_PartyInvite_C_SetBackground_Params
	{	};

	/**
	 * Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.SetOnlineStatus
	 */
	struct USocialMenu_Entry_PartyInvite_C_SetOnlineStatus_Params
	{	};

	/**
	 * Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.SetName
	 */
	struct USocialMenu_Entry_PartyInvite_C_SetName_Params
	{	};

	/**
	 * Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.SetPlatformIcon
	 */
	struct USocialMenu_Entry_PartyInvite_C_SetPlatformIcon_Params
	{	};

	/**
	 * Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.Event_Refresh
	 */
	struct USocialMenu_Entry_PartyInvite_C_Event_Refresh_Params
	{	};

	/**
	 * Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.BndEvt__SendInviteButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct USocialMenu_Entry_PartyInvite_C_BndEvt__SendInviteButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.OnFocusLost
	 */
	struct USocialMenu_Entry_PartyInvite_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.Construct
	 */
	struct USocialMenu_Entry_PartyInvite_C_Construct_Params
	{	};

	/**
	 * Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.OnMenuInputSourceChanged
	 */
	struct USocialMenu_Entry_PartyInvite_C_OnMenuInputSourceChanged_Params
	{	};

	/**
	 * Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.Destruct
	 */
	struct USocialMenu_Entry_PartyInvite_C_Destruct_Params
	{	};

	/**
	 * Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.BndEvt__SocialMenu_Entry_PartyInvite_InteractionButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct USocialMenu_Entry_PartyInvite_C_BndEvt__SocialMenu_Entry_PartyInvite_InteractionButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.BndEvt__SocialMenu_Entry_PartyInvite_InteractionButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct USocialMenu_Entry_PartyInvite_C_BndEvt__SocialMenu_Entry_PartyInvite_InteractionButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.BndEvt__SocialMenu_Entry_PartyInvite_InteractionButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct USocialMenu_Entry_PartyInvite_C_BndEvt__SocialMenu_Entry_PartyInvite_InteractionButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.ExecuteUbergraph_SocialMenu_Entry_PartyInvite
	 */
	struct USocialMenu_Entry_PartyInvite_C_ExecuteUbergraph_SocialMenu_Entry_PartyInvite_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
