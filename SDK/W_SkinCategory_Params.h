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
	 * Function W_SkinCategory.W_SkinCategory_C.DeselectAll
	 */
	struct UW_SkinCategory_C_DeselectAll_Params
	{	};

	/**
	 * Function W_SkinCategory.W_SkinCategory_C.OnKeyUp
	 */
	struct UW_SkinCategory_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_SkinCategory.W_SkinCategory_C.IsValidGridIndex
	 */
	struct UW_SkinCategory_C_IsValidGridIndex_Params
	{
	public:
		int32_t                                                    InRow;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InColumn;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Return_Value;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZC87[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_SkinCategory.W_SkinCategory_C.Find Grid Index From Skin Item Widget
	 */
	struct UW_SkinCategory_C_Find_Grid_Index_From_Skin_Item_Widget_Params
	{
	public:
		class UW_SkinItem_C*                                       InSkinItemWidget;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Out_Row;                                                 // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Out_Column;                                              // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_SkinCategory.W_SkinCategory_C.FindAttachmentItemWidgetAt
	 */
	struct UW_SkinCategory_C_FindAttachmentItemWidgetAt_Params
	{
	public:
		int32_t                                                    InRow;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InColumn;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UW_SkinItem_C*                                       Return_Value;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_SkinCategory.W_SkinCategory_C.OnMouseMove
	 */
	struct UW_SkinCategory_C_OnMouseMove_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_SkinCategory.W_SkinCategory_C.Get_SelectedItemInfo_Container_Visibility
	 */
	struct UW_SkinCategory_C_Get_SelectedItemInfo_Container_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_SkinCategory.W_SkinCategory_C.UnselectSkinItem
	 */
	struct UW_SkinCategory_C_UnselectSkinItem_Params
	{	};

	/**
	 * Function W_SkinCategory.W_SkinCategory_C.SelectSkinItem
	 */
	struct UW_SkinCategory_C_SelectSkinItem_Params
	{	};

	/**
	 * Function W_SkinCategory.W_SkinCategory_C.UnhoverSkinItem
	 */
	struct UW_SkinCategory_C_UnhoverSkinItem_Params
	{	};

	/**
	 * Function W_SkinCategory.W_SkinCategory_C.HoverSkinItem
	 */
	struct UW_SkinCategory_C_HoverSkinItem_Params
	{	};

	/**
	 * Function W_SkinCategory.W_SkinCategory_C.PreviousColumn
	 */
	struct UW_SkinCategory_C_PreviousColumn_Params
	{	};

	/**
	 * Function W_SkinCategory.W_SkinCategory_C.NextColumn
	 */
	struct UW_SkinCategory_C_NextColumn_Params
	{	};

	/**
	 * Function W_SkinCategory.W_SkinCategory_C.PreviousRow
	 */
	struct UW_SkinCategory_C_PreviousRow_Params
	{	};

	/**
	 * Function W_SkinCategory.W_SkinCategory_C.NextRow
	 */
	struct UW_SkinCategory_C_NextRow_Params
	{	};

	/**
	 * Function W_SkinCategory.W_SkinCategory_C.SimulateClick
	 */
	struct UW_SkinCategory_C_SimulateClick_Params
	{	};

	/**
	 * Function W_SkinCategory.W_SkinCategory_C.OnKeyDown
	 */
	struct UW_SkinCategory_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_SkinCategory.W_SkinCategory_C.SimulateUnhover
	 */
	struct UW_SkinCategory_C_SimulateUnhover_Params
	{	};

	/**
	 * Function W_SkinCategory.W_SkinCategory_C.SimulateHover
	 */
	struct UW_SkinCategory_C_SimulateHover_Params
	{	};

	/**
	 * Function W_SkinCategory.W_SkinCategory_C.UpdateSelectedItemName
	 */
	struct UW_SkinCategory_C_UpdateSelectedItemName_Params
	{
	public:
		class FText                                                InItemName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_SkinCategory.W_SkinCategory_C.RemoveAllAttachmentItemWidgets
	 */
	struct UW_SkinCategory_C_RemoveAllAttachmentItemWidgets_Params
	{	};

	/**
	 * Function W_SkinCategory.W_SkinCategory_C.UnhoverAllChildrenExcept
	 */
	struct UW_SkinCategory_C_UnhoverAllChildrenExcept_Params
	{
	public:
		class UW_SkinItem_C*                                       SkinItemWidget;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_SkinCategory.W_SkinCategory_C.DeselectAllChildrenExcept
	 */
	struct UW_SkinCategory_C_DeselectAllChildrenExcept_Params
	{
	public:
		class UW_SkinItem_C*                                       InSkinItemWidget;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_SkinCategory.W_SkinCategory_C.CollapseAllChildrenExcept
	 */
	struct UW_SkinCategory_C_CollapseAllChildrenExcept_Params
	{
	public:
		class UW_AttachmentCategory_C*                             InAttachmentCategoryWidget;                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_SkinCategory.W_SkinCategory_C.OnSkinItemClicked
	 */
	struct UW_SkinCategory_C_OnSkinItemClicked_Params
	{
	public:
		class UW_SkinItem_C*                                       SkinItemWidget;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_SkinCategory.W_SkinCategory_C.CreateSkinItemWidget
	 */
	struct UW_SkinCategory_C_CreateSkinItemWidget_Params
	{
	public:
		class UClass*                                              SkinClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InRow;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InColumn;                                                // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_SkinCategory.W_SkinCategory_C.ExpandChildren
	 */
	struct UW_SkinCategory_C_ExpandChildren_Params
	{	};

	/**
	 * Function W_SkinCategory.W_SkinCategory_C.CollapseChildren
	 */
	struct UW_SkinCategory_C_CollapseChildren_Params
	{	};

	/**
	 * Function W_SkinCategory.W_SkinCategory_C.PreConstruct
	 */
	struct UW_SkinCategory_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_SkinCategory.W_SkinCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UW_SkinCategory_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	public:
		class UW_StandardButton_C*                                 CallingButton;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_SkinCategory.W_SkinCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
	 */
	struct UW_SkinCategory_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function W_SkinCategory.W_SkinCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature
	 */
	struct UW_SkinCategory_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function W_SkinCategory.W_SkinCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature
	 */
	struct UW_SkinCategory_C_BndEvt__Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function W_SkinCategory.W_SkinCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature
	 */
	struct UW_SkinCategory_C_BndEvt__Button_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function W_SkinCategory.W_SkinCategory_C.OnLoadoutLoaded
	 */
	struct UW_SkinCategory_C_OnLoadoutLoaded_Params
	{	};

	/**
	 * Function W_SkinCategory.W_SkinCategory_C.OnSkinItemButtonHovered
	 */
	struct UW_SkinCategory_C_OnSkinItemButtonHovered_Params
	{
	public:
		class UW_SkinItem_C*                                       SkinItem;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_SkinCategory.W_SkinCategory_C.OnGunCleaned
	 */
	struct UW_SkinCategory_C_OnGunCleaned_Params
	{	};

	/**
	 * Function W_SkinCategory.W_SkinCategory_C.ExecuteUbergraph_W_SkinCategory
	 */
	struct UW_SkinCategory_C_ExecuteUbergraph_W_SkinCategory_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_SkinCategory.W_SkinCategory_C.OnButtonUnhovered__DelegateSignature
	 */
	struct UW_SkinCategory_C_OnButtonUnhovered__DelegateSignature_Params
	{
	public:
		class UW_SkinCategory_C*                                   SkinCategory;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_SkinCategory.W_SkinCategory_C.OnButtonHovered__DelegateSignature
	 */
	struct UW_SkinCategory_C_OnButtonHovered__DelegateSignature_Params
	{
	public:
		class UW_SkinCategory_C*                                   SkinCategory;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_SkinCategory.W_SkinCategory_C.OnSkinItemButtonClicked__DelegateSignature
	 */
	struct UW_SkinCategory_C_OnSkinItemButtonClicked__DelegateSignature_Params
	{
	public:
		class UClass*                                              SkinClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_SkinCategory.W_SkinCategory_C.OnButtonClicked__DelegateSignature
	 */
	struct UW_SkinCategory_C_OnButtonClicked__DelegateSignature_Params
	{
	public:
		class UW_SkinCategory_C*                                   SkinCategory;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
