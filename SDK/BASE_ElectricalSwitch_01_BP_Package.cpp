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
	 * 		Name   -> Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.GetInteractionPawnLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESpecialMove                                       specialMove                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     outDirection                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABASE_ElectricalSwitch__BP_C::GetInteractionPawnLocation(class ARBPawn* Pawn, ESpecialMove specialMove, struct FVector* OutLocation, struct FVector* outDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.GetInteractionPawnLocation");
		
		ABASE_ElectricalSwitch__BP_C_GetInteractionPawnLocation_Params params {};
		params.Pawn = Pawn;
		params.specialMove = specialMove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLocation != nullptr)
			*OutLocation = params.OutLocation;
		if (outDirection != nullptr)
			*outDirection = params.outDirection;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.TestPhysicsClearance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     interactorPawn                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABASE_ElectricalSwitch__BP_C::TestPhysicsClearance(class ARBPawn* interactorPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.TestPhysicsClearance");
		
		ABASE_ElectricalSwitch__BP_C_TestPhysicsClearance_Params params {};
		params.interactorPawn = interactorPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.HasInteractingPawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABASE_ElectricalSwitch__BP_C::HasInteractingPawn(bool* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.HasInteractingPawn");
		
		ABASE_ElectricalSwitch__BP_C_HasInteractingPawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.UpdateLightMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CurrentLight                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        MaterialName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInterface*                          Material                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABASE_ElectricalSwitch__BP_C::UpdateLightMaterial(int32_t CurrentLight, const class FName& MaterialName, class UMaterialInterface* Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.UpdateLightMaterial");
		
		ABASE_ElectricalSwitch__BP_C_UpdateLightMaterial_Params params {};
		params.CurrentLight = CurrentLight;
		params.MaterialName = MaterialName;
		params.Material = Material;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.SetWaitingForResetCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABASE_ElectricalSwitch__BP_C::SetWaitingForResetCompleted(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.SetWaitingForResetCompleted");
		
		ABASE_ElectricalSwitch__BP_C_SetWaitingForResetCompleted_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.SetCableHeight
	 * 		Flags  -> ()
	 */
	void ABASE_ElectricalSwitch__BP_C::SetCableHeight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.SetCableHeight");
		
		ABASE_ElectricalSwitch__BP_C_SetCableHeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABASE_ElectricalSwitch__BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.UserConstructionScript");
		
		ABASE_ElectricalSwitch__BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.Event_OnOperationProgressChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              currentProgressRatio                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABASE_ElectricalSwitch__BP_C::Event_OnOperationProgressChanged(float currentProgressRatio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.Event_OnOperationProgressChanged");
		
		ABASE_ElectricalSwitch__BP_C_Event_OnOperationProgressChanged_Params params {};
		params.currentProgressRatio = currentProgressRatio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.SetTriggerableActivation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ARBTriggerable*                              RBTriggerable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABASE_ElectricalSwitch__BP_C::SetTriggerableActivation(bool Condition, class ARBTriggerable* RBTriggerable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.SetTriggerableActivation");
		
		ABASE_ElectricalSwitch__BP_C_SetTriggerableActivation_Params params {};
		params.Condition = Condition;
		params.RBTriggerable = RBTriggerable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.Event_OnCompletedOperation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ARBPawn*>                             pawns                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABASE_ElectricalSwitch__BP_C::Event_OnCompletedOperation(TArray<class ARBPawn*> pawns)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.Event_OnCompletedOperation");
		
		ABASE_ElectricalSwitch__BP_C_Event_OnCompletedOperation_Params params {};
		params.pawns = pawns;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.Event_SnapToState
	 * 		Flags  -> ()
	 */
	void ABASE_ElectricalSwitch__BP_C::Event_SnapToState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.Event_SnapToState");
		
		ABASE_ElectricalSwitch__BP_C_Event_SnapToState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.Event_OnTimedReset
	 * 		Flags  -> ()
	 */
	void ABASE_ElectricalSwitch__BP_C::Event_OnTimedReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.Event_OnTimedReset");
		
		ABASE_ElectricalSwitch__BP_C_Event_OnTimedReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void ABASE_ElectricalSwitch__BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.Event_OnResetStage");
		
		ABASE_ElectricalSwitch__BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABASE_ElectricalSwitch__BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.ReceiveBeginPlay");
		
		ABASE_ElectricalSwitch__BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.UpdateLightDisplay
	 * 		Flags  -> ()
	 */
	void ABASE_ElectricalSwitch__BP_C::UpdateLightDisplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.UpdateLightDisplay");
		
		ABASE_ElectricalSwitch__BP_C_UpdateLightDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.Event_OnInteractorsChangedEvent
	 * 		Flags  -> ()
	 */
	void ABASE_ElectricalSwitch__BP_C::Event_OnInteractorsChangedEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.Event_OnInteractorsChangedEvent");
		
		ABASE_ElectricalSwitch__BP_C_Event_OnInteractorsChangedEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.ExecuteUbergraph_BASE_ElectricalSwitch-01_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABASE_ElectricalSwitch__BP_C::ExecuteUbergraph_BASE_ElectricalSwitch__BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.ExecuteUbergraph_BASE_ElectricalSwitch-01_BP");
		
		ABASE_ElectricalSwitch__BP_C_ExecuteUbergraph_BASE_ElectricalSwitch__BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.OnWaitingForResetCompletedChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABASE_ElectricalSwitch__BP_C::OnWaitingForResetCompletedChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BASE_ElectricalSwitch-01_BP.BASE_ElectricalSwitch-01_BP_C.OnWaitingForResetCompletedChanged__DelegateSignature");
		
		ABASE_ElectricalSwitch__BP_C_OnWaitingForResetCompletedChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABASE_ElectricalSwitch__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABASE_ElectricalSwitch__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BASE_ElectricalSwitch_01_BP.BASE_ElectricalSwitch-01_BP_C");
		return ptr;
	}

}


