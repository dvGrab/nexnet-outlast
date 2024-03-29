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
	 * 		Name   -> Function TG_End-01_Seq.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACineSpectre_BP_C*                           CineSpectre_BP                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_1(class ACineSpectre_BP_C* CineSpectre_BP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TG_End-01_Seq.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_1");
		
		USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_1_Params params {};
		params.CineSpectre_BP = CineSpectre_BP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TG_End-01_Seq.SequenceDirector_C.KillParticles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACineSpectre_BP_C*                           CineSpectre_BP                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USequenceDirector_C::KillParticles(class ACineSpectre_BP_C* CineSpectre_BP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TG_End-01_Seq.SequenceDirector_C.KillParticles");
		
		USequenceDirector_C_KillParticles_Params params {};
		params.CineSpectre_BP = CineSpectre_BP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TG_End-01_Seq.SequenceDirector_C.CallBlur
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACineSpectre_BP_C*                           CineSpectre_BP                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              blurIntensity                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USequenceDirector_C::CallBlur(class ACineSpectre_BP_C* CineSpectre_BP, float blurIntensity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TG_End-01_Seq.SequenceDirector_C.CallBlur");
		
		USequenceDirector_C_CallBlur_Params params {};
		params.CineSpectre_BP = CineSpectre_BP;
		params.blurIntensity = blurIntensity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TG_End-01_Seq.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USequenceDirector_C::ExecuteUbergraph_SequenceDirector(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TG_End-01_Seq.SequenceDirector_C.ExecuteUbergraph_SequenceDirector");
		
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
			ptr = UObject::FindClass("BlueprintGeneratedClass TG_End_01_Seq.SequenceDirector_C");
		return ptr;
	}

}


