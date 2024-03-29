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
	 * 		Name   -> Function DestructibleWoodenDoor-01_BP.DestructibleWoodenDoor-01_BP_C.OnWoodenDoorDestroyed_0__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ADestructibleWoodenDoor__BP_C::OnWoodenDoorDestroyed_0__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DestructibleWoodenDoor-01_BP.DestructibleWoodenDoor-01_BP_C.OnWoodenDoorDestroyed_0__DelegateSignature");
		
		ADestructibleWoodenDoor__BP_C_OnWoodenDoorDestroyed_0__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DestructibleWoodenDoor-01_BP.DestructibleWoodenDoor-01_BP_C.OnWoodenDoorStrike_0__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ADestructibleWoodenDoor__BP_C::OnWoodenDoorStrike_0__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DestructibleWoodenDoor-01_BP.DestructibleWoodenDoor-01_BP_C.OnWoodenDoorStrike_0__DelegateSignature");
		
		ADestructibleWoodenDoor__BP_C_OnWoodenDoorStrike_0__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADestructibleWoodenDoor__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADestructibleWoodenDoor__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DestructibleWoodenDoor_01_BP.DestructibleWoodenDoor-01_BP_C");
		return ptr;
	}

}


