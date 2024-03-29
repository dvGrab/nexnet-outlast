/**
 * Name: READYORNOT
 * Version: 0.0.1
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
	 * 		Name   -> Function Primary_BCM_MK1.Primary_BCM_MK1_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APrimary_BCM_MK1_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Primary_BCM_MK1.Primary_BCM_MK1_C.ReceiveTick");
		
		APrimary_BCM_MK1_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Primary_BCM_MK1.Primary_BCM_MK1_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void APrimary_BCM_MK1_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Primary_BCM_MK1.Primary_BCM_MK1_C.ReceiveBeginPlay");
		
		APrimary_BCM_MK1_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Primary_BCM_MK1.Primary_BCM_MK1_C.ExecuteUbergraph_Primary_BCM_MK1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APrimary_BCM_MK1_C::ExecuteUbergraph_Primary_BCM_MK1(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Primary_BCM_MK1.Primary_BCM_MK1_C.ExecuteUbergraph_Primary_BCM_MK1");
		
		APrimary_BCM_MK1_C_ExecuteUbergraph_Primary_BCM_MK1_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APrimary_BCM_MK1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrimary_BCM_MK1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Primary_BCM_MK1.Primary_BCM_MK1_C");
		return ptr;
	}

}


