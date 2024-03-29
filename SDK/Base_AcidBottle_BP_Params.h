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
	 * Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.FixUp
	 */
	struct ABase_AcidBottle_BP_C_FixUp_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.GetObjectiveTypeIndex
	 */
	struct ABase_AcidBottle_BP_C_GetObjectiveTypeIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.OnRep_bFinishedPouring
	 */
	struct ABase_AcidBottle_BP_C_OnRep_bFinishedPouring_Params
	{	};

	/**
	 * Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.StartPouring
	 */
	struct ABase_AcidBottle_BP_C_StartPouring_Params
	{
	public:
		class URBInteractiblePanelComponent*                       panel;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             Pawn;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.ActiveAcidSplashVFX
	 */
	struct ABase_AcidBottle_BP_C_ActiveAcidSplashVFX_Params
	{
	public:
		EAcidBottleDamageType                                      DamageType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6QR2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ARBPlayer*                                           Player;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.TriggerDither
	 */
	struct ABase_AcidBottle_BP_C_TriggerDither_Params
	{
	public:
		bool                                                       bOn;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.OnRep_bHiddenDithered
	 */
	struct ABase_AcidBottle_BP_C_OnRep_bHiddenDithered_Params
	{	};

	/**
	 * Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.UpdateMotionDetection
	 */
	struct ABase_AcidBottle_BP_C_UpdateMotionDetection_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.ApplyMotionToWater
	 */
	struct ABase_AcidBottle_BP_C_ApplyMotionToWater_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.ShouldBPTick
	 */
	struct ABase_AcidBottle_BP_C_ShouldBPTick_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3KUN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.DamagePlayersInRadius
	 */
	struct ABase_AcidBottle_BP_C_DamagePlayersInRadius_Params
	{
	public:
		EAcidBottleDamageType                                      DamageType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EKUZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ARBPlayer*                                           Player;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.Timeline_0__FinishedFunc
	 */
	struct ABase_AcidBottle_BP_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.Timeline_0__UpdateFunc
	 */
	struct ABase_AcidBottle_BP_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.Dither__FinishedFunc
	 */
	struct ABase_AcidBottle_BP_C_Dither__FinishedFunc_Params
	{	};

	/**
	 * Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.Dither__UpdateFunc
	 */
	struct ABase_AcidBottle_BP_C_Dither__UpdateFunc_Params
	{	};

	/**
	 * Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.FadeOutLiquidTimeline__FinishedFunc
	 */
	struct ABase_AcidBottle_BP_C_FadeOutLiquidTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.FadeOutLiquidTimeline__UpdateFunc
	 */
	struct ABase_AcidBottle_BP_C_FadeOutLiquidTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.FadeFakeLightTimeline__FinishedFunc
	 */
	struct ABase_AcidBottle_BP_C_FadeFakeLightTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.FadeFakeLightTimeline__UpdateFunc
	 */
	struct ABase_AcidBottle_BP_C_FadeFakeLightTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.OnEditorPostLoad
	 */
	struct ABase_AcidBottle_BP_C_OnEditorPostLoad_Params
	{	};

	/**
	 * Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.OnPostActorsPasted
	 */
	struct ABase_AcidBottle_BP_C_OnPostActorsPasted_Params
	{
	public:
		TArray<class AActor*>                                      pastedActors;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.PostAddedToLevel
	 */
	struct ABase_AcidBottle_BP_C_PostAddedToLevel_Params
	{	};

	/**
	 * Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.PostDuplicated
	 */
	struct ABase_AcidBottle_BP_C_PostDuplicated_Params
	{
	public:
		class AActor*                                              duplicationParent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.PostEditChange
	 */
	struct ABase_AcidBottle_BP_C_PostEditChange_Params
	{
	public:
		class FName                                                PropertyName;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.PostEditMove
	 */
	struct ABase_AcidBottle_BP_C_PostEditMove_Params
	{
	public:
		bool                                                       bFinished;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.TickSelected
	 */
	struct ABase_AcidBottle_BP_C_TickSelected_Params
	{	};

	/**
	 * Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.OnHoldingPlayerChangedEvent_Event_1
	 */
	struct ABase_AcidBottle_BP_C_OnHoldingPlayerChangedEvent_Event_1_Params
	{
	public:
		class ARBPawn*                                             holdingPlayer;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBLargePickup*                                      largePickup;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.ReceiveBeginPlay
	 */
	struct ABase_AcidBottle_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.OnPlayerLanded
	 */
	struct ABase_AcidBottle_BP_C_OnPlayerLanded_Params
	{
	public:
		class ARBPlayer*                                           Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      landingHeight;                                           // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.OnPlayerTraversal
	 */
	struct ABase_AcidBottle_BP_C_OnPlayerTraversal_Params
	{
	public:
		class ARBPlayer*                                           Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      landingHeight;                                           // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.ReceiveEndPlay
	 */
	struct ABase_AcidBottle_BP_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.ReceiveTick
	 */
	struct ABase_AcidBottle_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.BindEvents
	 */
	struct ABase_AcidBottle_BP_C_BindEvents_Params
	{	};

	/**
	 * Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.OnWorldPopulateFinished
	 */
	struct ABase_AcidBottle_BP_C_OnWorldPopulateFinished_Params
	{	};

	/**
	 * Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.TriggerMaterialRipples
	 */
	struct ABase_AcidBottle_BP_C_TriggerMaterialRipples_Params
	{
	public:
		float                                                      WaterWaveAlphaTarget;                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.OnDither
	 */
	struct ABase_AcidBottle_BP_C_OnDither_Params
	{	};

	/**
	 * Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.Event_OnResetStage
	 */
	struct ABase_AcidBottle_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.OnPlayerBashed_Event_1
	 */
	struct ABase_AcidBottle_BP_C_OnPlayerBashed_Event_1_Params
	{
	public:
		class ARBPlayer*                                           Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.FadeOutLiquid
	 */
	struct ABase_AcidBottle_BP_C_FadeOutLiquid_Params
	{	};

	/**
	 * Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.SetFadeFakeLight
	 */
	struct ABase_AcidBottle_BP_C_SetFadeFakeLight_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.Multicast_ActivateAcidSplashVFX
	 */
	struct ABase_AcidBottle_BP_C_Multicast_ActivateAcidSplashVFX_Params
	{
	public:
		EAcidBottleDamageType                                      DamageType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SI92[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ARBPlayer*                                           Player;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.BP_OnHoldingPawnChanged
	 */
	struct ABase_AcidBottle_BP_C_BP_OnHoldingPawnChanged_Params
	{	};

	/**
	 * Function Base_AcidBottle_BP.Base_AcidBottle_BP_C.ExecuteUbergraph_Base_AcidBottle_BP
	 */
	struct ABase_AcidBottle_BP_C_ExecuteUbergraph_Base_AcidBottle_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
