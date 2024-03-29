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
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.Get_Quatermaster_Box_IsEnabled
	 * 		Flags  -> ()
	 */
	bool UW_LoadoutCustomizationMenu_C::Get_Quatermaster_Box_IsEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.Get_Quatermaster_Box_IsEnabled");
		
		UW_LoadoutCustomizationMenu_C_Get_Quatermaster_Box_IsEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.FindIconFromItemClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ItemClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutCustomizationMenu_C::FindIconFromItemClass(class UClass* ItemClass, class UTexture2D** Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.FindIconFromItemClass");
		
		UW_LoadoutCustomizationMenu_C_FindIconFromItemClass_Params params {};
		params.ItemClass = ItemClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.StopItemInfoCardAnimation
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCustomizationMenu_C::StopItemInfoCardAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.StopItemInfoCardAnimation");
		
		UW_LoadoutCustomizationMenu_C_StopItemInfoCardAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.FadeOutItemInfoCard
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCustomizationMenu_C::FadeOutItemInfoCard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.FadeOutItemInfoCard");
		
		UW_LoadoutCustomizationMenu_C_FadeOutItemInfoCard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.FadeInItemInfoCard
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCustomizationMenu_C::FadeInItemInfoCard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.FadeInItemInfoCard");
		
		UW_LoadoutCustomizationMenu_C_FadeInItemInfoCard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.Get_CurrentMenuDirectory_Text
	 * 		Flags  -> ()
	 */
	class FText UW_LoadoutCustomizationMenu_C::Get_CurrentMenuDirectory_Text()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.Get_CurrentMenuDirectory_Text");
		
		UW_LoadoutCustomizationMenu_C_Get_CurrentMenuDirectory_Text_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.CanRenamePreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_LoadoutCustomizationMenu_C::CanRenamePreset(bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.CanRenamePreset");
		
		UW_LoadoutCustomizationMenu_C_CanRenamePreset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.Escape
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCustomizationMenu_C::Escape()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.Escape");
		
		UW_LoadoutCustomizationMenu_C_Escape_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.UnselectLoadoutPreset
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCustomizationMenu_C::UnselectLoadoutPreset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.UnselectLoadoutPreset");
		
		UW_LoadoutCustomizationMenu_C_UnselectLoadoutPreset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.SelectLoadoutPreset
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCustomizationMenu_C::SelectLoadoutPreset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.SelectLoadoutPreset");
		
		UW_LoadoutCustomizationMenu_C_SelectLoadoutPreset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.UnhoverLoadoutPreset
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCustomizationMenu_C::UnhoverLoadoutPreset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.UnhoverLoadoutPreset");
		
		UW_LoadoutCustomizationMenu_C_UnhoverLoadoutPreset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.HoverLoadoutPreset
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCustomizationMenu_C::HoverLoadoutPreset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.HoverLoadoutPreset");
		
		UW_LoadoutCustomizationMenu_C_HoverLoadoutPreset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnLoadoutItemPresetButtonClicked (Internal)
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutItem_Preset_C*                     Loadout_Item_Preset                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutCustomizationMenu_C::OnLoadoutItemPresetButtonClicked_Internal(class UW_LoadoutItem_Preset_C* Loadout_Item_Preset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnLoadoutItemPresetButtonClicked (Internal)");
		
		UW_LoadoutCustomizationMenu_C_OnLoadoutItemPresetButtonClicked_Internal_Params params {};
		params.Loadout_Item_Preset = Loadout_Item_Preset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UW_LoadoutCustomizationMenu_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnKeyUp");
		
		UW_LoadoutCustomizationMenu_C_OnKeyUp_Params params {};
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
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UW_LoadoutCustomizationMenu_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnKeyDown");
		
		UW_LoadoutCustomizationMenu_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.GetCurrentlyFocusedWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Return_Value                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutCustomizationMenu_C::GetCurrentlyFocusedWidget(class UWidget** Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.GetCurrentlyFocusedWidget");
		
		UW_LoadoutCustomizationMenu_C_GetCurrentlyFocusedWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.Get_Quatermaster_Box_Visibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_LoadoutCustomizationMenu_C::Get_Quatermaster_Box_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.Get_Quatermaster_Box_Visibility");
		
		UW_LoadoutCustomizationMenu_C_Get_Quatermaster_Box_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.AnyLoadoutCategoryWidgetHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_LoadoutCustomizationMenu_C::AnyLoadoutCategoryWidgetHovered(bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.AnyLoadoutCategoryWidgetHovered");
		
		UW_LoadoutCustomizationMenu_C_AnyLoadoutCategoryWidgetHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.CanUnselect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_LoadoutCustomizationMenu_C::CanUnselect(bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.CanUnselect");
		
		UW_LoadoutCustomizationMenu_C_CanUnselect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.ApplyPresetToPreviewCharacterWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ItemClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_LoadoutItem_Preset_C*                     Loadout_Item_Preset                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bDeselectAll                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_LoadoutCustomizationMenu_C::ApplyPresetToPreviewCharacterWeapon(class UClass* ItemClass, class UW_LoadoutItem_Preset_C* Loadout_Item_Preset, bool bDeselectAll)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.ApplyPresetToPreviewCharacterWeapon");
		
		UW_LoadoutCustomizationMenu_C_ApplyPresetToPreviewCharacterWeapon_Params params {};
		params.ItemClass = ItemClass;
		params.Loadout_Item_Preset = Loadout_Item_Preset;
		params.bDeselectAll = bDeselectAll;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.UpdateFireModeOptions
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCustomizationMenu_C::UpdateFireModeOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.UpdateFireModeOptions");
		
		UW_LoadoutCustomizationMenu_C_UpdateFireModeOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.RenamePreset
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCustomizationMenu_C::RenamePreset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.RenamePreset");
		
		UW_LoadoutCustomizationMenu_C_RenamePreset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.UnhoverAll
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCustomizationMenu_C::UnhoverAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.UnhoverAll");
		
		UW_LoadoutCustomizationMenu_C_UnhoverAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.Get_LoadoutItemInfo_Container_Visibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_LoadoutCustomizationMenu_C::Get_LoadoutItemInfo_Container_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.Get_LoadoutItemInfo_Container_Visibility");
		
		UW_LoadoutCustomizationMenu_C_Get_LoadoutItemInfo_Container_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.UnhoverLoadoutCategory
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCustomizationMenu_C::UnhoverLoadoutCategory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.UnhoverLoadoutCategory");
		
		UW_LoadoutCustomizationMenu_C_UnhoverLoadoutCategory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.HoverLoadoutCategory
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCustomizationMenu_C::HoverLoadoutCategory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.HoverLoadoutCategory");
		
		UW_LoadoutCustomizationMenu_C_HoverLoadoutCategory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.UnselectLoadoutCategory
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCustomizationMenu_C::UnselectLoadoutCategory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.UnselectLoadoutCategory");
		
		UW_LoadoutCustomizationMenu_C_UnselectLoadoutCategory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.SelectLoadoutCategory
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCustomizationMenu_C::SelectLoadoutCategory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.SelectLoadoutCategory");
		
		UW_LoadoutCustomizationMenu_C_SelectLoadoutCategory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.PreviousColumn
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCustomizationMenu_C::PreviousColumn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.PreviousColumn");
		
		UW_LoadoutCustomizationMenu_C_PreviousColumn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.NextColumn
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCustomizationMenu_C::NextColumn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.NextColumn");
		
		UW_LoadoutCustomizationMenu_C_NextColumn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.PreviousRow
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCustomizationMenu_C::PreviousRow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.PreviousRow");
		
		UW_LoadoutCustomizationMenu_C_PreviousRow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.NextRow
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCustomizationMenu_C::NextRow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.NextRow");
		
		UW_LoadoutCustomizationMenu_C_NextRow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.UpdateItemInfoCard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ItemClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutCustomizationMenu_C::UpdateItemInfoCard(class UClass* ItemClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.UpdateItemInfoCard");
		
		UW_LoadoutCustomizationMenu_C_UpdateItemInfoCard_Params params {};
		params.ItemClass = ItemClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.FocusOnWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     WidgetToFocus                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutCustomizationMenu_C::FocusOnWidget(class UWidget* WidgetToFocus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.FocusOnWidget");
		
		UW_LoadoutCustomizationMenu_C_FocusOnWidget_Params params {};
		params.WidgetToFocus = WidgetToFocus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.ScrollIntoView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     WidgetToFind                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutCustomizationMenu_C::ScrollIntoView(class UWidget* WidgetToFind)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.ScrollIntoView");
		
		UW_LoadoutCustomizationMenu_C_ScrollIntoView_Params params {};
		params.WidgetToFind = WidgetToFind;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.ScrollIntoTop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     WidgetToFind                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutCustomizationMenu_C::ScrollIntoTop(class UWidget* WidgetToFind)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.ScrollIntoTop");
		
		UW_LoadoutCustomizationMenu_C_ScrollIntoTop_Params params {};
		params.WidgetToFind = WidgetToFind;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.ScrollIntoCenter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     WidgetToFind                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutCustomizationMenu_C::ScrollIntoCenter(class UWidget* WidgetToFind)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.ScrollIntoCenter");
		
		UW_LoadoutCustomizationMenu_C_ScrollIntoCenter_Params params {};
		params.WidgetToFind = WidgetToFind;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.ScrollToBottom
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCustomizationMenu_C::ScrollToBottom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.ScrollToBottom");
		
		UW_LoadoutCustomizationMenu_C_ScrollToBottom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.ScrollToTop
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCustomizationMenu_C::ScrollToTop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.ScrollToTop");
		
		UW_LoadoutCustomizationMenu_C_ScrollToTop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnLoadoutItemButtonClicked (Internal)
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemClass                                         ItemClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      ItemObjectClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsTactical                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            TacticalSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsMultipleTacticalSlots                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            MaxTacticalSlots                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Starting_Tactical_Slot                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_LoadoutItem_C*                            LastSelectedLoadoutItem                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutCustomizationMenu_C::OnLoadoutItemButtonClicked_Internal(EItemClass ItemClass, class UClass* ItemObjectClass, bool bIsTactical, int32_t TacticalSlot, bool bIsMultipleTacticalSlots, int32_t MaxTacticalSlots, int32_t Starting_Tactical_Slot, class UW_LoadoutItem_C* LastSelectedLoadoutItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnLoadoutItemButtonClicked (Internal)");
		
		UW_LoadoutCustomizationMenu_C_OnLoadoutItemButtonClicked_Internal_Params params {};
		params.ItemClass = ItemClass;
		params.ItemObjectClass = ItemObjectClass;
		params.bIsTactical = bIsTactical;
		params.TacticalSlot = TacticalSlot;
		params.bIsMultipleTacticalSlots = bIsMultipleTacticalSlots;
		params.MaxTacticalSlots = MaxTacticalSlots;
		params.Starting_Tactical_Slot = Starting_Tactical_Slot;
		params.LastSelectedLoadoutItem = LastSelectedLoadoutItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnLoadoutCategoryButtonHovered (Internal)
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutCategory_C*                        LoadoutCategory                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutCustomizationMenu_C::OnLoadoutCategoryButtonHovered_Internal(class UW_LoadoutCategory_C* LoadoutCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnLoadoutCategoryButtonHovered (Internal)");
		
		UW_LoadoutCustomizationMenu_C_OnLoadoutCategoryButtonHovered_Internal_Params params {};
		params.LoadoutCategory = LoadoutCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnLoadoutCategoryButtonClicked (Internal)
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutCategory_C*                        LoadoutCategory                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutCustomizationMenu_C::OnLoadoutCategoryButtonClicked_Internal(class UW_LoadoutCategory_C* LoadoutCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnLoadoutCategoryButtonClicked (Internal)");
		
		UW_LoadoutCustomizationMenu_C_OnLoadoutCategoryButtonClicked_Internal_Params params {};
		params.LoadoutCategory = LoadoutCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnLoadoutCategoryButtonClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutCategory_C*                        LoadoutCategory                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutCustomizationMenu_C::OnLoadoutCategoryButtonClicked(class UW_LoadoutCategory_C* LoadoutCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnLoadoutCategoryButtonClicked");
		
		UW_LoadoutCustomizationMenu_C_OnLoadoutCategoryButtonClicked_Params params {};
		params.LoadoutCategory = LoadoutCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnLoadoutCategoryButtonHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutCategory_C*                        LoadoutCategory                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutCustomizationMenu_C::OnLoadoutCategoryButtonHovered(class UW_LoadoutCategory_C* LoadoutCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnLoadoutCategoryButtonHovered");
		
		UW_LoadoutCustomizationMenu_C_OnLoadoutCategoryButtonHovered_Params params {};
		params.LoadoutCategory = LoadoutCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.InitializeWidget
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCustomizationMenu_C::InitializeWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.InitializeWidget");
		
		UW_LoadoutCustomizationMenu_C_InitializeWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnLoadoutLoaded
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCustomizationMenu_C::OnLoadoutLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnLoadoutLoaded");
		
		UW_LoadoutCustomizationMenu_C_OnLoadoutLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.BndEvt__GoToQuartermaster_Button_K2Node_ComponentBoundEvent_11_OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCustomizationMenu_C::BndEvt__GoToQuartermaster_Button_K2Node_ComponentBoundEvent_11_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.BndEvt__GoToQuartermaster_Button_K2Node_ComponentBoundEvent_11_OnPressed__DelegateSignature");
		
		UW_LoadoutCustomizationMenu_C_BndEvt__GoToQuartermaster_Button_K2Node_ComponentBoundEvent_11_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.BndEvt__GoToQuartermaster_Button_K2Node_ComponentBoundEvent_12_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCustomizationMenu_C::BndEvt__GoToQuartermaster_Button_K2Node_ComponentBoundEvent_12_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.BndEvt__GoToQuartermaster_Button_K2Node_ComponentBoundEvent_12_OnReleased__DelegateSignature");
		
		UW_LoadoutCustomizationMenu_C_BndEvt__GoToQuartermaster_Button_K2Node_ComponentBoundEvent_12_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.BndEvt__GoToQuartermaster_Button_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_StandardButton_C*                         CallingButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutCustomizationMenu_C::BndEvt__GoToQuartermaster_Button_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature(class UW_StandardButton_C* CallingButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.BndEvt__GoToQuartermaster_Button_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature");
		
		UW_LoadoutCustomizationMenu_C_BndEvt__GoToQuartermaster_Button_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature_Params params {};
		params.CallingButton = CallingButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.ResetAttachments
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCustomizationMenu_C::ResetAttachments()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.ResetAttachments");
		
		UW_LoadoutCustomizationMenu_C_ResetAttachments_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnLoadoutItemButtonClicked
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
	void UW_LoadoutCustomizationMenu_C::OnLoadoutItemButtonClicked(EItemClass ItemClass, class UClass* ItemObjectClass, bool bIsTactical, int32_t TacticalSlot, bool bIsMultipleTacticalSlots, int32_t MaxTacticalSlots, int32_t Starting_Tactical_Slot, class UW_LoadoutItem_C* Loadout_Item_Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnLoadoutItemButtonClicked");
		
		UW_LoadoutCustomizationMenu_C_OnLoadoutItemButtonClicked_Params params {};
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
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnPresetsLoaded
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCustomizationMenu_C::OnPresetsLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnPresetsLoaded");
		
		UW_LoadoutCustomizationMenu_C_OnPresetsLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.Anim_OnSlideInFinished
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCustomizationMenu_C::Anim_OnSlideInFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.Anim_OnSlideInFinished");
		
		UW_LoadoutCustomizationMenu_C_Anim_OnSlideInFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.Anim_OnSlideOutFinished
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCustomizationMenu_C::Anim_OnSlideOutFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.Anim_OnSlideOutFinished");
		
		UW_LoadoutCustomizationMenu_C_Anim_OnSlideOutFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.BndEvt__DefaultFireMode_ComboBox_K2Node_ComponentBoundEvent_0_OnNewOptionSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewOption                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutCustomizationMenu_C::BndEvt__DefaultFireMode_ComboBox_K2Node_ComponentBoundEvent_0_OnNewOptionSelected__DelegateSignature(int32_t NewOption)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.BndEvt__DefaultFireMode_ComboBox_K2Node_ComponentBoundEvent_0_OnNewOptionSelected__DelegateSignature");
		
		UW_LoadoutCustomizationMenu_C_BndEvt__DefaultFireMode_ComboBox_K2Node_ComponentBoundEvent_0_OnNewOptionSelected__DelegateSignature_Params params {};
		params.NewOption = NewOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnDefaultWeaponFireModesLoaded
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCustomizationMenu_C::OnDefaultWeaponFireModesLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnDefaultWeaponFireModesLoaded");
		
		UW_LoadoutCustomizationMenu_C_OnDefaultWeaponFireModesLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutCustomizationMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.Tick");
		
		UW_LoadoutCustomizationMenu_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnLoadoutCategoryButtonUnhovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutCategory_C*                        LoadoutCategory                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutCustomizationMenu_C::OnLoadoutCategoryButtonUnhovered(class UW_LoadoutCategory_C* LoadoutCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.OnLoadoutCategoryButtonUnhovered");
		
		UW_LoadoutCustomizationMenu_C_OnLoadoutCategoryButtonUnhovered_Params params {};
		params.LoadoutCategory = LoadoutCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.Initialize Team mate buttons
	 * 		Flags  -> ()
	 */
	void UW_LoadoutCustomizationMenu_C::Initialize_Team_mate_buttons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.Initialize Team mate buttons");
		
		UW_LoadoutCustomizationMenu_C_Initialize_Team_mate_buttons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.SwapSelectedEquippingCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEquippingSwat                                     NewEquippingSwat                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutCustomizationMenu_C::SwapSelectedEquippingCharacter(EEquippingSwat NewEquippingSwat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.SwapSelectedEquippingCharacter");
		
		UW_LoadoutCustomizationMenu_C_SwapSelectedEquippingCharacter_Params params {};
		params.NewEquippingSwat = NewEquippingSwat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.SwapPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutCustomizationMenu_C::SwapPlayer(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.SwapPlayer");
		
		UW_LoadoutCustomizationMenu_C_SwapPlayer_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.SwapAlpha
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutCustomizationMenu_C::SwapAlpha(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.SwapAlpha");
		
		UW_LoadoutCustomizationMenu_C_SwapAlpha_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.SwapBeta
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutCustomizationMenu_C::SwapBeta(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.SwapBeta");
		
		UW_LoadoutCustomizationMenu_C_SwapBeta_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.SwapCharlie
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutCustomizationMenu_C::SwapCharlie(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.SwapCharlie");
		
		UW_LoadoutCustomizationMenu_C_SwapCharlie_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.SwapDelta
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutCustomizationMenu_C::SwapDelta(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.SwapDelta");
		
		UW_LoadoutCustomizationMenu_C_SwapDelta_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.ExecuteUbergraph_W_LoadoutCustomizationMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LoadoutCustomizationMenu_C::ExecuteUbergraph_W_LoadoutCustomizationMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C.ExecuteUbergraph_W_LoadoutCustomizationMenu");
		
		UW_LoadoutCustomizationMenu_C_ExecuteUbergraph_W_LoadoutCustomizationMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_LoadoutCustomizationMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_LoadoutCustomizationMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_LoadoutCustomizationMenu.W_LoadoutCustomizationMenu_C");
		return ptr;
	}

}


