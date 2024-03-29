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
	 * 		Name   -> Function RewardDetailLineEntry.RewardDetailLineEntry_C.Setup
	 * 		Flags  -> ()
	 */
	void URewardDetailLineEntry_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardDetailLineEntry.RewardDetailLineEntry_C.Setup");
		
		URewardDetailLineEntry_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RewardDetailLineEntry.RewardDetailLineEntry_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        DetailText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            Xp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            cash                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsMaxLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URewardDetailLineEntry_C::Init(const class FText& DetailText, int32_t Xp, int32_t cash, bool bIsMaxLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardDetailLineEntry.RewardDetailLineEntry_C.Init");
		
		URewardDetailLineEntry_C_Init_Params params {};
		params.DetailText = DetailText;
		params.Xp = Xp;
		params.cash = cash;
		params.bIsMaxLevel = bIsMaxLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RewardDetailLineEntry.RewardDetailLineEntry_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URewardDetailLineEntry_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardDetailLineEntry.RewardDetailLineEntry_C.PreConstruct");
		
		URewardDetailLineEntry_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RewardDetailLineEntry.RewardDetailLineEntry_C.ExecuteUbergraph_RewardDetailLineEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URewardDetailLineEntry_C::ExecuteUbergraph_RewardDetailLineEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardDetailLineEntry.RewardDetailLineEntry_C.ExecuteUbergraph_RewardDetailLineEntry");
		
		URewardDetailLineEntry_C_ExecuteUbergraph_RewardDetailLineEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URewardDetailLineEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URewardDetailLineEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RewardDetailLineEntry.RewardDetailLineEntry_C");
		return ptr;
	}

}


