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
	 * Function TestGateWagon-01.TestGateWagon-01_C.GetLight
	 */
	struct ATestGateWagon__C_GetLight_Params
	{	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.SetDestinationSignsText
	 */
	struct ATestGateWagon__C_SetDestinationSignsText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.SetAllTVsWithInteractibleUI
	 */
	struct ATestGateWagon__C_SetAllTVsWithInteractibleUI_Params
	{	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.ForceAllTvUp
	 */
	struct ATestGateWagon__C_ForceAllTvUp_Params
	{
	public:
		bool                                                       ForceUP;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_327E[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.CanPlayIntroAnim
	 */
	struct ATestGateWagon__C_CanPlayIntroAnim_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.SetAllTVsON
	 */
	struct ATestGateWagon__C_SetAllTVsON_Params
	{
	public:
		bool                                                       IsOn;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N3DP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.PlayAnimationOnAllTVs
	 */
	struct ATestGateWagon__C_PlayAnimationOnAllTVs_Params
	{
	public:
		struct FNarrativeScreenAnimationData                       animData;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.GetLocalPlayerChairPanel
	 */
	struct ATestGateWagon__C_GetLocalPlayerChairPanel_Params
	{
	public:
		class URBSASChairPanelComponent*                           Chair;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.ForcePlayersOutOfChairs
	 */
	struct ATestGateWagon__C_ForcePlayersOutOfChairs_Params
	{	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.UpdateSASDoorText
	 */
	struct ATestGateWagon__C_UpdateSASDoorText_Params
	{
	public:
		struct FRBStageID                                          StageID;                                                 // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class ASasDoor__BP1_C*                                     door;                                                    // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.StopTimeline__FinishedFunc
	 */
	struct ATestGateWagon__C_StopTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.StopTimeline__UpdateFunc
	 */
	struct ATestGateWagon__C_StopTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.FlickeringTimeline__FinishedFunc
	 */
	struct ATestGateWagon__C_FlickeringTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.FlickeringTimeline__UpdateFunc
	 */
	struct ATestGateWagon__C_FlickeringTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.Timeline_0__FinishedFunc
	 */
	struct ATestGateWagon__C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.Timeline_0__UpdateFunc
	 */
	struct ATestGateWagon__C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.ShakingCablesTimeline__FinishedFunc
	 */
	struct ATestGateWagon__C_ShakingCablesTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.ShakingCablesTimeline__UpdateFunc
	 */
	struct ATestGateWagon__C_ShakingCablesTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.Timeline_1__FinishedFunc
	 */
	struct ATestGateWagon__C_Timeline_1__FinishedFunc_Params
	{	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.Timeline_1__UpdateFunc
	 */
	struct ATestGateWagon__C_Timeline_1__UpdateFunc_Params
	{	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.Timeline_2__FinishedFunc
	 */
	struct ATestGateWagon__C_Timeline_2__FinishedFunc_Params
	{	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.Timeline_2__UpdateFunc
	 */
	struct ATestGateWagon__C_Timeline_2__UpdateFunc_Params
	{	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.Timeline_3__FinishedFunc
	 */
	struct ATestGateWagon__C_Timeline_3__FinishedFunc_Params
	{	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.Timeline_3__UpdateFunc
	 */
	struct ATestGateWagon__C_Timeline_3__UpdateFunc_Params
	{	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.bpiBlurEntity
	 */
	struct ATestGateWagon__C_bpiBlurEntity_Params
	{	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.UpdateSASTexts
	 */
	struct ATestGateWagon__C_UpdateSASTexts_Params
	{	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.StartTrain
	 */
	struct ATestGateWagon__C_StartTrain_Params
	{
	public:
		bool                                                       ToLobby;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.StopTrain
	 */
	struct ATestGateWagon__C_StopTrain_Params
	{	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.ReceiveBeginPlay
	 */
	struct ATestGateWagon__C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.StartTrainNoDelay
	 */
	struct ATestGateWagon__C_StartTrainNoDelay_Params
	{	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.CameraShakeTrainRideContinuous
	 */
	struct ATestGateWagon__C_CameraShakeTrainRideContinuous_Params
	{	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.StartFlickeringLights
	 */
	struct ATestGateWagon__C_StartFlickeringLights_Params
	{	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.BrakingFlickeringLights
	 */
	struct ATestGateWagon__C_BrakingFlickeringLights_Params
	{	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.SetCableShakeFadeIn
	 */
	struct ATestGateWagon__C_SetCableShakeFadeIn_Params
	{	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.SetCableShakeFadeOut
	 */
	struct ATestGateWagon__C_SetCableShakeFadeOut_Params
	{	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.MoveAwayFromLobby
	 */
	struct ATestGateWagon__C_MoveAwayFromLobby_Params
	{	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.ArriveToLobby
	 */
	struct ATestGateWagon__C_ArriveToLobby_Params
	{	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.MoveAwayFromMission
	 */
	struct ATestGateWagon__C_MoveAwayFromMission_Params
	{	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.ArriveToMission
	 */
	struct ATestGateWagon__C_ArriveToMission_Params
	{	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.EnableLight
	 */
	struct ATestGateWagon__C_EnableLight_Params
	{	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.OnGamePhaseUpdated
	 */
	struct ATestGateWagon__C_OnGamePhaseUpdated_Params
	{
	public:
		EGamePhase                                                 gamePhase;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.OnGameStageInfoChanged
	 */
	struct ATestGateWagon__C_OnGameStageInfoChanged_Params
	{
	public:
		struct FRBGameStageInfo                                    gameStageInfo;                                           // 0x0000(0x0060)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.TryStopTrain
	 */
	struct ATestGateWagon__C_TryStopTrain_Params
	{	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.StartIntroSequence
	 */
	struct ATestGateWagon__C_StartIntroSequence_Params
	{	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.ForceTvUp
	 */
	struct ATestGateWagon__C_ForceTvUp_Params
	{	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.DisableLight
	 */
	struct ATestGateWagon__C_DisableLight_Params
	{	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.ReceiveEndPlay
	 */
	struct ATestGateWagon__C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.Start Narrative Fail Music
	 */
	struct ATestGateWagon__C_Start_Narrative_Fail_Music_Params
	{	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.OnIntroAnimationFinished
	 */
	struct ATestGateWagon__C_OnIntroAnimationFinished_Params
	{	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.StopDrugSpray
	 */
	struct ATestGateWagon__C_StopDrugSpray_Params
	{	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.StartDrugSpray
	 */
	struct ATestGateWagon__C_StartDrugSpray_Params
	{	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.PrintMovieDebug
	 */
	struct ATestGateWagon__C_PrintMovieDebug_Params
	{	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.UpdateSAS
	 */
	struct ATestGateWagon__C_UpdateSAS_Params
	{	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.OnCurrentSasChanged
	 */
	struct ATestGateWagon__C_OnCurrentSasChanged_Params
	{
	public:
		class ARBSAS*                                              oldSAS;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBSAS*                                              currentSAS;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.OnSASStateChnagedCallback
	 */
	struct ATestGateWagon__C_OnSASStateChnagedCallback_Params
	{
	public:
		ESASState                                                  State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.CloseLight
	 */
	struct ATestGateWagon__C_CloseLight_Params
	{	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.OnTutorialIntroFinished
	 */
	struct ATestGateWagon__C_OnTutorialIntroFinished_Params
	{	};

	/**
	 * Function TestGateWagon-01.TestGateWagon-01_C.ExecuteUbergraph_TestGateWagon-01
	 */
	struct ATestGateWagon__C_ExecuteUbergraph_TestGateWagon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
