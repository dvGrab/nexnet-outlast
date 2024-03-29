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
	 * 		Name   -> Function TG_ORPH_MiddleSeq_01.TG_ORPH_MiddleSeq_01_C.bpiBlurEntity
	 * 		Flags  -> ()
	 */
	void ATG_ORPH_MiddleSeq_01_C::bpiBlurEntity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TG_ORPH_MiddleSeq_01.TG_ORPH_MiddleSeq_01_C.bpiBlurEntity");
		
		ATG_ORPH_MiddleSeq_01_C_bpiBlurEntity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TG_ORPH_MiddleSeq_01.TG_ORPH_MiddleSeq_01_C.StartDrugSpray
	 * 		Flags  -> ()
	 */
	void ATG_ORPH_MiddleSeq_01_C::StartDrugSpray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TG_ORPH_MiddleSeq_01.TG_ORPH_MiddleSeq_01_C.StartDrugSpray");
		
		ATG_ORPH_MiddleSeq_01_C_StartDrugSpray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TG_ORPH_MiddleSeq_01.TG_ORPH_MiddleSeq_01_C.StopDrugSpray
	 * 		Flags  -> ()
	 */
	void ATG_ORPH_MiddleSeq_01_C::StopDrugSpray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TG_ORPH_MiddleSeq_01.TG_ORPH_MiddleSeq_01_C.StopDrugSpray");
		
		ATG_ORPH_MiddleSeq_01_C_StopDrugSpray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TG_ORPH_MiddleSeq_01.TG_ORPH_MiddleSeq_01_C.CloseLight
	 * 		Flags  -> ()
	 */
	void ATG_ORPH_MiddleSeq_01_C::CloseLight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TG_ORPH_MiddleSeq_01.TG_ORPH_MiddleSeq_01_C.CloseLight");
		
		ATG_ORPH_MiddleSeq_01_C_CloseLight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TG_ORPH_MiddleSeq_01.TG_ORPH_MiddleSeq_01_C.ExecuteUbergraph_TG_ORPH_MiddleSeq_01
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATG_ORPH_MiddleSeq_01_C::ExecuteUbergraph_TG_ORPH_MiddleSeq_01(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TG_ORPH_MiddleSeq_01.TG_ORPH_MiddleSeq_01_C.ExecuteUbergraph_TG_ORPH_MiddleSeq_01");
		
		ATG_ORPH_MiddleSeq_01_C_ExecuteUbergraph_TG_ORPH_MiddleSeq_01_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATG_ORPH_MiddleSeq_01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATG_ORPH_MiddleSeq_01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TG_ORPH_MiddleSeq_01.TG_ORPH_MiddleSeq_01_C");
		return ptr;
	}

}


