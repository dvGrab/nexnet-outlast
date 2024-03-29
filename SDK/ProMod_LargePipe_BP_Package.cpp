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
	 * 		Name   -> Function ProMod_LargePipe_BP.ProMod_LargePipe_BP_C.Colorize
	 * 		Flags  -> ()
	 */
	void AProMod_LargePipe_BP_C::Colorize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_LargePipe_BP.ProMod_LargePipe_BP_C.Colorize");
		
		AProMod_LargePipe_BP_C_Colorize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_LargePipe_BP.ProMod_LargePipe_BP_C.Connector
	 * 		Flags  -> ()
	 */
	void AProMod_LargePipe_BP_C::Connector()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_LargePipe_BP.ProMod_LargePipe_BP_C.Connector");
		
		AProMod_LargePipe_BP_C_Connector_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_LargePipe_BP.ProMod_LargePipe_BP_C.Valve
	 * 		Flags  -> ()
	 */
	void AProMod_LargePipe_BP_C::Valve()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_LargePipe_BP.ProMod_LargePipe_BP_C.Valve");
		
		AProMod_LargePipe_BP_C_Valve_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_LargePipe_BP.ProMod_LargePipe_BP_C.ApplyMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInterface*                          Material                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProMod_LargePipe_BP_C::ApplyMaterial(class UMaterialInterface* Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_LargePipe_BP.ProMod_LargePipe_BP_C.ApplyMaterial");
		
		AProMod_LargePipe_BP_C_ApplyMaterial_Params params {};
		params.Material = Material;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_LargePipe_BP.ProMod_LargePipe_BP_C.ExecuteUbergraph_ProMod_LargePipe_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProMod_LargePipe_BP_C::ExecuteUbergraph_ProMod_LargePipe_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_LargePipe_BP.ProMod_LargePipe_BP_C.ExecuteUbergraph_ProMod_LargePipe_BP");
		
		AProMod_LargePipe_BP_C_ExecuteUbergraph_ProMod_LargePipe_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProMod_LargePipe_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProMod_LargePipe_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProMod_LargePipe_BP.ProMod_LargePipe_BP_C");
		return ptr;
	}

}


