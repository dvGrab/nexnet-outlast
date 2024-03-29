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
	 * 		Name   -> Function SJ_SoundOnly_Base_BP.SJ_SoundOnly_Base_BP_C.Event_OnTriggered
	 * 		Flags  -> ()
	 */
	void ASJ_SoundOnly_Base_BP_C::Event_OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SJ_SoundOnly_Base_BP.SJ_SoundOnly_Base_BP_C.Event_OnTriggered");
		
		ASJ_SoundOnly_Base_BP_C_Event_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SJ_SoundOnly_Base_BP.SJ_SoundOnly_Base_BP_C.Event_OnUntriggered
	 * 		Flags  -> ()
	 */
	void ASJ_SoundOnly_Base_BP_C::Event_OnUntriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SJ_SoundOnly_Base_BP.SJ_SoundOnly_Base_BP_C.Event_OnUntriggered");
		
		ASJ_SoundOnly_Base_BP_C_Event_OnUntriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SJ_SoundOnly_Base_BP.SJ_SoundOnly_Base_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ASJ_SoundOnly_Base_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SJ_SoundOnly_Base_BP.SJ_SoundOnly_Base_BP_C.ReceiveBeginPlay");
		
		ASJ_SoundOnly_Base_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SJ_SoundOnly_Base_BP.SJ_SoundOnly_Base_BP_C.ExecuteUbergraph_SJ_SoundOnly_Base_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASJ_SoundOnly_Base_BP_C::ExecuteUbergraph_SJ_SoundOnly_Base_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SJ_SoundOnly_Base_BP.SJ_SoundOnly_Base_BP_C.ExecuteUbergraph_SJ_SoundOnly_Base_BP");
		
		ASJ_SoundOnly_Base_BP_C_ExecuteUbergraph_SJ_SoundOnly_Base_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASJ_SoundOnly_Base_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASJ_SoundOnly_Base_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SJ_SoundOnly_Base_BP.SJ_SoundOnly_Base_BP_C");
		return ptr;
	}

}


