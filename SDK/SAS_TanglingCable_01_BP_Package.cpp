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
	 * 		Name   -> Function SAS_TanglingCable-01_BP.SAS_TanglingCable-01_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ASAS_TanglingCable__BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SAS_TanglingCable-01_BP.SAS_TanglingCable-01_BP_C.UserConstructionScript");
		
		ASAS_TanglingCable__BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SAS_TanglingCable-01_BP.SAS_TanglingCable-01_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ASAS_TanglingCable__BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SAS_TanglingCable-01_BP.SAS_TanglingCable-01_BP_C.ReceiveBeginPlay");
		
		ASAS_TanglingCable__BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SAS_TanglingCable-01_BP.SAS_TanglingCable-01_BP_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASAS_TanglingCable__BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SAS_TanglingCable-01_BP.SAS_TanglingCable-01_BP_C.ReceiveTick");
		
		ASAS_TanglingCable__BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SAS_TanglingCable-01_BP.SAS_TanglingCable-01_BP_C.ExecuteUbergraph_SAS_TanglingCable-01_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASAS_TanglingCable__BP_C::ExecuteUbergraph_SAS_TanglingCable__BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SAS_TanglingCable-01_BP.SAS_TanglingCable-01_BP_C.ExecuteUbergraph_SAS_TanglingCable-01_BP");
		
		ASAS_TanglingCable__BP_C_ExecuteUbergraph_SAS_TanglingCable__BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASAS_TanglingCable__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASAS_TanglingCable__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SAS_TanglingCable_01_BP.SAS_TanglingCable-01_BP_C");
		return ptr;
	}

}


