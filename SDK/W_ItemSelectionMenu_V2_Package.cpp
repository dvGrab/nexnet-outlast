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
	 * 		Name   -> Function W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C.ConfirmSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ItemSelectionMenu_V2_C::ConfirmSelection(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C.ConfirmSelection");
		
		UW_ItemSelectionMenu_V2_C_ConfirmSelection_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C.SelectCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ItemSelectionMenu_V2_C::SelectCategory(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C.SelectCategory");
		
		UW_ItemSelectionMenu_V2_C_SelectCategory_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C.Update Menu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FItemSelectionGroup>                 InItemGroups                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_ItemSelectionMenu_V2_C::Update_Menu(TArray<struct FItemSelectionGroup>* InItemGroups)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C.Update Menu");
		
		UW_ItemSelectionMenu_V2_C_Update_Menu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InItemGroups != nullptr)
			*InItemGroups = params.InItemGroups;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C.CloseMenu
	 * 		Flags  -> ()
	 */
	void UW_ItemSelectionMenu_V2_C::CloseMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C.CloseMenu");
		
		UW_ItemSelectionMenu_V2_C_CloseMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C.OpenMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ItemSelectionMenu_V2_C::OpenMenu(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C.OpenMenu");
		
		UW_ItemSelectionMenu_V2_C_OpenMenu_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bForce                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FItemSelectionGroup>                 InItemSelectionGroups                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_ItemSelectionMenu_V2_C::Initialize(bool bForce, TArray<struct FItemSelectionGroup> InItemSelectionGroups)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C.Initialize");
		
		UW_ItemSelectionMenu_V2_C_Initialize_Params params {};
		params.bForce = bForce;
		params.InItemSelectionGroups = InItemSelectionGroups;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C.ExecuteUbergraph_W_ItemSelectionMenu_V2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ItemSelectionMenu_V2_C::ExecuteUbergraph_W_ItemSelectionMenu_V2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C.ExecuteUbergraph_W_ItemSelectionMenu_V2");
		
		UW_ItemSelectionMenu_V2_C_ExecuteUbergraph_W_ItemSelectionMenu_V2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C.OnMenuOpened__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_ItemSelectionMenu_V2_C::OnMenuOpened__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C.OnMenuOpened__DelegateSignature");
		
		UW_ItemSelectionMenu_V2_C_OnMenuOpened__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_ItemSelectionMenu_V2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_ItemSelectionMenu_V2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C");
		return ptr;
	}

}


