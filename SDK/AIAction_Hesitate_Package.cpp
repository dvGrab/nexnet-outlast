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
	 * 		Name   -> Function AIAction_Hesitate.AIAction_Hesitate_C.ShouldPerformAction
	 * 		Flags  -> ()
	 */
	bool UAIAction_Hesitate_C::ShouldPerformAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_Hesitate.AIAction_Hesitate_C.ShouldPerformAction");
		
		UAIAction_Hesitate_C_ShouldPerformAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_Hesitate.AIAction_Hesitate_C.EndAction_Blueprint
	 * 		Flags  -> ()
	 */
	void UAIAction_Hesitate_C::EndAction_Blueprint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_Hesitate.AIAction_Hesitate_C.EndAction_Blueprint");
		
		UAIAction_Hesitate_C_EndAction_Blueprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_Hesitate.AIAction_Hesitate_C.Tick_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIAction_Hesitate_C::Tick_Blueprint(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_Hesitate.AIAction_Hesitate_C.Tick_Blueprint");
		
		UAIAction_Hesitate_C_Tick_Blueprint_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_Hesitate.AIAction_Hesitate_C.InitAction_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACyberneticController*                       Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIAction_Hesitate_C::InitAction_Blueprint(class ACyberneticController* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_Hesitate.AIAction_Hesitate_C.InitAction_Blueprint");
		
		UAIAction_Hesitate_C_InitAction_Blueprint_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_Hesitate.AIAction_Hesitate_C.BeginAction_Blueprint
	 * 		Flags  -> ()
	 */
	void UAIAction_Hesitate_C::BeginAction_Blueprint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_Hesitate.AIAction_Hesitate_C.BeginAction_Blueprint");
		
		UAIAction_Hesitate_C_BeginAction_Blueprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_Hesitate.AIAction_Hesitate_C.ExecuteUbergraph_AIAction_Hesitate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIAction_Hesitate_C::ExecuteUbergraph_AIAction_Hesitate(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_Hesitate.AIAction_Hesitate_C.ExecuteUbergraph_AIAction_Hesitate");
		
		UAIAction_Hesitate_C_ExecuteUbergraph_AIAction_Hesitate_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_Hesitate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_Hesitate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AIAction_Hesitate.AIAction_Hesitate_C");
		return ptr;
	}

}


