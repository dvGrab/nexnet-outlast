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
	 * 		Name   -> Function Fogger_Blind_ActiveSkill_BP.Fogger_Blind_ActiveSkill_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AFogger_Blind_ActiveSkill_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fogger_Blind_ActiveSkill_BP.Fogger_Blind_ActiveSkill_BP_C.UserConstructionScript");
		
		AFogger_Blind_ActiveSkill_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fogger_Blind_ActiveSkill_BP.Fogger_Blind_ActiveSkill_BP_C.Event_OnForceDeactivatedEffectTriggered
	 * 		Flags  -> ()
	 */
	void AFogger_Blind_ActiveSkill_BP_C::Event_OnForceDeactivatedEffectTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fogger_Blind_ActiveSkill_BP.Fogger_Blind_ActiveSkill_BP_C.Event_OnForceDeactivatedEffectTriggered");
		
		AFogger_Blind_ActiveSkill_BP_C_Event_OnForceDeactivatedEffectTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fogger_Blind_ActiveSkill_BP.Fogger_Blind_ActiveSkill_BP_C.ExecuteUbergraph_Fogger_Blind_ActiveSkill_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFogger_Blind_ActiveSkill_BP_C::ExecuteUbergraph_Fogger_Blind_ActiveSkill_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fogger_Blind_ActiveSkill_BP.Fogger_Blind_ActiveSkill_BP_C.ExecuteUbergraph_Fogger_Blind_ActiveSkill_BP");
		
		AFogger_Blind_ActiveSkill_BP_C_ExecuteUbergraph_Fogger_Blind_ActiveSkill_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFogger_Blind_ActiveSkill_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFogger_Blind_ActiveSkill_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Fogger_Blind_ActiveSkill_BP.Fogger_Blind_ActiveSkill_BP_C");
		return ptr;
	}

}


