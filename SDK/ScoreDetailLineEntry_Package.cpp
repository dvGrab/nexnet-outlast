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
	 * 		Name   -> Function ScoreDetailLineEntry.ScoreDetailLineEntry_C.Show
	 * 		Flags  -> ()
	 */
	void UScoreDetailLineEntry_C::Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoreDetailLineEntry.ScoreDetailLineEntry_C.Show");
		
		UScoreDetailLineEntry_C_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScoreDetailLineEntry.ScoreDetailLineEntry_C.Setup
	 * 		Flags  -> ()
	 */
	void UScoreDetailLineEntry_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoreDetailLineEntry.ScoreDetailLineEntry_C.Setup");
		
		UScoreDetailLineEntry_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScoreDetailLineEntry.ScoreDetailLineEntry_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               bPositive                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bStartVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UScoreDetailLineEntry_C::Init(const class FText& Name, const class FText& Value, bool bPositive, bool bStartVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoreDetailLineEntry.ScoreDetailLineEntry_C.Init");
		
		UScoreDetailLineEntry_C_Init_Params params {};
		params.Name = Name;
		params.Value = Value;
		params.bPositive = bPositive;
		params.bStartVisible = bStartVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScoreDetailLineEntry.ScoreDetailLineEntry_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UScoreDetailLineEntry_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoreDetailLineEntry.ScoreDetailLineEntry_C.PreConstruct");
		
		UScoreDetailLineEntry_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScoreDetailLineEntry.ScoreDetailLineEntry_C.ExecuteUbergraph_ScoreDetailLineEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScoreDetailLineEntry_C::ExecuteUbergraph_ScoreDetailLineEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoreDetailLineEntry.ScoreDetailLineEntry_C.ExecuteUbergraph_ScoreDetailLineEntry");
		
		UScoreDetailLineEntry_C_ExecuteUbergraph_ScoreDetailLineEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScoreDetailLineEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScoreDetailLineEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ScoreDetailLineEntry.ScoreDetailLineEntry_C");
		return ptr;
	}

}


