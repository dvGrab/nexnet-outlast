#pragma once

/**
 * Name: OUTLAST
 * Version: 0.0.2_fixed
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
	 * Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.OnRep_TriggeredBulbIndex
	 */
	struct UZoneTimingPanelComponent_BP_C_OnRep_TriggeredBulbIndex_Params
	{	};

	/**
	 * Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.ShouldBPTick
	 */
	struct UZoneTimingPanelComponent_BP_C_ShouldBPTick_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.ClearLastTriggeredBulb
	 */
	struct UZoneTimingPanelComponent_BP_C_ClearLastTriggeredBulb_Params
	{	};

	/**
	 * Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.RefreshRPMIndicator
	 */
	struct UZoneTimingPanelComponent_BP_C_RefreshRPMIndicator_Params
	{	};

	/**
	 * Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.RefreshBulbColor
	 */
	struct UZoneTimingPanelComponent_BP_C_RefreshBulbColor_Params
	{
	public:
		class UStaticMeshComponent*                                Bulb;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ETimingInputResultType                                     Result;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.RefreshNeedlePosition
	 */
	struct UZoneTimingPanelComponent_BP_C_RefreshNeedlePosition_Params
	{	};

	/**
	 * Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.InitMeterSize
	 */
	struct UZoneTimingPanelComponent_BP_C_InitMeterSize_Params
	{	};

	/**
	 * Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.RefreshAllBulbColors
	 */
	struct UZoneTimingPanelComponent_BP_C_RefreshAllBulbColors_Params
	{	};

	/**
	 * Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.InitializePanelParts
	 */
	struct UZoneTimingPanelComponent_BP_C_InitializePanelParts_Params
	{	};

	/**
	 * Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.GetInteractionPawnLocation
	 */
	struct UZoneTimingPanelComponent_BP_C_GetInteractionPawnLocation_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESpecialMove                                               specialMove;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WNOS[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             OutLocation;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             outDirection;                                            // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LW3M[0xB];                                   // 0x0025(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.ReceiveTick
	 */
	struct UZoneTimingPanelComponent_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.ReceiveBeginPlay
	 */
	struct UZoneTimingPanelComponent_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.Event_OnResetStage
	 */
	struct UZoneTimingPanelComponent_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.BP_OnPawnInteractingChanged
	 */
	struct UZoneTimingPanelComponent_BP_C_BP_OnPawnInteractingChanged_Params
	{
	public:
		class ARBPawn*                                             newPawnInteracting;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.OnTickEnabledChanged_Event
	 */
	struct UZoneTimingPanelComponent_BP_C_OnTickEnabledChanged_Event_Params
	{
	public:
		class URBInteractiblePanelComponent*                       panel;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             pawnInteracting;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.OnTriggeredBulbIndexChanged
	 */
	struct UZoneTimingPanelComponent_BP_C_OnTriggeredBulbIndexChanged_Params
	{	};

	/**
	 * Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.Event_OnInputEvent
	 */
	struct UZoneTimingPanelComponent_BP_C_Event_OnInputEvent_Params
	{
	public:
		class ARBPlayer*                                           Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    targetIndex;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Timestamp;                                               // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ETimingInputResultType                                     Result;                                                  // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.Event_OnTargetInfoChanged
	 */
	struct UZoneTimingPanelComponent_BP_C_Event_OnTargetInfoChanged_Params
	{	};

	/**
	 * Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.Event_OnInteractionAnimationDone
	 */
	struct UZoneTimingPanelComponent_BP_C_Event_OnInteractionAnimationDone_Params
	{	};

	/**
	 * Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.PostToggled
	 */
	struct UZoneTimingPanelComponent_BP_C_PostToggled_Params
	{
	public:
		bool                                                       bToggleEnabled;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C.ExecuteUbergraph_ZoneTimingPanelComponent_BP
	 */
	struct UZoneTimingPanelComponent_BP_C_ExecuteUbergraph_ZoneTimingPanelComponent_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RSKV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
