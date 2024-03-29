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
	 * 		Name   -> Function AG_PushMoveIsOnCooldown.AG_PushMoveIsOnCooldown_C.CanOpen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAIActionDecisionContext                    Context                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	bool UAG_PushMoveIsOnCooldown_C::CanOpen(const struct FAIActionDecisionContext& Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AG_PushMoveIsOnCooldown.AG_PushMoveIsOnCooldown_C.CanOpen");
		
		UAG_PushMoveIsOnCooldown_C_CanOpen_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAG_PushMoveIsOnCooldown_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAG_PushMoveIsOnCooldown_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AG_PushMoveIsOnCooldown.AG_PushMoveIsOnCooldown_C");
		return ptr;
	}

}


