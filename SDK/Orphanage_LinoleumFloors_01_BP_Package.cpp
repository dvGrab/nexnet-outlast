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
	 * 		Name   -> Function Orphanage_LinoleumFloors-01_BP.Orphanage_LinoleumFloors-01_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AOrphanage_LinoleumFloors__BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Orphanage_LinoleumFloors-01_BP.Orphanage_LinoleumFloors-01_BP_C.UserConstructionScript");
		
		AOrphanage_LinoleumFloors__BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AOrphanage_LinoleumFloors__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOrphanage_LinoleumFloors__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Orphanage_LinoleumFloors_01_BP.Orphanage_LinoleumFloors-01_BP_C");
		return ptr;
	}

}


