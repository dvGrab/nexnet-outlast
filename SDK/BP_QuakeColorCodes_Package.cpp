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
	 * 		Name   -> Function BP_QuakeColorCodes.BP_QuakeColorCodes_C.Quake_ConvertColorCodes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      StrIn                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      StrOut                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_QuakeColorCodes_C::Quake_ConvertColorCodes(const class FString& StrIn, class UObject* __WorldContext, class FString* StrOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_QuakeColorCodes.BP_QuakeColorCodes_C.Quake_ConvertColorCodes");
		
		UBP_QuakeColorCodes_C_Quake_ConvertColorCodes_Params params {};
		params.StrIn = StrIn;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StrOut != nullptr)
			*StrOut = params.StrOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_QuakeColorCodes_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_QuakeColorCodes_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_QuakeColorCodes.BP_QuakeColorCodes_C");
		return ptr;
	}

}


