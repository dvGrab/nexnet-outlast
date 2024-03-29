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
	 * 		Name   -> Function CustomizationItemGrid.CustomizationItemGrid_C.OnInputSourceChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsGamepad                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCustomizationItemGrid_C::OnInputSourceChanged(bool bIsGamepad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationItemGrid.CustomizationItemGrid_C.OnInputSourceChanged");
		
		UCustomizationItemGrid_C_OnInputSourceChanged_Params params {};
		params.bIsGamepad = bIsGamepad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationItemGrid.CustomizationItemGrid_C.GetThumbnailWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCustomizationOptionThumbnail_C*             Thumbnail                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationItemGrid_C::GetThumbnailWidget(class UCustomizationOptionThumbnail_C** Thumbnail)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationItemGrid.CustomizationItemGrid_C.GetThumbnailWidget");
		
		UCustomizationItemGrid_C_GetThumbnailWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Thumbnail != nullptr)
			*Thumbnail = params.Thumbnail;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationItemGrid.CustomizationItemGrid_C.OnItemBought
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUICustomizationItem                        ItemBought                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UCustomizationItemGrid_C::OnItemBought(struct FUICustomizationItem* ItemBought)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationItemGrid.CustomizationItemGrid_C.OnItemBought");
		
		UCustomizationItemGrid_C_OnItemBought_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemBought != nullptr)
			*ItemBought = params.ItemBought;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationItemGrid.CustomizationItemGrid_C.OnItemEquipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUICustomizationItem                        New_Equipped_Item                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UCustomizationItemGrid_C::OnItemEquipped(struct FUICustomizationItem* New_Equipped_Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationItemGrid.CustomizationItemGrid_C.OnItemEquipped");
		
		UCustomizationItemGrid_C_OnItemEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (New_Equipped_Item != nullptr)
			*New_Equipped_Item = params.New_Equipped_Item;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationItemGrid.CustomizationItemGrid_C.TryUpdateEquippedOptionWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCustomizationOptionThumbnail_C*             New_Option                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationItemGrid_C::TryUpdateEquippedOptionWidget(class UCustomizationOptionThumbnail_C* New_Option)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationItemGrid.CustomizationItemGrid_C.TryUpdateEquippedOptionWidget");
		
		UCustomizationItemGrid_C_TryUpdateEquippedOptionWidget_Params params {};
		params.New_Option = New_Option;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationItemGrid.CustomizationItemGrid_C.GamepadNav_HandleGridNavigation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UCustomizationItemGrid_C::GamepadNav_HandleGridNavigation(EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationItemGrid.CustomizationItemGrid_C.GamepadNav_HandleGridNavigation");
		
		UCustomizationItemGrid_C_GamepadNav_HandleGridNavigation_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationItemGrid.CustomizationItemGrid_C.AddItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FUICustomizationItem>                Items                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ECustomizationMenuCategory                         Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationItemGrid_C::AddItems(TArray<struct FUICustomizationItem>* Items, ECustomizationMenuCategory Category)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationItemGrid.CustomizationItemGrid_C.AddItems");
		
		UCustomizationItemGrid_C_AddItems_Params params {};
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Items != nullptr)
			*Items = params.Items;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationItemGrid.CustomizationItemGrid_C.OnItemReleased
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCustomizationOptionThumbnail_C*             Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationItemGrid_C::OnItemReleased(class UCustomizationOptionThumbnail_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationItemGrid.CustomizationItemGrid_C.OnItemReleased");
		
		UCustomizationItemGrid_C_OnItemReleased_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationItemGrid.CustomizationItemGrid_C.OnItemPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCustomizationOptionThumbnail_C*             Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationItemGrid_C::OnItemPressed(class UCustomizationOptionThumbnail_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationItemGrid.CustomizationItemGrid_C.OnItemPressed");
		
		UCustomizationItemGrid_C_OnItemPressed_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationItemGrid.CustomizationItemGrid_C.OnItemUnhovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCustomizationOptionThumbnail_C*             Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationItemGrid_C::OnItemUnhovered(class UCustomizationOptionThumbnail_C* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationItemGrid.CustomizationItemGrid_C.OnItemUnhovered");
		
		UCustomizationItemGrid_C_OnItemUnhovered_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationItemGrid.CustomizationItemGrid_C.OnItemHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCustomizationOptionThumbnail_C*             Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationItemGrid_C::OnItemHovered(class UCustomizationOptionThumbnail_C* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationItemGrid.CustomizationItemGrid_C.OnItemHovered");
		
		UCustomizationItemGrid_C_OnItemHovered_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationItemGrid.CustomizationItemGrid_C.OnItemClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCustomizationOptionThumbnail_C*             Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationItemGrid_C::OnItemClicked(class UCustomizationOptionThumbnail_C* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationItemGrid.CustomizationItemGrid_C.OnItemClicked");
		
		UCustomizationItemGrid_C_OnItemClicked_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationItemGrid.CustomizationItemGrid_C.RefreshItemInfos
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FUICustomizationItem>                Items                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UCustomizationItemGrid_C::RefreshItemInfos(TArray<struct FUICustomizationItem>* Items)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationItemGrid.CustomizationItemGrid_C.RefreshItemInfos");
		
		UCustomizationItemGrid_C_RefreshItemInfos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Items != nullptr)
			*Items = params.Items;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationItemGrid.CustomizationItemGrid_C.ManageEmptyThumbnails
	 * 		Flags  -> ()
	 */
	void UCustomizationItemGrid_C::ManageEmptyThumbnails()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationItemGrid.CustomizationItemGrid_C.ManageEmptyThumbnails");
		
		UCustomizationItemGrid_C_ManageEmptyThumbnails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationItemGrid.CustomizationItemGrid_C.GetLastEmptyItemIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationItemGrid_C::GetLastEmptyItemIndex(int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationItemGrid.CustomizationItemGrid_C.GetLastEmptyItemIndex");
		
		UCustomizationItemGrid_C_GetLastEmptyItemIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationItemGrid.CustomizationItemGrid_C.SetEquippedOptionWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCustomizationOptionThumbnail_C*             Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationItemGrid_C::SetEquippedOptionWidget(class UCustomizationOptionThumbnail_C* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationItemGrid.CustomizationItemGrid_C.SetEquippedOptionWidget");
		
		UCustomizationItemGrid_C_SetEquippedOptionWidget_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationItemGrid.CustomizationItemGrid_C.Construct
	 * 		Flags  -> ()
	 */
	void UCustomizationItemGrid_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationItemGrid.CustomizationItemGrid_C.Construct");
		
		UCustomizationItemGrid_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationItemGrid.CustomizationItemGrid_C.Event_InputSourceChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsGamepad                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCustomizationItemGrid_C::Event_InputSourceChanged(bool bIsGamepad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationItemGrid.CustomizationItemGrid_C.Event_InputSourceChanged");
		
		UCustomizationItemGrid_C_Event_InputSourceChanged_Params params {};
		params.bIsGamepad = bIsGamepad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationItemGrid.CustomizationItemGrid_C.ExecuteUbergraph_CustomizationItemGrid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationItemGrid_C::ExecuteUbergraph_CustomizationItemGrid(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationItemGrid.CustomizationItemGrid_C.ExecuteUbergraph_CustomizationItemGrid");
		
		UCustomizationItemGrid_C_ExecuteUbergraph_CustomizationItemGrid_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationItemGrid.CustomizationItemGrid_C.EventOnItemReleased__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUICustomizationItem                        Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UCustomizationItemGrid_C::EventOnItemReleased__DelegateSignature(const struct FUICustomizationItem& Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationItemGrid.CustomizationItemGrid_C.EventOnItemReleased__DelegateSignature");
		
		UCustomizationItemGrid_C_EventOnItemReleased__DelegateSignature_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationItemGrid.CustomizationItemGrid_C.EventOnItemPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUICustomizationItem                        Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UCustomizationItemGrid_C::EventOnItemPressed__DelegateSignature(const struct FUICustomizationItem& Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationItemGrid.CustomizationItemGrid_C.EventOnItemPressed__DelegateSignature");
		
		UCustomizationItemGrid_C_EventOnItemPressed__DelegateSignature_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationItemGrid.CustomizationItemGrid_C.EventOnItemUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUICustomizationItem                        Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UCustomizationItemGrid_C::EventOnItemUnhovered__DelegateSignature(const struct FUICustomizationItem& Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationItemGrid.CustomizationItemGrid_C.EventOnItemUnhovered__DelegateSignature");
		
		UCustomizationItemGrid_C_EventOnItemUnhovered__DelegateSignature_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationItemGrid.CustomizationItemGrid_C.EventOnItemHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUICustomizationItem                        Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UCustomizationItemGrid_C::EventOnItemHovered__DelegateSignature(const struct FUICustomizationItem& Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationItemGrid.CustomizationItemGrid_C.EventOnItemHovered__DelegateSignature");
		
		UCustomizationItemGrid_C_EventOnItemHovered__DelegateSignature_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationItemGrid.CustomizationItemGrid_C.EventOnItemClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUICustomizationItem                        Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UCustomizationItemGrid_C::EventOnItemClicked__DelegateSignature(const struct FUICustomizationItem& Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationItemGrid.CustomizationItemGrid_C.EventOnItemClicked__DelegateSignature");
		
		UCustomizationItemGrid_C_EventOnItemClicked__DelegateSignature_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomizationItemGrid_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomizationItemGrid_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CustomizationItemGrid.CustomizationItemGrid_C");
		return ptr;
	}

}


