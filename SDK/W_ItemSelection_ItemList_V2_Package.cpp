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
	 * 		Name   -> Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.FadeOut
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemList_V2_C::FadeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.FadeOut");
		
		UW_ItemSelection_ItemList_V2_C_FadeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.FadeOutAll
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemList_V2_C::FadeOutAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.FadeOutAll");
		
		UW_ItemSelection_ItemList_V2_C_FadeOutAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.FadeOutAllExcept
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ItemSelection_ItemList_V2_C::FadeOutAllExcept(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.FadeOutAllExcept");
		
		UW_ItemSelection_ItemList_V2_C_FadeOutAllExcept_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.Unfocus
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemList_V2_C::Unfocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.Unfocus");
		
		UW_ItemSelection_ItemList_V2_C_Unfocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.Focus
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemList_V2_C::Focus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.Focus");
		
		UW_ItemSelection_ItemList_V2_C_Focus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.HideList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bPlaySound                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ItemSelection_ItemList_V2_C::HideList(bool bPlaySound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.HideList");
		
		UW_ItemSelection_ItemList_V2_C_HideList_Params params {};
		params.bPlaySound = bPlaySound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.ShowList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bPlaySound                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ItemSelection_ItemList_V2_C::ShowList(bool bPlaySound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.ShowList");
		
		UW_ItemSelection_ItemList_V2_C_ShowList_Params params {};
		params.bPlaySound = bPlaySound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.OnAnimSelectFinished
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemList_V2_C::OnAnimSelectFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.OnAnimSelectFinished");
		
		UW_ItemSelection_ItemList_V2_C_OnAnimSelectFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.ConfirmSelection
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemList_V2_C::ConfirmSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.ConfirmSelection");
		
		UW_ItemSelection_ItemList_V2_C_ConfirmSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.Select
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ItemSelection_ItemList_V2_C::Select(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.Select");
		
		UW_ItemSelection_ItemList_V2_C_Select_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.CreateItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemCategory                                      InItemCategory                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABaseItem*                                   InItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ItemSelection_ItemList_V2_C::CreateItem(EItemCategory InItemCategory, class ABaseItem* InItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.CreateItem");
		
		UW_ItemSelection_ItemList_V2_C_CreateItem_Params params {};
		params.InItemCategory = InItemCategory;
		params.InItem = InItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.PopulateList
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemList_V2_C::PopulateList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.PopulateList");
		
		UW_ItemSelection_ItemList_V2_C_PopulateList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.Initialize
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemList_V2_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.Initialize");
		
		UW_ItemSelection_ItemList_V2_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ItemSelection_ItemList_V2_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.PreConstruct");
		
		UW_ItemSelection_ItemList_V2_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.ExecuteUbergraph_W_ItemSelection_ItemList_V2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ItemSelection_ItemList_V2_C::ExecuteUbergraph_W_ItemSelection_ItemList_V2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.ExecuteUbergraph_W_ItemSelection_ItemList_V2");
		
		UW_ItemSelection_ItemList_V2_C_ExecuteUbergraph_W_ItemSelection_ItemList_V2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_ItemSelection_ItemList_V2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_ItemSelection_ItemList_V2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C");
		return ptr;
	}

}


