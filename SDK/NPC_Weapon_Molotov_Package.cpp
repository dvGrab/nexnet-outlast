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
	 * 		Name   -> Function NPC_Weapon_Molotov.NPC_Weapon_Molotov_C.Event_ActivateEffects
	 * 		Flags  -> ()
	 */
	void ANPC_Weapon_Molotov_C::Event_ActivateEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPC_Weapon_Molotov.NPC_Weapon_Molotov_C.Event_ActivateEffects");
		
		ANPC_Weapon_Molotov_C_Event_ActivateEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPC_Weapon_Molotov.NPC_Weapon_Molotov_C.Event_DeactivateEffects
	 * 		Flags  -> ()
	 */
	void ANPC_Weapon_Molotov_C::Event_DeactivateEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPC_Weapon_Molotov.NPC_Weapon_Molotov_C.Event_DeactivateEffects");
		
		ANPC_Weapon_Molotov_C_Event_DeactivateEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPC_Weapon_Molotov.NPC_Weapon_Molotov_C.ExecuteUbergraph_NPC_Weapon_Molotov
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANPC_Weapon_Molotov_C::ExecuteUbergraph_NPC_Weapon_Molotov(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPC_Weapon_Molotov.NPC_Weapon_Molotov_C.ExecuteUbergraph_NPC_Weapon_Molotov");
		
		ANPC_Weapon_Molotov_C_ExecuteUbergraph_NPC_Weapon_Molotov_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANPC_Weapon_Molotov_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANPC_Weapon_Molotov_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass NPC_Weapon_Molotov.NPC_Weapon_Molotov_C");
		return ptr;
	}

}


