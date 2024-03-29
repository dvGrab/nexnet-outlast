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
	 * 		Name   -> Function IndustrialFan-01_BP.IndustrialFan-01_BP_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIndustrialFan__BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IndustrialFan-01_BP.IndustrialFan-01_BP_C.ReceiveTick");
		
		AIndustrialFan__BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IndustrialFan-01_BP.IndustrialFan-01_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AIndustrialFan__BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IndustrialFan-01_BP.IndustrialFan-01_BP_C.ReceiveBeginPlay");
		
		AIndustrialFan__BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IndustrialFan-01_BP.IndustrialFan-01_BP_C.ExecuteUbergraph_IndustrialFan-01_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIndustrialFan__BP_C::ExecuteUbergraph_IndustrialFan__BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IndustrialFan-01_BP.IndustrialFan-01_BP_C.ExecuteUbergraph_IndustrialFan-01_BP");
		
		AIndustrialFan__BP_C_ExecuteUbergraph_IndustrialFan__BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIndustrialFan__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIndustrialFan__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IndustrialFan_01_BP.IndustrialFan-01_BP_C");
		return ptr;
	}

}


