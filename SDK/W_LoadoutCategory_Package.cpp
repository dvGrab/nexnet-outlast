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
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.Can Interact Pre Mission Planning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanInteract                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_LoadoutCategory_C::Can_Interact_Pre_Mission_Planning(bool* CanInteract)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.Can Interact Pre Mission Planning");
		
		UW_LoadoutCategory_C_Can_Interact_Pre_Mission_Planning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanInteract != nullptr)
			*CanInteract = params.CanInteract;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.GetCurrentMenuDirectory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Return_Value                                               (Parm, OutParm)
	 */
	void UW_LoadoutCategory_C::GetCurrentMenuDirectory(class FText* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.GetCurrentMenuDirectory");
		
		UW_LoadoutCategory_C_GetCurrentMenuDirectory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.GetAllUncollapsedLoadoutWidgets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UBaseWidget*>                         Return_Value                                               (Parm, OutParm, ContainsInstancedReference)
	 */
	void UW_LoadoutCategory_C::GetAllUncollapsedLoadoutWidgets(TArray<class UBaseWidget*>* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.GetAllUncollapsedLoadoutWidgets");
		
		UW_LoadoutCategory_C_GetAllUncollapsedLoadoutWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.CreateLoadoutItemWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        LoadoutItemName                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		EItemClass                                         ItemClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      ItemObjectClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsTactical                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            TacticalSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsMultipleTacticalSlots                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            MaxTacticalSlots                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StartingTacticalSlot                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutCategory_C::CreateLoadoutItemWidget(const class FText& LoadoutItemName, EItemClass ItemClass, class UClass* ItemObjectClass, bool bIsTactical, int32_t TacticalSlot, bool bIsMultipleTacticalSlots, int32_t MaxTacticalSlots, int32_t StartingTacticalSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.CreateLoadoutItemWidget");
		
		UW_LoadoutCategory_C_CreateLoadoutItemWidget_Params params {};
		params.LoadoutItemName = LoadoutItemName;
		params.ItemClass = ItemClass;
		params.ItemObjectClass = ItemObjectClass;
		params.bIsTactical = bIsTactical;
		params.TacticalSlot = TacticalSlot;
		params.bIsMultipleTacticalSlots = bIsMultipleTacticalSlots;
		params.MaxTacticalSlots = MaxTacticalSlots;
		params.StartingTacticalSlot = StartingTacticalSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.ExitPresetsMenu
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCategory_C::ExitPresetsMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.ExitPresetsMenu");
		
		UW_LoadoutCategory_C_ExitPresetsMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.EnterPresetsMenu
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCategory_C::EnterPresetsMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.EnterPresetsMenu");
		
		UW_LoadoutCategory_C_EnterPresetsMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.Escape
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCategory_C::Escape()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.Escape");
		
		UW_LoadoutCategory_C_Escape_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.UnselectLoadoutPreset
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCategory_C::UnselectLoadoutPreset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.UnselectLoadoutPreset");
		
		UW_LoadoutCategory_C_UnselectLoadoutPreset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.SelectLoadoutPreset
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCategory_C::SelectLoadoutPreset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.SelectLoadoutPreset");
		
		UW_LoadoutCategory_C_SelectLoadoutPreset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.UnhoverLoadoutPreset
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCategory_C::UnhoverLoadoutPreset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.UnhoverLoadoutPreset");
		
		UW_LoadoutCategory_C_UnhoverLoadoutPreset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.HoverLoadoutPreset
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCategory_C::HoverLoadoutPreset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.HoverLoadoutPreset");
		
		UW_LoadoutCategory_C_HoverLoadoutPreset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.OnKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UW_LoadoutCategory_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.OnKeyUp");
		
		UW_LoadoutCategory_C_OnKeyUp_Params params {};
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
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.CanExit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_LoadoutCategory_C::CanExit(bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.CanExit");
		
		UW_LoadoutCategory_C_CanExit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.OnMouseMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UW_LoadoutCategory_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.OnMouseMove");
		
		UW_LoadoutCategory_C_OnMouseMove_Params params {};
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
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.Get_SelectedItemInfo_Container_Visibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_LoadoutCategory_C::Get_SelectedItemInfo_Container_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.Get_SelectedItemInfo_Container_Visibility");
		
		UW_LoadoutCategory_C_Get_SelectedItemInfo_Container_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.UnselectLoadoutClass
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCategory_C::UnselectLoadoutClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.UnselectLoadoutClass");
		
		UW_LoadoutCategory_C_UnselectLoadoutClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.SelectLoadoutClass
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCategory_C::SelectLoadoutClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.SelectLoadoutClass");
		
		UW_LoadoutCategory_C_SelectLoadoutClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.UnhoverLoadoutClass
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCategory_C::UnhoverLoadoutClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.UnhoverLoadoutClass");
		
		UW_LoadoutCategory_C_UnhoverLoadoutClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.HoverLoadoutClass
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCategory_C::HoverLoadoutClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.HoverLoadoutClass");
		
		UW_LoadoutCategory_C_HoverLoadoutClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.UnselectUIElement
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCategory_C::UnselectUIElement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.UnselectUIElement");
		
		UW_LoadoutCategory_C_UnselectUIElement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.SelectUIElement
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCategory_C::SelectUIElement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.SelectUIElement");
		
		UW_LoadoutCategory_C_SelectUIElement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.UnhoverUIElement
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCategory_C::UnhoverUIElement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.UnhoverUIElement");
		
		UW_LoadoutCategory_C_UnhoverUIElement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.HoverUIElement
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCategory_C::HoverUIElement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.HoverUIElement");
		
		UW_LoadoutCategory_C_HoverUIElement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.PreviousColumn
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCategory_C::PreviousColumn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.PreviousColumn");
		
		UW_LoadoutCategory_C_PreviousColumn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.NextColumn
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCategory_C::NextColumn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.NextColumn");
		
		UW_LoadoutCategory_C_NextColumn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.PreviousRow
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCategory_C::PreviousRow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.PreviousRow");
		
		UW_LoadoutCategory_C_PreviousRow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.NextRow
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCategory_C::NextRow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.NextRow");
		
		UW_LoadoutCategory_C_NextRow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UW_LoadoutCategory_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.OnKeyDown");
		
		UW_LoadoutCategory_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.OnLoadoutItemClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutItem_C*                            LoadoutItemWidget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutCategory_C::OnLoadoutItemClicked(class UW_LoadoutItem_C* LoadoutItemWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.OnLoadoutItemClicked");
		
		UW_LoadoutCategory_C_OnLoadoutItemClicked_Params params {};
		params.LoadoutItemWidget = LoadoutItemWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.OnLoadoutClassClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutClass_C*                           LoadoutClassWidget                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutCategory_C::OnLoadoutClassClicked(class UW_LoadoutClass_C* LoadoutClassWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.OnLoadoutClassClicked");
		
		UW_LoadoutCategory_C_OnLoadoutClassClicked_Params params {};
		params.LoadoutClassWidget = LoadoutClassWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.SimulateUnhover
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCategory_C::SimulateUnhover()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.SimulateUnhover");
		
		UW_LoadoutCategory_C_SimulateUnhover_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.SimulateHover
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCategory_C::SimulateHover()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.SimulateHover");
		
		UW_LoadoutCategory_C_SimulateHover_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.SimulateClick
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCategory_C::SimulateClick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.SimulateClick");
		
		UW_LoadoutCategory_C_SimulateClick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.UpdateSelectedItemName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InItemName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_LoadoutCategory_C::UpdateSelectedItemName(const class FText& InItemName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.UpdateSelectedItemName");
		
		UW_LoadoutCategory_C_UpdateSelectedItemName_Params params {};
		params.InItemName = InItemName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.RemoveAllLoadoutClassWidgets
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCategory_C::RemoveAllLoadoutClassWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.RemoveAllLoadoutClassWidgets");
		
		UW_LoadoutCategory_C_RemoveAllLoadoutClassWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.DeselectAllChildrenExcept
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutItem_C*                            InLoadoutItemWidget                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutCategory_C::DeselectAllChildrenExcept(class UW_LoadoutItem_C* InLoadoutItemWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.DeselectAllChildrenExcept");
		
		UW_LoadoutCategory_C_DeselectAllChildrenExcept_Params params {};
		params.InLoadoutItemWidget = InLoadoutItemWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.CollapseAllChildrenExcept
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutClass_C*                           InLoadoutClassWidget                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutCategory_C::CollapseAllChildrenExcept(class UW_LoadoutClass_C* InLoadoutClassWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.CollapseAllChildrenExcept");
		
		UW_LoadoutCategory_C_CollapseAllChildrenExcept_Params params {};
		params.InLoadoutClassWidget = InLoadoutClassWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.CreateLoadoutItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLoadoutCategory                            InLoadoutCategory                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UW_LoadoutCategory_C::CreateLoadoutItem(const struct FLoadoutCategory& InLoadoutCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.CreateLoadoutItem");
		
		UW_LoadoutCategory_C_CreateLoadoutItem_Params params {};
		params.InLoadoutCategory = InLoadoutCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.ExpandChildren
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCategory_C::ExpandChildren()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.ExpandChildren");
		
		UW_LoadoutCategory_C_ExpandChildren_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.CollapseChildren
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bResetPreviewAnim                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_LoadoutCategory_C::CollapseChildren(bool bResetPreviewAnim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.CollapseChildren");
		
		UW_LoadoutCategory_C_CollapseChildren_Params params {};
		params.bResetPreviewAnim = bResetPreviewAnim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_LoadoutCategory_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.PreConstruct");
		
		UW_LoadoutCategory_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_StandardButton_C*                         CallingButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutCategory_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UW_StandardButton_C* CallingButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UW_LoadoutCategory_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		params.CallingButton = CallingButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCategory_C::BndEvt__Button_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature");
		
		UW_LoadoutCategory_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCategory_C::BndEvt__Button_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature");
		
		UW_LoadoutCategory_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.OnLoadoutLoaded
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCategory_C::OnLoadoutLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.OnLoadoutLoaded");
		
		UW_LoadoutCategory_C_OnLoadoutLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCategory_C::BndEvt__Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature");
		
		UW_LoadoutCategory_C_BndEvt__Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.OnLoadoutClassButtonHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutClass_C*                           LoadoutClass                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutCategory_C::OnLoadoutClassButtonHovered(class UW_LoadoutClass_C* LoadoutClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.OnLoadoutClassButtonHovered");
		
		UW_LoadoutCategory_C_OnLoadoutClassButtonHovered_Params params {};
		params.LoadoutClass = LoadoutClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.OnLoadoutItemButtonHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutItem_C*                            LoadoutItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutCategory_C::OnLoadoutItemButtonHovered(class UW_LoadoutItem_C* LoadoutItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.OnLoadoutItemButtonHovered");
		
		UW_LoadoutCategory_C_OnLoadoutItemButtonHovered_Params params {};
		params.LoadoutItem = LoadoutItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCategory_C::BndEvt__Button_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature");
		
		UW_LoadoutCategory_C_BndEvt__Button_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.OnLoadoutItemButtonUnhovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutItem_C*                            LoadoutItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutCategory_C::OnLoadoutItemButtonUnhovered(class UW_LoadoutItem_C* LoadoutItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.OnLoadoutItemButtonUnhovered");
		
		UW_LoadoutCategory_C_OnLoadoutItemButtonUnhovered_Params params {};
		params.LoadoutItem = LoadoutItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutCategory_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.Tick");
		
		UW_LoadoutCategory_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.ExecuteUbergraph_W_LoadoutCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutCategory_C::ExecuteUbergraph_W_LoadoutCategory(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.ExecuteUbergraph_W_LoadoutCategory");
		
		UW_LoadoutCategory_C_ExecuteUbergraph_W_LoadoutCategory_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.OnButtonUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutCategory_C*                        LoadoutCategory                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutCategory_C::OnButtonUnhovered__DelegateSignature(class UW_LoadoutCategory_C* LoadoutCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.OnButtonUnhovered__DelegateSignature");
		
		UW_LoadoutCategory_C_OnButtonUnhovered__DelegateSignature_Params params {};
		params.LoadoutCategory = LoadoutCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.OnButtonHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutCategory_C*                        LoadoutCategory                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutCategory_C::OnButtonHovered__DelegateSignature(class UW_LoadoutCategory_C* LoadoutCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.OnButtonHovered__DelegateSignature");
		
		UW_LoadoutCategory_C_OnButtonHovered__DelegateSignature_Params params {};
		params.LoadoutCategory = LoadoutCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.OnLoadoutItemButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemClass                                         ItemClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      ItemObjectClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsTactical                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            TacticalSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsMultipleTacticalSlots                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            MaxTacticalSlots                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Starting_Tactical_Slot                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_LoadoutItem_C*                            Loadout_Item_Widget                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutCategory_C::OnLoadoutItemButtonClicked__DelegateSignature(EItemClass ItemClass, class UClass* ItemObjectClass, bool bIsTactical, int32_t TacticalSlot, bool bIsMultipleTacticalSlots, int32_t MaxTacticalSlots, int32_t Starting_Tactical_Slot, class UW_LoadoutItem_C* Loadout_Item_Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.OnLoadoutItemButtonClicked__DelegateSignature");
		
		UW_LoadoutCategory_C_OnLoadoutItemButtonClicked__DelegateSignature_Params params {};
		params.ItemClass = ItemClass;
		params.ItemObjectClass = ItemObjectClass;
		params.bIsTactical = bIsTactical;
		params.TacticalSlot = TacticalSlot;
		params.bIsMultipleTacticalSlots = bIsMultipleTacticalSlots;
		params.MaxTacticalSlots = MaxTacticalSlots;
		params.Starting_Tactical_Slot = Starting_Tactical_Slot;
		params.Loadout_Item_Widget = Loadout_Item_Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCategory.W_LoadoutCategory_C.OnButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutCategory_C*                        LoadoutCategory                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutCategory_C::OnButtonClicked__DelegateSignature(class UW_LoadoutCategory_C* LoadoutCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCategory.W_LoadoutCategory_C.OnButtonClicked__DelegateSignature");
		
		UW_LoadoutCategory_C_OnButtonClicked__DelegateSignature_Params params {};
		params.LoadoutCategory = LoadoutCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_LoadoutCategory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_LoadoutCategory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_LoadoutCategory.W_LoadoutCategory_C");
		return ptr;
	}

}


