/**
 * Name: READYORNOT
 * Version: 0.0.1
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
	 * 		Name   -> Function AG_IsPerformingCombatMove.AG_IsPerformingCombatMove_C.CanOpen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAIActionDecisionContext                    Context                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	bool UAG_IsPerformingCombatMove_C::CanOpen(const struct FAIActionDecisionContext& Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AG_IsPerformingCombatMove.AG_IsPerformingCombatMove_C.CanOpen");
		
		UAG_IsPerformingCombatMove_C_CanOpen_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAG_IsPerformingCombatMove_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAG_IsPerformingCombatMove_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AG_IsPerformingCombatMove.AG_IsPerformingCombatMove_C");
		return ptr;
	}

}


