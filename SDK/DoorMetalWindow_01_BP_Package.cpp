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
	 * 		Name   -> Function DoorMetalWindow-01_BP.DoorMetalWindow-01_BP_C.BP_OnDoorInteract
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     interactor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADoorMetalWindow__BP_C::BP_OnDoorInteract(class ARBPawn* interactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorMetalWindow-01_BP.DoorMetalWindow-01_BP_C.BP_OnDoorInteract");
		
		ADoorMetalWindow__BP_C_BP_OnDoorInteract_Params params {};
		params.interactor = interactor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DoorMetalWindow-01_BP.DoorMetalWindow-01_BP_C.ExecuteUbergraph_DoorMetalWindow-01_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADoorMetalWindow__BP_C::ExecuteUbergraph_DoorMetalWindow__BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorMetalWindow-01_BP.DoorMetalWindow-01_BP_C.ExecuteUbergraph_DoorMetalWindow-01_BP");
		
		ADoorMetalWindow__BP_C_ExecuteUbergraph_DoorMetalWindow__BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DoorMetalWindow-01_BP.DoorMetalWindow-01_BP_C.DoorInteracted__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOpen                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADoorMetalWindow__BP_C::DoorInteracted__DelegateSignature(bool bOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorMetalWindow-01_BP.DoorMetalWindow-01_BP_C.DoorInteracted__DelegateSignature");
		
		ADoorMetalWindow__BP_C_DoorInteracted__DelegateSignature_Params params {};
		params.bOpen = bOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADoorMetalWindow__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADoorMetalWindow__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DoorMetalWindow_01_BP.DoorMetalWindow-01_BP_C");
		return ptr;
	}

}


