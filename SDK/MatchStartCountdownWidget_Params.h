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
	 * Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.GetFindPartySearchingText
	 */
	struct UMatchStartCountdownWidget_C_GetFindPartySearchingText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.UpdateCountdownText
	 */
	struct UMatchStartCountdownWidget_C_UpdateCountdownText_Params
	{	};

	/**
	 * Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.OnFindPartyTicketStateUpdated
	 */
	struct UMatchStartCountdownWidget_C_OnFindPartyTicketStateUpdated_Params
	{
	public:
		EFindPartyTicketState                                      findPartyTicketState;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.OnFindPartyStateUpdated
	 */
	struct UMatchStartCountdownWidget_C_OnFindPartyStateUpdated_Params
	{
	public:
		struct FFindPartyState                                     FindPartyState;                                          // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.UpdateText
	 */
	struct UMatchStartCountdownWidget_C_UpdateText_Params
	{	};

	/**
	 * Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.OnMatchStateUpdated
	 */
	struct UMatchStartCountdownWidget_C_OnMatchStateUpdated_Params
	{
	public:
		struct FMatchState                                         MatchState;                                              // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.SetIsRightAligned
	 */
	struct UMatchStartCountdownWidget_C_SetIsRightAligned_Params
	{
	public:
		bool                                                       isRightAligned;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.ShouldShow
	 */
	struct UMatchStartCountdownWidget_C_ShouldShow_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.CancelMatchCountdown
	 */
	struct UMatchStartCountdownWidget_C_CancelMatchCountdown_Params
	{	};

	/**
	 * Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.StartMatchCountdown
	 */
	struct UMatchStartCountdownWidget_C_StartMatchCountdown_Params
	{
	public:
		float                                                      MatchCancelationGracePeriodServerTime;                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MatchStartServerTime;                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bReadyToTravelToMatch;                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.Construct
	 */
	struct UMatchStartCountdownWidget_C_Construct_Params
	{	};

	/**
	 * Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.Tick
	 */
	struct UMatchStartCountdownWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.Destruct
	 */
	struct UMatchStartCountdownWidget_C_Destruct_Params
	{	};

	/**
	 * Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.OnMatchStateUpdatedEvent
	 */
	struct UMatchStartCountdownWidget_C_OnMatchStateUpdatedEvent_Params
	{
	public:
		class ARBLobbyPlayerState*                                 RBLobbyPlayerState;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FMatchState                                         MatchState;                                              // 0x0008(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.OnFindPartyStateUpdatedEvent
	 */
	struct UMatchStartCountdownWidget_C_OnFindPartyStateUpdatedEvent_Params
	{
	public:
		class ARBLobbyPlayerState*                                 RBLobbyPlayerState;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FFindPartyState                                     FindPartyState;                                          // 0x0008(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.OnFindPartyTicketStateUpdatedEvent
	 */
	struct UMatchStartCountdownWidget_C_OnFindPartyTicketStateUpdatedEvent_Params
	{
	public:
		EFindPartyTicketState                                      findPartyTicketState;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.ExecuteUbergraph_MatchStartCountdownWidget
	 */
	struct UMatchStartCountdownWidget_C_ExecuteUbergraph_MatchStartCountdownWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
