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
	 * 		Name   -> Function PlayerStatEntry.PlayerStatEntry_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        DisplayName                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        ValueText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UTexture2D*                                  IconTexture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerStatEntry_C::Setup(const class FText& DisplayName, const class FText& ValueText, class UTexture2D* IconTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerStatEntry.PlayerStatEntry_C.Setup");
		
		UPlayerStatEntry_C_Setup_Params params {};
		params.DisplayName = DisplayName;
		params.ValueText = ValueText;
		params.IconTexture = IconTexture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerStatEntry.PlayerStatEntry_C.Refresh
	 * 		Flags  -> ()
	 */
	void UPlayerStatEntry_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerStatEntry.PlayerStatEntry_C.Refresh");
		
		UPlayerStatEntry_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerStatEntry.PlayerStatEntry_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerStatEntry_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerStatEntry.PlayerStatEntry_C.PreConstruct");
		
		UPlayerStatEntry_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerStatEntry.PlayerStatEntry_C.ExecuteUbergraph_PlayerStatEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerStatEntry_C::ExecuteUbergraph_PlayerStatEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerStatEntry.PlayerStatEntry_C.ExecuteUbergraph_PlayerStatEntry");
		
		UPlayerStatEntry_C_ExecuteUbergraph_PlayerStatEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerStatEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerStatEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerStatEntry.PlayerStatEntry_C");
		return ptr;
	}

}


