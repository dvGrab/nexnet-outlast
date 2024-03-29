#pragma once

/**
 * Name: TRIALS
 * Version: FINAL
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C
	 * Size -> 0x0058 (FullSize[0x09F8] - InheritedSize[0x09A0])
	 */
	class URBChessBoardPanelComponentBase_C : public URBChessBoardPanelComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x09A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       bSpinPromotingPiece;                                     // 0x09A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2JJH[0x7];                                   // 0x09A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                PromotingSMComp;                                         // 0x09B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UChessMinigameWidget_C*                              Widget;                                                  // 0x09B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UChessPanel_GhostAnimBP_C*                           GhostAnimBP;                                             // 0x09C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bFlashKingRed;                                           // 0x09C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QAB2[0x7];                                   // 0x09C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URBChessPieceComponent*                              King_Piece;                                              // 0x09D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FlashKingRedTimestamp;                                   // 0x09D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YFDP[0x4];                                   // 0x09DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URBChessPieceComponent*                              LastUsedMovingPiece;                                     // 0x09E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bGameTied;                                               // 0x09E8(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       bWon;                                                    // 0x09E9(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       bClockSoundEnabled;                                      // 0x09EA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XSHB[0x5];                                   // 0x09EB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URBChessPieceComponent*                              RevertingPiece;                                          // 0x09F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool GetPingEnabled(class ARBPlayer* pingOwner, const struct FHitResult& HitResult, bool* outIsEnabled);
		bool GetPingItemName(class FText* outName);
		bool GetPlayerPingData(class ARBPlayer* pingOwner, const struct FHitResult& HitResult, struct FPlayerPingData* outData);
		bool GetPlayerPingWorldLocation(class ARBPlayer* pingOwner, const struct FHitResult& HitResult, struct FVector* OutLocation);
		void SetPlayerAnimState(EChessGamePlayerAnimState PlayerAnimState);
		void RefreshAllOtherPiecesPositions(class URBChessPieceComponent* PieceToIgnore);
		void MovePieceWithHand(class URBChessPieceComponent* piece);
		void SetClockTickingSoundActivated(bool bActivated);
		void ManageClockTickingSound();
		void OnChessGameStateChangedEvent(EChessGameState ChessGameState);
		void SnapGhostAnimsToState(class ARBPawn* RBPawn);
		void OnRep_bWon();
		void OnRep_bGameTied();
		void GetChessGhostAnimBP(class UChessPanel_GhostAnimBP_C** NewParam);
		void OnChessGameEndReasonChanged(EChessGameEndReason ChessGameEndReason, EChessTeam winningTeam);
		void ChessGameTurnTypeChanged(EChessGameTurnType newTurnType, class ARBChessBoard* ChessBoard);
		void FlashKingRed();
		void ManageHoldingPiece();
		void TryRemoveHud(bool Player1);
		void ShowHUD(bool Show);
		bool ShouldBPTick();
		void SetSpinningPromotingPiece(EChessPieceType PieceType);
		void PromotingPieceFocusChanged(EChessPieceType PieceType);
		void ReceiveTick(float DeltaSeconds);
		void Event_PlayerEnteredGame(class ARBPlayer* Player);
		void Event_PlayerLeftGame(class ARBPlayer* Player);
		void OnWorldPopulateFinished();
		void Event_PlayerDropPieceAt(const struct FVector2D& coords);
		void Event_ShowMoveLeavesOwnKingChecked(class URBChessPieceComponent* kingPiece);
		void OnChessGameTurnTypeChanged_Event_1(EChessGameTurnType ChessGameTurnType);
		void BindEvents();
		void BP_OnPawnInteractingChanged(class ARBPawn* newPawnInteracting);
		void BP_ChessGamePlayerAnimStateChanged();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_RBChessBoardPanelComponentBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
