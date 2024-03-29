/**
 * Name: READYORNOT
 * Version: 0.0.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.DeselectAll
	 * 		Flags  -> ()
	 */
	void UW_SkinCategory_C::DeselectAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SkinCategory.W_SkinCategory_C.DeselectAll");
		
		UW_SkinCategory_C_DeselectAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.OnKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UW_SkinCategory_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SkinCategory.W_SkinCategory_C.OnKeyUp");
		
		UW_SkinCategory_C_OnKeyUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.IsValidGridIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InColumn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_SkinCategory_C::IsValidGridIndex(int32_t InRow, int32_t InColumn, bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SkinCategory.W_SkinCategory_C.IsValidGridIndex");
		
		UW_SkinCategory_C_IsValidGridIndex_Params params {};
		params.InRow = InRow;
		params.InColumn = InColumn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.Find Grid Index From Skin Item Widget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_SkinItem_C*                               InSkinItemWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Out_Row                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Out_Column                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_SkinCategory_C::Find_Grid_Index_From_Skin_Item_Widget(class UW_SkinItem_C* InSkinItemWidget, int32_t* Out_Row, int32_t* Out_Column)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SkinCategory.W_SkinCategory_C.Find Grid Index From Skin Item Widget");
		
		UW_SkinCategory_C_Find_Grid_Index_From_Skin_Item_Widget_Params params {};
		params.InSkinItemWidget = InSkinItemWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out_Row != nullptr)
			*Out_Row = params.Out_Row;
		if (Out_Column != nullptr)
			*Out_Column = params.Out_Column;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.FindAttachmentItemWidgetAt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InColumn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_SkinItem_C*                               Return_Value                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_SkinCategory_C::FindAttachmentItemWidgetAt(int32_t InRow, int32_t InColumn, class UW_SkinItem_C** Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SkinCategory.W_SkinCategory_C.FindAttachmentItemWidgetAt");
		
		UW_SkinCategory_C_FindAttachmentItemWidgetAt_Params params {};
		params.InRow = InRow;
		params.InColumn = InColumn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.OnMouseMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UW_SkinCategory_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SkinCategory.W_SkinCategory_C.OnMouseMove");
		
		UW_SkinCategory_C_OnMouseMove_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.Get_SelectedItemInfo_Container_Visibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_SkinCategory_C::Get_SelectedItemInfo_Container_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SkinCategory.W_SkinCategory_C.Get_SelectedItemInfo_Container_Visibility");
		
		UW_SkinCategory_C_Get_SelectedItemInfo_Container_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.UnselectSkinItem
	 * 		Flags  -> ()
	 */
	void UW_SkinCategory_C::UnselectSkinItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SkinCategory.W_SkinCategory_C.UnselectSkinItem");
		
		UW_SkinCategory_C_UnselectSkinItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.SelectSkinItem
	 * 		Flags  -> ()
	 */
	void UW_SkinCategory_C::SelectSkinItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SkinCategory.W_SkinCategory_C.SelectSkinItem");
		
		UW_SkinCategory_C_SelectSkinItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.UnhoverSkinItem
	 * 		Flags  -> ()
	 */
	void UW_SkinCategory_C::UnhoverSkinItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SkinCategory.W_SkinCategory_C.UnhoverSkinItem");
		
		UW_SkinCategory_C_UnhoverSkinItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.HoverSkinItem
	 * 		Flags  -> ()
	 */
	void UW_SkinCategory_C::HoverSkinItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SkinCategory.W_SkinCategory_C.HoverSkinItem");
		
		UW_SkinCategory_C_HoverSkinItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.PreviousColumn
	 * 		Flags  -> ()
	 */
	void UW_SkinCategory_C::PreviousColumn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SkinCategory.W_SkinCategory_C.PreviousColumn");
		
		UW_SkinCategory_C_PreviousColumn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.NextColumn
	 * 		Flags  -> ()
	 */
	void UW_SkinCategory_C::NextColumn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SkinCategory.W_SkinCategory_C.NextColumn");
		
		UW_SkinCategory_C_NextColumn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.PreviousRow
	 * 		Flags  -> ()
	 */
	void UW_SkinCategory_C::PreviousRow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SkinCategory.W_SkinCategory_C.PreviousRow");
		
		UW_SkinCategory_C_PreviousRow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.NextRow
	 * 		Flags  -> ()
	 */
	void UW_SkinCategory_C::NextRow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SkinCategory.W_SkinCategory_C.NextRow");
		
		UW_SkinCategory_C_NextRow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.SimulateClick
	 * 		Flags  -> ()
	 */
	void UW_SkinCategory_C::SimulateClick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SkinCategory.W_SkinCategory_C.SimulateClick");
		
		UW_SkinCategory_C_SimulateClick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UW_SkinCategory_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SkinCategory.W_SkinCategory_C.OnKeyDown");
		
		UW_SkinCategory_C_OnKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.SimulateUnhover
	 * 		Flags  -> ()
	 */
	void UW_SkinCategory_C::SimulateUnhover()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SkinCategory.W_SkinCategory_C.SimulateUnhover");
		
		UW_SkinCategory_C_SimulateUnhover_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.SimulateHover
	 * 		Flags  -> ()
	 */
	void UW_SkinCategory_C::SimulateHover()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SkinCategory.W_SkinCategory_C.SimulateHover");
		
		UW_SkinCategory_C_SimulateHover_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.UpdateSelectedItemName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InItemName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_SkinCategory_C::UpdateSelectedItemName(const class FText& InItemName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SkinCategory.W_SkinCategory_C.UpdateSelectedItemName");
		
		UW_SkinCategory_C_UpdateSelectedItemName_Params params {};
		params.InItemName = InItemName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.RemoveAllAttachmentItemWidgets
	 * 		Flags  -> ()
	 */
	void UW_SkinCategory_C::RemoveAllAttachmentItemWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SkinCategory.W_SkinCategory_C.RemoveAllAttachmentItemWidgets");
		
		UW_SkinCategory_C_RemoveAllAttachmentItemWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.UnhoverAllChildrenExcept
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_SkinItem_C*                               SkinItemWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_SkinCategory_C::UnhoverAllChildrenExcept(class UW_SkinItem_C* SkinItemWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SkinCategory.W_SkinCategory_C.UnhoverAllChildrenExcept");
		
		UW_SkinCategory_C_UnhoverAllChildrenExcept_Params params {};
		params.SkinItemWidget = SkinItemWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.DeselectAllChildrenExcept
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_SkinItem_C*                               InSkinItemWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_SkinCategory_C::DeselectAllChildrenExcept(class UW_SkinItem_C* InSkinItemWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SkinCategory.W_SkinCategory_C.DeselectAllChildrenExcept");
		
		UW_SkinCategory_C_DeselectAllChildrenExcept_Params params {};
		params.InSkinItemWidget = InSkinItemWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.CollapseAllChildrenExcept
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_AttachmentCategory_C*                     InAttachmentCategoryWidget                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_SkinCategory_C::CollapseAllChildrenExcept(class UW_AttachmentCategory_C* InAttachmentCategoryWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SkinCategory.W_SkinCategory_C.CollapseAllChildrenExcept");
		
		UW_SkinCategory_C_CollapseAllChildrenExcept_Params params {};
		params.InAttachmentCategoryWidget = InAttachmentCategoryWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.OnSkinItemClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_SkinItem_C*                               SkinItemWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_SkinCategory_C::OnSkinItemClicked(class UW_SkinItem_C* SkinItemWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SkinCategory.W_SkinCategory_C.OnSkinItemClicked");
		
		UW_SkinCategory_C_OnSkinItemClicked_Params params {};
		params.SkinItemWidget = SkinItemWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.CreateSkinItemWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      SkinClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InRow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InColumn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_SkinCategory_C::CreateSkinItemWidget(class UClass* SkinClass, int32_t InRow, int32_t InColumn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SkinCategory.W_SkinCategory_C.CreateSkinItemWidget");
		
		UW_SkinCategory_C_CreateSkinItemWidget_Params params {};
		params.SkinClass = SkinClass;
		params.InRow = InRow;
		params.InColumn = InColumn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.ExpandChildren
	 * 		Flags  -> ()
	 */
	void UW_SkinCategory_C::ExpandChildren()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SkinCategory.W_SkinCategory_C.ExpandChildren");
		
		UW_SkinCategory_C_ExpandChildren_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.CollapseChildren
	 * 		Flags  -> ()
	 */
	void UW_SkinCategory_C::CollapseChildren()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SkinCategory.W_SkinCategory_C.CollapseChildren");
		
		UW_SkinCategory_C_CollapseChildren_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_SkinCategory_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SkinCategory.W_SkinCategory_C.PreConstruct");
		
		UW_SkinCategory_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_StandardButton_C*                         CallingButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_SkinCategory_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UW_StandardButton_C* CallingButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SkinCategory.W_SkinCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UW_SkinCategory_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		params.CallingButton = CallingButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_SkinCategory_C::BndEvt__Button_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SkinCategory.W_SkinCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature");
		
		UW_SkinCategory_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_SkinCategory_C::BndEvt__Button_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SkinCategory.W_SkinCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature");
		
		UW_SkinCategory_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_SkinCategory_C::BndEvt__Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SkinCategory.W_SkinCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature");
		
		UW_SkinCategory_C_BndEvt__Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_SkinCategory_C::BndEvt__Button_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SkinCategory.W_SkinCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature");
		
		UW_SkinCategory_C_BndEvt__Button_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.OnLoadoutLoaded
	 * 		Flags  -> ()
	 */
	void UW_SkinCategory_C::OnLoadoutLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SkinCategory.W_SkinCategory_C.OnLoadoutLoaded");
		
		UW_SkinCategory_C_OnLoadoutLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.OnSkinItemButtonHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_SkinItem_C*                               SkinItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_SkinCategory_C::OnSkinItemButtonHovered(class UW_SkinItem_C* SkinItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SkinCategory.W_SkinCategory_C.OnSkinItemButtonHovered");
		
		UW_SkinCategory_C_OnSkinItemButtonHovered_Params params {};
		params.SkinItem = SkinItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.OnGunCleaned
	 * 		Flags  -> ()
	 */
	void UW_SkinCategory_C::OnGunCleaned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SkinCategory.W_SkinCategory_C.OnGunCleaned");
		
		UW_SkinCategory_C_OnGunCleaned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.ExecuteUbergraph_W_SkinCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_SkinCategory_C::ExecuteUbergraph_W_SkinCategory(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SkinCategory.W_SkinCategory_C.ExecuteUbergraph_W_SkinCategory");
		
		UW_SkinCategory_C_ExecuteUbergraph_W_SkinCategory_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.OnButtonUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_SkinCategory_C*                           SkinCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_SkinCategory_C::OnButtonUnhovered__DelegateSignature(class UW_SkinCategory_C* SkinCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SkinCategory.W_SkinCategory_C.OnButtonUnhovered__DelegateSignature");
		
		UW_SkinCategory_C_OnButtonUnhovered__DelegateSignature_Params params {};
		params.SkinCategory = SkinCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.OnButtonHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_SkinCategory_C*                           SkinCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_SkinCategory_C::OnButtonHovered__DelegateSignature(class UW_SkinCategory_C* SkinCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SkinCategory.W_SkinCategory_C.OnButtonHovered__DelegateSignature");
		
		UW_SkinCategory_C_OnButtonHovered__DelegateSignature_Params params {};
		params.SkinCategory = SkinCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.OnSkinItemButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      SkinClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_SkinCategory_C::OnSkinItemButtonClicked__DelegateSignature(class UClass* SkinClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SkinCategory.W_SkinCategory_C.OnSkinItemButtonClicked__DelegateSignature");
		
		UW_SkinCategory_C_OnSkinItemButtonClicked__DelegateSignature_Params params {};
		params.SkinClass = SkinClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SkinCategory.W_SkinCategory_C.OnButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_SkinCategory_C*                           SkinCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_SkinCategory_C::OnButtonClicked__DelegateSignature(class UW_SkinCategory_C* SkinCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_SkinCategory.W_SkinCategory_C.OnButtonClicked__DelegateSignature");
		
		UW_SkinCategory_C_OnButtonClicked__DelegateSignature_Params params {};
		params.SkinCategory = SkinCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_SkinCategory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_SkinCategory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_SkinCategory.W_SkinCategory_C");
		return ptr;
	}

}


