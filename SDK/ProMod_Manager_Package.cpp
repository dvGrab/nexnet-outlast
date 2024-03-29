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
	 * 		Name   -> Function ProMod_Manager.ProMod_Manager_C.CreateConnections
	 * 		Flags  -> ()
	 */
	void AProMod_Manager_C::CreateConnections()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Manager.ProMod_Manager_C.CreateConnections");
		
		AProMod_Manager_C_CreateConnections_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Manager.ProMod_Manager_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AProMod_Manager_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Manager.ProMod_Manager_C.UserConstructionScript");
		
		AProMod_Manager_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProMod_Manager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProMod_Manager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProMod_Manager.ProMod_Manager_C");
		return ptr;
	}

}


