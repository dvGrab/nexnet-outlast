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
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.IsInsideList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ItemSelection_ItemList_C::IsInsideList(bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.IsInsideList");
		
		UW_ItemSelection_ItemList_C_IsInsideList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.UpdateItemList
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemList_C::UpdateItemList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.UpdateItemList");
		
		UW_ItemSelection_ItemList_C_UpdateItemList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.SwapItemWithGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ItemSelection_ItemList_C::SwapItemWithGroup(int32_t ItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.SwapItemWithGroup");
		
		UW_ItemSelection_ItemList_C_SwapItemWithGroup_Params params {};
		params.ItemIndex = ItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.OnGrenadeThrown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseGrenade*                                ThrownGrenade                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ItemSelection_ItemList_C::OnGrenadeThrown(class ABaseGrenade* ThrownGrenade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.OnGrenadeThrown");
		
		UW_ItemSelection_ItemList_C_OnGrenadeThrown_Params params {};
		params.ThrownGrenade = ThrownGrenade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.HideArrow
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemList_C::HideArrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.HideArrow");
		
		UW_ItemSelection_ItemList_C_HideArrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.ShowArrow
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemList_C::ShowArrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.ShowArrow");
		
		UW_ItemSelection_ItemList_C_ShowArrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.RemoveItem (Index)
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ItemSelection_ItemList_C::RemoveItem_Index(int32_t ItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.RemoveItem (Index)");
		
		UW_ItemSelection_ItemList_C_RemoveItem_Index_Params params {};
		params.ItemIndex = ItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.RemoveItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   ItemToRemove                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bRemoveFromItems                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ItemSelection_ItemList_C::RemoveItem(class ABaseItem* ItemToRemove, bool bRemoveFromItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.RemoveItem");
		
		UW_ItemSelection_ItemList_C_RemoveItem_Params params {};
		params.ItemToRemove = ItemToRemove;
		params.bRemoveFromItems = bRemoveFromItems;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.FindDuplicateItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   InItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class ABaseItem*>                           Return_Value                                               (Parm, OutParm)
	 * 		TArray<class FString>                              Names                                                      (Parm, OutParm)
	 */
	void UW_ItemSelection_ItemList_C::FindDuplicateItems(class ABaseItem* InItem, TArray<class ABaseItem*>* Return_Value, TArray<class FString>* Names)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.FindDuplicateItems");
		
		UW_ItemSelection_ItemList_C_FindDuplicateItems_Params params {};
		params.InItem = InItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
		if (Names != nullptr)
			*Names = params.Names;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.ShowList
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemList_C::ShowList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.ShowList");
		
		UW_ItemSelection_ItemList_C_ShowList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.HideList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bPlaySound                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ItemSelection_ItemList_C::HideList(bool bPlaySound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.HideList");
		
		UW_ItemSelection_ItemList_C_HideList_Params params {};
		params.bPlaySound = bPlaySound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.CreateItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSwapping                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ItemSelection_ItemList_C::CreateItem(class ABaseItem* Item, int32_t Index, bool bSwapping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.CreateItem");
		
		UW_ItemSelection_ItemList_C_CreateItem_Params params {};
		params.Item = Item;
		params.Index = Index;
		params.bSwapping = bSwapping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.SwapItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            FromIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ToIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ItemSelection_ItemList_C::SwapItem(int32_t FromIndex, int32_t ToIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.SwapItem");
		
		UW_ItemSelection_ItemList_C_SwapItem_Params params {};
		params.FromIndex = FromIndex;
		params.ToIndex = ToIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.OnAnimFadeOutFinished
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemList_C::OnAnimFadeOutFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.OnAnimFadeOutFinished");
		
		UW_ItemSelection_ItemList_C_OnAnimFadeOutFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.OnAnimSelectFinished
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemList_C::OnAnimSelectFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.OnAnimSelectFinished");
		
		UW_ItemSelection_ItemList_C_OnAnimSelectFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.Focus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bForce                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ItemSelection_ItemList_C::Focus(bool bForce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.Focus");
		
		UW_ItemSelection_ItemList_C_Focus_Params params {};
		params.bForce = bForce;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.Unfocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bForce                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ItemSelection_ItemList_C::Unfocus(bool bForce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.Unfocus");
		
		UW_ItemSelection_ItemList_C_Unfocus_Params params {};
		params.bForce = bForce;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.EquipItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ItemEquipped                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ItemSelection_ItemList_C::EquipItem(bool* ItemEquipped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.EquipItem");
		
		UW_ItemSelection_ItemList_C_EquipItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemEquipped != nullptr)
			*ItemEquipped = params.ItemEquipped;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.ExecuteSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSoftSelection                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ItemSelection_ItemList_C::ExecuteSelection(bool bSoftSelection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.ExecuteSelection");
		
		UW_ItemSelection_ItemList_C_ExecuteSelection_Params params {};
		params.bSoftSelection = bSoftSelection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.GetSelectedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ItemSelection_ItemList_C::GetSelectedItem(class ABaseItem** Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.GetSelectedItem");
		
		UW_ItemSelection_ItemList_C_GetSelectedItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.FadeIn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFocusRequired                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ItemSelection_ItemList_C::FadeIn(bool bFocusRequired)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.FadeIn");
		
		UW_ItemSelection_ItemList_C_FadeIn_Params params {};
		params.bFocusRequired = bFocusRequired;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.FadeOut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFocusRequired                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ItemSelection_ItemList_C::FadeOut(bool bFocusRequired)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.FadeOut");
		
		UW_ItemSelection_ItemList_C_FadeOut_Params params {};
		params.bFocusRequired = bFocusRequired;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.Deselect
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemList_C::Deselect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.Deselect");
		
		UW_ItemSelection_ItemList_C_Deselect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.Select
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemList_C::Select()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.Select");
		
		UW_ItemSelection_ItemList_C_Select_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.Previous
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemList_C::Previous()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.Previous");
		
		UW_ItemSelection_ItemList_C_Previous_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.Next
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemList_C::Next()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.Next");
		
		UW_ItemSelection_ItemList_C_Next_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.PopulateList
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemList_C::PopulateList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.PopulateList");
		
		UW_ItemSelection_ItemList_C_PopulateList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.Initialize
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemList_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.Initialize");
		
		UW_ItemSelection_ItemList_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.Construct");
		
		UW_ItemSelection_ItemList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.OnInitialized
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemList_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.OnInitialized");
		
		UW_ItemSelection_ItemList_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.CustomEvent_1
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemList_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.CustomEvent_1");
		
		UW_ItemSelection_ItemList_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ItemSelection_ItemList_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.PreConstruct");
		
		UW_ItemSelection_ItemList_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.CustomEvent_2
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemList_C::CustomEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.CustomEvent_2");
		
		UW_ItemSelection_ItemList_C_CustomEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.ExecuteUbergraph_W_ItemSelection_ItemList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ItemSelection_ItemList_C::ExecuteUbergraph_W_ItemSelection_ItemList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.ExecuteUbergraph_W_ItemSelection_ItemList");
		
		UW_ItemSelection_ItemList_C_ExecuteUbergraph_W_ItemSelection_ItemList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_ItemSelection_ItemList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_ItemSelection_ItemList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_ItemSelection_ItemList.W_ItemSelection_ItemList_C");
		return ptr;
	}

}


