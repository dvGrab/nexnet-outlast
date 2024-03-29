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
	 * Function SocialMenu_Tab_Party.SocialMenu_Tab_Party_C.OnFocusReceived
	 */
	struct USocialMenu_Tab_Party_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SocialMenu_Tab_Party.SocialMenu_Tab_Party_C.Refresh
	 */
	struct USocialMenu_Tab_Party_C_Refresh_Params
	{
	public:
		bool                                                       bCanSendPartyInvite;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SocialMenu_Tab_Party.SocialMenu_Tab_Party_C.Deactivate
	 */
	struct USocialMenu_Tab_Party_C_Deactivate_Params
	{	};

	/**
	 * Function SocialMenu_Tab_Party.SocialMenu_Tab_Party_C.Activate
	 */
	struct USocialMenu_Tab_Party_C_Activate_Params
	{
	public:
		class URBSocialMenuManager*                                SocialMenu;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SocialMenu_Tab_Party.SocialMenu_Tab_Party_C.BndEvt__SocialMenu_Tab_Party_SocialMenuPartyInviteEntries_K2Node_ComponentBoundEvent_0_OnNoFocusPossible__DelegateSignature
	 */
	struct USocialMenu_Tab_Party_C_BndEvt__SocialMenu_Tab_Party_SocialMenuPartyInviteEntries_K2Node_ComponentBoundEvent_0_OnNoFocusPossible__DelegateSignature_Params
	{	};

	/**
	 * Function SocialMenu_Tab_Party.SocialMenu_Tab_Party_C.ExecuteUbergraph_SocialMenu_Tab_Party
	 */
	struct USocialMenu_Tab_Party_C_ExecuteUbergraph_SocialMenu_Tab_Party_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
