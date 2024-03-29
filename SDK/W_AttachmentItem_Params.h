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
	 * Function W_AttachmentItem.W_AttachmentItem_C.UnhighlightBorder
	 */
	struct UW_AttachmentItem_C_UnhighlightBorder_Params
	{	};

	/**
	 * Function W_AttachmentItem.W_AttachmentItem_C.HighlightBorder
	 */
	struct UW_AttachmentItem_C_HighlightBorder_Params
	{	};

	/**
	 * Function W_AttachmentItem.W_AttachmentItem_C.UpdateAttachmentName
	 */
	struct UW_AttachmentItem_C_UpdateAttachmentName_Params
	{	};

	/**
	 * Function W_AttachmentItem.W_AttachmentItem_C.SimulateClicked
	 */
	struct UW_AttachmentItem_C_SimulateClicked_Params
	{	};

	/**
	 * Function W_AttachmentItem.W_AttachmentItem_C.SimulateUnhover
	 */
	struct UW_AttachmentItem_C_SimulateUnhover_Params
	{	};

	/**
	 * Function W_AttachmentItem.W_AttachmentItem_C.SimulateHover
	 */
	struct UW_AttachmentItem_C_SimulateHover_Params
	{	};

	/**
	 * Function W_AttachmentItem.W_AttachmentItem_C.Deselect
	 */
	struct UW_AttachmentItem_C_Deselect_Params
	{	};

	/**
	 * Function W_AttachmentItem.W_AttachmentItem_C.Select
	 */
	struct UW_AttachmentItem_C_Select_Params
	{	};

	/**
	 * Function W_AttachmentItem.W_AttachmentItem_C.Get_ItemClassName_Text_Visibility
	 */
	struct UW_AttachmentItem_C_Get_ItemClassName_Text_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_AttachmentItem.W_AttachmentItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 */
	struct UW_AttachmentItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function W_AttachmentItem.W_AttachmentItem_C.PreConstruct
	 */
	struct UW_AttachmentItem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_AttachmentItem.W_AttachmentItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct UW_AttachmentItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{
	public:
		class UW_StandardButton_C*                                 CallingButton;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_AttachmentItem.W_AttachmentItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature
	 */
	struct UW_AttachmentItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function W_AttachmentItem.W_AttachmentItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature
	 */
	struct UW_AttachmentItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function W_AttachmentItem.W_AttachmentItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature
	 */
	struct UW_AttachmentItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function W_AttachmentItem.W_AttachmentItem_C.OnLoadoutLoaded
	 */
	struct UW_AttachmentItem_C_OnLoadoutLoaded_Params
	{	};

	/**
	 * Function W_AttachmentItem.W_AttachmentItem_C.OnGunCleaned
	 */
	struct UW_AttachmentItem_C_OnGunCleaned_Params
	{	};

	/**
	 * Function W_AttachmentItem.W_AttachmentItem_C.ExecuteUbergraph_W_AttachmentItem
	 */
	struct UW_AttachmentItem_C_ExecuteUbergraph_W_AttachmentItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6S7M[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_AttachmentItem.W_AttachmentItem_C.OnButtonUnhovered__DelegateSignature
	 */
	struct UW_AttachmentItem_C_OnButtonUnhovered__DelegateSignature_Params
	{
	public:
		class UW_AttachmentItem_C*                                 AttachmentItem;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_AttachmentItem.W_AttachmentItem_C.OnButtonHovered__DelegateSignature
	 */
	struct UW_AttachmentItem_C_OnButtonHovered__DelegateSignature_Params
	{
	public:
		class UW_AttachmentItem_C*                                 AttachmentItem;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_AttachmentItem.W_AttachmentItem_C.OnButtonClicked__DelegateSignature
	 */
	struct UW_AttachmentItem_C_OnButtonClicked__DelegateSignature_Params
	{
	public:
		class UW_AttachmentItem_C*                                 AttachmentItem;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
