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
	 * 		Name   -> Function ChessMinigameWidget.ChessMinigameWidget_C.RefreshPlayersRating
	 * 		Flags  -> ()
	 */
	void UChessMinigameWidget_C::RefreshPlayersRating()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessMinigameWidget.ChessMinigameWidget_C.RefreshPlayersRating");
		
		UChessMinigameWidget_C_RefreshPlayersRating_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessMinigameWidget.ChessMinigameWidget_C.Get_WaitingForPlayer_TXT_1_Text_1
	 * 		Flags  -> ()
	 */
	class FText UChessMinigameWidget_C::Get_WaitingForPlayer_TXT_1_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessMinigameWidget.ChessMinigameWidget_C.Get_WaitingForPlayer_TXT_1_Text_1");
		
		UChessMinigameWidget_C_Get_WaitingForPlayer_TXT_1_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessMinigameWidget.ChessMinigameWidget_C.Get_MatchCountdownText_Text_1
	 * 		Flags  -> ()
	 */
	class FText UChessMinigameWidget_C::Get_MatchCountdownText_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessMinigameWidget.ChessMinigameWidget_C.Get_MatchCountdownText_Text_1");
		
		UChessMinigameWidget_C_Get_MatchCountdownText_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessMinigameWidget.ChessMinigameWidget_C.GetExitingPercent
	 * 		Flags  -> ()
	 */
	float UChessMinigameWidget_C::GetExitingPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessMinigameWidget.ChessMinigameWidget_C.GetExitingPercent");
		
		UChessMinigameWidget_C_GetExitingPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessMinigameWidget.ChessMinigameWidget_C.OnExitingChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bExiting                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              StartExitTimestamp                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChessMinigameWidget_C::OnExitingChange(bool bExiting, float StartExitTimestamp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessMinigameWidget.ChessMinigameWidget_C.OnExitingChange");
		
		UChessMinigameWidget_C_OnExitingChange_Params params {};
		params.bExiting = bExiting;
		params.StartExitTimestamp = StartExitTimestamp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessMinigameWidget.ChessMinigameWidget_C.SetBindLocalPanel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bBind                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChessMinigameWidget_C::SetBindLocalPanel(bool bBind)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessMinigameWidget.ChessMinigameWidget_C.SetBindLocalPanel");
		
		UChessMinigameWidget_C_SetBindLocalPanel_Params params {};
		params.bBind = bBind;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessMinigameWidget.ChessMinigameWidget_C.GetCroppedName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            MaxChars                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FString UChessMinigameWidget_C::GetCroppedName(const class FString& Name, int32_t MaxChars)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessMinigameWidget.ChessMinigameWidget_C.GetCroppedName");
		
		UChessMinigameWidget_C_GetCroppedName_Params params {};
		params.Name = Name;
		params.MaxChars = MaxChars;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessMinigameWidget.ChessMinigameWidget_C.SetupPlayerNames
	 * 		Flags  -> ()
	 */
	void UChessMinigameWidget_C::SetupPlayerNames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessMinigameWidget.ChessMinigameWidget_C.SetupPlayerNames");
		
		UChessMinigameWidget_C_SetupPlayerNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessMinigameWidget.ChessMinigameWidget_C.OnPlayerConnectionEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChessMinigameWidget_C::OnPlayerConnectionEvent(class ARBPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessMinigameWidget.ChessMinigameWidget_C.OnPlayerConnectionEvent");
		
		UChessMinigameWidget_C_OnPlayerConnectionEvent_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessMinigameWidget.ChessMinigameWidget_C.OnChessEndReasonChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EChessGameEndReason                                ChessGameEndReason                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EChessTeam                                         winningTeam                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChessMinigameWidget_C::OnChessEndReasonChanged(EChessGameEndReason ChessGameEndReason, EChessTeam winningTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessMinigameWidget.ChessMinigameWidget_C.OnChessEndReasonChanged");
		
		UChessMinigameWidget_C_OnChessEndReasonChanged_Params params {};
		params.ChessGameEndReason = ChessGameEndReason;
		params.winningTeam = winningTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessMinigameWidget.ChessMinigameWidget_C.ChessGameTeamTurnChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EChessTeam                                         Team                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChessMinigameWidget_C::ChessGameTeamTurnChanged(EChessTeam Team)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessMinigameWidget.ChessMinigameWidget_C.ChessGameTeamTurnChanged");
		
		UChessMinigameWidget_C_ChessGameTeamTurnChanged_Params params {};
		params.Team = Team;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessMinigameWidget.ChessMinigameWidget_C.ResetGame
	 * 		Flags  -> ()
	 */
	void UChessMinigameWidget_C::ResetGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessMinigameWidget.ChessMinigameWidget_C.ResetGame");
		
		UChessMinigameWidget_C_ResetGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessMinigameWidget.ChessMinigameWidget_C.PlayOuttro
	 * 		Flags  -> ()
	 */
	void UChessMinigameWidget_C::PlayOuttro()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessMinigameWidget.ChessMinigameWidget_C.PlayOuttro");
		
		UChessMinigameWidget_C_PlayOuttro_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessMinigameWidget.ChessMinigameWidget_C.PlayStartGame
	 * 		Flags  -> ()
	 */
	void UChessMinigameWidget_C::PlayStartGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessMinigameWidget.ChessMinigameWidget_C.PlayStartGame");
		
		UChessMinigameWidget_C_PlayStartGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessMinigameWidget.ChessMinigameWidget_C.Play Intro
	 * 		Flags  -> ()
	 */
	void UChessMinigameWidget_C::Play_Intro()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessMinigameWidget.ChessMinigameWidget_C.Play Intro");
		
		UChessMinigameWidget_C_Play_Intro_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessMinigameWidget.ChessMinigameWidget_C.GetOpposingTeamTime
	 * 		Flags  -> ()
	 */
	class FText UChessMinigameWidget_C::GetOpposingTeamTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessMinigameWidget.ChessMinigameWidget_C.GetOpposingTeamTime");
		
		UChessMinigameWidget_C_GetOpposingTeamTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessMinigameWidget.ChessMinigameWidget_C.GetLocalTeamTime
	 * 		Flags  -> ()
	 */
	class FText UChessMinigameWidget_C::GetLocalTeamTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessMinigameWidget.ChessMinigameWidget_C.GetLocalTeamTime");
		
		UChessMinigameWidget_C_GetLocalTeamTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessMinigameWidget.ChessMinigameWidget_C.OnChessGameStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EChessGameState                                    ChessGameState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChessMinigameWidget_C::OnChessGameStateChanged(EChessGameState ChessGameState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessMinigameWidget.ChessMinigameWidget_C.OnChessGameStateChanged");
		
		UChessMinigameWidget_C_OnChessGameStateChanged_Params params {};
		params.ChessGameState = ChessGameState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessMinigameWidget.ChessMinigameWidget_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBChessBoardBase_C*                         ChessBoard                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class URBChessBoardPanelComponent*                 LocalPanel                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChessMinigameWidget_C::Init(class ARBChessBoardBase_C* ChessBoard, class URBChessBoardPanelComponent* LocalPanel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessMinigameWidget.ChessMinigameWidget_C.Init");
		
		UChessMinigameWidget_C_Init_Params params {};
		params.ChessBoard = ChessBoard;
		params.LocalPanel = LocalPanel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessMinigameWidget.ChessMinigameWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UChessMinigameWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessMinigameWidget.ChessMinigameWidget_C.Construct");
		
		UChessMinigameWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessMinigameWidget.ChessMinigameWidget_C.BindEvents
	 * 		Flags  -> ()
	 */
	void UChessMinigameWidget_C::BindEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessMinigameWidget.ChessMinigameWidget_C.BindEvents");
		
		UChessMinigameWidget_C_BindEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessMinigameWidget.ChessMinigameWidget_C.UnbindEvents
	 * 		Flags  -> ()
	 */
	void UChessMinigameWidget_C::UnbindEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessMinigameWidget.ChessMinigameWidget_C.UnbindEvents");
		
		UChessMinigameWidget_C_UnbindEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessMinigameWidget.ChessMinigameWidget_C.Destruct
	 * 		Flags  -> ()
	 */
	void UChessMinigameWidget_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessMinigameWidget.ChessMinigameWidget_C.Destruct");
		
		UChessMinigameWidget_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChessMinigameWidget.ChessMinigameWidget_C.ExecuteUbergraph_ChessMinigameWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChessMinigameWidget_C::ExecuteUbergraph_ChessMinigameWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChessMinigameWidget.ChessMinigameWidget_C.ExecuteUbergraph_ChessMinigameWidget");
		
		UChessMinigameWidget_C_ExecuteUbergraph_ChessMinigameWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChessMinigameWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChessMinigameWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ChessMinigameWidget.ChessMinigameWidget_C");
		return ptr;
	}

}


