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
	 * 		Name   -> Function TestGateReleaseWagon.TestGateReleaseWagon_C.bpiBlurEntity
	 * 		Flags  -> ()
	 */
	void ATestGateReleaseWagon_C::bpiBlurEntity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateReleaseWagon.TestGateReleaseWagon_C.bpiBlurEntity");
		
		ATestGateReleaseWagon_C_bpiBlurEntity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateReleaseWagon.TestGateReleaseWagon_C.CloseLight
	 * 		Flags  -> ()
	 */
	void ATestGateReleaseWagon_C::CloseLight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateReleaseWagon.TestGateReleaseWagon_C.CloseLight");
		
		ATestGateReleaseWagon_C_CloseLight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateReleaseWagon.TestGateReleaseWagon_C.StopDrugSpray
	 * 		Flags  -> ()
	 */
	void ATestGateReleaseWagon_C::StopDrugSpray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateReleaseWagon.TestGateReleaseWagon_C.StopDrugSpray");
		
		ATestGateReleaseWagon_C_StopDrugSpray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateReleaseWagon.TestGateReleaseWagon_C.StartDrugSpray
	 * 		Flags  -> ()
	 */
	void ATestGateReleaseWagon_C::StartDrugSpray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateReleaseWagon.TestGateReleaseWagon_C.StartDrugSpray");
		
		ATestGateReleaseWagon_C_StartDrugSpray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateReleaseWagon.TestGateReleaseWagon_C.DrugStart
	 * 		Flags  -> ()
	 */
	void ATestGateReleaseWagon_C::DrugStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateReleaseWagon.TestGateReleaseWagon_C.DrugStart");
		
		ATestGateReleaseWagon_C_DrugStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateReleaseWagon.TestGateReleaseWagon_C.ExecuteUbergraph_TestGateReleaseWagon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATestGateReleaseWagon_C::ExecuteUbergraph_TestGateReleaseWagon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateReleaseWagon.TestGateReleaseWagon_C.ExecuteUbergraph_TestGateReleaseWagon");
		
		ATestGateReleaseWagon_C_ExecuteUbergraph_TestGateReleaseWagon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATestGateReleaseWagon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATestGateReleaseWagon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TestGateReleaseWagon.TestGateReleaseWagon_C");
		return ptr;
	}

}


