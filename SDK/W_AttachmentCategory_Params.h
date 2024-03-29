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
	 * Function W_AttachmentCategory.W_AttachmentCategory_C.DeselectAll
	 */
	struct UW_AttachmentCategory_C_DeselectAll_Params
	{	};

	/**
	 * Function W_AttachmentCategory.W_AttachmentCategory_C.Transform Into Custom Button
	 */
	struct UW_AttachmentCategory_C_Transform_Into_Custom_Button_Params
	{	};

	/**
	 * Function W_AttachmentCategory.W_AttachmentCategory_C.OnKeyUp
	 */
	struct UW_AttachmentCategory_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_AttachmentCategory.W_AttachmentCategory_C.IsValidGridIndex
	 */
	struct UW_AttachmentCategory_C_IsValidGridIndex_Params
	{
	public:
		int32_t                                                    InRow;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InColumn;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Return_Value;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KFF0[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_AttachmentCategory.W_AttachmentCategory_C.FindGridIndexFromAttachmentItemWidget
	 */
	struct UW_AttachmentCategory_C_FindGridIndexFromAttachmentItemWidget_Params
	{
	public:
		class UW_AttachmentItem_C*                                 InAttachmentItemWidget;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Out_Row;                                                 // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Out_Column;                                              // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_AttachmentCategory.W_AttachmentCategory_C.FindAttachmentItemWidgetAt
	 */
	struct UW_AttachmentCategory_C_FindAttachmentItemWidgetAt_Params
	{
	public:
		int32_t                                                    InRow;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InColumn;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UW_AttachmentItem_C*                                 Return_Value;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_AttachmentCategory.W_AttachmentCategory_C.OnMouseMove
	 */
	struct UW_AttachmentCategory_C_OnMouseMove_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_AttachmentCategory.W_AttachmentCategory_C.Get_SelectedItemInfo_Container_Visibility
	 */
	struct UW_AttachmentCategory_C_Get_SelectedItemInfo_Container_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_AttachmentCategory.W_AttachmentCategory_C.UnselectAttachmentItem
	 */
	struct UW_AttachmentCategory_C_UnselectAttachmentItem_Params
	{	};

	/**
	 * Function W_AttachmentCategory.W_AttachmentCategory_C.SelectAttachmentItem
	 */
	struct UW_AttachmentCategory_C_SelectAttachmentItem_Params
	{	};

	/**
	 * Function W_AttachmentCategory.W_AttachmentCategory_C.UnhoverAttachmentItem
	 */
	struct UW_AttachmentCategory_C_UnhoverAttachmentItem_Params
	{	};

	/**
	 * Function W_AttachmentCategory.W_AttachmentCategory_C.HoverAttachmentItem
	 */
	struct UW_AttachmentCategory_C_HoverAttachmentItem_Params
	{	};

	/**
	 * Function W_AttachmentCategory.W_AttachmentCategory_C.PreviousColumn
	 */
	struct UW_AttachmentCategory_C_PreviousColumn_Params
	{	};

	/**
	 * Function W_AttachmentCategory.W_AttachmentCategory_C.NextColumn
	 */
	struct UW_AttachmentCategory_C_NextColumn_Params
	{	};

	/**
	 * Function W_AttachmentCategory.W_AttachmentCategory_C.PreviousRow
	 */
	struct UW_AttachmentCategory_C_PreviousRow_Params
	{	};

	/**
	 * Function W_AttachmentCategory.W_AttachmentCategory_C.NextRow
	 */
	struct UW_AttachmentCategory_C_NextRow_Params
	{	};

	/**
	 * Function W_AttachmentCategory.W_AttachmentCategory_C.SimulateClick
	 */
	struct UW_AttachmentCategory_C_SimulateClick_Params
	{	};

	/**
	 * Function W_AttachmentCategory.W_AttachmentCategory_C.OnKeyDown
	 */
	struct UW_AttachmentCategory_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_AttachmentCategory.W_AttachmentCategory_C.SimulateUnhover
	 */
	struct UW_AttachmentCategory_C_SimulateUnhover_Params
	{	};

	/**
	 * Function W_AttachmentCategory.W_AttachmentCategory_C.SimulateHover
	 */
	struct UW_AttachmentCategory_C_SimulateHover_Params
	{	};

	/**
	 * Function W_AttachmentCategory.W_AttachmentCategory_C.UpdateSelectedItemName
	 */
	struct UW_AttachmentCategory_C_UpdateSelectedItemName_Params
	{
	public:
		class FText                                                InItemName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_AttachmentCategory.W_AttachmentCategory_C.RemoveAllAttachmentItemWidgets
	 */
	struct UW_AttachmentCategory_C_RemoveAllAttachmentItemWidgets_Params
	{	};

	/**
	 * Function W_AttachmentCategory.W_AttachmentCategory_C.DeselectAllChildrenExcept
	 */
	struct UW_AttachmentCategory_C_DeselectAllChildrenExcept_Params
	{
	public:
		class UW_AttachmentItem_C*                                 InAttachmentItemWidget;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_AttachmentCategory.W_AttachmentCategory_C.CollapseAllChildrenExcept
	 */
	struct UW_AttachmentCategory_C_CollapseAllChildrenExcept_Params
	{
	public:
		class UW_AttachmentCategory_C*                             InAttachmentCategoryWidget;                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_AttachmentCategory.W_AttachmentCategory_C.OnAttachmentItemClicked
	 */
	struct UW_AttachmentCategory_C_OnAttachmentItemClicked_Params
	{
	public:
		class UW_AttachmentItem_C*                                 AttachmentItemWidget;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_AttachmentCategory.W_AttachmentCategory_C.CreateAttachmentItemWidget
	 */
	struct UW_AttachmentCategory_C_CreateAttachmentItemWidget_Params
	{
	public:
		class UClass*                                              AttachmentItemClass;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InRow;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InColumn;                                                // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_AttachmentCategory.W_AttachmentCategory_C.ExpandChildren
	 */
	struct UW_AttachmentCategory_C_ExpandChildren_Params
	{	};

	/**
	 * Function W_AttachmentCategory.W_AttachmentCategory_C.CollapseChildren
	 */
	struct UW_AttachmentCategory_C_CollapseChildren_Params
	{	};

	/**
	 * Function W_AttachmentCategory.W_AttachmentCategory_C.PreConstruct
	 */
	struct UW_AttachmentCategory_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_AttachmentCategory.W_AttachmentCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UW_AttachmentCategory_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	public:
		class UW_StandardButton_C*                                 CallingButton;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_AttachmentCategory.W_AttachmentCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
	 */
	struct UW_AttachmentCategory_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function W_AttachmentCategory.W_AttachmentCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature
	 */
	struct UW_AttachmentCategory_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function W_AttachmentCategory.W_AttachmentCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature
	 */
	struct UW_AttachmentCategory_C_BndEvt__Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function W_AttachmentCategory.W_AttachmentCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature
	 */
	struct UW_AttachmentCategory_C_BndEvt__Button_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function W_AttachmentCategory.W_AttachmentCategory_C.OnLoadoutLoaded
	 */
	struct UW_AttachmentCategory_C_OnLoadoutLoaded_Params
	{	};

	/**
	 * Function W_AttachmentCategory.W_AttachmentCategory_C.OnAttachmentItemButtonHovered
	 */
	struct UW_AttachmentCategory_C_OnAttachmentItemButtonHovered_Params
	{
	public:
		class UW_AttachmentItem_C*                                 AttachmentItem;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_AttachmentCategory.W_AttachmentCategory_C.OnGunCleaned
	 */
	struct UW_AttachmentCategory_C_OnGunCleaned_Params
	{	};

	/**
	 * Function W_AttachmentCategory.W_AttachmentCategory_C.ExecuteUbergraph_W_AttachmentCategory
	 */
	struct UW_AttachmentCategory_C_ExecuteUbergraph_W_AttachmentCategory_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_AttachmentCategory.W_AttachmentCategory_C.OnButtonUnhovered__DelegateSignature
	 */
	struct UW_AttachmentCategory_C_OnButtonUnhovered__DelegateSignature_Params
	{
	public:
		class UW_AttachmentCategory_C*                             AttachmentCategory;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_AttachmentCategory.W_AttachmentCategory_C.OnButtonHovered__DelegateSignature
	 */
	struct UW_AttachmentCategory_C_OnButtonHovered__DelegateSignature_Params
	{
	public:
		class UW_AttachmentCategory_C*                             AttachmentCategory;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_AttachmentCategory.W_AttachmentCategory_C.OnAttachmentItemButtonClicked__DelegateSignature
	 */
	struct UW_AttachmentCategory_C_OnAttachmentItemButtonClicked__DelegateSignature_Params
	{
	public:
		class UClass*                                              AttachmentClass;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_AttachmentCategory.W_AttachmentCategory_C.OnButtonClicked__DelegateSignature
	 */
	struct UW_AttachmentCategory_C_OnButtonClicked__DelegateSignature_Params
	{
	public:
		class UW_AttachmentCategory_C*                             AttachmentCategory;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
