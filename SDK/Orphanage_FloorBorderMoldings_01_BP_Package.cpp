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
	 * 		Name   -> Function Orphanage_FloorBorderMoldings-01_BP.Orphanage_FloorBorderMoldings-01_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AOrphanage_FloorBorderMoldings__BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Orphanage_FloorBorderMoldings-01_BP.Orphanage_FloorBorderMoldings-01_BP_C.UserConstructionScript");
		
		AOrphanage_FloorBorderMoldings__BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AOrphanage_FloorBorderMoldings__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOrphanage_FloorBorderMoldings__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Orphanage_FloorBorderMoldings_01_BP.Orphanage_FloorBorderMoldings-01_BP_C");
		return ptr;
	}

}


