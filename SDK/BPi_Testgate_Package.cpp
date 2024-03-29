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
	 * 		Name   -> Function BPi_Testgate.BPi_Testgate_C.CloseLight
	 * 		Flags  -> ()
	 */
	void UBPi_Testgate_C::CloseLight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPi_Testgate.BPi_Testgate_C.CloseLight");
		
		UBPi_Testgate_C_CloseLight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPi_Testgate.BPi_Testgate_C.StopDrugSpray
	 * 		Flags  -> ()
	 */
	void UBPi_Testgate_C::StopDrugSpray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPi_Testgate.BPi_Testgate_C.StopDrugSpray");
		
		UBPi_Testgate_C_StopDrugSpray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPi_Testgate.BPi_Testgate_C.StartDrugSpray
	 * 		Flags  -> ()
	 */
	void UBPi_Testgate_C::StartDrugSpray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPi_Testgate.BPi_Testgate_C.StartDrugSpray");
		
		UBPi_Testgate_C_StartDrugSpray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPi_Testgate.BPi_Testgate_C.bpiBlurEntity
	 * 		Flags  -> ()
	 */
	void UBPi_Testgate_C::bpiBlurEntity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPi_Testgate.BPi_Testgate_C.bpiBlurEntity");
		
		UBPi_Testgate_C_bpiBlurEntity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPi_Testgate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPi_Testgate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPi_Testgate.BPi_Testgate_C");
		return ptr;
	}

}


