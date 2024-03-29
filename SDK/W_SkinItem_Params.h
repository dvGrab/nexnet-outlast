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
	 * Function W_SkinItem.W_SkinItem_C.UnhighlightBorder
	 */
	struct UW_SkinItem_C_UnhighlightBorder_Params
	{	};

	/**
	 * Function W_SkinItem.W_SkinItem_C.HighlightBorder
	 */
	struct UW_SkinItem_C_HighlightBorder_Params
	{	};

	/**
	 * Function W_SkinItem.W_SkinItem_C.UpdateSkinName
	 */
	struct UW_SkinItem_C_UpdateSkinName_Params
	{	};

	/**
	 * Function W_SkinItem.W_SkinItem_C.SimulateClicked
	 */
	struct UW_SkinItem_C_SimulateClicked_Params
	{	};

	/**
	 * Function W_SkinItem.W_SkinItem_C.SimulateUnhover
	 */
	struct UW_SkinItem_C_SimulateUnhover_Params
	{	};

	/**
	 * Function W_SkinItem.W_SkinItem_C.SimulateHover
	 */
	struct UW_SkinItem_C_SimulateHover_Params
	{	};

	/**
	 * Function W_SkinItem.W_SkinItem_C.Deselect
	 */
	struct UW_SkinItem_C_Deselect_Params
	{	};

	/**
	 * Function W_SkinItem.W_SkinItem_C.Select
	 */
	struct UW_SkinItem_C_Select_Params
	{	};

	/**
	 * Function W_SkinItem.W_SkinItem_C.Get_ItemClassName_Text_Visibility
	 */
	struct UW_SkinItem_C_Get_ItemClassName_Text_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_SkinItem.W_SkinItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 */
	struct UW_SkinItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function W_SkinItem.W_SkinItem_C.PreConstruct
	 */
	struct UW_SkinItem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_SkinItem.W_SkinItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct UW_SkinItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{
	public:
		class UW_StandardButton_C*                                 CallingButton;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_SkinItem.W_SkinItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature
	 */
	struct UW_SkinItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function W_SkinItem.W_SkinItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature
	 */
	struct UW_SkinItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function W_SkinItem.W_SkinItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature
	 */
	struct UW_SkinItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function W_SkinItem.W_SkinItem_C.OnLoadoutLoaded
	 */
	struct UW_SkinItem_C_OnLoadoutLoaded_Params
	{	};

	/**
	 * Function W_SkinItem.W_SkinItem_C.OnGunCleaned
	 */
	struct UW_SkinItem_C_OnGunCleaned_Params
	{	};

	/**
	 * Function W_SkinItem.W_SkinItem_C.ExecuteUbergraph_W_SkinItem
	 */
	struct UW_SkinItem_C_ExecuteUbergraph_W_SkinItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_SkinItem.W_SkinItem_C.OnButtonUnhovered__DelegateSignature
	 */
	struct UW_SkinItem_C_OnButtonUnhovered__DelegateSignature_Params
	{
	public:
		class UW_SkinItem_C*                                       SkinItem;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_SkinItem.W_SkinItem_C.OnButtonHovered__DelegateSignature
	 */
	struct UW_SkinItem_C_OnButtonHovered__DelegateSignature_Params
	{
	public:
		class UW_SkinItem_C*                                       SkinItem;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_SkinItem.W_SkinItem_C.OnButtonClicked__DelegateSignature
	 */
	struct UW_SkinItem_C_OnButtonClicked__DelegateSignature_Params
	{
	public:
		class UW_SkinItem_C*                                       SkinItem;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
