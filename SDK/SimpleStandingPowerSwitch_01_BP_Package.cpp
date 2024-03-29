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
	 * 		Name   -> Function SimpleStandingPowerSwitch-01_BP.SimpleStandingPowerSwitch-01_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ASimpleStandingPowerSwitch__BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleStandingPowerSwitch-01_BP.SimpleStandingPowerSwitch-01_BP_C.ReceiveBeginPlay");
		
		ASimpleStandingPowerSwitch__BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleStandingPowerSwitch-01_BP.SimpleStandingPowerSwitch-01_BP_C.Event_OnInteract
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASimpleStandingPowerSwitch__BP_C::Event_OnInteract(class ARBPawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleStandingPowerSwitch-01_BP.SimpleStandingPowerSwitch-01_BP_C.Event_OnInteract");
		
		ASimpleStandingPowerSwitch__BP_C_Event_OnInteract_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleStandingPowerSwitch-01_BP.SimpleStandingPowerSwitch-01_BP_C.NotifySpecialMoveStartedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESpecialMove                                       specialMove                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASimpleStandingPowerSwitch__BP_C::NotifySpecialMoveStartedEvent(class ARBPawn* Pawn, ESpecialMove specialMove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleStandingPowerSwitch-01_BP.SimpleStandingPowerSwitch-01_BP_C.NotifySpecialMoveStartedEvent");
		
		ASimpleStandingPowerSwitch__BP_C_NotifySpecialMoveStartedEvent_Params params {};
		params.Pawn = Pawn;
		params.specialMove = specialMove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleStandingPowerSwitch-01_BP.SimpleStandingPowerSwitch-01_BP_C.Event_SnapToState
	 * 		Flags  -> ()
	 */
	void ASimpleStandingPowerSwitch__BP_C::Event_SnapToState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleStandingPowerSwitch-01_BP.SimpleStandingPowerSwitch-01_BP_C.Event_SnapToState");
		
		ASimpleStandingPowerSwitch__BP_C_Event_SnapToState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleStandingPowerSwitch-01_BP.SimpleStandingPowerSwitch-01_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void ASimpleStandingPowerSwitch__BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleStandingPowerSwitch-01_BP.SimpleStandingPowerSwitch-01_BP_C.Event_OnResetStage");
		
		ASimpleStandingPowerSwitch__BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleStandingPowerSwitch-01_BP.SimpleStandingPowerSwitch-01_BP_C.ExecuteUbergraph_SimpleStandingPowerSwitch-01_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASimpleStandingPowerSwitch__BP_C::ExecuteUbergraph_SimpleStandingPowerSwitch__BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleStandingPowerSwitch-01_BP.SimpleStandingPowerSwitch-01_BP_C.ExecuteUbergraph_SimpleStandingPowerSwitch-01_BP");
		
		ASimpleStandingPowerSwitch__BP_C_ExecuteUbergraph_SimpleStandingPowerSwitch__BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASimpleStandingPowerSwitch__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASimpleStandingPowerSwitch__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SimpleStandingPowerSwitch_01_BP.SimpleStandingPowerSwitch-01_BP_C");
		return ptr;
	}

}


