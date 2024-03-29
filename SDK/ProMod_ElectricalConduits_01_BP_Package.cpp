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
	 * 		Name   -> Function ProMod_ElectricalConduits-01_BP.ProMod_ElectricalConduits-01_BP_C.WallConnector
	 * 		Flags  -> ()
	 */
	void AProMod_ElectricalConduits__BP_C::WallConnector()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_ElectricalConduits-01_BP.ProMod_ElectricalConduits-01_BP_C.WallConnector");
		
		AProMod_ElectricalConduits__BP_C_WallConnector_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_ElectricalConduits-01_BP.ProMod_ElectricalConduits-01_BP_C.Plug
	 * 		Flags  -> ()
	 */
	void AProMod_ElectricalConduits__BP_C::Plug()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_ElectricalConduits-01_BP.ProMod_ElectricalConduits-01_BP_C.Plug");
		
		AProMod_ElectricalConduits__BP_C_Plug_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProMod_ElectricalConduits__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProMod_ElectricalConduits__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProMod_ElectricalConduits_01_BP.ProMod_ElectricalConduits-01_BP_C");
		return ptr;
	}

}


