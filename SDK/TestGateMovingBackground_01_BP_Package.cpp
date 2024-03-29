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
	 * 		Name   -> Function TestGateMovingBackground-01_BP.TestGateMovingBackground-01_BP_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ATestGateMovingBackground__BP_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateMovingBackground-01_BP.TestGateMovingBackground-01_BP_C.Timeline_0__FinishedFunc");
		
		ATestGateMovingBackground__BP_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateMovingBackground-01_BP.TestGateMovingBackground-01_BP_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ATestGateMovingBackground__BP_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateMovingBackground-01_BP.TestGateMovingBackground-01_BP_C.Timeline_0__UpdateFunc");
		
		ATestGateMovingBackground__BP_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateMovingBackground-01_BP.TestGateMovingBackground-01_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ATestGateMovingBackground__BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateMovingBackground-01_BP.TestGateMovingBackground-01_BP_C.ReceiveBeginPlay");
		
		ATestGateMovingBackground__BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateMovingBackground-01_BP.TestGateMovingBackground-01_BP_C.ExecuteUbergraph_TestGateMovingBackground-01_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATestGateMovingBackground__BP_C::ExecuteUbergraph_TestGateMovingBackground__BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateMovingBackground-01_BP.TestGateMovingBackground-01_BP_C.ExecuteUbergraph_TestGateMovingBackground-01_BP");
		
		ATestGateMovingBackground__BP_C_ExecuteUbergraph_TestGateMovingBackground__BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATestGateMovingBackground__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATestGateMovingBackground__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TestGateMovingBackground_01_BP.TestGateMovingBackground-01_BP_C");
		return ptr;
	}

}


