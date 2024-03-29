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
	 * 		Name   -> Function ORS_MT01_B03.ORS_MT01_B03_C.TriggerMannequins
	 * 		Flags  -> ()
	 */
	void AORS_MT01_B03_C::TriggerMannequins()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ORS_MT01_B03.ORS_MT01_B03_C.TriggerMannequins");
		
		AORS_MT01_B03_C_TriggerMannequins_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ORS_MT01_B03.ORS_MT01_B03_C.TriggerPipes
	 * 		Flags  -> ()
	 */
	void AORS_MT01_B03_C::TriggerPipes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ORS_MT01_B03.ORS_MT01_B03_C.TriggerPipes");
		
		AORS_MT01_B03_C_TriggerPipes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ORS_MT01_B03.ORS_MT01_B03_C.B03_Regroup_ObjStarted
	 * 		Flags  -> ()
	 */
	void AORS_MT01_B03_C::B03_Regroup_ObjStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ORS_MT01_B03.ORS_MT01_B03_C.B03_Regroup_ObjStarted");
		
		AORS_MT01_B03_C_B03_Regroup_ObjStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ORS_MT01_B03.ORS_MT01_B03_C.B03_Regroup_ObjCompleted
	 * 		Flags  -> ()
	 */
	void AORS_MT01_B03_C::B03_Regroup_ObjCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ORS_MT01_B03.ORS_MT01_B03_C.B03_Regroup_ObjCompleted");
		
		AORS_MT01_B03_C_B03_Regroup_ObjCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ORS_MT01_B03.ORS_MT01_B03_C.B03_Delay_ObjStarted
	 * 		Flags  -> ()
	 */
	void AORS_MT01_B03_C::B03_Delay_ObjStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ORS_MT01_B03.ORS_MT01_B03_C.B03_Delay_ObjStarted");
		
		AORS_MT01_B03_C_B03_Delay_ObjStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ORS_MT01_B03.ORS_MT01_B03_C.B03_ExitStage_Started
	 * 		Flags  -> ()
	 */
	void AORS_MT01_B03_C::B03_ExitStage_Started()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ORS_MT01_B03.ORS_MT01_B03_C.B03_ExitStage_Started");
		
		AORS_MT01_B03_C_B03_ExitStage_Started_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ORS_MT01_B03.ORS_MT01_B03_C.ExecuteUbergraph_ORS_MT01_B03
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AORS_MT01_B03_C::ExecuteUbergraph_ORS_MT01_B03(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ORS_MT01_B03.ORS_MT01_B03_C.ExecuteUbergraph_ORS_MT01_B03");
		
		AORS_MT01_B03_C_ExecuteUbergraph_ORS_MT01_B03_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AORS_MT01_B03_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AORS_MT01_B03_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ORS_MT01_B03.ORS_MT01_B03_C");
		return ptr;
	}

}


