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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.GetPingEnabled
	 */
	struct URBChessBoardPanelComponentBase_C_GetPingEnabled_Params
	{
	public:
		class ARBPlayer*                                           pingOwner;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          HitResult;                                               // 0x0008(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		bool                                                       outIsEnabled;                                            // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0091(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.GetPingItemName
	 */
	struct URBChessBoardPanelComponentBase_C_GetPingItemName_Params
	{
	public:
		class FText                                                outName;                                                 // 0x0000(0x0018)  (Parm, OutParm)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.GetPlayerPingData
	 */
	struct URBChessBoardPanelComponentBase_C_GetPlayerPingData_Params
	{
	public:
		class ARBPlayer*                                           pingOwner;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          HitResult;                                               // 0x0008(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		struct FPlayerPingData                                     outData;                                                 // 0x0090(0x0028)  (Parm, OutParm)
		bool                                                       ReturnValue;                                             // 0x00B8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.GetPlayerPingWorldLocation
	 */
	struct URBChessBoardPanelComponentBase_C_GetPlayerPingWorldLocation_Params
	{
	public:
		class ARBPlayer*                                           pingOwner;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          HitResult;                                               // 0x0008(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		struct FVector                                             OutLocation;                                             // 0x0090(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x009C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.SetPlayerAnimState
	 */
	struct URBChessBoardPanelComponentBase_C_SetPlayerAnimState_Params
	{
	public:
		EChessGamePlayerAnimState                                  PlayerAnimState;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AZHR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.RefreshAllOtherPiecesPositions
	 */
	struct URBChessBoardPanelComponentBase_C_RefreshAllOtherPiecesPositions_Params
	{
	public:
		class URBChessPieceComponent*                              PieceToIgnore;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.MovePieceWithHand
	 */
	struct URBChessBoardPanelComponentBase_C_MovePieceWithHand_Params
	{
	public:
		class URBChessPieceComponent*                              piece;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.SetClockTickingSoundActivated
	 */
	struct URBChessBoardPanelComponentBase_C_SetClockTickingSoundActivated_Params
	{
	public:
		bool                                                       bActivated;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_84XS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.ManageClockTickingSound
	 */
	struct URBChessBoardPanelComponentBase_C_ManageClockTickingSound_Params
	{	};

	/**
	 * Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.OnChessGameStateChangedEvent
	 */
	struct URBChessBoardPanelComponentBase_C_OnChessGameStateChangedEvent_Params
	{
	public:
		EChessGameState                                            ChessGameState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.SnapGhostAnimsToState
	 */
	struct URBChessBoardPanelComponentBase_C_SnapGhostAnimsToState_Params
	{
	public:
		class ARBPawn*                                             RBPawn;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.OnRep_bWon
	 */
	struct URBChessBoardPanelComponentBase_C_OnRep_bWon_Params
	{	};

	/**
	 * Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.OnRep_bGameTied
	 */
	struct URBChessBoardPanelComponentBase_C_OnRep_bGameTied_Params
	{	};

	/**
	 * Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.GetChessGhostAnimBP
	 */
	struct URBChessBoardPanelComponentBase_C_GetChessGhostAnimBP_Params
	{
	public:
		class UChessPanel_GhostAnimBP_C*                           NewParam;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.OnChessGameEndReasonChanged
	 */
	struct URBChessBoardPanelComponentBase_C_OnChessGameEndReasonChanged_Params
	{
	public:
		EChessGameEndReason                                        ChessGameEndReason;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EChessTeam                                                 winningTeam;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.ChessGameTurnTypeChanged
	 */
	struct URBChessBoardPanelComponentBase_C_ChessGameTurnTypeChanged_Params
	{
	public:
		EChessGameTurnType                                         newTurnType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SDZW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ARBChessBoard*                                       ChessBoard;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.FlashKingRed
	 */
	struct URBChessBoardPanelComponentBase_C_FlashKingRed_Params
	{	};

	/**
	 * Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.ManageHoldingPiece
	 */
	struct URBChessBoardPanelComponentBase_C_ManageHoldingPiece_Params
	{	};

	/**
	 * Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.TryRemoveHud
	 */
	struct URBChessBoardPanelComponentBase_C_TryRemoveHud_Params
	{
	public:
		bool                                                       Player1;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.ShowHUD
	 */
	struct URBChessBoardPanelComponentBase_C_ShowHUD_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QWR6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.ShouldBPTick
	 */
	struct URBChessBoardPanelComponentBase_C_ShouldBPTick_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.SetSpinningPromotingPiece
	 */
	struct URBChessBoardPanelComponentBase_C_SetSpinningPromotingPiece_Params
	{
	public:
		EChessPieceType                                            PieceType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.PromotingPieceFocusChanged
	 */
	struct URBChessBoardPanelComponentBase_C_PromotingPieceFocusChanged_Params
	{
	public:
		EChessPieceType                                            PieceType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.ReceiveTick
	 */
	struct URBChessBoardPanelComponentBase_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.Event_PlayerEnteredGame
	 */
	struct URBChessBoardPanelComponentBase_C_Event_PlayerEnteredGame_Params
	{
	public:
		class ARBPlayer*                                           Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.Event_PlayerLeftGame
	 */
	struct URBChessBoardPanelComponentBase_C_Event_PlayerLeftGame_Params
	{
	public:
		class ARBPlayer*                                           Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.OnWorldPopulateFinished
	 */
	struct URBChessBoardPanelComponentBase_C_OnWorldPopulateFinished_Params
	{	};

	/**
	 * Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.Event_PlayerDropPieceAt
	 */
	struct URBChessBoardPanelComponentBase_C_Event_PlayerDropPieceAt_Params
	{
	public:
		struct FVector2D                                           coords;                                                  // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.Event_ShowMoveLeavesOwnKingChecked
	 */
	struct URBChessBoardPanelComponentBase_C_Event_ShowMoveLeavesOwnKingChecked_Params
	{
	public:
		class URBChessPieceComponent*                              kingPiece;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.OnChessGameTurnTypeChanged_Event_1
	 */
	struct URBChessBoardPanelComponentBase_C_OnChessGameTurnTypeChanged_Event_1_Params
	{
	public:
		EChessGameTurnType                                         ChessGameTurnType;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.BindEvents
	 */
	struct URBChessBoardPanelComponentBase_C_BindEvents_Params
	{	};

	/**
	 * Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.BP_OnPawnInteractingChanged
	 */
	struct URBChessBoardPanelComponentBase_C_BP_OnPawnInteractingChanged_Params
	{
	public:
		class ARBPawn*                                             newPawnInteracting;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.BP_ChessGamePlayerAnimStateChanged
	 */
	struct URBChessBoardPanelComponentBase_C_BP_ChessGamePlayerAnimStateChanged_Params
	{	};

	/**
	 * Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.ReceiveEndPlay
	 */
	struct URBChessBoardPanelComponentBase_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBChessBoardPanelComponentBase.RBChessBoardPanelComponentBase_C.ExecuteUbergraph_RBChessBoardPanelComponentBase
	 */
	struct URBChessBoardPanelComponentBase_C_ExecuteUbergraph_RBChessBoardPanelComponentBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
