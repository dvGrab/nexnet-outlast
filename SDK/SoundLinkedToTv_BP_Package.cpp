/**
 * Name: OUTLAST
 * Version: 0.0.2_fixed
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
	 * 		Name   -> Function SoundLinkedToTv_BP.SoundLinkedToTv_BP_C.GetElapsedAnimTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASoundLinkedToTv_BP_C::GetElapsedAnimTime(float* Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundLinkedToTv_BP.SoundLinkedToTv_BP_C.GetElapsedAnimTime");
		
		ASoundLinkedToTv_BP_C_GetElapsedAnimTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Time != nullptr)
			*Time = params.Time;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundLinkedToTv_BP.SoundLinkedToTv_BP_C.Loop
	 * 		Flags  -> ()
	 */
	void ASoundLinkedToTv_BP_C::Loop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundLinkedToTv_BP.SoundLinkedToTv_BP_C.Loop");
		
		ASoundLinkedToTv_BP_C_Loop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundLinkedToTv_BP.SoundLinkedToTv_BP_C.Event_OnTriggered
	 * 		Flags  -> ()
	 */
	void ASoundLinkedToTv_BP_C::Event_OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundLinkedToTv_BP.SoundLinkedToTv_BP_C.Event_OnTriggered");
		
		ASoundLinkedToTv_BP_C_Event_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundLinkedToTv_BP.SoundLinkedToTv_BP_C.Event_OnUntriggered
	 * 		Flags  -> ()
	 */
	void ASoundLinkedToTv_BP_C::Event_OnUntriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundLinkedToTv_BP.SoundLinkedToTv_BP_C.Event_OnUntriggered");
		
		ASoundLinkedToTv_BP_C_Event_OnUntriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundLinkedToTv_BP.SoundLinkedToTv_BP_C.ExecuteUbergraph_SoundLinkedToTv_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASoundLinkedToTv_BP_C::ExecuteUbergraph_SoundLinkedToTv_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundLinkedToTv_BP.SoundLinkedToTv_BP_C.ExecuteUbergraph_SoundLinkedToTv_BP");
		
		ASoundLinkedToTv_BP_C_ExecuteUbergraph_SoundLinkedToTv_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASoundLinkedToTv_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASoundLinkedToTv_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SoundLinkedToTv_BP.SoundLinkedToTv_BP_C");
		return ptr;
	}

}


