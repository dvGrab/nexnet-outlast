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
	 * 		Name   -> Function W_ItemSelection_ItemGroupList_V2.W_ItemSelection_ItemGroupList_V2_C.Get List At Index
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_ItemSelection_ItemList_V2_C*              Return_Value                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ItemSelection_ItemGroupList_V2_C::Get_List_At_Index(int32_t Index, class UW_ItemSelection_ItemList_V2_C** Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroupList_V2.W_ItemSelection_ItemGroupList_V2_C.Get List At Index");
		
		UW_ItemSelection_ItemGroupList_V2_C_Get_List_At_Index_Params params {};
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
	 * 		Name   -> Function W_ItemSelection_ItemGroupList_V2.W_ItemSelection_ItemGroupList_V2_C.ResetAnimationState
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemGroupList_V2_C::ResetAnimationState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroupList_V2.W_ItemSelection_ItemGroupList_V2_C.ResetAnimationState");
		
		UW_ItemSelection_ItemGroupList_V2_C_ResetAnimationState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroupList_V2.W_ItemSelection_ItemGroupList_V2_C.FadeOutAllExcept
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ItemSelection_ItemGroupList_V2_C::FadeOutAllExcept(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroupList_V2.W_ItemSelection_ItemGroupList_V2_C.FadeOutAllExcept");
		
		UW_ItemSelection_ItemGroupList_V2_C_FadeOutAllExcept_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroupList_V2.W_ItemSelection_ItemGroupList_V2_C.UpdateKeybinds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FItemSelectionGroup>                 InItemGroups                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_ItemSelection_ItemGroupList_V2_C::UpdateKeybinds(TArray<struct FItemSelectionGroup>* InItemGroups)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroupList_V2.W_ItemSelection_ItemGroupList_V2_C.UpdateKeybinds");
		
		UW_ItemSelection_ItemGroupList_V2_C_UpdateKeybinds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InItemGroups != nullptr)
			*InItemGroups = params.InItemGroups;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroupList_V2.W_ItemSelection_ItemGroupList_V2_C.SelectCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            GroupIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CategoryIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ItemSelection_ItemGroupList_V2_C::SelectCategory(int32_t GroupIndex, int32_t CategoryIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroupList_V2.W_ItemSelection_ItemGroupList_V2_C.SelectCategory");
		
		UW_ItemSelection_ItemGroupList_V2_C_SelectCategory_Params params {};
		params.GroupIndex = GroupIndex;
		params.CategoryIndex = CategoryIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroupList_V2.W_ItemSelection_ItemGroupList_V2_C.SelectList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ItemSelection_ItemGroupList_V2_C::SelectList(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroupList_V2.W_ItemSelection_ItemGroupList_V2_C.SelectList");
		
		UW_ItemSelection_ItemGroupList_V2_C_SelectList_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroupList_V2.W_ItemSelection_ItemGroupList_V2_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FItemSelectionGroup>                 InItemGroupArray                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_ItemSelection_ItemGroupList_V2_C::Initialize(TArray<struct FItemSelectionGroup>* InItemGroupArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroupList_V2.W_ItemSelection_ItemGroupList_V2_C.Initialize");
		
		UW_ItemSelection_ItemGroupList_V2_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InItemGroupArray != nullptr)
			*InItemGroupArray = params.InItemGroupArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_ItemSelection_ItemGroupList_V2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_ItemSelection_ItemGroupList_V2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_ItemSelection_ItemGroupList_V2.W_ItemSelection_ItemGroupList_V2_C");
		return ptr;
	}

}


