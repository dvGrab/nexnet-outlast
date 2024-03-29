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
	 * 		Name   -> Function DoubleDoorBlockingPlanks_Destructible_BP.DoubleDoorBlockingPlanks_Destructible_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ADoubleDoorBlockingPlanks_Destructible_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoubleDoorBlockingPlanks_Destructible_BP.DoubleDoorBlockingPlanks_Destructible_BP_C.ReceiveBeginPlay");
		
		ADoubleDoorBlockingPlanks_Destructible_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DoubleDoorBlockingPlanks_Destructible_BP.DoubleDoorBlockingPlanks_Destructible_BP_C.ExecuteUbergraph_DoubleDoorBlockingPlanks_Destructible_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADoubleDoorBlockingPlanks_Destructible_BP_C::ExecuteUbergraph_DoubleDoorBlockingPlanks_Destructible_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoubleDoorBlockingPlanks_Destructible_BP.DoubleDoorBlockingPlanks_Destructible_BP_C.ExecuteUbergraph_DoubleDoorBlockingPlanks_Destructible_BP");
		
		ADoubleDoorBlockingPlanks_Destructible_BP_C_ExecuteUbergraph_DoubleDoorBlockingPlanks_Destructible_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADoubleDoorBlockingPlanks_Destructible_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADoubleDoorBlockingPlanks_Destructible_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DoubleDoorBlockingPlanks_Destructible_BP.DoubleDoorBlockingPlanks_Destructible_BP_C");
		return ptr;
	}

}


