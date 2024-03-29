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
	 * 		Name   -> Function ORS_MT01_SND.ORS_MT01_SND_C.MT01_SND_BoilingStart
	 * 		Flags  -> ()
	 */
	void AORS_MT01_SND_C::MT01_SND_BoilingStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ORS_MT01_SND.ORS_MT01_SND_C.MT01_SND_BoilingStart");
		
		AORS_MT01_SND_C_MT01_SND_BoilingStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ORS_MT01_SND.ORS_MT01_SND_C.MT01_SND_BoilingStop
	 * 		Flags  -> ()
	 */
	void AORS_MT01_SND_C::MT01_SND_BoilingStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ORS_MT01_SND.ORS_MT01_SND_C.MT01_SND_BoilingStop");
		
		AORS_MT01_SND_C_MT01_SND_BoilingStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ORS_MT01_SND.ORS_MT01_SND_C.MT01_SND_PumpStart
	 * 		Flags  -> ()
	 */
	void AORS_MT01_SND_C::MT01_SND_PumpStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ORS_MT01_SND.ORS_MT01_SND_C.MT01_SND_PumpStart");
		
		AORS_MT01_SND_C_MT01_SND_PumpStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ORS_MT01_SND.ORS_MT01_SND_C.MT01_SND_PumpStop
	 * 		Flags  -> ()
	 */
	void AORS_MT01_SND_C::MT01_SND_PumpStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ORS_MT01_SND.ORS_MT01_SND_C.MT01_SND_PumpStop");
		
		AORS_MT01_SND_C_MT01_SND_PumpStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ORS_MT01_SND.ORS_MT01_SND_C.MT01_SND_StartMannequinEat
	 * 		Flags  -> ()
	 */
	void AORS_MT01_SND_C::MT01_SND_StartMannequinEat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ORS_MT01_SND.ORS_MT01_SND_C.MT01_SND_StartMannequinEat");
		
		AORS_MT01_SND_C_MT01_SND_StartMannequinEat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ORS_MT01_SND.ORS_MT01_SND_C.MT01_SND_SpawnGoose
	 * 		Flags  -> ()
	 */
	void AORS_MT01_SND_C::MT01_SND_SpawnGoose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ORS_MT01_SND.ORS_MT01_SND_C.MT01_SND_SpawnGoose");
		
		AORS_MT01_SND_C_MT01_SND_SpawnGoose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ORS_MT01_SND.ORS_MT01_SND_C.ExecuteUbergraph_ORS_MT01_SND
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AORS_MT01_SND_C::ExecuteUbergraph_ORS_MT01_SND(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ORS_MT01_SND.ORS_MT01_SND_C.ExecuteUbergraph_ORS_MT01_SND");
		
		AORS_MT01_SND_C_ExecuteUbergraph_ORS_MT01_SND_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AORS_MT01_SND_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AORS_MT01_SND_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ORS_MT01_SND.ORS_MT01_SND_C");
		return ptr;
	}

}


