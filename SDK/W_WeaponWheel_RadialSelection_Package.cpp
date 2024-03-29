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
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.CreateIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateBrush                                 InBrush                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	class UImage* UW_WeaponWheel_RadialSelection_C::CreateIcon(const struct FSlateBrush& InBrush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.CreateIcon");
		
		UW_WeaponWheel_RadialSelection_C_CreateIcon_Params params {};
		params.InBrush = InBrush;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.RemoveNullItems (Internal)
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UObject*>                             ItemArray                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_WeaponWheel_RadialSelection_C::RemoveNullItems_Internal(TArray<class UObject*>* ItemArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.RemoveNullItems (Internal)");
		
		UW_WeaponWheel_RadialSelection_C_RemoveNullItems_Internal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemArray != nullptr)
			*ItemArray = params.ItemArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.RemoveNullItems
	 * 		Flags  -> ()
	 */
	void UW_WeaponWheel_RadialSelection_C::RemoveNullItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.RemoveNullItems");
		
		UW_WeaponWheel_RadialSelection_C_RemoveNullItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.IsInExecutablesArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_WeaponWheel_RadialSelection_C::IsInExecutablesArray(bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.IsInExecutablesArray");
		
		UW_WeaponWheel_RadialSelection_C_IsInExecutablesArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.RemoveExecutableItemFromCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWeaponWheelScript*                          WeaponWheelScript                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_RadialSelection_C::RemoveExecutableItemFromCategory(class UWeaponWheelScript* WeaponWheelScript)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.RemoveExecutableItemFromCategory");
		
		UW_WeaponWheel_RadialSelection_C_RemoveExecutableItemFromCategory_Params params {};
		params.WeaponWheelScript = WeaponWheelScript;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.AddExecutableItemToCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWeaponWheelScript*                          WeaponWheelScript                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AtIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_RadialSelection_C::AddExecutableItemToCategory(class UWeaponWheelScript* WeaponWheelScript, int32_t AtIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.AddExecutableItemToCategory");
		
		UW_WeaponWheel_RadialSelection_C_AddExecutableItemToCategory_Params params {};
		params.WeaponWheelScript = WeaponWheelScript;
		params.AtIndex = AtIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.ShuffleItems
	 * 		Flags  -> ()
	 */
	void UW_WeaponWheel_RadialSelection_C::ShuffleItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.ShuffleItems");
		
		UW_WeaponWheel_RadialSelection_C_ShuffleItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.ShiftItemToNewSpot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_RadialSelection_C::ShiftItemToNewSpot(class ABaseItem* Item, int32_t NewIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.ShiftItemToNewSpot");
		
		UW_WeaponWheel_RadialSelection_C_ShiftItemToNewSpot_Params params {};
		params.Item = Item;
		params.NewIndex = NewIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.MoveToBack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_RadialSelection_C::MoveToBack(class ABaseItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.MoveToBack");
		
		UW_WeaponWheel_RadialSelection_C_MoveToBack_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.MoveToFront
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_RadialSelection_C::MoveToFront(class ABaseItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.MoveToFront");
		
		UW_WeaponWheel_RadialSelection_C_MoveToFront_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.UpdateIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SelectionIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateBrush                                 InBrush                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_WeaponWheel_RadialSelection_C::UpdateIcon(int32_t SelectionIndex, const struct FSlateBrush& InBrush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.UpdateIcon");
		
		UW_WeaponWheel_RadialSelection_C_UpdateIcon_Params params {};
		params.SelectionIndex = SelectionIndex;
		params.InBrush = InBrush;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.Select
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_RadialSelection_C::Select(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.Select");
		
		UW_WeaponWheel_RadialSelection_C_Select_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.ExecuteRadial
	 * 		Flags  -> ()
	 */
	void UW_WeaponWheel_RadialSelection_C::ExecuteRadial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.ExecuteRadial");
		
		UW_WeaponWheel_RadialSelection_C_ExecuteRadial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.OnDeselected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Play_Animation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_WeaponWheel_RadialSelection_C::OnDeselected(bool Play_Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.OnDeselected");
		
		UW_WeaponWheel_RadialSelection_C_OnDeselected_Params params {};
		params.Play_Animation = Play_Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.OnSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Play_Animation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_WeaponWheel_RadialSelection_C::OnSelected(bool Play_Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.OnSelected");
		
		UW_WeaponWheel_RadialSelection_C_OnSelected_Params params {};
		params.Play_Animation = Play_Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.Previous
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_WeaponWheel_RadialSelection_C::Previous(bool* bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.Previous");
		
		UW_WeaponWheel_RadialSelection_C_Previous_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.Next
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_WeaponWheel_RadialSelection_C::Next(bool* bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.Next");
		
		UW_WeaponWheel_RadialSelection_C_Next_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.RemoveItemFromCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   Item                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_RadialSelection_C::RemoveItemFromCategory(class ABaseItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.RemoveItemFromCategory");
		
		UW_WeaponWheel_RadialSelection_C_RemoveItemFromCategory_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.AddItemToCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   NewItem                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AtIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_RadialSelection_C::AddItemToCategory(class ABaseItem* NewItem, int32_t AtIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.AddItemToCategory");
		
		UW_WeaponWheel_RadialSelection_C_AddItemToCategory_Params params {};
		params.NewItem = NewItem;
		params.AtIndex = AtIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.IsEquipping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEquipping                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_WeaponWheel_RadialSelection_C::IsEquipping(bool* IsEquipping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.IsEquipping");
		
		UW_WeaponWheel_RadialSelection_C_IsEquipping_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsEquipping != nullptr)
			*IsEquipping = params.IsEquipping;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.GetItemName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Item_Name                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_RadialSelection_C::GetItemName(class FName* Item_Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.GetItemName");
		
		UW_WeaponWheel_RadialSelection_C_GetItemName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Item_Name != nullptr)
			*Item_Name = params.Item_Name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.GetCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Category                                                   (Parm, OutParm)
	 */
	void UW_WeaponWheel_RadialSelection_C::GetCategory(class FText* Category)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.GetCategory");
		
		UW_WeaponWheel_RadialSelection_C_GetCategory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Category != nullptr)
			*Category = params.Category;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_WeaponWheel_RadialSelection_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.PreConstruct");
		
		UW_WeaponWheel_RadialSelection_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.On Wheel Created
	 * 		Flags  -> ()
	 */
	void UW_WeaponWheel_RadialSelection_C::On_Wheel_Created()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.On Wheel Created");
		
		UW_WeaponWheel_RadialSelection_C_On_Wheel_Created_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.ExecuteUbergraph_W_WeaponWheel_RadialSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_WeaponWheel_RadialSelection_C::ExecuteUbergraph_W_WeaponWheel_RadialSelection(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.ExecuteUbergraph_W_WeaponWheel_RadialSelection");
		
		UW_WeaponWheel_RadialSelection_C_ExecuteUbergraph_W_WeaponWheel_RadialSelection_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_WeaponWheel_RadialSelection_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_WeaponWheel_RadialSelection_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C");
		return ptr;
	}

}


