/**
 * Name: OUTLAST
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
	 * 		Name   -> Function RBMainMenuGameMode_BP.RBMainMenuGameMode_BP_C.SetCheckRequiredXP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CheckRequiredXP                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARBMainMenuGameMode_BP_C::SetCheckRequiredXP(bool CheckRequiredXP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBMainMenuGameMode_BP.RBMainMenuGameMode_BP_C.SetCheckRequiredXP");
		
		ARBMainMenuGameMode_BP_C_SetCheckRequiredXP_Params params {};
		params.CheckRequiredXP = CheckRequiredXP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBMainMenuGameMode_BP.RBMainMenuGameMode_BP_C.CheckRequiredXPChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CheckRequiredXP                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARBMainMenuGameMode_BP_C::CheckRequiredXPChanged__DelegateSignature(bool CheckRequiredXP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBMainMenuGameMode_BP.RBMainMenuGameMode_BP_C.CheckRequiredXPChanged__DelegateSignature");
		
		ARBMainMenuGameMode_BP_C_CheckRequiredXPChanged__DelegateSignature_Params params {};
		params.CheckRequiredXP = CheckRequiredXP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARBMainMenuGameMode_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARBMainMenuGameMode_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RBMainMenuGameMode_BP.RBMainMenuGameMode_BP_C");
		return ptr;
	}

}


