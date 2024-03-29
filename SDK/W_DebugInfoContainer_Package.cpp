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
	 * 		Name   -> Function W_DebugInfoContainer.W_DebugInfoContainer_C.GetTitle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Return_Value                                               (Parm, OutParm)
	 */
	void UW_DebugInfoContainer_C::GetTitle(class FText* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_DebugInfoContainer.W_DebugInfoContainer_C.GetTitle");
		
		UW_DebugInfoContainer_C_GetTitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DebugInfoContainer.W_DebugInfoContainer_C.SetDebugItemValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        DebugText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_DebugInfoContainer_C::SetDebugItemValue(int32_t Index, const class FText& DebugText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_DebugInfoContainer.W_DebugInfoContainer_C.SetDebugItemValue");
		
		UW_DebugInfoContainer_C_SetDebugItemValue_Params params {};
		params.Index = Index;
		params.DebugText = DebugText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DebugInfoContainer.W_DebugInfoContainer_C.AddDebugItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Num                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_DebugInfoContainer_C::AddDebugItems(int32_t Num)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_DebugInfoContainer.W_DebugInfoContainer_C.AddDebugItems");
		
		UW_DebugInfoContainer_C_AddDebugItems_Params params {};
		params.Num = Num;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DebugInfoContainer.W_DebugInfoContainer_C.AddDebugItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Label                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_DebugInfoContainer_C::AddDebugItem(const class FText& Label, const class FText& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_DebugInfoContainer.W_DebugInfoContainer_C.AddDebugItem");
		
		UW_DebugInfoContainer_C_AddDebugItem_Params params {};
		params.Label = Label;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DebugInfoContainer.W_DebugInfoContainer_C.Clear
	 * 		Flags  -> ()
	 */
	void UW_DebugInfoContainer_C::Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_DebugInfoContainer.W_DebugInfoContainer_C.Clear");
		
		UW_DebugInfoContainer_C_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DebugInfoContainer.W_DebugInfoContainer_C.Refresh
	 * 		Flags  -> ()
	 */
	void UW_DebugInfoContainer_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_DebugInfoContainer.W_DebugInfoContainer_C.Refresh");
		
		UW_DebugInfoContainer_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DebugInfoContainer.W_DebugInfoContainer_C.GetNumDebugEntries
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_DebugInfoContainer_C::GetNumDebugEntries(int32_t* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_DebugInfoContainer.W_DebugInfoContainer_C.GetNumDebugEntries");
		
		UW_DebugInfoContainer_C_GetNumDebugEntries_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DebugInfoContainer.W_DebugInfoContainer_C.Get Debug Item (Name)
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Debug_Name                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UW_DebugInfo_C*                              DebugInfoWidget                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_DebugInfoContainer_C::Get_Debug_Item_Name(const class FText& Debug_Name, class UW_DebugInfo_C** DebugInfoWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_DebugInfoContainer.W_DebugInfoContainer_C.Get Debug Item (Name)");
		
		UW_DebugInfoContainer_C_Get_Debug_Item_Name_Params params {};
		params.Debug_Name = Debug_Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DebugInfoWidget != nullptr)
			*DebugInfoWidget = params.DebugInfoWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DebugInfoContainer.W_DebugInfoContainer_C.Get Debug Item (Index)
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_DebugInfo_C*                              DebugInfoWidget                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_DebugInfoContainer_C::Get_Debug_Item_Index(int32_t Index, class UW_DebugInfo_C** DebugInfoWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_DebugInfoContainer.W_DebugInfoContainer_C.Get Debug Item (Index)");
		
		UW_DebugInfoContainer_C_Get_Debug_Item_Index_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DebugInfoWidget != nullptr)
			*DebugInfoWidget = params.DebugInfoWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DebugInfoContainer.W_DebugInfoContainer_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_DebugInfoContainer_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_DebugInfoContainer.W_DebugInfoContainer_C.PreConstruct");
		
		UW_DebugInfoContainer_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DebugInfoContainer.W_DebugInfoContainer_C.ExecuteUbergraph_W_DebugInfoContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_DebugInfoContainer_C::ExecuteUbergraph_W_DebugInfoContainer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_DebugInfoContainer.W_DebugInfoContainer_C.ExecuteUbergraph_W_DebugInfoContainer");
		
		UW_DebugInfoContainer_C_ExecuteUbergraph_W_DebugInfoContainer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_DebugInfoContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_DebugInfoContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_DebugInfoContainer.W_DebugInfoContainer_C");
		return ptr;
	}

}


