/**
 * Name: OUTLAST
 * Version: 0.0.2_fixed
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
	 * 		Name   -> Function DeadBody_Floor-05_Burned_BP.DeadBody_Floor-05_Burned_BP_C.SetCollisions_1
	 * 		Flags  -> ()
	 */
	void ADeadBody_Floor05_Burned_BP_C::SetCollisions_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeadBody_Floor-05_Burned_BP.DeadBody_Floor-05_Burned_BP_C.SetCollisions_1");
		
		ADeadBody_Floor05_Burned_BP_C_SetCollisions_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DeadBody_Floor-05_Burned_BP.DeadBody_Floor-05_Burned_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ADeadBody_Floor05_Burned_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeadBody_Floor-05_Burned_BP.DeadBody_Floor-05_Burned_BP_C.UserConstructionScript");
		
		ADeadBody_Floor05_Burned_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADeadBody_Floor05_Burned_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADeadBody_Floor05_Burned_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DeadBody_Floor_05_Burned_BP.DeadBody_Floor-05_Burned_BP_C");
		return ptr;
	}

}


