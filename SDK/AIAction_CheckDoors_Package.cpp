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
	 * 		Name   -> Function AIAction_CheckDoors.AIAction_CheckDoors_C.ResetData
	 * 		Flags  -> ()
	 */
	void UAIAction_CheckDoors_C::ResetData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_CheckDoors.AIAction_CheckDoors_C.ResetData");
		
		UAIAction_CheckDoors_C_ResetData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_CheckDoors.AIAction_CheckDoors_C.CanCheckDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ADoor*                                       Door                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAIAction_CheckDoors_C::CanCheckDoor(class ADoor* Door, bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_CheckDoors.AIAction_CheckDoors_C.CanCheckDoor");
		
		UAIAction_CheckDoors_C_CanCheckDoor_Params params {};
		params.Door = Door;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_CheckDoors.AIAction_CheckDoors_C.Event_RemoveLastCheckedDoor
	 * 		Flags  -> ()
	 */
	void UAIAction_CheckDoors_C::Event_RemoveLastCheckedDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_CheckDoors.AIAction_CheckDoors_C.Event_RemoveLastCheckedDoor");
		
		UAIAction_CheckDoors_C_Event_RemoveLastCheckedDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_CheckDoors.AIAction_CheckDoors_C.OnCreate_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACyberneticController*                       Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIAction_CheckDoors_C::OnCreate_Blueprint(class ACyberneticController* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_CheckDoors.AIAction_CheckDoors_C.OnCreate_Blueprint");
		
		UAIAction_CheckDoors_C_OnCreate_Blueprint_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_CheckDoors.AIAction_CheckDoors_C.Tick_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIAction_CheckDoors_C::Tick_Blueprint(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_CheckDoors.AIAction_CheckDoors_C.Tick_Blueprint");
		
		UAIAction_CheckDoors_C_Tick_Blueprint_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_CheckDoors.AIAction_CheckDoors_C.OnMoveComplete_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RequestID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIAction_CheckDoors_C::OnMoveComplete_Blueprint(class AAIController* Controller, int32_t RequestID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_CheckDoors.AIAction_CheckDoors_C.OnMoveComplete_Blueprint");
		
		UAIAction_CheckDoors_C_OnMoveComplete_Blueprint_Params params {};
		params.Controller = Controller;
		params.RequestID = RequestID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_CheckDoors.AIAction_CheckDoors_C.BeginAction_Blueprint
	 * 		Flags  -> ()
	 */
	void UAIAction_CheckDoors_C::BeginAction_Blueprint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_CheckDoors.AIAction_CheckDoors_C.BeginAction_Blueprint");
		
		UAIAction_CheckDoors_C_BeginAction_Blueprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_CheckDoors.AIAction_CheckDoors_C.OnPathFound_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PathId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ERonNavigationQueryResult                          Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIAction_CheckDoors_C::OnPathFound_Blueprint(int32_t PathId, ERonNavigationQueryResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_CheckDoors.AIAction_CheckDoors_C.OnPathFound_Blueprint");
		
		UAIAction_CheckDoors_C_OnPathFound_Blueprint_Params params {};
		params.PathId = PathId;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_CheckDoors.AIAction_CheckDoors_C.InitAction_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACyberneticController*                       Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIAction_CheckDoors_C::InitAction_Blueprint(class ACyberneticController* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_CheckDoors.AIAction_CheckDoors_C.InitAction_Blueprint");
		
		UAIAction_CheckDoors_C_InitAction_Blueprint_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_CheckDoors.AIAction_CheckDoors_C.EndAction_Blueprint
	 * 		Flags  -> ()
	 */
	void UAIAction_CheckDoors_C::EndAction_Blueprint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_CheckDoors.AIAction_CheckDoors_C.EndAction_Blueprint");
		
		UAIAction_CheckDoors_C_EndAction_Blueprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIAction_CheckDoors.AIAction_CheckDoors_C.ExecuteUbergraph_AIAction_CheckDoors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIAction_CheckDoors_C::ExecuteUbergraph_AIAction_CheckDoors(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_CheckDoors.AIAction_CheckDoors_C.ExecuteUbergraph_AIAction_CheckDoors");
		
		UAIAction_CheckDoors_C_ExecuteUbergraph_AIAction_CheckDoors_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_CheckDoors_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_CheckDoors_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AIAction_CheckDoors.AIAction_CheckDoors_C");
		return ptr;
	}

}


