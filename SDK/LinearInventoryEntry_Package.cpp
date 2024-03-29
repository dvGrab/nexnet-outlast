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
	 * 		Name   -> Function LinearInventoryEntry.LinearInventoryEntry_C.ShouldShow
	 * 		Flags  -> ()
	 */
	bool ULinearInventoryEntry_C::ShouldShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LinearInventoryEntry.LinearInventoryEntry_C.ShouldShow");
		
		ULinearInventoryEntry_C_ShouldShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LinearInventoryEntry.LinearInventoryEntry_C.UpdateSwapIconVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Swap                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULinearInventoryEntry_C::UpdateSwapIconVisibility(bool Swap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LinearInventoryEntry.LinearInventoryEntry_C.UpdateSwapIconVisibility");
		
		ULinearInventoryEntry_C_UpdateSwapIconVisibility_Params params {};
		params.Swap = Swap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LinearInventoryEntry.LinearInventoryEntry_C.UpdateSpecialColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                SpecialColor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULinearInventoryEntry_C::UpdateSpecialColor(const struct FLinearColor& SpecialColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LinearInventoryEntry.LinearInventoryEntry_C.UpdateSpecialColor");
		
		ULinearInventoryEntry_C_UpdateSpecialColor_Params params {};
		params.SpecialColor = SpecialColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LinearInventoryEntry.LinearInventoryEntry_C.UpdatePrompt
	 * 		Flags  -> ()
	 */
	void ULinearInventoryEntry_C::UpdatePrompt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LinearInventoryEntry.LinearInventoryEntry_C.UpdatePrompt");
		
		ULinearInventoryEntry_C_UpdatePrompt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LinearInventoryEntry.LinearInventoryEntry_C.UpdateInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUILinearInventoryItem                      itemInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ULinearInventoryEntry_C::UpdateInfo(const struct FUILinearInventoryItem& itemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LinearInventoryEntry.LinearInventoryEntry_C.UpdateInfo");
		
		ULinearInventoryEntry_C_UpdateInfo_Params params {};
		params.itemInfo = itemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LinearInventoryEntry.LinearInventoryEntry_C.SetSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULinearInventoryEntry_C::SetSelected(bool IsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LinearInventoryEntry.LinearInventoryEntry_C.SetSelected");
		
		ULinearInventoryEntry_C_SetSelected_Params params {};
		params.IsSelected = IsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LinearInventoryEntry.LinearInventoryEntry_C.Init
	 * 		Flags  -> ()
	 */
	void ULinearInventoryEntry_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LinearInventoryEntry.LinearInventoryEntry_C.Init");
		
		ULinearInventoryEntry_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LinearInventoryEntry.LinearInventoryEntry_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULinearInventoryEntry_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LinearInventoryEntry.LinearInventoryEntry_C.PreConstruct");
		
		ULinearInventoryEntry_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LinearInventoryEntry.LinearInventoryEntry_C.Construct
	 * 		Flags  -> ()
	 */
	void ULinearInventoryEntry_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LinearInventoryEntry.LinearInventoryEntry_C.Construct");
		
		ULinearInventoryEntry_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LinearInventoryEntry.LinearInventoryEntry_C.Event_InputSourceChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsGamepad                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULinearInventoryEntry_C::Event_InputSourceChanged(bool bIsGamepad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LinearInventoryEntry.LinearInventoryEntry_C.Event_InputSourceChanged");
		
		ULinearInventoryEntry_C_Event_InputSourceChanged_Params params {};
		params.bIsGamepad = bIsGamepad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LinearInventoryEntry.LinearInventoryEntry_C.ExecuteUbergraph_LinearInventoryEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULinearInventoryEntry_C::ExecuteUbergraph_LinearInventoryEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LinearInventoryEntry.LinearInventoryEntry_C.ExecuteUbergraph_LinearInventoryEntry");
		
		ULinearInventoryEntry_C_ExecuteUbergraph_LinearInventoryEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULinearInventoryEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULinearInventoryEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LinearInventoryEntry.LinearInventoryEntry_C");
		return ptr;
	}

}


