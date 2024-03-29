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
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.RemoveNullItemsFromAllCategories
	 * 		Flags  -> ()
	 */
	bool UW_WeaponWheel_C::RemoveNullItemsFromAllCategories()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.RemoveNullItemsFromAllCategories");
		
		UW_WeaponWheel_C_RemoveNullItemsFromAllCategories_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.RemoveNullItemsFromCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        WeaponWheelCategoryName                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UW_WeaponWheel_C::RemoveNullItemsFromCategory(const class FName& WeaponWheelCategoryName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.RemoveNullItemsFromCategory");
		
		UW_WeaponWheel_C_RemoveNullItemsFromCategory_Params params {};
		params.WeaponWheelCategoryName = WeaponWheelCategoryName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.IsItemAtBack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_WeaponWheel_C::IsItemAtBack(class ABaseItem* Item, bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.IsItemAtBack");
		
		UW_WeaponWheel_C_IsItemAtBack_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.IsItemAtFront
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_WeaponWheel_C::IsItemAtFront(class ABaseItem* Item, bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.IsItemAtFront");
		
		UW_WeaponWheel_C_IsItemAtFront_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.IsItemAtIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_WeaponWheel_C::IsItemAtIndex(class ABaseItem* Item, int32_t Index, bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.IsItemAtIndex");
		
		UW_WeaponWheel_C_IsItemAtIndex_Params params {};
		params.Item = Item;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.ClearStats
	 * 		Flags  -> ()
	 */
	void UW_WeaponWheel_C::ClearStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.ClearStats");
		
		UW_WeaponWheel_C_ClearStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.UpdateDebugInformation
	 * 		Flags  -> ()
	 */
	void UW_WeaponWheel_C::UpdateDebugInformation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.UpdateDebugInformation");
		
		UW_WeaponWheel_C_UpdateDebugInformation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.RemoveExecutableItemFromCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      NewWeaponWheelScript                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AtIndex                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_C::RemoveExecutableItemFromCategory(class UClass* NewWeaponWheelScript, int32_t AtIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.RemoveExecutableItemFromCategory");
		
		UW_WeaponWheel_C_RemoveExecutableItemFromCategory_Params params {};
		params.NewWeaponWheelScript = NewWeaponWheelScript;
		params.AtIndex = AtIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.AddExecutableItemToCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      NewWeaponWheelScript                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AtIndex                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_C::AddExecutableItemToCategory(class UClass* NewWeaponWheelScript, int32_t AtIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.AddExecutableItemToCategory");
		
		UW_WeaponWheel_C_AddExecutableItemToCategory_Params params {};
		params.NewWeaponWheelScript = NewWeaponWheelScript;
		params.AtIndex = AtIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.ShuffleItemsInCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        CategoryName                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_C::ShuffleItemsInCategory(const class FName& CategoryName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.ShuffleItemsInCategory");
		
		UW_WeaponWheel_C_ShuffleItemsInCategory_Params params {};
		params.CategoryName = CategoryName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.GetCurrentICategorytemCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_C::GetCurrentICategorytemCount(int32_t* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.GetCurrentICategorytemCount");
		
		UW_WeaponWheel_C_GetCurrentICategorytemCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.GetCurrentItemSelectionIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_C::GetCurrentItemSelectionIndex(int32_t* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.GetCurrentItemSelectionIndex");
		
		UW_WeaponWheel_C_GetCurrentItemSelectionIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.MoveItemToAnotherCategory (Index)
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        FromCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ToCategory                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewIndexInCategory                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_C::MoveItemToAnotherCategory_Index(int32_t ItemIndex, const class FName& FromCategory, const class FName& ToCategory, int32_t NewIndexInCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.MoveItemToAnotherCategory (Index)");
		
		UW_WeaponWheel_C_MoveItemToAnotherCategory_Index_Params params {};
		params.ItemIndex = ItemIndex;
		params.FromCategory = FromCategory;
		params.ToCategory = ToCategory;
		params.NewIndexInCategory = NewIndexInCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.MoveItemToAnotherCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ToCategory                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewIndexInCategory                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_C::MoveItemToAnotherCategory(class ABaseItem* Item, const class FName& ToCategory, int32_t NewIndexInCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.MoveItemToAnotherCategory");
		
		UW_WeaponWheel_C_MoveItemToAnotherCategory_Params params {};
		params.Item = Item;
		params.ToCategory = ToCategory;
		params.NewIndexInCategory = NewIndexInCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.MoveItemToNewSpot (Index)
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        CategoryName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_C::MoveItemToNewSpot_Index(int32_t ItemIndex, const class FName& CategoryName, int32_t NewIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.MoveItemToNewSpot (Index)");
		
		UW_WeaponWheel_C_MoveItemToNewSpot_Index_Params params {};
		params.ItemIndex = ItemIndex;
		params.CategoryName = CategoryName;
		params.NewIndex = NewIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.MoveItemToNewSpot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_C::MoveItemToNewSpot(class ABaseItem* Item, int32_t NewIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.MoveItemToNewSpot");
		
		UW_WeaponWheel_C_MoveItemToNewSpot_Params params {};
		params.Item = Item;
		params.NewIndex = NewIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.MoveItemToBack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_C::MoveItemToBack(class ABaseItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.MoveItemToBack");
		
		UW_WeaponWheel_C_MoveItemToBack_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.MoveItemToFront
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_C::MoveItemToFront(class ABaseItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.MoveItemToFront");
		
		UW_WeaponWheel_C_MoveItemToFront_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.MoveItemToBack (Index)
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        CategoryName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_C::MoveItemToBack_Index(int32_t ItemIndex, const class FName& CategoryName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.MoveItemToBack (Index)");
		
		UW_WeaponWheel_C_MoveItemToBack_Index_Params params {};
		params.ItemIndex = ItemIndex;
		params.CategoryName = CategoryName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.MoveItemToFront (Index)
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        CategoryName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_C::MoveItemToFront_Index(int32_t ItemIndex, const class FName& CategoryName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.MoveItemToFront (Index)");
		
		UW_WeaponWheel_C_MoveItemToFront_Index_Params params {};
		params.ItemIndex = ItemIndex;
		params.CategoryName = CategoryName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.RemoveAssistant
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   AssistantItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_C::RemoveAssistant(class ABaseItem* AssistantItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.RemoveAssistant");
		
		UW_WeaponWheel_C_RemoveAssistant_Params params {};
		params.AssistantItem = AssistantItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.RemoveTabletDevice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   TabletDeviceItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_C::RemoveTabletDevice(class ABaseItem* TabletDeviceItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.RemoveTabletDevice");
		
		UW_WeaponWheel_C_RemoveTabletDevice_Params params {};
		params.TabletDeviceItem = TabletDeviceItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.RemoveTactical Devices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   DoorDeviceItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_C::RemoveTactical_Devices(class ABaseItem* DoorDeviceItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.RemoveTactical Devices");
		
		UW_WeaponWheel_C_RemoveTactical_Devices_Params params {};
		params.DoorDeviceItem = DoorDeviceItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.RemoveGrenade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   GrenadeItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_C::RemoveGrenade(class ABaseItem* GrenadeItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.RemoveGrenade");
		
		UW_WeaponWheel_C_RemoveGrenade_Params params {};
		params.GrenadeItem = GrenadeItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.RemoveSecondaryWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   SecondaryWeaponItem                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_C::RemoveSecondaryWeapon(class ABaseItem* SecondaryWeaponItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.RemoveSecondaryWeapon");
		
		UW_WeaponWheel_C_RemoveSecondaryWeapon_Params params {};
		params.SecondaryWeaponItem = SecondaryWeaponItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.RemovePrimaryWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   PrimaryWeaponItem                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_C::RemovePrimaryWeapon(class ABaseItem* PrimaryWeaponItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.RemovePrimaryWeapon");
		
		UW_WeaponWheel_C_RemovePrimaryWeapon_Params params {};
		params.PrimaryWeaponItem = PrimaryWeaponItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.RemoveItemFromCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   Item                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Wheel_Category                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_C::RemoveItemFromCategory(class ABaseItem* Item, const class FName& Wheel_Category)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.RemoveItemFromCategory");
		
		UW_WeaponWheel_C_RemoveItemFromCategory_Params params {};
		params.Item = Item;
		params.Wheel_Category = Wheel_Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.AddItemToCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   Item                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Wheel_Category                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_C::AddItemToCategory(class ABaseItem* Item, const class FName& Wheel_Category)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.AddItemToCategory");
		
		UW_WeaponWheel_C_AddItemToCategory_Params params {};
		params.Item = Item;
		params.Wheel_Category = Wheel_Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.AddTabletDevice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   TabletDevice_Item                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_C::AddTabletDevice(class ABaseItem* TabletDevice_Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.AddTabletDevice");
		
		UW_WeaponWheel_C_AddTabletDevice_Params params {};
		params.TabletDevice_Item = TabletDevice_Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.AddTactical Device
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   Tactical_Device_Item                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_C::AddTactical_Device(class ABaseItem* Tactical_Device_Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.AddTactical Device");
		
		UW_WeaponWheel_C_AddTactical_Device_Params params {};
		params.Tactical_Device_Item = Tactical_Device_Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.AddAssistants
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   Assistants                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_C::AddAssistants(class ABaseItem* Assistants)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.AddAssistants");
		
		UW_WeaponWheel_C_AddAssistants_Params params {};
		params.Assistants = Assistants;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.AddGrenade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   GrenadeItem                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_C::AddGrenade(class ABaseItem* GrenadeItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.AddGrenade");
		
		UW_WeaponWheel_C_AddGrenade_Params params {};
		params.GrenadeItem = GrenadeItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.AddSecondaryWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   SecondayWeaponItem                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_C::AddSecondaryWeapon(class ABaseItem* SecondayWeaponItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.AddSecondaryWeapon");
		
		UW_WeaponWheel_C_AddSecondaryWeapon_Params params {};
		params.SecondayWeaponItem = SecondayWeaponItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.AddPrimaryWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   PrimaryWeaponItem                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_C::AddPrimaryWeapon(class ABaseItem* PrimaryWeaponItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.AddPrimaryWeapon");
		
		UW_WeaponWheel_C_AddPrimaryWeapon_Params params {};
		params.PrimaryWeaponItem = PrimaryWeaponItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.RefreshMultiItemWidget
	 * 		Flags  -> ()
	 */
	void UW_WeaponWheel_C::RefreshMultiItemWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.RefreshMultiItemWidget");
		
		UW_WeaponWheel_C_RefreshMultiItemWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.IsWheelCursorVisible
	 * 		Flags  -> ()
	 */
	bool UW_WeaponWheel_C::IsWheelCursorVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.IsWheelCursorVisible");
		
		UW_WeaponWheel_C_IsWheelCursorVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.OnRadialMenuInitialized
	 * 		Flags  -> ()
	 */
	bool UW_WeaponWheel_C::OnRadialMenuInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.OnRadialMenuInitialized");
		
		UW_WeaponWheel_C_OnRadialMenuInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.OnRadialSectorCreated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InAngle                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UW_WeaponWheel_C::OnRadialSectorCreated(int32_t Index, float InAngle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.OnRadialSectorCreated");
		
		UW_WeaponWheel_C_OnRadialSectorCreated_Params params {};
		params.Index = Index;
		params.InAngle = InAngle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.ExecuteRadial
	 * 		Flags  -> ()
	 */
	bool UW_WeaponWheel_C::ExecuteRadial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.ExecuteRadial");
		
		UW_WeaponWheel_C_ExecuteRadial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.ShowWheel
	 * 		Flags  -> ()
	 */
	bool UW_WeaponWheel_C::ShowWheel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.ShowWheel");
		
		UW_WeaponWheel_C_ShowWheel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.HideWheel
	 * 		Flags  -> ()
	 */
	bool UW_WeaponWheel_C::HideWheel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.HideWheel");
		
		UW_WeaponWheel_C_HideWheel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.NotifyAllStatsOnWheelCreated
	 * 		Flags  -> ()
	 */
	void UW_WeaponWheel_C::NotifyAllStatsOnWheelCreated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.NotifyAllStatsOnWheelCreated");
		
		UW_WeaponWheel_C_NotifyAllStatsOnWheelCreated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.NotifyAllCategoriesOnWheelCreated
	 * 		Flags  -> ()
	 */
	void UW_WeaponWheel_C::NotifyAllCategoriesOnWheelCreated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.NotifyAllCategoriesOnWheelCreated");
		
		UW_WeaponWheel_C_NotifyAllCategoriesOnWheelCreated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.FindDataTableRowNameFromItemName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        RowName                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_C::FindDataTableRowNameFromItemName(const class FName& ItemName, class FName* RowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.FindDataTableRowNameFromItemName");
		
		UW_WeaponWheel_C_FindDataTableRowNameFromItemName_Params params {};
		params.ItemName = ItemName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RowName != nullptr)
			*RowName = params.RowName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.StatEnumToName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      Item_Stat                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Stat_Name                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_C::StatEnumToName(unsigned char Item_Stat, class FName* Stat_Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.StatEnumToName");
		
		UW_WeaponWheel_C_StatEnumToName_Params params {};
		params.Item_Stat = Item_Stat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Stat_Name != nullptr)
			*Stat_Name = params.Stat_Name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.RefreshStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UClass*>                              ItemStats                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FItemLookupTable                            ItemDataTable                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_WeaponWheel_C::RefreshStats(TArray<class UClass*>* ItemStats, const struct FItemLookupTable& ItemDataTable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.RefreshStats");
		
		UW_WeaponWheel_C_RefreshStats_Params params {};
		params.ItemDataTable = ItemDataTable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemStats != nullptr)
			*ItemStats = params.ItemStats;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.RefreshCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ABaseItem*>                           New_Category_Items                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class UWeaponWheelScript*>                  NewWeaponWheelScripts                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FName                                        Category_Name                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StartingItemIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_C::RefreshCategory(TArray<class ABaseItem*>* New_Category_Items, TArray<class UWeaponWheelScript*>* NewWeaponWheelScripts, const class FName& Category_Name, int32_t StartingItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.RefreshCategory");
		
		UW_WeaponWheel_C_RefreshCategory_Params params {};
		params.Category_Name = Category_Name;
		params.StartingItemIndex = StartingItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (New_Category_Items != nullptr)
			*New_Category_Items = params.New_Category_Items;
		if (NewWeaponWheelScripts != nullptr)
			*NewWeaponWheelScripts = params.NewWeaponWheelScripts;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.UpdateTabletDevices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ABaseItem*>                           NewTabletDevices                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            StartingItemIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_C::UpdateTabletDevices(TArray<class ABaseItem*>* NewTabletDevices, int32_t StartingItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.UpdateTabletDevices");
		
		UW_WeaponWheel_C_UpdateTabletDevices_Params params {};
		params.StartingItemIndex = StartingItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewTabletDevices != nullptr)
			*NewTabletDevices = params.NewTabletDevices;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.UpdateTacticalDevices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ABaseItem*>                           NewDoorDevices                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            StartingItemIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_C::UpdateTacticalDevices(TArray<class ABaseItem*>* NewDoorDevices, int32_t StartingItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.UpdateTacticalDevices");
		
		UW_WeaponWheel_C_UpdateTacticalDevices_Params params {};
		params.StartingItemIndex = StartingItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewDoorDevices != nullptr)
			*NewDoorDevices = params.NewDoorDevices;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.UpdateAssistants
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ABaseItem*>                           NewAssistants                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            StartingItemIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_C::UpdateAssistants(TArray<class ABaseItem*>* NewAssistants, int32_t StartingItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.UpdateAssistants");
		
		UW_WeaponWheel_C_UpdateAssistants_Params params {};
		params.StartingItemIndex = StartingItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewAssistants != nullptr)
			*NewAssistants = params.NewAssistants;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.UpdateGrenades
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ABaseItem*>                           NewGrenades                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            StartingItemIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_C::UpdateGrenades(TArray<class ABaseItem*>* NewGrenades, int32_t StartingItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.UpdateGrenades");
		
		UW_WeaponWheel_C_UpdateGrenades_Params params {};
		params.StartingItemIndex = StartingItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewGrenades != nullptr)
			*NewGrenades = params.NewGrenades;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.UpdateSecondaryWeapons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ABaseItem*>                           NewSecondaryWeapons                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            StartingItemIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_C::UpdateSecondaryWeapons(TArray<class ABaseItem*>* NewSecondaryWeapons, int32_t StartingItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.UpdateSecondaryWeapons");
		
		UW_WeaponWheel_C_UpdateSecondaryWeapons_Params params {};
		params.StartingItemIndex = StartingItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewSecondaryWeapons != nullptr)
			*NewSecondaryWeapons = params.NewSecondaryWeapons;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.UpdatePrimaryWeapons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ABaseItem*>                           New_Primary_Weapons                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            StartingItemIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_C::UpdatePrimaryWeapons(TArray<class ABaseItem*>* New_Primary_Weapons, int32_t StartingItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.UpdatePrimaryWeapons");
		
		UW_WeaponWheel_C_UpdatePrimaryWeapons_Params params {};
		params.StartingItemIndex = StartingItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (New_Primary_Weapons != nullptr)
			*New_Primary_Weapons = params.New_Primary_Weapons;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.PreviousItem
	 * 		Flags  -> ()
	 */
	void UW_WeaponWheel_C::PreviousItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.PreviousItem");
		
		UW_WeaponWheel_C_PreviousItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.NextItem
	 * 		Flags  -> ()
	 */
	void UW_WeaponWheel_C::NextItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.NextItem");
		
		UW_WeaponWheel_C_NextItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.PopulateAllCategories
	 * 		Flags  -> ()
	 */
	void UW_WeaponWheel_C::PopulateAllCategories()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.PopulateAllCategories");
		
		UW_WeaponWheel_C_PopulateAllCategories_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.PopulateCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ABaseItem*>                           Items                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FName                                        Category_Name                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_C::PopulateCategory(TArray<class ABaseItem*>* Items, const class FName& Category_Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.PopulateCategory");
		
		UW_WeaponWheel_C_PopulateCategory_Params params {};
		params.Category_Name = Category_Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Items != nullptr)
			*Items = params.Items;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.PlaceWidgetInWheel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCanvasPanelSlot*                            Canvas_Slot                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCoreUObject_FVector2D                      Positionn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_C::PlaceWidgetInWheel(class UCanvasPanelSlot** Canvas_Slot, const struct FCoreUObject_FVector2D& Positionn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.PlaceWidgetInWheel");
		
		UW_WeaponWheel_C_PlaceWidgetInWheel_Params params {};
		params.Positionn = Positionn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Canvas_Slot != nullptr)
			*Canvas_Slot = params.Canvas_Slot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.SelectItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_WeaponWheel_RadialSelection_C*            ItemToSelect                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Play_Animation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Play_Sound                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Refresh_Stats                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_WeaponWheel_C::SelectItem(class UW_WeaponWheel_RadialSelection_C* ItemToSelect, bool Play_Animation, bool Play_Sound, bool Refresh_Stats, bool* bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.SelectItem");
		
		UW_WeaponWheel_C_SelectItem_Params params {};
		params.ItemToSelect = ItemToSelect;
		params.Play_Animation = Play_Animation;
		params.Play_Sound = Play_Sound;
		params.Refresh_Stats = Refresh_Stats;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.CreateWheelStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ItemStatClass                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FillSpeed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EEasingFunc                                        EasingFunction                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FItemLookupTable                            LookupTable                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UW_WeaponWheel_ItemStat_C*                   ItemStatWidget                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_C::CreateWheelStat(class UClass* ItemStatClass, float FillSpeed, EEasingFunc EasingFunction, const struct FItemLookupTable& LookupTable, class UW_WeaponWheel_ItemStat_C** ItemStatWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.CreateWheelStat");
		
		UW_WeaponWheel_C_CreateWheelStat_Params params {};
		params.ItemStatClass = ItemStatClass;
		params.FillSpeed = FillSpeed;
		params.EasingFunction = EasingFunction;
		params.LookupTable = LookupTable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemStatWidget != nullptr)
			*ItemStatWidget = params.ItemStatWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.CreateWheelCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Category_Name                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCanvasPanelSlot*                            Canvas_Panel_Slot                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_C::CreateWheelCategory(int32_t Index, const class FName& Category_Name, class UCanvasPanelSlot** Canvas_Panel_Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.CreateWheelCategory");
		
		UW_WeaponWheel_C_CreateWheelCategory_Params params {};
		params.Index = Index;
		params.Category_Name = Category_Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Canvas_Panel_Slot != nullptr)
			*Canvas_Panel_Slot = params.Canvas_Panel_Slot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_WeaponWheel_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.Construct");
		
		UW_WeaponWheel_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.Tick");
		
		UW_WeaponWheel_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.OnItemSelcted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Play_Animation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_WeaponWheel_C::OnItemSelcted(bool Play_Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.OnItemSelcted");
		
		UW_WeaponWheel_C_OnItemSelcted_Params params {};
		params.Play_Animation = Play_Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.OnItemDeselected
	 * 		Flags  -> ()
	 */
	void UW_WeaponWheel_C::OnItemDeselected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.OnItemDeselected");
		
		UW_WeaponWheel_C_OnItemDeselected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.OnSectorSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SelectedIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_C::OnSectorSelected(int32_t SelectedIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.OnSectorSelected");
		
		UW_WeaponWheel_C_OnSectorSelected_Params params {};
		params.SelectedIndex = SelectedIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.OnSectorDeselected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            DeselectedIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_C::OnSectorDeselected(int32_t DeselectedIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.OnSectorDeselected");
		
		UW_WeaponWheel_C_OnSectorDeselected_Params params {};
		params.DeselectedIndex = DeselectedIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.OnRadialMenuCreated
	 * 		Flags  -> ()
	 */
	void UW_WeaponWheel_C::OnRadialMenuCreated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.OnRadialMenuCreated");
		
		UW_WeaponWheel_C_OnRadialMenuCreated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_WeaponWheel_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.PreConstruct");
		
		UW_WeaponWheel_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.ExecuteUbergraph_W_WeaponWheel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_C::ExecuteUbergraph_W_WeaponWheel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.ExecuteUbergraph_W_WeaponWheel");
		
		UW_WeaponWheel_C_ExecuteUbergraph_W_WeaponWheel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.ItemDeselected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Category_Index                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Category_Name                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Item_Index                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Item_Name                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_C::ItemDeselected__DelegateSignature(int32_t Category_Index, const class FName& Category_Name, int32_t Item_Index, const class FName& Item_Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.ItemDeselected__DelegateSignature");
		
		UW_WeaponWheel_C_ItemDeselected__DelegateSignature_Params params {};
		params.Category_Index = Category_Index;
		params.Category_Name = Category_Name;
		params.Item_Index = Item_Index;
		params.Item_Name = Item_Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.ItemSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Category_Index                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Category_Name                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Item_Index                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Item_Name                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_C::ItemSelected__DelegateSignature(int32_t Category_Index, const class FName& Category_Name, int32_t Item_Index, const class FName& Item_Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.ItemSelected__DelegateSignature");
		
		UW_WeaponWheel_C_ItemSelected__DelegateSignature_Params params {};
		params.Category_Index = Category_Index;
		params.Category_Name = Category_Name;
		params.Item_Index = Item_Index;
		params.Item_Name = Item_Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.CategorySelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Category_Index                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Category_Name                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_C::CategorySelected__DelegateSignature(int32_t Category_Index, const class FName& Category_Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.CategorySelected__DelegateSignature");
		
		UW_WeaponWheel_C_CategorySelected__DelegateSignature_Params params {};
		params.Category_Index = Category_Index;
		params.Category_Name = Category_Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.CategoryDeselected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Category_Index                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Category_Name                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_C::CategoryDeselected__DelegateSignature(int32_t Category_Index, const class FName& Category_Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel.W_WeaponWheel_C.CategoryDeselected__DelegateSignature");
		
		UW_WeaponWheel_C_CategoryDeselected__DelegateSignature_Params params {};
		params.Category_Index = Category_Index;
		params.Category_Name = Category_Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_WeaponWheel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_WeaponWheel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_WeaponWheel.W_WeaponWheel_C");
		return ptr;
	}

}


