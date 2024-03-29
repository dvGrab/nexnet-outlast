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
	 * 		Name   -> Function RBGameInstance_BP.RBGameInstance_BP_C.TravelToMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Map                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void URBGameInstance_BP_C::TravelToMap(const class FString& Map)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBGameInstance_BP.RBGameInstance_BP_C.TravelToMap");
		
		URBGameInstance_BP_C_TravelToMap_Params params {};
		params.Map = Map;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBGameInstance_BP.RBGameInstance_BP_C.ExecuteUbergraph_RBGameInstance_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URBGameInstance_BP_C::ExecuteUbergraph_RBGameInstance_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBGameInstance_BP.RBGameInstance_BP_C.ExecuteUbergraph_RBGameInstance_BP");
		
		URBGameInstance_BP_C_ExecuteUbergraph_RBGameInstance_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URBGameInstance_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URBGameInstance_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RBGameInstance_BP.RBGameInstance_BP_C");
		return ptr;
	}

}


