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
	 * 		Name   -> Function InGameMenuVariatorEntry.InGameMenuVariatorEntry_C.InitFromVariatorInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBVariatorInfo*                             variatorInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInGameMenuVariatorEntry_C::InitFromVariatorInfo(class URBVariatorInfo* variatorInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InGameMenuVariatorEntry.InGameMenuVariatorEntry_C.InitFromVariatorInfo");
		
		UInGameMenuVariatorEntry_C_InitFromVariatorInfo_Params params {};
		params.variatorInfo = variatorInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InGameMenuVariatorEntry.InGameMenuVariatorEntry_C.InitFromDifficulty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGameDifficulty                                    Difficulty                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInGameMenuVariatorEntry_C::InitFromDifficulty(EGameDifficulty Difficulty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InGameMenuVariatorEntry.InGameMenuVariatorEntry_C.InitFromDifficulty");
		
		UInGameMenuVariatorEntry_C_InitFromDifficulty_Params params {};
		params.Difficulty = Difficulty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InGameMenuVariatorEntry.InGameMenuVariatorEntry_C.Refresh
	 * 		Flags  -> ()
	 */
	void UInGameMenuVariatorEntry_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InGameMenuVariatorEntry.InGameMenuVariatorEntry_C.Refresh");
		
		UInGameMenuVariatorEntry_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InGameMenuVariatorEntry.InGameMenuVariatorEntry_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInGameMenuVariatorEntry_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InGameMenuVariatorEntry.InGameMenuVariatorEntry_C.PreConstruct");
		
		UInGameMenuVariatorEntry_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InGameMenuVariatorEntry.InGameMenuVariatorEntry_C.ExecuteUbergraph_InGameMenuVariatorEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInGameMenuVariatorEntry_C::ExecuteUbergraph_InGameMenuVariatorEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InGameMenuVariatorEntry.InGameMenuVariatorEntry_C.ExecuteUbergraph_InGameMenuVariatorEntry");
		
		UInGameMenuVariatorEntry_C_ExecuteUbergraph_InGameMenuVariatorEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InGameMenuVariatorEntry.InGameMenuVariatorEntry_C.OnAnimationCompleted__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UInGameMenuVariatorEntry_C::OnAnimationCompleted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InGameMenuVariatorEntry.InGameMenuVariatorEntry_C.OnAnimationCompleted__DelegateSignature");
		
		UInGameMenuVariatorEntry_C_OnAnimationCompleted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInGameMenuVariatorEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInGameMenuVariatorEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InGameMenuVariatorEntry.InGameMenuVariatorEntry_C");
		return ptr;
	}

}


