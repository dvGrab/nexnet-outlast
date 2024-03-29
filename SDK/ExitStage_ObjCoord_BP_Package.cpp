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
	 * 		Name   -> Function ExitStage_ObjCoord_BP.ExitStage_ObjCoord_BP_C.PlayCountdownVO
	 * 		Flags  -> ()
	 */
	void AExitStage_ObjCoord_BP_C::PlayCountdownVO()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExitStage_ObjCoord_BP.ExitStage_ObjCoord_BP_C.PlayCountdownVO");
		
		AExitStage_ObjCoord_BP_C_PlayCountdownVO_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ExitStage_ObjCoord_BP.ExitStage_ObjCoord_BP_C.SetTrainArrivalTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AExitStage_ObjCoord_BP_C::SetTrainArrivalTime(int32_t Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExitStage_ObjCoord_BP.ExitStage_ObjCoord_BP_C.SetTrainArrivalTime");
		
		AExitStage_ObjCoord_BP_C_SetTrainArrivalTime_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ExitStage_ObjCoord_BP.ExitStage_ObjCoord_BP_C.SetCountdownTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AExitStage_ObjCoord_BP_C::SetCountdownTime(int32_t Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExitStage_ObjCoord_BP.ExitStage_ObjCoord_BP_C.SetCountdownTime");
		
		AExitStage_ObjCoord_BP_C_SetCountdownTime_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ExitStage_ObjCoord_BP.ExitStage_ObjCoord_BP_C.Event_OnCoordinatorStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EObjectiveCoordinatorState                         oldState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EObjectiveCoordinatorState                         newState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AExitStage_ObjCoord_BP_C::Event_OnCoordinatorStateChanged(EObjectiveCoordinatorState oldState, EObjectiveCoordinatorState newState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExitStage_ObjCoord_BP.ExitStage_ObjCoord_BP_C.Event_OnCoordinatorStateChanged");
		
		AExitStage_ObjCoord_BP_C_Event_OnCoordinatorStateChanged_Params params {};
		params.oldState = oldState;
		params.newState = newState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ExitStage_ObjCoord_BP.ExitStage_ObjCoord_BP_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AExitStage_ObjCoord_BP_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExitStage_ObjCoord_BP.ExitStage_ObjCoord_BP_C.ReceiveEndPlay");
		
		AExitStage_ObjCoord_BP_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ExitStage_ObjCoord_BP.ExitStage_ObjCoord_BP_C.Event_OnExitStageObjectiveStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EExitStageObjectiveState                           objectiveState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AExitStage_ObjCoord_BP_C::Event_OnExitStageObjectiveStateChanged(EExitStageObjectiveState objectiveState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExitStage_ObjCoord_BP.ExitStage_ObjCoord_BP_C.Event_OnExitStageObjectiveStateChanged");
		
		AExitStage_ObjCoord_BP_C_Event_OnExitStageObjectiveStateChanged_Params params {};
		params.objectiveState = objectiveState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ExitStage_ObjCoord_BP.ExitStage_ObjCoord_BP_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AExitStage_ObjCoord_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExitStage_ObjCoord_BP.ExitStage_ObjCoord_BP_C.ReceiveTick");
		
		AExitStage_ObjCoord_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ExitStage_ObjCoord_BP.ExitStage_ObjCoord_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void AExitStage_ObjCoord_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExitStage_ObjCoord_BP.ExitStage_ObjCoord_BP_C.Event_OnResetStage");
		
		AExitStage_ObjCoord_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ExitStage_ObjCoord_BP.ExitStage_ObjCoord_BP_C.ExecuteUbergraph_ExitStage_ObjCoord_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AExitStage_ObjCoord_BP_C::ExecuteUbergraph_ExitStage_ObjCoord_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExitStage_ObjCoord_BP.ExitStage_ObjCoord_BP_C.ExecuteUbergraph_ExitStage_ObjCoord_BP");
		
		AExitStage_ObjCoord_BP_C_ExecuteUbergraph_ExitStage_ObjCoord_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AExitStage_ObjCoord_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AExitStage_ObjCoord_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ExitStage_ObjCoord_BP.ExitStage_ObjCoord_BP_C");
		return ptr;
	}

}


