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
	 * Function SocialMenu_ContextualMenu_Action.SocialMenu_ContextualMenu_Action_C.SetHovered
	 */
	struct USocialMenu_ContextualMenu_Action_C_SetHovered_Params
	{
	public:
		bool                                                       bInHovered;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SocialMenu_ContextualMenu_Action.SocialMenu_ContextualMenu_Action_C.Refresh
	 */
	struct USocialMenu_ContextualMenu_Action_C_Refresh_Params
	{	};

	/**
	 * Function SocialMenu_ContextualMenu_Action.SocialMenu_ContextualMenu_Action_C.SetButtonText
	 */
	struct USocialMenu_ContextualMenu_Action_C_SetButtonText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SocialMenu_ContextualMenu_Action.SocialMenu_ContextualMenu_Action_C.SetEnabled
	 */
	struct USocialMenu_ContextualMenu_Action_C_SetEnabled_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SocialMenu_ContextualMenu_Action.SocialMenu_ContextualMenu_Action_C.BndEvt__btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct USocialMenu_ContextualMenu_Action_C_BndEvt__btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SocialMenu_ContextualMenu_Action.SocialMenu_ContextualMenu_Action_C.PreConstruct
	 */
	struct USocialMenu_ContextualMenu_Action_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SocialMenu_ContextualMenu_Action.SocialMenu_ContextualMenu_Action_C.BndEvt__SocialMenu_ContextualMenu_Action_btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct USocialMenu_ContextualMenu_Action_C_BndEvt__SocialMenu_ContextualMenu_Action_btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SocialMenu_ContextualMenu_Action.SocialMenu_ContextualMenu_Action_C.BndEvt__SocialMenu_ContextualMenu_Action_btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct USocialMenu_ContextualMenu_Action_C_BndEvt__SocialMenu_ContextualMenu_Action_btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SocialMenu_ContextualMenu_Action.SocialMenu_ContextualMenu_Action_C.ExecuteUbergraph_SocialMenu_ContextualMenu_Action
	 */
	struct USocialMenu_ContextualMenu_Action_C_ExecuteUbergraph_SocialMenu_ContextualMenu_Action_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SocialMenu_ContextualMenu_Action.SocialMenu_ContextualMenu_Action_C.OnActionTriggered__DelegateSignature
	 */
	struct USocialMenu_ContextualMenu_Action_C_OnActionTriggered__DelegateSignature_Params
	{
	public:
		ERBSocialMenuEntryAction                                   action;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
