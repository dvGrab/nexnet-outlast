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
	 * 		Name   -> Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.GetPingEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   pingOwner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               outIsEnabled                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool URBChessBoardPanelComponentBase_C::GetPingEnabled(class ARBPlayer* pingOwner, const struct FHitResult& HitResult, bool* outIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.GetPingEnabled");
		
		URBChessBoardPanelComponentBase_C_GetPingEnabled_Params params {};
		params.pingOwner = pingOwner;
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outIsEnabled != nullptr)
			*outIsEnabled = params.outIsEnabled;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.GetPingItemName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        outName                                                    (Parm, OutParm)
	 */
	bool URBChessBoardPanelComponentBase_C::GetPingItemName(class FText* outName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.GetPingItemName");
		
		URBChessBoardPanelComponentBase_C_GetPingItemName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outName != nullptr)
			*outName = params.outName;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.GetPlayerPingData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   pingOwner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		struct FPlayerPingData                             outData                                                    (Parm, OutParm)
	 */
	bool URBChessBoardPanelComponentBase_C::GetPlayerPingData(class ARBPlayer* pingOwner, const struct FHitResult& HitResult, struct FPlayerPingData* outData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.GetPlayerPingData");
		
		URBChessBoardPanelComponentBase_C_GetPlayerPingData_Params params {};
		params.pingOwner = pingOwner;
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outData != nullptr)
			*outData = params.outData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.GetPlayerPingWorldLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   pingOwner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		struct FVector                                     OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool URBChessBoardPanelComponentBase_C::GetPlayerPingWorldLocation(class ARBPlayer* pingOwner, const struct FHitResult& HitResult, struct FVector* OutLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.GetPlayerPingWorldLocation");
		
		URBChessBoardPanelComponentBase_C_GetPlayerPingWorldLocation_Params params {};
		params.pingOwner = pingOwner;
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLocation != nullptr)
			*OutLocation = params.OutLocation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.SetPlayerAnimState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EChessGamePlayerAnimState                          PlayerAnimState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URBChessBoardPanelComponentBase_C::SetPlayerAnimState(EChessGamePlayerAnimState PlayerAnimState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.SetPlayerAnimState");
		
		URBChessBoardPanelComponentBase_C_SetPlayerAnimState_Params params {};
		params.PlayerAnimState = PlayerAnimState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.RefreshAllOtherPiecesPositions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBChessPieceComponent*                      PieceToIgnore                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URBChessBoardPanelComponentBase_C::RefreshAllOtherPiecesPositions(class URBChessPieceComponent* PieceToIgnore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.RefreshAllOtherPiecesPositions");
		
		URBChessBoardPanelComponentBase_C_RefreshAllOtherPiecesPositions_Params params {};
		params.PieceToIgnore = PieceToIgnore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.MovePieceWithHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBChessPieceComponent*                      piece                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URBChessBoardPanelComponentBase_C::MovePieceWithHand(class URBChessPieceComponent* piece)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.MovePieceWithHand");
		
		URBChessBoardPanelComponentBase_C_MovePieceWithHand_Params params {};
		params.piece = piece;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.SetClockTickingSoundActivated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bActivated                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URBChessBoardPanelComponentBase_C::SetClockTickingSoundActivated(bool bActivated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.SetClockTickingSoundActivated");
		
		URBChessBoardPanelComponentBase_C_SetClockTickingSoundActivated_Params params {};
		params.bActivated = bActivated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.ManageClockTickingSound
	 * 		Flags  -> ()
	 */
	void URBChessBoardPanelComponentBase_C::ManageClockTickingSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.ManageClockTickingSound");
		
		URBChessBoardPanelComponentBase_C_ManageClockTickingSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.OnChessGameStateChangedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EChessGameState                                    ChessGameState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URBChessBoardPanelComponentBase_C::OnChessGameStateChangedEvent(EChessGameState ChessGameState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.OnChessGameStateChangedEvent");
		
		URBChessBoardPanelComponentBase_C_OnChessGameStateChangedEvent_Params params {};
		params.ChessGameState = ChessGameState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.SnapGhostAnimsToState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     RBPawn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URBChessBoardPanelComponentBase_C::SnapGhostAnimsToState(class ARBPawn* RBPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.SnapGhostAnimsToState");
		
		URBChessBoardPanelComponentBase_C_SnapGhostAnimsToState_Params params {};
		params.RBPawn = RBPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.OnRep_bWon
	 * 		Flags  -> ()
	 */
	void URBChessBoardPanelComponentBase_C::OnRep_bWon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.OnRep_bWon");
		
		URBChessBoardPanelComponentBase_C_OnRep_bWon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.OnRep_bGameTied
	 * 		Flags  -> ()
	 */
	void URBChessBoardPanelComponentBase_C::OnRep_bGameTied()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.OnRep_bGameTied");
		
		URBChessBoardPanelComponentBase_C_OnRep_bGameTied_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.GetChessGhostAnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UChessPanel_GhostAnimBP_C*                   NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URBChessBoardPanelComponentBase_C::GetChessGhostAnimBP(class UChessPanel_GhostAnimBP_C** NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.GetChessGhostAnimBP");
		
		URBChessBoardPanelComponentBase_C_GetChessGhostAnimBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.OnChessGameEndReasonChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EChessGameEndReason                                ChessGameEndReason                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EChessTeam                                         winningTeam                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URBChessBoardPanelComponentBase_C::OnChessGameEndReasonChanged(EChessGameEndReason ChessGameEndReason, EChessTeam winningTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.OnChessGameEndReasonChanged");
		
		URBChessBoardPanelComponentBase_C_OnChessGameEndReasonChanged_Params params {};
		params.ChessGameEndReason = ChessGameEndReason;
		params.winningTeam = winningTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.ChessGameTurnTypeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EChessGameTurnType                                 newTurnType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBChessBoard*                               ChessBoard                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URBChessBoardPanelComponentBase_C::ChessGameTurnTypeChanged(EChessGameTurnType newTurnType, class ARBChessBoard* ChessBoard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.ChessGameTurnTypeChanged");
		
		URBChessBoardPanelComponentBase_C_ChessGameTurnTypeChanged_Params params {};
		params.newTurnType = newTurnType;
		params.ChessBoard = ChessBoard;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.FlashKingRed
	 * 		Flags  -> ()
	 */
	void URBChessBoardPanelComponentBase_C::FlashKingRed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.FlashKingRed");
		
		URBChessBoardPanelComponentBase_C_FlashKingRed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.ManageHoldingPiece
	 * 		Flags  -> ()
	 */
	void URBChessBoardPanelComponentBase_C::ManageHoldingPiece()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.ManageHoldingPiece");
		
		URBChessBoardPanelComponentBase_C_ManageHoldingPiece_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.TryRemoveHud
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Player1                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URBChessBoardPanelComponentBase_C::TryRemoveHud(bool Player1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.TryRemoveHud");
		
		URBChessBoardPanelComponentBase_C_TryRemoveHud_Params params {};
		params.Player1 = Player1;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.ShowHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URBChessBoardPanelComponentBase_C::ShowHUD(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.ShowHUD");
		
		URBChessBoardPanelComponentBase_C_ShowHUD_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.ShouldBPTick
	 * 		Flags  -> ()
	 */
	bool URBChessBoardPanelComponentBase_C::ShouldBPTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.ShouldBPTick");
		
		URBChessBoardPanelComponentBase_C_ShouldBPTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.SetSpinningPromotingPiece
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EChessPieceType                                    PieceType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URBChessBoardPanelComponentBase_C::SetSpinningPromotingPiece(EChessPieceType PieceType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.SetSpinningPromotingPiece");
		
		URBChessBoardPanelComponentBase_C_SetSpinningPromotingPiece_Params params {};
		params.PieceType = PieceType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.PromotingPieceFocusChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EChessPieceType                                    PieceType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URBChessBoardPanelComponentBase_C::PromotingPieceFocusChanged(EChessPieceType PieceType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.PromotingPieceFocusChanged");
		
		URBChessBoardPanelComponentBase_C_PromotingPieceFocusChanged_Params params {};
		params.PieceType = PieceType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URBChessBoardPanelComponentBase_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.ReceiveTick");
		
		URBChessBoardPanelComponentBase_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.Event_PlayerEnteredGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URBChessBoardPanelComponentBase_C::Event_PlayerEnteredGame(class ARBPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.Event_PlayerEnteredGame");
		
		URBChessBoardPanelComponentBase_C_Event_PlayerEnteredGame_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.Event_PlayerLeftGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URBChessBoardPanelComponentBase_C::Event_PlayerLeftGame(class ARBPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.Event_PlayerLeftGame");
		
		URBChessBoardPanelComponentBase_C_Event_PlayerLeftGame_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.OnWorldPopulateFinished
	 * 		Flags  -> ()
	 */
	void URBChessBoardPanelComponentBase_C::OnWorldPopulateFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.OnWorldPopulateFinished");
		
		URBChessBoardPanelComponentBase_C_OnWorldPopulateFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.Event_PlayerDropPieceAt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   coords                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URBChessBoardPanelComponentBase_C::Event_PlayerDropPieceAt(const struct FVector2D& coords)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.Event_PlayerDropPieceAt");
		
		URBChessBoardPanelComponentBase_C_Event_PlayerDropPieceAt_Params params {};
		params.coords = coords;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.Event_ShowMoveLeavesOwnKingChecked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBChessPieceComponent*                      kingPiece                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URBChessBoardPanelComponentBase_C::Event_ShowMoveLeavesOwnKingChecked(class URBChessPieceComponent* kingPiece)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.Event_ShowMoveLeavesOwnKingChecked");
		
		URBChessBoardPanelComponentBase_C_Event_ShowMoveLeavesOwnKingChecked_Params params {};
		params.kingPiece = kingPiece;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.OnChessGameTurnTypeChanged_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EChessGameTurnType                                 ChessGameTurnType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URBChessBoardPanelComponentBase_C::OnChessGameTurnTypeChanged_Event_1(EChessGameTurnType ChessGameTurnType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.OnChessGameTurnTypeChanged_Event_1");
		
		URBChessBoardPanelComponentBase_C_OnChessGameTurnTypeChanged_Event_1_Params params {};
		params.ChessGameTurnType = ChessGameTurnType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.BindEvents
	 * 		Flags  -> ()
	 */
	void URBChessBoardPanelComponentBase_C::BindEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.BindEvents");
		
		URBChessBoardPanelComponentBase_C_BindEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.BP_OnPawnInteractingChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     newPawnInteracting                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URBChessBoardPanelComponentBase_C::BP_OnPawnInteractingChanged(class ARBPawn* newPawnInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.BP_OnPawnInteractingChanged");
		
		URBChessBoardPanelComponentBase_C_BP_OnPawnInteractingChanged_Params params {};
		params.newPawnInteracting = newPawnInteracting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.BP_ChessGamePlayerAnimStateChanged
	 * 		Flags  -> ()
	 */
	void URBChessBoardPanelComponentBase_C::BP_ChessGamePlayerAnimStateChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.BP_ChessGamePlayerAnimStateChanged");
		
		URBChessBoardPanelComponentBase_C_BP_ChessGamePlayerAnimStateChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URBChessBoardPanelComponentBase_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.ReceiveEndPlay");
		
		URBChessBoardPanelComponentBase_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.ExecuteUbergraph_RBChessBoardPanelComponentBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URBChessBoardPanelComponentBase_C::ExecuteUbergraph_RBChessBoardPanelComponentBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.ExecuteUbergraph_RBChessBoardPanelComponentBase");
		
		URBChessBoardPanelComponentBase_C_ExecuteUbergraph_RBChessBoardPanelComponentBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URBChessBoardPanelComponentBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URBChessBoardPanelComponentBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C");
		return ptr;
	}

}


