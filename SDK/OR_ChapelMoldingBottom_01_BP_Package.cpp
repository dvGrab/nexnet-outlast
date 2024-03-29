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
	 * 		Name   -> Function OR_ChapelMoldingBottom-01_BP.OR_ChapelMoldingBottom-01_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AOR_ChapelMoldingBottom__BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OR_ChapelMoldingBottom-01_BP.OR_ChapelMoldingBottom-01_BP_C.UserConstructionScript");
		
		AOR_ChapelMoldingBottom__BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AOR_ChapelMoldingBottom__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOR_ChapelMoldingBottom__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OR_ChapelMoldingBottom_01_BP.OR_ChapelMoldingBottom-01_BP_C");
		return ptr;
	}

}


