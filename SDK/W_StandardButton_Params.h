#pragma once

/**
 * Name: READYORNOT
 * Version: 0.0.1
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
	 * Function W_StandardButton.W_StandardButton_C.SetButtonText
	 */
	struct UW_StandardButton_C_SetButtonText_Params
	{
	public:
		class FText                                                NewButtonText;                                           // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_StandardButton.W_StandardButton_C.GetTabControlIndex
	 */
	struct UW_StandardButton_C_GetTabControlIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_StandardButton.W_StandardButton_C.GetDescriptionText
	 */
	struct UW_StandardButton_C_GetDescriptionText_Params
	{
	public:
		class FText                                                DescriptionText;                                         // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function W_StandardButton.W_StandardButton_C.SetDisabled
	 */
	struct UW_StandardButton_C_SetDisabled_Params
	{
	public:
		bool                                                       Disabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_StandardButton.W_StandardButton_C.UpdateSelectedVisibility
	 */
	struct UW_StandardButton_C_UpdateSelectedVisibility_Params
	{	};

	/**
	 * Function W_StandardButton.W_StandardButton_C.GetThinRedLineVisibility
	 */
	struct UW_StandardButton_C_GetThinRedLineVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_StandardButton.W_StandardButton_C.GetSelectedVisibility
	 */
	struct UW_StandardButton_C_GetSelectedVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_StandardButton.W_StandardButton_C.OnUnhovered_Derived
	 */
	struct UW_StandardButton_C_OnUnhovered_Derived_Params
	{	};

	/**
	 * Function W_StandardButton.W_StandardButton_C.OnHovered_Derived
	 */
	struct UW_StandardButton_C_OnHovered_Derived_Params
	{	};

	/**
	 * Function W_StandardButton.W_StandardButton_C.OnClicked_Derived
	 */
	struct UW_StandardButton_C_OnClicked_Derived_Params
	{	};

	/**
	 * Function W_StandardButton.W_StandardButton_C.OnReleased_Derived
	 */
	struct UW_StandardButton_C_OnReleased_Derived_Params
	{	};

	/**
	 * Function W_StandardButton.W_StandardButton_C.OnPressed_Derived
	 */
	struct UW_StandardButton_C_OnPressed_Derived_Params
	{	};

	/**
	 * Function W_StandardButton.W_StandardButton_C.GetDisabledVisibility
	 */
	struct UW_StandardButton_C_GetDisabledVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_StandardButton.W_StandardButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature
	 */
	struct UW_StandardButton_C_BndEvt__TheButton_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_StandardButton.W_StandardButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_29_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UW_StandardButton_C_BndEvt__TheButton_K2Node_ComponentBoundEvent_29_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_StandardButton.W_StandardButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_40_OnButtonHoverEvent__DelegateSignature
	 */
	struct UW_StandardButton_C_BndEvt__TheButton_K2Node_ComponentBoundEvent_40_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_StandardButton.W_StandardButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_49_OnButtonHoverEvent__DelegateSignature
	 */
	struct UW_StandardButton_C_BndEvt__TheButton_K2Node_ComponentBoundEvent_49_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_StandardButton.W_StandardButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UW_StandardButton_C_BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_StandardButton.W_StandardButton_C.PreConstruct
	 */
	struct UW_StandardButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_StandardButton.W_StandardButton_C.Update Visibility
	 */
	struct UW_StandardButton_C_Update_Visibility_Params
	{	};

	/**
	 * Function W_StandardButton.W_StandardButton_C.Reconstruct
	 */
	struct UW_StandardButton_C_Reconstruct_Params
	{	};

	/**
	 * Function W_StandardButton.W_StandardButton_C.SimulateHover
	 */
	struct UW_StandardButton_C_SimulateHover_Params
	{	};

	/**
	 * Function W_StandardButton.W_StandardButton_C.SimulateUnhover
	 */
	struct UW_StandardButton_C_SimulateUnhover_Params
	{	};

	/**
	 * Function W_StandardButton.W_StandardButton_C.SimulateClicked
	 */
	struct UW_StandardButton_C_SimulateClicked_Params
	{	};

	/**
	 * Function W_StandardButton.W_StandardButton_C.ExecuteUbergraph_W_StandardButton
	 */
	struct UW_StandardButton_C_ExecuteUbergraph_W_StandardButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_StandardButton.W_StandardButton_C.OnPressed__DelegateSignature
	 */
	struct UW_StandardButton_C_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function W_StandardButton.W_StandardButton_C.OnReleased__DelegateSignature
	 */
	struct UW_StandardButton_C_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function W_StandardButton.W_StandardButton_C.OnHovered__DelegateSignature
	 */
	struct UW_StandardButton_C_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function W_StandardButton.W_StandardButton_C.OnUnhovered__DelegateSignature
	 */
	struct UW_StandardButton_C_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function W_StandardButton.W_StandardButton_C.OnClicked__DelegateSignature
	 */
	struct UW_StandardButton_C_OnClicked__DelegateSignature_Params
	{
	public:
		class UW_StandardButton_C*                                 CallingButton;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
