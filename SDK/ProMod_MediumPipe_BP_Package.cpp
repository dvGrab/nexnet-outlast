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
	 * 		Name   -> Function ProMod_MediumPipe_BP.ProMod_MediumPipe_BP_C.Colorize
	 * 		Flags  -> ()
	 */
	void AProMod_MediumPipe_BP_C::Colorize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_MediumPipe_BP.ProMod_MediumPipe_BP_C.Colorize");
		
		AProMod_MediumPipe_BP_C_Colorize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_MediumPipe_BP.ProMod_MediumPipe_BP_C.Y-2
	 * 		Flags  -> ()
	 */
	void AProMod_MediumPipe_BP_C::Y()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_MediumPipe_BP.ProMod_MediumPipe_BP_C.Y-2");
		
		AProMod_MediumPipe_BP_C_Y_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_MediumPipe_BP.ProMod_MediumPipe_BP_C.Y-1
	 * 		Flags  -> ()
	 */
	void AProMod_MediumPipe_BP_C::Y()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_MediumPipe_BP.ProMod_MediumPipe_BP_C.Y-1");
		
		AProMod_MediumPipe_BP_C_Y_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_MediumPipe_BP.ProMod_MediumPipe_BP_C.Connector
	 * 		Flags  -> ()
	 */
	void AProMod_MediumPipe_BP_C::Connector()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_MediumPipe_BP.ProMod_MediumPipe_BP_C.Connector");
		
		AProMod_MediumPipe_BP_C_Connector_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_MediumPipe_BP.ProMod_MediumPipe_BP_C.Valve
	 * 		Flags  -> ()
	 */
	void AProMod_MediumPipe_BP_C::Valve()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_MediumPipe_BP.ProMod_MediumPipe_BP_C.Valve");
		
		AProMod_MediumPipe_BP_C_Valve_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProMod_MediumPipe_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProMod_MediumPipe_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProMod_MediumPipe_BP.ProMod_MediumPipe_BP_C");
		return ptr;
	}

}


