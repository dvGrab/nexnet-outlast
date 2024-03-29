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
	 * Function W_PersonalizationItem.W_PersonalizationItem_C.UnhighlightBorder
	 */
	struct UW_PersonalizationItem_C_UnhighlightBorder_Params
	{	};

	/**
	 * Function W_PersonalizationItem.W_PersonalizationItem_C.HighlightBorder
	 */
	struct UW_PersonalizationItem_C_HighlightBorder_Params
	{	};

	/**
	 * Function W_PersonalizationItem.W_PersonalizationItem_C.SimulateClicked
	 */
	struct UW_PersonalizationItem_C_SimulateClicked_Params
	{	};

	/**
	 * Function W_PersonalizationItem.W_PersonalizationItem_C.SimulateUnhover
	 */
	struct UW_PersonalizationItem_C_SimulateUnhover_Params
	{	};

	/**
	 * Function W_PersonalizationItem.W_PersonalizationItem_C.SimulateHover
	 */
	struct UW_PersonalizationItem_C_SimulateHover_Params
	{	};

	/**
	 * Function W_PersonalizationItem.W_PersonalizationItem_C.Deselect
	 */
	struct UW_PersonalizationItem_C_Deselect_Params
	{	};

	/**
	 * Function W_PersonalizationItem.W_PersonalizationItem_C.Select
	 */
	struct UW_PersonalizationItem_C_Select_Params
	{	};

	/**
	 * Function W_PersonalizationItem.W_PersonalizationItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 */
	struct UW_PersonalizationItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function W_PersonalizationItem.W_PersonalizationItem_C.PreConstruct
	 */
	struct UW_PersonalizationItem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_PersonalizationItem.W_PersonalizationItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct UW_PersonalizationItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{
	public:
		class UW_StandardButton_C*                                 CallingButton;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PersonalizationItem.W_PersonalizationItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature
	 */
	struct UW_PersonalizationItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function W_PersonalizationItem.W_PersonalizationItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature
	 */
	struct UW_PersonalizationItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function W_PersonalizationItem.W_PersonalizationItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature
	 */
	struct UW_PersonalizationItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function W_PersonalizationItem.W_PersonalizationItem_C.Tick
	 */
	struct UW_PersonalizationItem_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PersonalizationItem.W_PersonalizationItem_C.ExecuteUbergraph_W_PersonalizationItem
	 */
	struct UW_PersonalizationItem_C_ExecuteUbergraph_W_PersonalizationItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PersonalizationItem.W_PersonalizationItem_C.OnButtonUnhovered__DelegateSignature
	 */
	struct UW_PersonalizationItem_C_OnButtonUnhovered__DelegateSignature_Params
	{
	public:
		class UW_PersonalizationItem_C*                            PersonalizationItem;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PersonalizationItem.W_PersonalizationItem_C.OnButtonHovered__DelegateSignature
	 */
	struct UW_PersonalizationItem_C_OnButtonHovered__DelegateSignature_Params
	{
	public:
		class UW_PersonalizationItem_C*                            PersonalizationItem;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PersonalizationItem.W_PersonalizationItem_C.OnButtonClicked__DelegateSignature
	 */
	struct UW_PersonalizationItem_C_OnButtonClicked__DelegateSignature_Params
	{
	public:
		class UW_PersonalizationItem_C*                            PersonalizationItem;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
