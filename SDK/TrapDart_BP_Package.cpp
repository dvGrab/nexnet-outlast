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
	 * 		Name   -> Function TrapDart_BP.TrapDart_BP_C.OnRep_bDetached
	 * 		Flags  -> ()
	 */
	void ATrapDart_BP_C::OnRep_bDetached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrapDart_BP.TrapDart_BP_C.OnRep_bDetached");
		
		ATrapDart_BP_C_OnRep_bDetached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrapDart_BP.TrapDart_BP_C.SimulatePhysics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bAddImpulse                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATrapDart_BP_C::SimulatePhysics(bool bAddImpulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrapDart_BP.TrapDart_BP_C.SimulatePhysics");
		
		ATrapDart_BP_C_SimulatePhysics_Params params {};
		params.bAddImpulse = bAddImpulse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrapDart_BP.TrapDart_BP_C.ReachEndOfCable
	 * 		Flags  -> ()
	 */
	void ATrapDart_BP_C::ReachEndOfCable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrapDart_BP.TrapDart_BP_C.ReachEndOfCable");
		
		ATrapDart_BP_C_ReachEndOfCable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrapDart_BP.TrapDart_BP_C.BP_OnLaunchEvent
	 * 		Flags  -> ()
	 */
	void ATrapDart_BP_C::BP_OnLaunchEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrapDart_BP.TrapDart_BP_C.BP_OnLaunchEvent");
		
		ATrapDart_BP_C_BP_OnLaunchEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrapDart_BP.TrapDart_BP_C.Electrify
	 * 		Flags  -> ()
	 */
	void ATrapDart_BP_C::Electrify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrapDart_BP.TrapDart_BP_C.Electrify");
		
		ATrapDart_BP_C_Electrify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrapDart_BP.TrapDart_BP_C.BP_OnHitPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATrapDart_BP_C::BP_OnHitPlayer(class ARBPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrapDart_BP.TrapDart_BP_C.BP_OnHitPlayer");
		
		ATrapDart_BP_C_BP_OnHitPlayer_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrapDart_BP.TrapDart_BP_C.BP_OnDetachFromPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATrapDart_BP_C::BP_OnDetachFromPlayer(class ARBPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrapDart_BP.TrapDart_BP_C.BP_OnDetachFromPlayer");
		
		ATrapDart_BP_C_BP_OnDetachFromPlayer_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrapDart_BP.TrapDart_BP_C.BP_OnReachedMaxLimitServer
	 * 		Flags  -> ()
	 */
	void ATrapDart_BP_C::BP_OnReachedMaxLimitServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrapDart_BP.TrapDart_BP_C.BP_OnReachedMaxLimitServer");
		
		ATrapDart_BP_C_BP_OnReachedMaxLimitServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrapDart_BP.TrapDart_BP_C.BP_OnPlayerDamage
	 * 		Flags  -> ()
	 */
	void ATrapDart_BP_C::BP_OnPlayerDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrapDart_BP.TrapDart_BP_C.BP_OnPlayerDamage");
		
		ATrapDart_BP_C_BP_OnPlayerDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrapDart_BP.TrapDart_BP_C.BP_OnPlayerPsychosis
	 * 		Flags  -> ()
	 */
	void ATrapDart_BP_C::BP_OnPlayerPsychosis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrapDart_BP.TrapDart_BP_C.BP_OnPlayerPsychosis");
		
		ATrapDart_BP_C_BP_OnPlayerPsychosis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrapDart_BP.TrapDart_BP_C.ExecuteUbergraph_TrapDart_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATrapDart_BP_C::ExecuteUbergraph_TrapDart_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrapDart_BP.TrapDart_BP_C.ExecuteUbergraph_TrapDart_BP");
		
		ATrapDart_BP_C_ExecuteUbergraph_TrapDart_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATrapDart_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATrapDart_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TrapDart_BP.TrapDart_BP_C");
		return ptr;
	}

}


