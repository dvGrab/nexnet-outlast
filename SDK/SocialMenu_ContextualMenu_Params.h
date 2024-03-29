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
	 * Function SocialMenu_ContextualMenu.SocialMenu_ContextualMenu_C.OnFocusReceived
	 */
	struct USocialMenu_ContextualMenu_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SocialMenu_ContextualMenu.SocialMenu_ContextualMenu_C.DoCustomNavigation_1
	 */
	struct USocialMenu_ContextualMenu_C_DoCustomNavigation_1_Params
	{
	public:
		EUINavigation                                              Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_05NH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SocialMenu_ContextualMenu.SocialMenu_ContextualMenu_C.GetActionText
	 */
	struct USocialMenu_ContextualMenu_C_GetActionText_Params
	{
	public:
		ERBSocialMenuEntryAction                                   Enumerator;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4UBT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SocialMenu_ContextualMenu.SocialMenu_ContextualMenu_C.Event_Refresh
	 */
	struct USocialMenu_ContextualMenu_C_Event_Refresh_Params
	{	};

	/**
	 * Function SocialMenu_ContextualMenu.SocialMenu_ContextualMenu_C.OnActionTriggered
	 */
	struct USocialMenu_ContextualMenu_C_OnActionTriggered_Params
	{
	public:
		ERBSocialMenuEntryAction                                   action;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SocialMenu_ContextualMenu.SocialMenu_ContextualMenu_C.BndEvt__SocialMenu_ContextualMenu_VoiceChatVolumeSlider_K2Node_ComponentBoundEvent_0_OnValueUpdated__DelegateSignature
	 */
	struct USocialMenu_ContextualMenu_C_BndEvt__SocialMenu_ContextualMenu_VoiceChatVolumeSlider_K2Node_ComponentBoundEvent_0_OnValueUpdated__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SocialMenu_ContextualMenu.SocialMenu_ContextualMenu_C.ExecuteUbergraph_SocialMenu_ContextualMenu
	 */
	struct USocialMenu_ContextualMenu_C_ExecuteUbergraph_SocialMenu_ContextualMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
