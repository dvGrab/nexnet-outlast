/**
 * Name: TRIALS
 * Version: FINAL
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
	 * 		Name   -> Function CategoryButtonWidget.CategoryButtonWidget_C.SetHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInHovered                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCategoryButtonWidget_C::SetHovered(bool bInHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryButtonWidget.CategoryButtonWidget_C.SetHovered");
		
		UCategoryButtonWidget_C_SetHovered_Params params {};
		params.bInHovered = bInHovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryButtonWidget.CategoryButtonWidget_C.SetIsNew
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsNew                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InHasNewItemsInSubCategory                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCategoryButtonWidget_C::SetIsNew(bool InIsNew, bool InHasNewItemsInSubCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryButtonWidget.CategoryButtonWidget_C.SetIsNew");
		
		UCategoryButtonWidget_C_SetIsNew_Params params {};
		params.InIsNew = InIsNew;
		params.InHasNewItemsInSubCategory = InHasNewItemsInSubCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryButtonWidget.CategoryButtonWidget_C.SetIsEquipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               inIsEquipped                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCategoryButtonWidget_C::SetIsEquipped(bool inIsEquipped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryButtonWidget.CategoryButtonWidget_C.SetIsEquipped");
		
		UCategoryButtonWidget_C_SetIsEquipped_Params params {};
		params.inIsEquipped = inIsEquipped;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryButtonWidget.CategoryButtonWidget_C.Set Upgrade Item State
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMenuUpgradeItemState                              upgradeItemState                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCategoryButtonWidget_C::Set_Upgrade_Item_State(EMenuUpgradeItemState upgradeItemState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryButtonWidget.CategoryButtonWidget_C.Set Upgrade Item State");
		
		UCategoryButtonWidget_C_Set_Upgrade_Item_State_Params params {};
		params.upgradeItemState = upgradeItemState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryButtonWidget.CategoryButtonWidget_C.SetBaseColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateColor                                 Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCategoryButtonWidget_C::SetBaseColor(const struct FSlateColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryButtonWidget.CategoryButtonWidget_C.SetBaseColor");
		
		UCategoryButtonWidget_C_SetBaseColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryButtonWidget.CategoryButtonWidget_C.SetCanShowIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanShowIcon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCategoryButtonWidget_C::SetCanShowIcon(bool CanShowIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryButtonWidget.CategoryButtonWidget_C.SetCanShowIcon");
		
		UCategoryButtonWidget_C_SetCanShowIcon_Params params {};
		params.CanShowIcon = CanShowIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryButtonWidget.CategoryButtonWidget_C.Set Icon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               matchSize                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCategoryButtonWidget_C::Set_Icon(class UTexture2D* Icon, bool matchSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryButtonWidget.CategoryButtonWidget_C.Set Icon");
		
		UCategoryButtonWidget_C_Set_Icon_Params params {};
		params.Icon = Icon;
		params.matchSize = matchSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryButtonWidget.CategoryButtonWidget_C.SetState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECategoryButtonState                               State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCategoryButtonWidget_C::SetState(ECategoryButtonState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryButtonWidget.CategoryButtonWidget_C.SetState");
		
		UCategoryButtonWidget_C_SetState_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryButtonWidget.CategoryButtonWidget_C.SetSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCategoryButtonWidget_C::SetSelected(bool IsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryButtonWidget.CategoryButtonWidget_C.SetSelected");
		
		UCategoryButtonWidget_C_SetSelected_Params params {};
		params.IsSelected = IsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryButtonWidget.CategoryButtonWidget_C.BndEvt__Button_596_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCategoryButtonWidget_C::BndEvt__Button_596_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryButtonWidget.CategoryButtonWidget_C.BndEvt__Button_596_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UCategoryButtonWidget_C_BndEvt__Button_596_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryButtonWidget.CategoryButtonWidget_C.BndEvt__Button_596_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCategoryButtonWidget_C::BndEvt__Button_596_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryButtonWidget.CategoryButtonWidget_C.BndEvt__Button_596_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UCategoryButtonWidget_C_BndEvt__Button_596_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryButtonWidget.CategoryButtonWidget_C.BndEvt__Button_596_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCategoryButtonWidget_C::BndEvt__Button_596_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryButtonWidget.CategoryButtonWidget_C.BndEvt__Button_596_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UCategoryButtonWidget_C_BndEvt__Button_596_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryButtonWidget.CategoryButtonWidget_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCategoryButtonWidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryButtonWidget.CategoryButtonWidget_C.PreConstruct");
		
		UCategoryButtonWidget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryButtonWidget.CategoryButtonWidget_C.BndEvt__Button_596_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCategoryButtonWidget_C::BndEvt__Button_596_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryButtonWidget.CategoryButtonWidget_C.BndEvt__Button_596_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");
		
		UCategoryButtonWidget_C_BndEvt__Button_596_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryButtonWidget.CategoryButtonWidget_C.BndEvt__Button_596_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCategoryButtonWidget_C::BndEvt__Button_596_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryButtonWidget.CategoryButtonWidget_C.BndEvt__Button_596_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature");
		
		UCategoryButtonWidget_C_BndEvt__Button_596_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryButtonWidget.CategoryButtonWidget_C.ExecuteUbergraph_CategoryButtonWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCategoryButtonWidget_C::ExecuteUbergraph_CategoryButtonWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryButtonWidget.CategoryButtonWidget_C.ExecuteUbergraph_CategoryButtonWidget");
		
		UCategoryButtonWidget_C_ExecuteUbergraph_CategoryButtonWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryButtonWidget.CategoryButtonWidget_C.Event_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCategoryButtonWidget_C::Event_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryButtonWidget.CategoryButtonWidget_C.Event_OnReleased__DelegateSignature");
		
		UCategoryButtonWidget_C_Event_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryButtonWidget.CategoryButtonWidget_C.Event_OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCategoryButtonWidget_C::Event_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryButtonWidget.CategoryButtonWidget_C.Event_OnPressed__DelegateSignature");
		
		UCategoryButtonWidget_C_Event_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryButtonWidget.CategoryButtonWidget_C.Event_OnUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCategoryButtonWidget_C::Event_OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryButtonWidget.CategoryButtonWidget_C.Event_OnUnhovered__DelegateSignature");
		
		UCategoryButtonWidget_C_Event_OnUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryButtonWidget.CategoryButtonWidget_C.Event_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCategoryButtonWidget_C::Event_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryButtonWidget.CategoryButtonWidget_C.Event_OnHovered__DelegateSignature");
		
		UCategoryButtonWidget_C_Event_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryButtonWidget.CategoryButtonWidget_C.Event_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCategoryButtonWidget_C::Event_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryButtonWidget.CategoryButtonWidget_C.Event_OnClicked__DelegateSignature");
		
		UCategoryButtonWidget_C_Event_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCategoryButtonWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCategoryButtonWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CategoryButtonWidget.CategoryButtonWidget_C");
		return ptr;
	}

}


