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
	 * Function RigSlotButton.RigSlotButton_C.OnFocusReceived
	 */
	struct URigSlotButton_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function RigSlotButton.RigSlotButton_C.ComputeTier
	 */
	struct URigSlotButton_C_ComputeTier_Params
	{	};

	/**
	 * Function RigSlotButton.RigSlotButton_C.SetHovered
	 */
	struct URigSlotButton_C_SetHovered_Params
	{
	public:
		bool                                                       bInHovered;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RigSlotButton.RigSlotButton_C.Refresh
	 */
	struct URigSlotButton_C_Refresh_Params
	{	};

	/**
	 * Function RigSlotButton.RigSlotButton_C.Init
	 */
	struct URigSlotButton_C_Init_Params
	{	};

	/**
	 * Function RigSlotButton.RigSlotButton_C.Setup
	 */
	struct URigSlotButton_C_Setup_Params
	{	};

	/**
	 * Function RigSlotButton.RigSlotButton_C.PreConstruct
	 */
	struct URigSlotButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RigSlotButton.RigSlotButton_C.BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct URigSlotButton_C_BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function RigSlotButton.RigSlotButton_C.BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct URigSlotButton_C_BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function RigSlotButton.RigSlotButton_C.BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct URigSlotButton_C_BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function RigSlotButton.RigSlotButton_C.OnFocusLost
	 */
	struct URigSlotButton_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function RigSlotButton.RigSlotButton_C.ExecuteUbergraph_RigSlotButton
	 */
	struct URigSlotButton_C_ExecuteUbergraph_RigSlotButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RigSlotButton.RigSlotButton_C.OnClicked__DelegateSignature
	 */
	struct URigSlotButton_C_OnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
