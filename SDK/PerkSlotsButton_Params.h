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
	 * Function PerkSlotsButton.PerkSlotsButton_C.SetFocused
	 */
	struct UPerkSlotsButton_C_SetFocused_Params
	{
	public:
		bool                                                       bInFocused;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PerkSlotsButton.PerkSlotsButton_C.IsConsideredHovered
	 */
	struct UPerkSlotsButton_C_IsConsideredHovered_Params
	{
	public:
		bool                                                       bConsideredHovered;                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PerkSlotsButton.PerkSlotsButton_C.OnFocusReceived
	 */
	struct UPerkSlotsButton_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function PerkSlotsButton.PerkSlotsButton_C.SetHovered
	 */
	struct UPerkSlotsButton_C_SetHovered_Params
	{
	public:
		bool                                                       bInHovered;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PerkSlotsButton.PerkSlotsButton_C.Refresh
	 */
	struct UPerkSlotsButton_C_Refresh_Params
	{	};

	/**
	 * Function PerkSlotsButton.PerkSlotsButton_C.Init
	 */
	struct UPerkSlotsButton_C_Init_Params
	{	};

	/**
	 * Function PerkSlotsButton.PerkSlotsButton_C.Setup
	 */
	struct UPerkSlotsButton_C_Setup_Params
	{	};

	/**
	 * Function PerkSlotsButton.PerkSlotsButton_C.BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UPerkSlotsButton_C_BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function PerkSlotsButton.PerkSlotsButton_C.BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UPerkSlotsButton_C_BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function PerkSlotsButton.PerkSlotsButton_C.BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UPerkSlotsButton_C_BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function PerkSlotsButton.PerkSlotsButton_C.Construct
	 */
	struct UPerkSlotsButton_C_Construct_Params
	{	};

	/**
	 * Function PerkSlotsButton.PerkSlotsButton_C.OnFocusLost
	 */
	struct UPerkSlotsButton_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function PerkSlotsButton.PerkSlotsButton_C.Destruct
	 */
	struct UPerkSlotsButton_C_Destruct_Params
	{	};

	/**
	 * Function PerkSlotsButton.PerkSlotsButton_C.OnMenuInputSourceChanged
	 */
	struct UPerkSlotsButton_C_OnMenuInputSourceChanged_Params
	{	};

	/**
	 * Function PerkSlotsButton.PerkSlotsButton_C.ExecuteUbergraph_PerkSlotsButton
	 */
	struct UPerkSlotsButton_C_ExecuteUbergraph_PerkSlotsButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PerkSlotsButton.PerkSlotsButton_C.OnClicked__DelegateSignature
	 */
	struct UPerkSlotsButton_C_OnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
