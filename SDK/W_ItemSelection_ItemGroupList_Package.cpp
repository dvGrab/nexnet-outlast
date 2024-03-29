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
	 * 		Name   -> Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.UpdateKeybinds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FItemSelectionGroup>                 InItemGroups                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_ItemSelection_ItemGroupList_C::UpdateKeybinds(TArray<struct FItemSelectionGroup>* InItemGroups)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.UpdateKeybinds");
		
		UW_ItemSelection_ItemGroupList_C_UpdateKeybinds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InItemGroups != nullptr)
			*InItemGroups = params.InItemGroups;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.IsInsideList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ItemSelection_ItemGroupList_C::IsInsideList(bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.IsInsideList");
		
		UW_ItemSelection_ItemGroupList_C_IsInsideList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.SplitItemList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSplit                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ItemSelection_ItemGroupList_C::SplitItemList(bool bSplit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.SplitItemList");
		
		UW_ItemSelection_ItemGroupList_C_SplitItemList_Params params {};
		params.bSplit = bSplit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.Event_UnfocusAll
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemGroupList_C::Event_UnfocusAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.Event_UnfocusAll");
		
		UW_ItemSelection_ItemGroupList_C_Event_UnfocusAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.Event_FocusAll
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemGroupList_C::Event_FocusAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.Event_FocusAll");
		
		UW_ItemSelection_ItemGroupList_C_Event_FocusAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.FadeOutOverview
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemGroupList_C::FadeOutOverview()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.FadeOutOverview");
		
		UW_ItemSelection_ItemGroupList_C_FadeOutOverview_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.FadeInOverview
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemGroupList_C::FadeInOverview()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.FadeInOverview");
		
		UW_ItemSelection_ItemGroupList_C_FadeInOverview_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.FadeOutMagCount
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemGroupList_C::FadeOutMagCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.FadeOutMagCount");
		
		UW_ItemSelection_ItemGroupList_C_FadeOutMagCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.FadeInMagCount
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemGroupList_C::FadeInMagCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.FadeInMagCount");
		
		UW_ItemSelection_ItemGroupList_C_FadeInMagCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.UnfocusAll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bForce                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ItemSelection_ItemGroupList_C::UnfocusAll(bool bForce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.UnfocusAll");
		
		UW_ItemSelection_ItemGroupList_C_UnfocusAll_Params params {};
		params.bForce = bForce;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.FadeOutAllItemLists
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemGroupList_C::FadeOutAllItemLists()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.FadeOutAllItemLists");
		
		UW_ItemSelection_ItemGroupList_C_FadeOutAllItemLists_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.FadeInAllItemLists
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemGroupList_C::FadeInAllItemLists()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.FadeInAllItemLists");
		
		UW_ItemSelection_ItemGroupList_C_FadeInAllItemLists_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.OnInputReleased
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemGroupList_C::OnInputReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.OnInputReleased");
		
		UW_ItemSelection_ItemGroupList_C_OnInputReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.FocusAll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bForce                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ItemSelection_ItemGroupList_C::FocusAll(bool bForce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.FocusAll");
		
		UW_ItemSelection_ItemGroupList_C_FocusAll_Params params {};
		params.bForce = bForce;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.GetListAtColumnIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_ItemSelection_ItemList_C*                 Return_Value                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ItemSelection_ItemGroupList_C::GetListAtColumnIndex(int32_t Index, class UW_ItemSelection_ItemList_C** Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.GetListAtColumnIndex");
		
		UW_ItemSelection_ItemGroupList_C_GetListAtColumnIndex_Params params {};
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
	 * 		Name   -> Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FItemSelectionGroup>                 InItemGroupArray                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_ItemSelection_ItemGroupList_C::Initialize(TArray<struct FItemSelectionGroup>* InItemGroupArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.Initialize");
		
		UW_ItemSelection_ItemGroupList_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InItemGroupArray != nullptr)
			*InItemGroupArray = params.InItemGroupArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.Previous
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemGroupList_C::Previous()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.Previous");
		
		UW_ItemSelection_ItemGroupList_C_Previous_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.Next
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemGroupList_C::Next()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.Next");
		
		UW_ItemSelection_ItemGroupList_C_Next_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.CreateNewItemList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ABaseItem*>                           Items                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_ItemSelection_ItemList_C*                 Return_Value                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ItemSelection_ItemGroupList_C::CreateNewItemList(TArray<class ABaseItem*>* Items, int32_t Index, class UW_ItemSelection_ItemList_C** Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.CreateNewItemList");
		
		UW_ItemSelection_ItemGroupList_C_CreateNewItemList_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Items != nullptr)
			*Items = params.Items;
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.SelectColumn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ItemSelection_ItemGroupList_C::SelectColumn(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.SelectColumn");
		
		UW_ItemSelection_ItemGroupList_C_SelectColumn_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemGroupList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.Construct");
		
		UW_ItemSelection_ItemGroupList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.OnNightVisionGogglesToggled_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNVGOn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ItemSelection_ItemGroupList_C::OnNightVisionGogglesToggled_Event_1(bool bNVGOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.OnNightVisionGogglesToggled_Event_1");
		
		UW_ItemSelection_ItemGroupList_C_OnNightVisionGogglesToggled_Event_1_Params params {};
		params.bNVGOn = bNVGOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.OnInitialized
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemGroupList_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.OnInitialized");
		
		UW_ItemSelection_ItemGroupList_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.ExecuteUbergraph_W_ItemSelection_ItemGroupList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ItemSelection_ItemGroupList_C::ExecuteUbergraph_W_ItemSelection_ItemGroupList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.ExecuteUbergraph_W_ItemSelection_ItemGroupList");
		
		UW_ItemSelection_ItemGroupList_C_ExecuteUbergraph_W_ItemSelection_ItemGroupList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_ItemSelection_ItemGroupList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_ItemSelection_ItemGroupList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C");
		return ptr;
	}

}


