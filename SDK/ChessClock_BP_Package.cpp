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
	 * 		Name   -> Function ChessClock_BP.ChessClock_BP_C.OnTeamTurnChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EChessTeam                                         Team                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChessClock_BP_C::OnTeamTurnChanged(EChessTeam Team)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessClock_BP.ChessClock_BP_C.OnTeamTurnChanged");
		
		AChessClock_BP_C_OnTeamTurnChanged_Params params {};
		params.Team = Team;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessClock_BP.ChessClock_BP_C.OnGameStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EChessGameState                                    ChessGameState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChessClock_BP_C::OnGameStateChanged(EChessGameState ChessGameState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessClock_BP.ChessClock_BP_C.OnGameStateChanged");
		
		AChessClock_BP_C_OnGameStateChanged_Params params {};
		params.ChessGameState = ChessGameState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessClock_BP.ChessClock_BP_C.ResetButtons
	 * 		Flags  -> ()
	 */
	void AChessClock_BP_C::ResetButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessClock_BP.ChessClock_BP_C.ResetButtons");
		
		AChessClock_BP_C_ResetButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessClock_BP.ChessClock_BP_C.SetButtonsTurnTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bPlayer1                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AChessClock_BP_C::SetButtonsTurnTo(bool bPlayer1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessClock_BP.ChessClock_BP_C.SetButtonsTurnTo");
		
		AChessClock_BP_C_SetButtonsTurnTo_Params params {};
		params.bPlayer1 = bPlayer1;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessClock_BP.ChessClock_BP_C.UpdateTime
	 * 		Flags  -> ()
	 */
	void AChessClock_BP_C::UpdateTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessClock_BP.ChessClock_BP_C.UpdateTime");
		
		AChessClock_BP_C_UpdateTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessClock_BP.ChessClock_BP_C.SetTimeForPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeSeconds                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsPlayer1                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AChessClock_BP_C::SetTimeForPlayer(float TimeSeconds, bool IsPlayer1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessClock_BP.ChessClock_BP_C.SetTimeForPlayer");
		
		AChessClock_BP_C_SetTimeForPlayer_Params params {};
		params.TimeSeconds = TimeSeconds;
		params.IsPlayer1 = IsPlayer1;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessClock_BP.ChessClock_BP_C.OnWorldFullyLoaded
	 * 		Flags  -> ()
	 */
	void AChessClock_BP_C::OnWorldFullyLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessClock_BP.ChessClock_BP_C.OnWorldFullyLoaded");
		
		AChessClock_BP_C_OnWorldFullyLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessClock_BP.ChessClock_BP_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChessClock_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessClock_BP.ChessClock_BP_C.ReceiveTick");
		
		AChessClock_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessClock_BP.ChessClock_BP_C.OnWorldPopulateFinished
	 * 		Flags  -> ()
	 */
	void AChessClock_BP_C::OnWorldPopulateFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessClock_BP.ChessClock_BP_C.OnWorldPopulateFinished");
		
		AChessClock_BP_C_OnWorldPopulateFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessClock_BP.ChessClock_BP_C.SwitchButtonDelayed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bPlayer1                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AChessClock_BP_C::SwitchButtonDelayed(bool bPlayer1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessClock_BP.ChessClock_BP_C.SwitchButtonDelayed");
		
		AChessClock_BP_C_SwitchButtonDelayed_Params params {};
		params.bPlayer1 = bPlayer1;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessClock_BP.ChessClock_BP_C.ExecuteUbergraph_ChessClock_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChessClock_BP_C::ExecuteUbergraph_ChessClock_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessClock_BP.ChessClock_BP_C.ExecuteUbergraph_ChessClock_BP");
		
		AChessClock_BP_C_ExecuteUbergraph_ChessClock_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AChessClock_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AChessClock_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ChessClock_BP.ChessClock_BP_C");
		return ptr;
	}

}


