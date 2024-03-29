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
	 * 		Name   -> Function ORS_SmallCauldron-01_BP.ORS_SmallCauldron-01_BP_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AORS_SmallCauldron__BP_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ORS_SmallCauldron-01_BP.ORS_SmallCauldron-01_BP_C.Timeline_0__FinishedFunc");
		
		AORS_SmallCauldron__BP_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ORS_SmallCauldron-01_BP.ORS_SmallCauldron-01_BP_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AORS_SmallCauldron__BP_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ORS_SmallCauldron-01_BP.ORS_SmallCauldron-01_BP_C.Timeline_0__UpdateFunc");
		
		AORS_SmallCauldron__BP_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ORS_SmallCauldron-01_BP.ORS_SmallCauldron-01_BP_C.Timeline_0__ParticleEvent__EventFunc
	 * 		Flags  -> ()
	 */
	void AORS_SmallCauldron__BP_C::Timeline_0__ParticleEvent__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ORS_SmallCauldron-01_BP.ORS_SmallCauldron-01_BP_C.Timeline_0__ParticleEvent__EventFunc");
		
		AORS_SmallCauldron__BP_C_Timeline_0__ParticleEvent__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ORS_SmallCauldron-01_BP.ORS_SmallCauldron-01_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void AORS_SmallCauldron__BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ORS_SmallCauldron-01_BP.ORS_SmallCauldron-01_BP_C.Event_OnResetStage");
		
		AORS_SmallCauldron__BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ORS_SmallCauldron-01_BP.ORS_SmallCauldron-01_BP_C.Event_OnTriggered
	 * 		Flags  -> ()
	 */
	void AORS_SmallCauldron__BP_C::Event_OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ORS_SmallCauldron-01_BP.ORS_SmallCauldron-01_BP_C.Event_OnTriggered");
		
		AORS_SmallCauldron__BP_C_Event_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ORS_SmallCauldron-01_BP.ORS_SmallCauldron-01_BP_C.ExecuteUbergraph_ORS_SmallCauldron-01_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AORS_SmallCauldron__BP_C::ExecuteUbergraph_ORS_SmallCauldron__BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ORS_SmallCauldron-01_BP.ORS_SmallCauldron-01_BP_C.ExecuteUbergraph_ORS_SmallCauldron-01_BP");
		
		AORS_SmallCauldron__BP_C_ExecuteUbergraph_ORS_SmallCauldron__BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AORS_SmallCauldron__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AORS_SmallCauldron__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ORS_SmallCauldron_01_BP.ORS_SmallCauldron-01_BP_C");
		return ptr;
	}

}


