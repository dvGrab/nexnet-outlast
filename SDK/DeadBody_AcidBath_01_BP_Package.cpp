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
	 * 		Name   -> Function DeadBody_AcidBath-01_BP.DeadBody_AcidBath-01_BP_C.SetDisolveValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DisolveValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Z                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADeadBody_AcidBath__BP_C::SetDisolveValue(float DisolveValue, float Z)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeadBody_AcidBath-01_BP.DeadBody_AcidBath-01_BP_C.SetDisolveValue");
		
		ADeadBody_AcidBath__BP_C_SetDisolveValue_Params params {};
		params.DisolveValue = DisolveValue;
		params.Z = Z;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DeadBody_AcidBath-01_BP.DeadBody_AcidBath-01_BP_C.ExecuteUbergraph_DeadBody_AcidBath-01_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADeadBody_AcidBath__BP_C::ExecuteUbergraph_DeadBody_AcidBath__BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeadBody_AcidBath-01_BP.DeadBody_AcidBath-01_BP_C.ExecuteUbergraph_DeadBody_AcidBath-01_BP");
		
		ADeadBody_AcidBath__BP_C_ExecuteUbergraph_DeadBody_AcidBath__BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADeadBody_AcidBath__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADeadBody_AcidBath__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DeadBody_AcidBath_01_BP.DeadBody_AcidBath-01_BP_C");
		return ptr;
	}

}


