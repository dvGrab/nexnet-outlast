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
	 * 		Name   -> Function TG_Rorchach-01_FlassSeq.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AEmitter*                                    SmokeCorridor400_PS                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_1(class AEmitter* SmokeCorridor400_PS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TG_Rorchach-01_FlassSeq.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_1");
		
		USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_1_Params params {};
		params.SmokeCorridor400_PS = SmokeCorridor400_PS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TG_Rorchach-01_FlassSeq.SequenceDirector_C.SmokeCorridor400_PS_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AEmitter*                                    SmokeCorridor400_PS                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USequenceDirector_C::SmokeCorridor400_PS_Event_1(class AEmitter* SmokeCorridor400_PS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TG_Rorchach-01_FlassSeq.SequenceDirector_C.SmokeCorridor400_PS_Event_1");
		
		USequenceDirector_C_SmokeCorridor400_PS_Event_1_Params params {};
		params.SmokeCorridor400_PS = SmokeCorridor400_PS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TG_Rorchach-01_FlassSeq.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USequenceDirector_C::ExecuteUbergraph_SequenceDirector(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TG_Rorchach-01_FlassSeq.SequenceDirector_C.ExecuteUbergraph_SequenceDirector");
		
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
			ptr = UObject::FindClass("BlueprintGeneratedClass TG_Rorchach_01_FlassSeq.SequenceDirector_C");
		return ptr;
	}

}


