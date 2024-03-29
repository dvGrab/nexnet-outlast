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
	 * 		Name   -> Function AIAction_SurrenderExit.AIAction_SurrenderExit_C.IsFakeExit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESurrenderExitType                                 ExitType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAIAction_SurrenderExit_C::IsFakeExit(ESurrenderExitType ExitType, bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_SurrenderExit.AIAction_SurrenderExit_C.IsFakeExit");
		
		UAIAction_SurrenderExit_C_IsFakeExit_Params params {};
		params.ExitType = ExitType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_SurrenderExit.AIAction_SurrenderExit_C.ShouldPerformAction
	 * 		Flags  -> ()
	 */
	bool UAIAction_SurrenderExit_C::ShouldPerformAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_SurrenderExit.AIAction_SurrenderExit_C.ShouldPerformAction");
		
		UAIAction_SurrenderExit_C_ShouldPerformAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_SurrenderExit.AIAction_SurrenderExit_C.BeginAction_Blueprint
	 * 		Flags  -> ()
	 */
	void UAIAction_SurrenderExit_C::BeginAction_Blueprint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_SurrenderExit.AIAction_SurrenderExit_C.BeginAction_Blueprint");
		
		UAIAction_SurrenderExit_C_BeginAction_Blueprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_SurrenderExit.AIAction_SurrenderExit_C.Tick_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIAction_SurrenderExit_C::Tick_Blueprint(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_SurrenderExit.AIAction_SurrenderExit_C.Tick_Blueprint");
		
		UAIAction_SurrenderExit_C_Tick_Blueprint_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_SurrenderExit.AIAction_SurrenderExit_C.ExecuteUbergraph_AIAction_SurrenderExit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIAction_SurrenderExit_C::ExecuteUbergraph_AIAction_SurrenderExit(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_SurrenderExit.AIAction_SurrenderExit_C.ExecuteUbergraph_AIAction_SurrenderExit");
		
		UAIAction_SurrenderExit_C_ExecuteUbergraph_AIAction_SurrenderExit_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_SurrenderExit_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_SurrenderExit_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AIAction_SurrenderExit.AIAction_SurrenderExit_C");
		return ptr;
	}

}


