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
	 * 		Name   -> Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.SetTimerFrozen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATimerCountdown__BP_C::SetTimerFrozen(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.SetTimerFrozen");
		
		ATimerCountdown__BP_C_SetTimerFrozen_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.SetTimerEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATimerCountdown__BP_C::SetTimerEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.SetTimerEnabled");
		
		ATimerCountdown__BP_C_SetTimerEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.TrySetTriggered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               triggered                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATimerCountdown__BP_C::TrySetTriggered(bool triggered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.TrySetTriggered");
		
		ATimerCountdown__BP_C_TrySetTriggered_Params params {};
		params.triggered = triggered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.SetLinkedTriggerable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBTriggerable*                              Trigerable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATimerCountdown__BP_C::SetLinkedTriggerable(class ARBTriggerable* Trigerable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.SetLinkedTriggerable");
		
		ATimerCountdown__BP_C_SetLinkedTriggerable_Params params {};
		params.Trigerable = Trigerable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.OnCurrentTimeChanged_Server
	 * 		Flags  -> ()
	 */
	void ATimerCountdown__BP_C::OnCurrentTimeChanged_Server()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.OnCurrentTimeChanged_Server");
		
		ATimerCountdown__BP_C_OnCurrentTimeChanged_Server_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.OnRep_LightsON
	 * 		Flags  -> ()
	 */
	void ATimerCountdown__BP_C::OnRep_LightsON()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.OnRep_LightsON");
		
		ATimerCountdown__BP_C_OnRep_LightsON_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.OnRep_CurrentDisplayTime
	 * 		Flags  -> ()
	 */
	void ATimerCountdown__BP_C::OnRep_CurrentDisplayTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.OnRep_CurrentDisplayTime");
		
		ATimerCountdown__BP_C_OnRep_CurrentDisplayTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.UpdateTick
	 * 		Flags  -> ()
	 */
	void ATimerCountdown__BP_C::UpdateTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.UpdateTick");
		
		ATimerCountdown__BP_C_UpdateTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.SetTickEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATimerCountdown__BP_C::SetTickEnabled(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.SetTickEnabled");
		
		ATimerCountdown__BP_C_SetTickEnabled_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.SetCountdownTimer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATimerCountdown__BP_C::SetCountdownTimer(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.SetCountdownTimer");
		
		ATimerCountdown__BP_C_SetCountdownTimer_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.Set Lights On
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewVisibility                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATimerCountdown__BP_C::Set_Lights_On(bool bNewVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.Set Lights On");
		
		ATimerCountdown__BP_C_Set_Lights_On_Params params {};
		params.bNewVisibility = bNewVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.DisplayTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeSeconds                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATimerCountdown__BP_C::DisplayTime(float TimeSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.DisplayTime");
		
		ATimerCountdown__BP_C_DisplayTime_Params params {};
		params.TimeSeconds = TimeSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ATimerCountdown__BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.UserConstructionScript");
		
		ATimerCountdown__BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.Event_OnUntriggered
	 * 		Flags  -> ()
	 */
	void ATimerCountdown__BP_C::Event_OnUntriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.Event_OnUntriggered");
		
		ATimerCountdown__BP_C_Event_OnUntriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.Event_OnTriggered
	 * 		Flags  -> ()
	 */
	void ATimerCountdown__BP_C::Event_OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.Event_OnTriggered");
		
		ATimerCountdown__BP_C_Event_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATimerCountdown__BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.ReceiveTick");
		
		ATimerCountdown__BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void ATimerCountdown__BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.Event_OnResetStage");
		
		ATimerCountdown__BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ATimerCountdown__BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.ReceiveBeginPlay");
		
		ATimerCountdown__BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.SetupLinkedTriggerable
	 * 		Flags  -> ()
	 */
	void ATimerCountdown__BP_C::SetupLinkedTriggerable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.SetupLinkedTriggerable");
		
		ATimerCountdown__BP_C_SetupLinkedTriggerable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.TriggerChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ARBTriggerable*                              triggerable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATimerCountdown__BP_C::TriggerChanged(bool IsOn, class ARBTriggerable* triggerable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.TriggerChanged");
		
		ATimerCountdown__BP_C_TriggerChanged_Params params {};
		params.IsOn = IsOn;
		params.triggerable = triggerable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.ExecuteUbergraph_TimerCountdown-01_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATimerCountdown__BP_C::ExecuteUbergraph_TimerCountdown__BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.ExecuteUbergraph_TimerCountdown-01_BP");
		
		ATimerCountdown__BP_C_ExecuteUbergraph_TimerCountdown__BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.TimerReachedZero__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ATimerCountdown__BP_C::TimerReachedZero__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimerCountdown-01_BP.TimerCountdown-01_BP_C.TimerReachedZero__DelegateSignature");
		
		ATimerCountdown__BP_C_TimerReachedZero__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATimerCountdown__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATimerCountdown__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TimerCountdown_01_BP.TimerCountdown-01_BP_C");
		return ptr;
	}

}


