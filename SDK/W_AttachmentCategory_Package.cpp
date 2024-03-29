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
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.DeselectAll
	 * 		Flags  -> ()
	 */
	void UW_AttachmentCategory_C::DeselectAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentCategory.W_AttachmentCategory_C.DeselectAll");
		
		UW_AttachmentCategory_C_DeselectAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.Transform Into Custom Button
	 * 		Flags  -> ()
	 */
	void UW_AttachmentCategory_C::Transform_Into_Custom_Button()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentCategory.W_AttachmentCategory_C.Transform Into Custom Button");
		
		UW_AttachmentCategory_C_Transform_Into_Custom_Button_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.OnKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UW_AttachmentCategory_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentCategory.W_AttachmentCategory_C.OnKeyUp");
		
		UW_AttachmentCategory_C_OnKeyUp_Params params {};
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
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.IsValidGridIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InColumn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_AttachmentCategory_C::IsValidGridIndex(int32_t InRow, int32_t InColumn, bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentCategory.W_AttachmentCategory_C.IsValidGridIndex");
		
		UW_AttachmentCategory_C_IsValidGridIndex_Params params {};
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
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.FindGridIndexFromAttachmentItemWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_AttachmentItem_C*                         InAttachmentItemWidget                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Out_Row                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Out_Column                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_AttachmentCategory_C::FindGridIndexFromAttachmentItemWidget(class UW_AttachmentItem_C* InAttachmentItemWidget, int32_t* Out_Row, int32_t* Out_Column)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentCategory.W_AttachmentCategory_C.FindGridIndexFromAttachmentItemWidget");
		
		UW_AttachmentCategory_C_FindGridIndexFromAttachmentItemWidget_Params params {};
		params.InAttachmentItemWidget = InAttachmentItemWidget;
		
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
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.FindAttachmentItemWidgetAt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InColumn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_AttachmentItem_C*                         Return_Value                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_AttachmentCategory_C::FindAttachmentItemWidgetAt(int32_t InRow, int32_t InColumn, class UW_AttachmentItem_C** Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentCategory.W_AttachmentCategory_C.FindAttachmentItemWidgetAt");
		
		UW_AttachmentCategory_C_FindAttachmentItemWidgetAt_Params params {};
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
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.OnMouseMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UW_AttachmentCategory_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentCategory.W_AttachmentCategory_C.OnMouseMove");
		
		UW_AttachmentCategory_C_OnMouseMove_Params params {};
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
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.Get_SelectedItemInfo_Container_Visibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_AttachmentCategory_C::Get_SelectedItemInfo_Container_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentCategory.W_AttachmentCategory_C.Get_SelectedItemInfo_Container_Visibility");
		
		UW_AttachmentCategory_C_Get_SelectedItemInfo_Container_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.UnselectAttachmentItem
	 * 		Flags  -> ()
	 */
	void UW_AttachmentCategory_C::UnselectAttachmentItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentCategory.W_AttachmentCategory_C.UnselectAttachmentItem");
		
		UW_AttachmentCategory_C_UnselectAttachmentItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.SelectAttachmentItem
	 * 		Flags  -> ()
	 */
	void UW_AttachmentCategory_C::SelectAttachmentItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentCategory.W_AttachmentCategory_C.SelectAttachmentItem");
		
		UW_AttachmentCategory_C_SelectAttachmentItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.UnhoverAttachmentItem
	 * 		Flags  -> ()
	 */
	void UW_AttachmentCategory_C::UnhoverAttachmentItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentCategory.W_AttachmentCategory_C.UnhoverAttachmentItem");
		
		UW_AttachmentCategory_C_UnhoverAttachmentItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.HoverAttachmentItem
	 * 		Flags  -> ()
	 */
	void UW_AttachmentCategory_C::HoverAttachmentItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentCategory.W_AttachmentCategory_C.HoverAttachmentItem");
		
		UW_AttachmentCategory_C_HoverAttachmentItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.PreviousColumn
	 * 		Flags  -> ()
	 */
	void UW_AttachmentCategory_C::PreviousColumn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentCategory.W_AttachmentCategory_C.PreviousColumn");
		
		UW_AttachmentCategory_C_PreviousColumn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.NextColumn
	 * 		Flags  -> ()
	 */
	void UW_AttachmentCategory_C::NextColumn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentCategory.W_AttachmentCategory_C.NextColumn");
		
		UW_AttachmentCategory_C_NextColumn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.PreviousRow
	 * 		Flags  -> ()
	 */
	void UW_AttachmentCategory_C::PreviousRow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentCategory.W_AttachmentCategory_C.PreviousRow");
		
		UW_AttachmentCategory_C_PreviousRow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.NextRow
	 * 		Flags  -> ()
	 */
	void UW_AttachmentCategory_C::NextRow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentCategory.W_AttachmentCategory_C.NextRow");
		
		UW_AttachmentCategory_C_NextRow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.SimulateClick
	 * 		Flags  -> ()
	 */
	void UW_AttachmentCategory_C::SimulateClick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentCategory.W_AttachmentCategory_C.SimulateClick");
		
		UW_AttachmentCategory_C_SimulateClick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UW_AttachmentCategory_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentCategory.W_AttachmentCategory_C.OnKeyDown");
		
		UW_AttachmentCategory_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.SimulateUnhover
	 * 		Flags  -> ()
	 */
	void UW_AttachmentCategory_C::SimulateUnhover()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentCategory.W_AttachmentCategory_C.SimulateUnhover");
		
		UW_AttachmentCategory_C_SimulateUnhover_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.SimulateHover
	 * 		Flags  -> ()
	 */
	void UW_AttachmentCategory_C::SimulateHover()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentCategory.W_AttachmentCategory_C.SimulateHover");
		
		UW_AttachmentCategory_C_SimulateHover_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.UpdateSelectedItemName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InItemName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_AttachmentCategory_C::UpdateSelectedItemName(const class FText& InItemName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentCategory.W_AttachmentCategory_C.UpdateSelectedItemName");
		
		UW_AttachmentCategory_C_UpdateSelectedItemName_Params params {};
		params.InItemName = InItemName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.RemoveAllAttachmentItemWidgets
	 * 		Flags  -> ()
	 */
	void UW_AttachmentCategory_C::RemoveAllAttachmentItemWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentCategory.W_AttachmentCategory_C.RemoveAllAttachmentItemWidgets");
		
		UW_AttachmentCategory_C_RemoveAllAttachmentItemWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.DeselectAllChildrenExcept
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_AttachmentItem_C*                         InAttachmentItemWidget                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_AttachmentCategory_C::DeselectAllChildrenExcept(class UW_AttachmentItem_C* InAttachmentItemWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentCategory.W_AttachmentCategory_C.DeselectAllChildrenExcept");
		
		UW_AttachmentCategory_C_DeselectAllChildrenExcept_Params params {};
		params.InAttachmentItemWidget = InAttachmentItemWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.CollapseAllChildrenExcept
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_AttachmentCategory_C*                     InAttachmentCategoryWidget                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_AttachmentCategory_C::CollapseAllChildrenExcept(class UW_AttachmentCategory_C* InAttachmentCategoryWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentCategory.W_AttachmentCategory_C.CollapseAllChildrenExcept");
		
		UW_AttachmentCategory_C_CollapseAllChildrenExcept_Params params {};
		params.InAttachmentCategoryWidget = InAttachmentCategoryWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.OnAttachmentItemClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_AttachmentItem_C*                         AttachmentItemWidget                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_AttachmentCategory_C::OnAttachmentItemClicked(class UW_AttachmentItem_C* AttachmentItemWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentCategory.W_AttachmentCategory_C.OnAttachmentItemClicked");
		
		UW_AttachmentCategory_C_OnAttachmentItemClicked_Params params {};
		params.AttachmentItemWidget = AttachmentItemWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.CreateAttachmentItemWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      AttachmentItemClass                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InRow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InColumn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_AttachmentCategory_C::CreateAttachmentItemWidget(class UClass* AttachmentItemClass, int32_t InRow, int32_t InColumn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentCategory.W_AttachmentCategory_C.CreateAttachmentItemWidget");
		
		UW_AttachmentCategory_C_CreateAttachmentItemWidget_Params params {};
		params.AttachmentItemClass = AttachmentItemClass;
		params.InRow = InRow;
		params.InColumn = InColumn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.ExpandChildren
	 * 		Flags  -> ()
	 */
	void UW_AttachmentCategory_C::ExpandChildren()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentCategory.W_AttachmentCategory_C.ExpandChildren");
		
		UW_AttachmentCategory_C_ExpandChildren_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.CollapseChildren
	 * 		Flags  -> ()
	 */
	void UW_AttachmentCategory_C::CollapseChildren()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentCategory.W_AttachmentCategory_C.CollapseChildren");
		
		UW_AttachmentCategory_C_CollapseChildren_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_AttachmentCategory_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentCategory.W_AttachmentCategory_C.PreConstruct");
		
		UW_AttachmentCategory_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_StandardButton_C*                         CallingButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_AttachmentCategory_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UW_StandardButton_C* CallingButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentCategory.W_AttachmentCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UW_AttachmentCategory_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		params.CallingButton = CallingButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_AttachmentCategory_C::BndEvt__Button_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentCategory.W_AttachmentCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature");
		
		UW_AttachmentCategory_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_AttachmentCategory_C::BndEvt__Button_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentCategory.W_AttachmentCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature");
		
		UW_AttachmentCategory_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_AttachmentCategory_C::BndEvt__Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentCategory.W_AttachmentCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature");
		
		UW_AttachmentCategory_C_BndEvt__Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_AttachmentCategory_C::BndEvt__Button_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentCategory.W_AttachmentCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature");
		
		UW_AttachmentCategory_C_BndEvt__Button_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.OnLoadoutLoaded
	 * 		Flags  -> ()
	 */
	void UW_AttachmentCategory_C::OnLoadoutLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentCategory.W_AttachmentCategory_C.OnLoadoutLoaded");
		
		UW_AttachmentCategory_C_OnLoadoutLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.OnAttachmentItemButtonHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_AttachmentItem_C*                         AttachmentItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_AttachmentCategory_C::OnAttachmentItemButtonHovered(class UW_AttachmentItem_C* AttachmentItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentCategory.W_AttachmentCategory_C.OnAttachmentItemButtonHovered");
		
		UW_AttachmentCategory_C_OnAttachmentItemButtonHovered_Params params {};
		params.AttachmentItem = AttachmentItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.OnGunCleaned
	 * 		Flags  -> ()
	 */
	void UW_AttachmentCategory_C::OnGunCleaned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentCategory.W_AttachmentCategory_C.OnGunCleaned");
		
		UW_AttachmentCategory_C_OnGunCleaned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.ExecuteUbergraph_W_AttachmentCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_AttachmentCategory_C::ExecuteUbergraph_W_AttachmentCategory(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentCategory.W_AttachmentCategory_C.ExecuteUbergraph_W_AttachmentCategory");
		
		UW_AttachmentCategory_C_ExecuteUbergraph_W_AttachmentCategory_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.OnButtonUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_AttachmentCategory_C*                     AttachmentCategory                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_AttachmentCategory_C::OnButtonUnhovered__DelegateSignature(class UW_AttachmentCategory_C* AttachmentCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentCategory.W_AttachmentCategory_C.OnButtonUnhovered__DelegateSignature");
		
		UW_AttachmentCategory_C_OnButtonUnhovered__DelegateSignature_Params params {};
		params.AttachmentCategory = AttachmentCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.OnButtonHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_AttachmentCategory_C*                     AttachmentCategory                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_AttachmentCategory_C::OnButtonHovered__DelegateSignature(class UW_AttachmentCategory_C* AttachmentCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentCategory.W_AttachmentCategory_C.OnButtonHovered__DelegateSignature");
		
		UW_AttachmentCategory_C_OnButtonHovered__DelegateSignature_Params params {};
		params.AttachmentCategory = AttachmentCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.OnAttachmentItemButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      AttachmentClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_AttachmentCategory_C::OnAttachmentItemButtonClicked__DelegateSignature(class UClass* AttachmentClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentCategory.W_AttachmentCategory_C.OnAttachmentItemButtonClicked__DelegateSignature");
		
		UW_AttachmentCategory_C_OnAttachmentItemButtonClicked__DelegateSignature_Params params {};
		params.AttachmentClass = AttachmentClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_AttachmentCategory.W_AttachmentCategory_C.OnButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_AttachmentCategory_C*                     AttachmentCategory                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_AttachmentCategory_C::OnButtonClicked__DelegateSignature(class UW_AttachmentCategory_C* AttachmentCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_AttachmentCategory.W_AttachmentCategory_C.OnButtonClicked__DelegateSignature");
		
		UW_AttachmentCategory_C_OnButtonClicked__DelegateSignature_Params params {};
		params.AttachmentCategory = AttachmentCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_AttachmentCategory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_AttachmentCategory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_AttachmentCategory.W_AttachmentCategory_C");
		return ptr;
	}

}


