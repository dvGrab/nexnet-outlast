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
	 * 		Name   -> Function DONOTUSE_AcidBottle_BP.DONOTUSE_AcidBottle_BP_C.GetObjectiveTypeIndex
	 * 		Flags  -> ()
	 */
	int32_t ADONOTUSE_AcidBottle_BP_C::GetObjectiveTypeIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DONOTUSE_AcidBottle_BP.DONOTUSE_AcidBottle_BP_C.GetObjectiveTypeIndex");
		
		ADONOTUSE_AcidBottle_BP_C_GetObjectiveTypeIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DONOTUSE_AcidBottle_BP.DONOTUSE_AcidBottle_BP_C.ShouldBPTick
	 * 		Flags  -> ()
	 */
	bool ADONOTUSE_AcidBottle_BP_C::ShouldBPTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DONOTUSE_AcidBottle_BP.DONOTUSE_AcidBottle_BP_C.ShouldBPTick");
		
		ADONOTUSE_AcidBottle_BP_C_ShouldBPTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DONOTUSE_AcidBottle_BP.DONOTUSE_AcidBottle_BP_C.DamagePlayersInRadius
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAcidBottleDamageType                              DamageType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPlayer*                                   Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADONOTUSE_AcidBottle_BP_C::DamagePlayersInRadius(EAcidBottleDamageType DamageType, class ARBPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DONOTUSE_AcidBottle_BP.DONOTUSE_AcidBottle_BP_C.DamagePlayersInRadius");
		
		ADONOTUSE_AcidBottle_BP_C_DamagePlayersInRadius_Params params {};
		params.DamageType = DamageType;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DONOTUSE_AcidBottle_BP.DONOTUSE_AcidBottle_BP_C.OnHoldingPlayerChangedEvent_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     holdingPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBLargePickup*                              largePickup                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADONOTUSE_AcidBottle_BP_C::OnHoldingPlayerChangedEvent_Event_1(class ARBPawn* holdingPlayer, class ARBLargePickup* largePickup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DONOTUSE_AcidBottle_BP.DONOTUSE_AcidBottle_BP_C.OnHoldingPlayerChangedEvent_Event_1");
		
		ADONOTUSE_AcidBottle_BP_C_OnHoldingPlayerChangedEvent_Event_1_Params params {};
		params.holdingPlayer = holdingPlayer;
		params.largePickup = largePickup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DONOTUSE_AcidBottle_BP.DONOTUSE_AcidBottle_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ADONOTUSE_AcidBottle_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DONOTUSE_AcidBottle_BP.DONOTUSE_AcidBottle_BP_C.ReceiveBeginPlay");
		
		ADONOTUSE_AcidBottle_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DONOTUSE_AcidBottle_BP.DONOTUSE_AcidBottle_BP_C.OnPlayerLanded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              landingHeight                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADONOTUSE_AcidBottle_BP_C::OnPlayerLanded(class ARBPlayer* Player, float landingHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DONOTUSE_AcidBottle_BP.DONOTUSE_AcidBottle_BP_C.OnPlayerLanded");
		
		ADONOTUSE_AcidBottle_BP_C_OnPlayerLanded_Params params {};
		params.Player = Player;
		params.landingHeight = landingHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DONOTUSE_AcidBottle_BP.DONOTUSE_AcidBottle_BP_C.OnPlayerTraversal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              landingHeight                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADONOTUSE_AcidBottle_BP_C::OnPlayerTraversal(class ARBPlayer* Player, float landingHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DONOTUSE_AcidBottle_BP.DONOTUSE_AcidBottle_BP_C.OnPlayerTraversal");
		
		ADONOTUSE_AcidBottle_BP_C_OnPlayerTraversal_Params params {};
		params.Player = Player;
		params.landingHeight = landingHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DONOTUSE_AcidBottle_BP.DONOTUSE_AcidBottle_BP_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADONOTUSE_AcidBottle_BP_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DONOTUSE_AcidBottle_BP.DONOTUSE_AcidBottle_BP_C.ReceiveEndPlay");
		
		ADONOTUSE_AcidBottle_BP_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DONOTUSE_AcidBottle_BP.DONOTUSE_AcidBottle_BP_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADONOTUSE_AcidBottle_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DONOTUSE_AcidBottle_BP.DONOTUSE_AcidBottle_BP_C.ReceiveTick");
		
		ADONOTUSE_AcidBottle_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DONOTUSE_AcidBottle_BP.DONOTUSE_AcidBottle_BP_C.OnDamagePlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADONOTUSE_AcidBottle_BP_C::OnDamagePlayer(class ARBPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DONOTUSE_AcidBottle_BP.DONOTUSE_AcidBottle_BP_C.OnDamagePlayer");
		
		ADONOTUSE_AcidBottle_BP_C_OnDamagePlayer_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DONOTUSE_AcidBottle_BP.DONOTUSE_AcidBottle_BP_C.ExecuteUbergraph_DONOTUSE_AcidBottle_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADONOTUSE_AcidBottle_BP_C::ExecuteUbergraph_DONOTUSE_AcidBottle_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DONOTUSE_AcidBottle_BP.DONOTUSE_AcidBottle_BP_C.ExecuteUbergraph_DONOTUSE_AcidBottle_BP");
		
		ADONOTUSE_AcidBottle_BP_C_ExecuteUbergraph_DONOTUSE_AcidBottle_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADONOTUSE_AcidBottle_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADONOTUSE_AcidBottle_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DONOTUSE_AcidBottle_BP.DONOTUSE_AcidBottle_BP_C");
		return ptr;
	}

}


