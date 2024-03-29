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
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.RefreshEquippedArmourMaterial
	 * 		Flags  -> ()
	 */
	void UW_Loadout_ItemList_Vertical_C::RefreshEquippedArmourMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.RefreshEquippedArmourMaterial");
		
		UW_Loadout_ItemList_Vertical_C_RefreshEquippedArmourMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.RefreshEquippedAmmo
	 * 		Flags  -> ()
	 */
	void UW_Loadout_ItemList_Vertical_C::RefreshEquippedAmmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.RefreshEquippedAmmo");
		
		UW_Loadout_ItemList_Vertical_C_RefreshEquippedAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.CreateArmourMaterialLoadoutWidgetItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UArmourMaterial*                             ArmourMaterial                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScrollBoxSlot*                              AsScroll_Box_Slot                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_LoadoutSlot_C*                            LoadoutSlotWidget                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_ItemList_Vertical_C::CreateArmourMaterialLoadoutWidgetItem(class UArmourMaterial* ArmourMaterial, class UScrollBoxSlot** AsScroll_Box_Slot, class UW_LoadoutSlot_C** LoadoutSlotWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.CreateArmourMaterialLoadoutWidgetItem");
		
		UW_Loadout_ItemList_Vertical_C_CreateArmourMaterialLoadoutWidgetItem_Params params {};
		params.ArmourMaterial = ArmourMaterial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsScroll_Box_Slot != nullptr)
			*AsScroll_Box_Slot = params.AsScroll_Box_Slot;
		if (LoadoutSlotWidget != nullptr)
			*LoadoutSlotWidget = params.LoadoutSlotWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.PopulateArmourMaterials
	 * 		Flags  -> ()
	 */
	void UW_Loadout_ItemList_Vertical_C::PopulateArmourMaterials()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.PopulateArmourMaterials");
		
		UW_Loadout_ItemList_Vertical_C_PopulateArmourMaterials_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.CreateAmmoLoadoutWidgetItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        AmmoType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScrollBoxSlot*                              AsScroll_Box_Slot                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_LoadoutSlot_C*                            LoadoutSlotWidget                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_ItemList_Vertical_C::CreateAmmoLoadoutWidgetItem(const class FName& AmmoType, class UClass* Weapon, class UScrollBoxSlot** AsScroll_Box_Slot, class UW_LoadoutSlot_C** LoadoutSlotWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.CreateAmmoLoadoutWidgetItem");
		
		UW_Loadout_ItemList_Vertical_C_CreateAmmoLoadoutWidgetItem_Params params {};
		params.AmmoType = AmmoType;
		params.Weapon = Weapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsScroll_Box_Slot != nullptr)
			*AsScroll_Box_Slot = params.AsScroll_Box_Slot;
		if (LoadoutSlotWidget != nullptr)
			*LoadoutSlotWidget = params.LoadoutSlotWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.PopulateAmmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                AmmoTypes                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UClass*                                      Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_ItemList_Vertical_C::PopulateAmmo(TArray<class FName>* AmmoTypes, class UClass* Weapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.PopulateAmmo");
		
		UW_Loadout_ItemList_Vertical_C_PopulateAmmo_Params params {};
		params.Weapon = Weapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AmmoTypes != nullptr)
			*AmmoTypes = params.AmmoTypes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ScrollToPage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Page                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_ItemList_Vertical_C::ScrollToPage(int32_t Page)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ScrollToPage");
		
		UW_Loadout_ItemList_Vertical_C_ScrollToPage_Params params {};
		params.Page = Page;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ScrollToTargetIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_ItemList_Vertical_C::ScrollToTargetIndex(int32_t ItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ScrollToTargetIndex");
		
		UW_Loadout_ItemList_Vertical_C_ScrollToTargetIndex_Params params {};
		params.ItemIndex = ItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ScrollToPreviousItem
	 * 		Flags  -> ()
	 */
	void UW_Loadout_ItemList_Vertical_C::ScrollToPreviousItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ScrollToPreviousItem");
		
		UW_Loadout_ItemList_Vertical_C_ScrollToPreviousItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ScrollToNextItem
	 * 		Flags  -> ()
	 */
	void UW_Loadout_ItemList_Vertical_C::ScrollToNextItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ScrollToNextItem");
		
		UW_Loadout_ItemList_Vertical_C_ScrollToNextItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ScrollToPreviousPage
	 * 		Flags  -> ()
	 */
	void UW_Loadout_ItemList_Vertical_C::ScrollToPreviousPage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ScrollToPreviousPage");
		
		UW_Loadout_ItemList_Vertical_C_ScrollToPreviousPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ScrollToNextPage
	 * 		Flags  -> ()
	 */
	void UW_Loadout_ItemList_Vertical_C::ScrollToNextPage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ScrollToNextPage");
		
		UW_Loadout_ItemList_Vertical_C_ScrollToNextPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.UpdateScrollPage
	 * 		Flags  -> ()
	 */
	void UW_Loadout_ItemList_Vertical_C::UpdateScrollPage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.UpdateScrollPage");
		
		UW_Loadout_ItemList_Vertical_C_UpdateScrollPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.SetupScrollPagination
	 * 		Flags  -> ()
	 */
	void UW_Loadout_ItemList_Vertical_C::SetupScrollPagination()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.SetupScrollPagination");
		
		UW_Loadout_ItemList_Vertical_C_SetupScrollPagination_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ScrollToEquipped
	 * 		Flags  -> ()
	 */
	void UW_Loadout_ItemList_Vertical_C::ScrollToEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ScrollToEquipped");
		
		UW_Loadout_ItemList_Vertical_C_ScrollToEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.RefreshEquippedAttachments
	 * 		Flags  -> ()
	 */
	void UW_Loadout_ItemList_Vertical_C::RefreshEquippedAttachments()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.RefreshEquippedAttachments");
		
		UW_Loadout_ItemList_Vertical_C_RefreshEquippedAttachments_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.RefreshEquippedItems
	 * 		Flags  -> ()
	 */
	void UW_Loadout_ItemList_Vertical_C::RefreshEquippedItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.RefreshEquippedItems");
		
		UW_Loadout_ItemList_Vertical_C_RefreshEquippedItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.SetListItemPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFirstItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UScrollBoxSlot*                              ScrollBoxSlotItem                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_ItemList_Vertical_C::SetListItemPadding(bool IsFirstItem, class UScrollBoxSlot* ScrollBoxSlotItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.SetListItemPadding");
		
		UW_Loadout_ItemList_Vertical_C_SetListItemPadding_Params params {};
		params.IsFirstItem = IsFirstItem;
		params.ScrollBoxSlotItem = ScrollBoxSlotItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.PopulateAttachments
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UClass*>                              Attachments                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_Loadout_ItemList_Vertical_C::PopulateAttachments(TArray<class UClass*>* Attachments)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.PopulateAttachments");
		
		UW_Loadout_ItemList_Vertical_C_PopulateAttachments_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Attachments != nullptr)
			*Attachments = params.Attachments;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.RefreshEquipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSavedLoadout                               ActiveLoadout                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               RefreshAttachments                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_Loadout_ItemList_Vertical_C::RefreshEquipped(const struct FSavedLoadout& ActiveLoadout, bool RefreshAttachments)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.RefreshEquipped");
		
		UW_Loadout_ItemList_Vertical_C_RefreshEquipped_Params params {};
		params.ActiveLoadout = ActiveLoadout;
		params.RefreshAttachments = RefreshAttachments;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.SortItems
	 * 		Flags  -> ()
	 */
	void UW_Loadout_ItemList_Vertical_C::SortItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.SortItems");
		
		UW_Loadout_ItemList_Vertical_C_SortItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.CreateLoadoutWidgetItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScrollBoxSlot*                              AsScroll_Box_Slot                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_LoadoutSlot_C*                            LoadoutSlotWidget                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_ItemList_Vertical_C::CreateLoadoutWidgetItem(class UClass* ItemData, class UScrollBoxSlot** AsScroll_Box_Slot, class UW_LoadoutSlot_C** LoadoutSlotWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.CreateLoadoutWidgetItem");
		
		UW_Loadout_ItemList_Vertical_C_CreateLoadoutWidgetItem_Params params {};
		params.ItemData = ItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsScroll_Box_Slot != nullptr)
			*AsScroll_Box_Slot = params.AsScroll_Box_Slot;
		if (LoadoutSlotWidget != nullptr)
			*LoadoutSlotWidget = params.LoadoutSlotWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.GetItemArrayBySlot
	 * 		Flags  -> ()
	 */
	void UW_Loadout_ItemList_Vertical_C::GetItemArrayBySlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.GetItemArrayBySlot");
		
		UW_Loadout_ItemList_Vertical_C_GetItemArrayBySlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.PopulateItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FLoadoutCategory>                    GearCategoryClasses                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_Loadout_ItemList_Vertical_C::PopulateItems(TArray<struct FLoadoutCategory>* GearCategoryClasses)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.PopulateItems");
		
		UW_Loadout_ItemList_Vertical_C_PopulateItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearCategoryClasses != nullptr)
			*GearCategoryClasses = params.GearCategoryClasses;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.PopulateSubnav
	 * 		Flags  -> ()
	 */
	void UW_Loadout_ItemList_Vertical_C::PopulateSubnav()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.PopulateSubnav");
		
		UW_Loadout_ItemList_Vertical_C_PopulateSubnav_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OpenList
	 * 		Flags  -> ()
	 */
	void UW_Loadout_ItemList_Vertical_C::OpenList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OpenList");
		
		UW_Loadout_ItemList_Vertical_C_OpenList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.AttachmentItemClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_Attachment_C*                 TriggeringAttachment                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_ItemList_Vertical_C::AttachmentItemClicked(class UW_LoadoutSlot_Attachment_C* TriggeringAttachment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.AttachmentItemClicked");
		
		UW_Loadout_ItemList_Vertical_C_AttachmentItemClicked_Params params {};
		params.TriggeringAttachment = TriggeringAttachment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.AttachmentItemHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_Attachment_C*                 TriggeringAttachment                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_ItemList_Vertical_C::AttachmentItemHovered(class UW_LoadoutSlot_Attachment_C* TriggeringAttachment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.AttachmentItemHovered");
		
		UW_Loadout_ItemList_Vertical_C_AttachmentItemHovered_Params params {};
		params.TriggeringAttachment = TriggeringAttachment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.UpdateActiveLoadout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSavedLoadout                               ActiveLoadout                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_Loadout_ItemList_Vertical_C::UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.UpdateActiveLoadout");
		
		UW_Loadout_ItemList_Vertical_C_UpdateActiveLoadout_Params params {};
		params.ActiveLoadout = ActiveLoadout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ScrollOpenedToEquipped
	 * 		Flags  -> ()
	 */
	void UW_Loadout_ItemList_Vertical_C::ScrollOpenedToEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ScrollOpenedToEquipped");
		
		UW_Loadout_ItemList_Vertical_C_ScrollOpenedToEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.BndEvt__W_Loadout_ItemList_ItemScrollBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CurrentOffset                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_ItemList_Vertical_C::BndEvt__W_Loadout_ItemList_ItemScrollBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.BndEvt__W_Loadout_ItemList_ItemScrollBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature");
		
		UW_Loadout_ItemList_Vertical_C_BndEvt__W_Loadout_ItemList_ItemScrollBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature_Params params {};
		params.CurrentOffset = CurrentOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.InitializeLoadoutList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemCategory                                      LoadoutSlot                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FLoadoutCategory>                    GearCategoryClasses                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_Loadout_ItemList_Vertical_C::InitializeLoadoutList(EItemCategory LoadoutSlot, TArray<struct FLoadoutCategory> GearCategoryClasses)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.InitializeLoadoutList");
		
		UW_Loadout_ItemList_Vertical_C_InitializeLoadoutList_Params params {};
		params.LoadoutSlot = LoadoutSlot;
		params.GearCategoryClasses = GearCategoryClasses;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.LoadoutItemDoubleClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TrigeringItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_ItemList_Vertical_C::LoadoutItemDoubleClicked(class UW_LoadoutSlot_C* TrigeringItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.LoadoutItemDoubleClicked");
		
		UW_Loadout_ItemList_Vertical_C_LoadoutItemDoubleClicked_Params params {};
		params.TrigeringItem = TrigeringItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.LoadoutItemClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TrigeringItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_ItemList_Vertical_C::LoadoutItemClicked(class UW_LoadoutSlot_C* TrigeringItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.LoadoutItemClicked");
		
		UW_Loadout_ItemList_Vertical_C_LoadoutItemClicked_Params params {};
		params.TrigeringItem = TrigeringItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_ItemList_Vertical_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.Tick");
		
		UW_Loadout_ItemList_Vertical_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_Loadout_ItemList_Vertical_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.Construct");
		
		UW_Loadout_ItemList_Vertical_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_Loadout_ItemList_Vertical_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.PreConstruct");
		
		UW_Loadout_ItemList_Vertical_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.SetLoadoutWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Loadout_C*                                LoadoutWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_ItemList_Vertical_C::SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.SetLoadoutWidget");
		
		UW_Loadout_ItemList_Vertical_C_SetLoadoutWidget_Params params {};
		params.LoadoutWidget = LoadoutWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.InitializeAttachmentList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EWeaponAttachmentType                              AttachmentType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_ItemList_Vertical_C::InitializeAttachmentList(class UClass* ItemData, EWeaponAttachmentType AttachmentType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.InitializeAttachmentList");
		
		UW_Loadout_ItemList_Vertical_C_InitializeAttachmentList_Params params {};
		params.ItemData = ItemData;
		params.AttachmentType = AttachmentType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.UpdateCurrentItemMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<EItemCategory, class UClass*>                 ItemCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_Loadout_ItemList_Vertical_C::UpdateCurrentItemMap(TMap<EItemCategory, class UClass*> ItemCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.UpdateCurrentItemMap");
		
		UW_Loadout_ItemList_Vertical_C_UpdateCurrentItemMap_Params params {};
		params.ItemCategory = ItemCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.HideList
	 * 		Flags  -> ()
	 */
	void UW_Loadout_ItemList_Vertical_C::HideList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.HideList");
		
		UW_Loadout_ItemList_Vertical_C_HideList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.UpdateCurrentSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            CurrentSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_ItemList_Vertical_C::UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.UpdateCurrentSlot");
		
		UW_Loadout_ItemList_Vertical_C_UpdateCurrentSlot_Params params {};
		params.CurrentSlot = CurrentSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.InitializeDeployableList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemCategory                                      LoadoutSlot                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FLoadoutCategory>                    GearCategoryClasses                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class UClass*>                              ExcludedItems                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_Loadout_ItemList_Vertical_C::InitializeDeployableList(EItemCategory LoadoutSlot, TArray<struct FLoadoutCategory> GearCategoryClasses, TArray<class UClass*> ExcludedItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.InitializeDeployableList");
		
		UW_Loadout_ItemList_Vertical_C_InitializeDeployableList_Params params {};
		params.LoadoutSlot = LoadoutSlot;
		params.GearCategoryClasses = GearCategoryClasses;
		params.ExcludedItems = ExcludedItems;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.Hide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Collapse                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_Loadout_ItemList_Vertical_C::Hide(float Delay, bool Collapse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.Hide");
		
		UW_Loadout_ItemList_Vertical_C_Hide_Params params {};
		params.Delay = Delay;
		params.Collapse = Collapse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.InitializeAmmoList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ExcludedAmmoType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_ItemList_Vertical_C::InitializeAmmoList(const class FName& ExcludedAmmoType, class UClass* Weapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.InitializeAmmoList");
		
		UW_Loadout_ItemList_Vertical_C_InitializeAmmoList_Params params {};
		params.ExcludedAmmoType = ExcludedAmmoType;
		params.Weapon = Weapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.Reveal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_ItemList_Vertical_C::Reveal(float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.Reveal");
		
		UW_Loadout_ItemList_Vertical_C_Reveal_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.AmmoItemClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TrigeringItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_ItemList_Vertical_C::AmmoItemClicked(class UW_LoadoutSlot_C* TrigeringItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.AmmoItemClicked");
		
		UW_Loadout_ItemList_Vertical_C_AmmoItemClicked_Params params {};
		params.TrigeringItem = TrigeringItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.AmmoItemHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TrigeringItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_ItemList_Vertical_C::AmmoItemHovered(class UW_LoadoutSlot_C* TrigeringItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.AmmoItemHovered");
		
		UW_Loadout_ItemList_Vertical_C_AmmoItemHovered_Params params {};
		params.TrigeringItem = TrigeringItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.AmmoItemDoubleClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TrigeringItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_ItemList_Vertical_C::AmmoItemDoubleClicked(class UW_LoadoutSlot_C* TrigeringItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.AmmoItemDoubleClicked");
		
		UW_Loadout_ItemList_Vertical_C_AmmoItemDoubleClicked_Params params {};
		params.TrigeringItem = TrigeringItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.InitializeArmourMaterialList
	 * 		Flags  -> ()
	 */
	void UW_Loadout_ItemList_Vertical_C::InitializeArmourMaterialList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.InitializeArmourMaterialList");
		
		UW_Loadout_ItemList_Vertical_C_InitializeArmourMaterialList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.SubnavButtonClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 TriggeringButton                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_ItemList_Vertical_C::SubnavButtonClicked(class UW_Button_C* TriggeringButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.SubnavButtonClicked");
		
		UW_Loadout_ItemList_Vertical_C_SubnavButtonClicked_Params params {};
		params.TriggeringButton = TriggeringButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ArmourMaterialClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TrigeringItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_ItemList_Vertical_C::ArmourMaterialClicked(class UW_LoadoutSlot_C* TrigeringItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ArmourMaterialClicked");
		
		UW_Loadout_ItemList_Vertical_C_ArmourMaterialClicked_Params params {};
		params.TrigeringItem = TrigeringItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ArmourMaterialHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TrigeringItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_ItemList_Vertical_C::ArmourMaterialHovered(class UW_LoadoutSlot_C* TrigeringItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ArmourMaterialHovered");
		
		UW_Loadout_ItemList_Vertical_C_ArmourMaterialHovered_Params params {};
		params.TrigeringItem = TrigeringItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ArmourMaterialDoubleClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TrigeringItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_ItemList_Vertical_C::ArmourMaterialDoubleClicked(class UW_LoadoutSlot_C* TrigeringItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ArmourMaterialDoubleClicked");
		
		UW_Loadout_ItemList_Vertical_C_ArmourMaterialDoubleClicked_Params params {};
		params.TrigeringItem = TrigeringItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.AttachmentItemUnhovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_Attachment_C*                 TriggeringAttachment                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_ItemList_Vertical_C::AttachmentItemUnhovered(class UW_LoadoutSlot_Attachment_C* TriggeringAttachment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.AttachmentItemUnhovered");
		
		UW_Loadout_ItemList_Vertical_C_AttachmentItemUnhovered_Params params {};
		params.TriggeringAttachment = TriggeringAttachment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.LoadoutItemHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_ItemList_Vertical_C::LoadoutItemHovered(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.LoadoutItemHovered");
		
		UW_Loadout_ItemList_Vertical_C_LoadoutItemHovered_Params params {};
		params.TriggeringSlot = TriggeringSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.LoadoutItemUnhovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_ItemList_Vertical_C::LoadoutItemUnhovered(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.LoadoutItemUnhovered");
		
		UW_Loadout_ItemList_Vertical_C_LoadoutItemUnhovered_Params params {};
		params.TriggeringSlot = TriggeringSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.AmmoItemUnhovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_ItemList_Vertical_C::AmmoItemUnhovered(class UW_LoadoutSlot_C* TriggeringItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.AmmoItemUnhovered");
		
		UW_Loadout_ItemList_Vertical_C_AmmoItemUnhovered_Params params {};
		params.TriggeringItem = TriggeringItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ArmourMaterialUnhovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_ItemList_Vertical_C::ArmourMaterialUnhovered(class UW_LoadoutSlot_C* TriggeringItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ArmourMaterialUnhovered");
		
		UW_Loadout_ItemList_Vertical_C_ArmourMaterialUnhovered_Params params {};
		params.TriggeringItem = TriggeringItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ExecuteUbergraph_W_Loadout_ItemList_Vertical
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_ItemList_Vertical_C::ExecuteUbergraph_W_Loadout_ItemList_Vertical(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ExecuteUbergraph_W_Loadout_ItemList_Vertical");
		
		UW_Loadout_ItemList_Vertical_C_ExecuteUbergraph_W_Loadout_ItemList_Vertical_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnLoadoutItemUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_ItemList_Vertical_C::OnLoadoutItemUnhovered__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnLoadoutItemUnhovered__DelegateSignature");
		
		UW_Loadout_ItemList_Vertical_C_OnLoadoutItemUnhovered__DelegateSignature_Params params {};
		params.TriggeringSlot = TriggeringSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnLoadoutItemHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_ItemList_Vertical_C::OnLoadoutItemHovered__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnLoadoutItemHovered__DelegateSignature");
		
		UW_Loadout_ItemList_Vertical_C_OnLoadoutItemHovered__DelegateSignature_Params params {};
		params.TriggeringSlot = TriggeringSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnAttachmentUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_Attachment_C*                 TriggeringAttachment                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_ItemList_Vertical_C::OnAttachmentUnhovered__DelegateSignature(class UW_LoadoutSlot_Attachment_C* TriggeringAttachment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnAttachmentUnhovered__DelegateSignature");
		
		UW_Loadout_ItemList_Vertical_C_OnAttachmentUnhovered__DelegateSignature_Params params {};
		params.TriggeringAttachment = TriggeringAttachment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnArmourMaterialHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UArmourMaterial*                             ArmourMaterial                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_ItemList_Vertical_C::OnArmourMaterialHovered__DelegateSignature(class UArmourMaterial* ArmourMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnArmourMaterialHovered__DelegateSignature");
		
		UW_Loadout_ItemList_Vertical_C_OnArmourMaterialHovered__DelegateSignature_Params params {};
		params.ArmourMaterial = ArmourMaterial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnArmourMaterialDoubleClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UArmourMaterial*                             ArmourMaterial                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_ItemList_Vertical_C::OnArmourMaterialDoubleClicked__DelegateSignature(class UArmourMaterial* ArmourMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnArmourMaterialDoubleClicked__DelegateSignature");
		
		UW_Loadout_ItemList_Vertical_C_OnArmourMaterialDoubleClicked__DelegateSignature_Params params {};
		params.ArmourMaterial = ArmourMaterial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnArmourMaterialClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UArmourMaterial*                             ArmourMaterial                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_ItemList_Vertical_C::OnArmourMaterialClicked__DelegateSignature(class UArmourMaterial* ArmourMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnArmourMaterialClicked__DelegateSignature");
		
		UW_Loadout_ItemList_Vertical_C_OnArmourMaterialClicked__DelegateSignature_Params params {};
		params.ArmourMaterial = ArmourMaterial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnAmmoItemDoubleClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        AmmoType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_ItemList_Vertical_C::OnAmmoItemDoubleClicked__DelegateSignature(const class FName& AmmoType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnAmmoItemDoubleClicked__DelegateSignature");
		
		UW_Loadout_ItemList_Vertical_C_OnAmmoItemDoubleClicked__DelegateSignature_Params params {};
		params.AmmoType = AmmoType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnAmmoItemHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        AmmoType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_ItemList_Vertical_C::OnAmmoItemHovered__DelegateSignature(const class FName& AmmoType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnAmmoItemHovered__DelegateSignature");
		
		UW_Loadout_ItemList_Vertical_C_OnAmmoItemHovered__DelegateSignature_Params params {};
		params.AmmoType = AmmoType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnAmmoItemClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        AmmoType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_ItemList_Vertical_C::OnAmmoItemClicked__DelegateSignature(const class FName& AmmoType, class UClass* Weapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnAmmoItemClicked__DelegateSignature");
		
		UW_Loadout_ItemList_Vertical_C_OnAmmoItemClicked__DelegateSignature_Params params {};
		params.AmmoType = AmmoType;
		params.Weapon = Weapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnAttachmentItemHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_Attachment_C*                 TriggeringAttachment                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_ItemList_Vertical_C::OnAttachmentItemHovered__DelegateSignature(class UW_LoadoutSlot_Attachment_C* TriggeringAttachment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnAttachmentItemHovered__DelegateSignature");
		
		UW_Loadout_ItemList_Vertical_C_OnAttachmentItemHovered__DelegateSignature_Params params {};
		params.TriggeringAttachment = TriggeringAttachment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnAttachmentItemClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      AttachingWeapon                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      AttachmentData                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_ItemList_Vertical_C::OnAttachmentItemClicked__DelegateSignature(class UClass* AttachingWeapon, class UClass* AttachmentData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnAttachmentItemClicked__DelegateSignature");
		
		UW_Loadout_ItemList_Vertical_C_OnAttachmentItemClicked__DelegateSignature_Params params {};
		params.AttachingWeapon = AttachingWeapon;
		params.AttachmentData = AttachmentData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnLoadoutItemDoubleClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_ItemList_Vertical_C::OnLoadoutItemDoubleClicked__DelegateSignature(class UClass* ItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnLoadoutItemDoubleClicked__DelegateSignature");
		
		UW_Loadout_ItemList_Vertical_C_OnLoadoutItemDoubleClicked__DelegateSignature_Params params {};
		params.ItemData = ItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnLoadoutItemClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_ItemList_Vertical_C::OnLoadoutItemClicked__DelegateSignature(class UClass* ItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnLoadoutItemClicked__DelegateSignature");
		
		UW_Loadout_ItemList_Vertical_C_OnLoadoutItemClicked__DelegateSignature_Params params {};
		params.ItemData = ItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_Loadout_ItemList_Vertical_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_Loadout_ItemList_Vertical_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C");
		return ptr;
	}

}


