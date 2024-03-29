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
	 * 		Name   -> Function SimpleWall-01_BP.SimpleWall-01_BP_C.NewFunction_0_1
	 * 		Flags  -> ()
	 */
	void ASimpleWall__BP_C::NewFunction_0_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleWall-01_BP.SimpleWall-01_BP_C.NewFunction_0_1");
		
		ASimpleWall__BP_C_NewFunction_0_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleWall-01_BP.SimpleWall-01_BP_C.GetStateName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      stateA                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      stateB                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	bool ASimpleWall__BP_C::GetStateName(class FString* stateA, class FString* stateB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleWall-01_BP.SimpleWall-01_BP_C.GetStateName");
		
		ASimpleWall__BP_C_GetStateName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (stateA != nullptr)
			*stateA = params.stateA;
		if (stateB != nullptr)
			*stateB = params.stateB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleWall-01_BP.SimpleWall-01_BP_C.IsStateA
	 * 		Flags  -> ()
	 */
	bool ASimpleWall__BP_C::IsStateA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleWall-01_BP.SimpleWall-01_BP_C.IsStateA");
		
		ASimpleWall__BP_C_IsStateA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleWall-01_BP.SimpleWall-01_BP_C.setVariable
	 * 		Flags  -> ()
	 */
	void ASimpleWall__BP_C::setVariable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleWall-01_BP.SimpleWall-01_BP_C.setVariable");
		
		ASimpleWall__BP_C_setVariable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleWall-01_BP.SimpleWall-01_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ASimpleWall__BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleWall-01_BP.SimpleWall-01_BP_C.UserConstructionScript");
		
		ASimpleWall__BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASimpleWall__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASimpleWall__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SimpleWall_01_BP.SimpleWall-01_BP_C");
		return ptr;
	}

}


