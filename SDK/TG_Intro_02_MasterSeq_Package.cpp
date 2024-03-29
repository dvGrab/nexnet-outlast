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
	 * 		Name   -> Function TG_Intro-02_MasterSeq.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_1
	 * 		Flags  -> ()
	 */
	void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TG_Intro-02_MasterSeq.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_1");
		
		USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TG_Intro-02_MasterSeq.SequenceDirector_C.bpiBlurEntity
	 * 		Flags  -> ()
	 */
	void USequenceDirector_C::bpiBlurEntity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TG_Intro-02_MasterSeq.SequenceDirector_C.bpiBlurEntity");
		
		USequenceDirector_C_bpiBlurEntity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TG_Intro-02_MasterSeq.SequenceDirector_C.StartDrugSpray
	 * 		Flags  -> ()
	 */
	void USequenceDirector_C::StartDrugSpray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TG_Intro-02_MasterSeq.SequenceDirector_C.StartDrugSpray");
		
		USequenceDirector_C_StartDrugSpray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TG_Intro-02_MasterSeq.SequenceDirector_C.StopDrugSpray
	 * 		Flags  -> ()
	 */
	void USequenceDirector_C::StopDrugSpray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TG_Intro-02_MasterSeq.SequenceDirector_C.StopDrugSpray");
		
		USequenceDirector_C_StopDrugSpray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TG_Intro-02_MasterSeq.SequenceDirector_C.CloseLight
	 * 		Flags  -> ()
	 */
	void USequenceDirector_C::CloseLight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TG_Intro-02_MasterSeq.SequenceDirector_C.CloseLight");
		
		USequenceDirector_C_CloseLight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TG_Intro-02_MasterSeq.SequenceDirector_C.SequenceEvent_1
	 * 		Flags  -> ()
	 */
	void USequenceDirector_C::SequenceEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TG_Intro-02_MasterSeq.SequenceDirector_C.SequenceEvent_1");
		
		USequenceDirector_C_SequenceEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TG_Intro-02_MasterSeq.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USequenceDirector_C::ExecuteUbergraph_SequenceDirector(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TG_Intro-02_MasterSeq.SequenceDirector_C.ExecuteUbergraph_SequenceDirector");
		
		USequenceDirector_C_ExecuteUbergraph_SequenceDirector_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USequenceDirector_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USequenceDirector_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TG_Intro_02_MasterSeq.SequenceDirector_C");
		return ptr;
	}

}


