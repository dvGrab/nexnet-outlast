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
	 * 		Name   -> Function AIAction_ReturnToSpawn.AIAction_ReturnToSpawn_C.ShouldPerformAction
	 * 		Flags  -> ()
	 */
	bool UAIAction_ReturnToSpawn_C::ShouldPerformAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_ReturnToSpawn.AIAction_ReturnToSpawn_C.ShouldPerformAction");
		
		UAIAction_ReturnToSpawn_C_ShouldPerformAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_ReturnToSpawn.AIAction_ReturnToSpawn_C.BeginAction_Blueprint
	 * 		Flags  -> ()
	 */
	void UAIAction_ReturnToSpawn_C::BeginAction_Blueprint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_ReturnToSpawn.AIAction_ReturnToSpawn_C.BeginAction_Blueprint");
		
		UAIAction_ReturnToSpawn_C_BeginAction_Blueprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_ReturnToSpawn.AIAction_ReturnToSpawn_C.OnMoveComplete_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RequestID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIAction_ReturnToSpawn_C::OnMoveComplete_Blueprint(class AAIController* Controller, int32_t RequestID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_ReturnToSpawn.AIAction_ReturnToSpawn_C.OnMoveComplete_Blueprint");
		
		UAIAction_ReturnToSpawn_C_OnMoveComplete_Blueprint_Params params {};
		params.Controller = Controller;
		params.RequestID = RequestID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_ReturnToSpawn.AIAction_ReturnToSpawn_C.ExecuteUbergraph_AIAction_ReturnToSpawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIAction_ReturnToSpawn_C::ExecuteUbergraph_AIAction_ReturnToSpawn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_ReturnToSpawn.AIAction_ReturnToSpawn_C.ExecuteUbergraph_AIAction_ReturnToSpawn");
		
		UAIAction_ReturnToSpawn_C_ExecuteUbergraph_AIAction_ReturnToSpawn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_ReturnToSpawn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_ReturnToSpawn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AIAction_ReturnToSpawn.AIAction_ReturnToSpawn_C");
		return ptr;
	}

}


