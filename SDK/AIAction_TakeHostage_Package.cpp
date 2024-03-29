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
	 * 		Name   -> Function AIAction_TakeHostage.AIAction_TakeHostage_C.IsCivilianNotFacingTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACivilianCharacter*                          Civilian                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AReadyOrNotCharacter*                        Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAIAction_TakeHostage_C::IsCivilianNotFacingTarget(class ACivilianCharacter* Civilian, class AReadyOrNotCharacter* Target, bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_TakeHostage.AIAction_TakeHostage_C.IsCivilianNotFacingTarget");
		
		UAIAction_TakeHostage_C_IsCivilianNotFacingTarget_Params params {};
		params.Civilian = Civilian;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_TakeHostage.AIAction_TakeHostage_C.IsCivilianFacingTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACivilianCharacter*                          Civilian                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AReadyOrNotCharacter*                        Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAIAction_TakeHostage_C::IsCivilianFacingTarget(class ACivilianCharacter* Civilian, class AReadyOrNotCharacter* Target, bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_TakeHostage.AIAction_TakeHostage_C.IsCivilianFacingTarget");
		
		UAIAction_TakeHostage_C_IsCivilianFacingTarget_Params params {};
		params.Civilian = Civilian;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_TakeHostage.AIAction_TakeHostage_C.AnySWATNearCivilian
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACivilianCharacter*                          Civilian                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAIAction_TakeHostage_C::AnySWATNearCivilian(class ACivilianCharacter* Civilian, bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_TakeHostage.AIAction_TakeHostage_C.AnySWATNearCivilian");
		
		UAIAction_TakeHostage_C_AnySWATNearCivilian_Params params {};
		params.Civilian = Civilian;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_TakeHostage.AIAction_TakeHostage_C.OnTakeHostageFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBaseActivity*                               Activity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ACyberneticController*                       Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIAction_TakeHostage_C::OnTakeHostageFinished(class UBaseActivity* Activity, class ACyberneticController* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_TakeHostage.AIAction_TakeHostage_C.OnTakeHostageFinished");
		
		UAIAction_TakeHostage_C_OnTakeHostageFinished_Params params {};
		params.Activity = Activity;
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_TakeHostage.AIAction_TakeHostage_C.TraceForNearbyCivilians
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ACivilianCharacter*>                  Return_Value                                               (Parm, OutParm)
	 */
	void UAIAction_TakeHostage_C::TraceForNearbyCivilians(TArray<class ACivilianCharacter*>* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_TakeHostage.AIAction_TakeHostage_C.TraceForNearbyCivilians");
		
		UAIAction_TakeHostage_C_TraceForNearbyCivilians_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_TakeHostage.AIAction_TakeHostage_C.ShouldPerformAction
	 * 		Flags  -> ()
	 */
	bool UAIAction_TakeHostage_C::ShouldPerformAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_TakeHostage.AIAction_TakeHostage_C.ShouldPerformAction");
		
		UAIAction_TakeHostage_C_ShouldPerformAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_TakeHostage.AIAction_TakeHostage_C.FindClosestCivilian
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ACivilianCharacter*>                  Civilians                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class ACivilianCharacter*                          Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIAction_TakeHostage_C::FindClosestCivilian(TArray<class ACivilianCharacter*>* Civilians, class ACivilianCharacter** Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_TakeHostage.AIAction_TakeHostage_C.FindClosestCivilian");
		
		UAIAction_TakeHostage_C_FindClosestCivilian_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Civilians != nullptr)
			*Civilians = params.Civilians;
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_TakeHostage.AIAction_TakeHostage_C.BeginAction_Blueprint
	 * 		Flags  -> ()
	 */
	void UAIAction_TakeHostage_C::BeginAction_Blueprint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_TakeHostage.AIAction_TakeHostage_C.BeginAction_Blueprint");
		
		UAIAction_TakeHostage_C_BeginAction_Blueprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_TakeHostage.AIAction_TakeHostage_C.Tick_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIAction_TakeHostage_C::Tick_Blueprint(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_TakeHostage.AIAction_TakeHostage_C.Tick_Blueprint");
		
		UAIAction_TakeHostage_C_Tick_Blueprint_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_TakeHostage.AIAction_TakeHostage_C.OnCreate_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACyberneticController*                       Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIAction_TakeHostage_C::OnCreate_Blueprint(class ACyberneticController* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_TakeHostage.AIAction_TakeHostage_C.OnCreate_Blueprint");
		
		UAIAction_TakeHostage_C_OnCreate_Blueprint_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_TakeHostage.AIAction_TakeHostage_C.ExecuteUbergraph_AIAction_TakeHostage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIAction_TakeHostage_C::ExecuteUbergraph_AIAction_TakeHostage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_TakeHostage.AIAction_TakeHostage_C.ExecuteUbergraph_AIAction_TakeHostage");
		
		UAIAction_TakeHostage_C_ExecuteUbergraph_AIAction_TakeHostage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_TakeHostage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_TakeHostage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AIAction_TakeHostage.AIAction_TakeHostage_C");
		return ptr;
	}

}


