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
	 * Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.RefreshLocallyFocused
	 */
	struct UFrequencyMatchKnobComponent_BP_C_RefreshLocallyFocused_Params
	{	};

	/**
	 * Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.RefreshRTPC
	 */
	struct UFrequencyMatchKnobComponent_BP_C_RefreshRTPC_Params
	{	};

	/**
	 * Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.RefreshShimmer
	 */
	struct UFrequencyMatchKnobComponent_BP_C_RefreshShimmer_Params
	{	};

	/**
	 * Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.Refresh
	 */
	struct UFrequencyMatchKnobComponent_BP_C_Refresh_Params
	{	};

	/**
	 * Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.RefreshPosition
	 */
	struct UFrequencyMatchKnobComponent_BP_C_RefreshPosition_Params
	{	};

	/**
	 * Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.IsCloseToCompleted
	 */
	struct UFrequencyMatchKnobComponent_BP_C_IsCloseToCompleted_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5OEK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.Refresh Status
	 */
	struct UFrequencyMatchKnobComponent_BP_C_RefreshStatus_Params
	{	};

	/**
	 * Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.OnParentConstruction
	 */
	struct UFrequencyMatchKnobComponent_BP_C_OnParentConstruction_Params
	{
	public:
		class UStaticMeshComponent*                                StatusMesh;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.ReceiveBeginPlay
	 */
	struct UFrequencyMatchKnobComponent_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.Event_OnResetStage
	 */
	struct UFrequencyMatchKnobComponent_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.Event_OnIsCompletedChanged
	 */
	struct UFrequencyMatchKnobComponent_BP_C_Event_OnIsCompletedChanged_Params
	{	};

	/**
	 * Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.OnInteractingPawnChanged
	 */
	struct UFrequencyMatchKnobComponent_BP_C_OnInteractingPawnChanged_Params
	{
	public:
		class URBInteractiblePanelComponent*                       panel;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             pawnInteracting;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.Event_OnCurrentRatioChanged
	 */
	struct UFrequencyMatchKnobComponent_BP_C_Event_OnCurrentRatioChanged_Params
	{	};

	/**
	 * Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.Event_OnPlayerOnKnobChanged
	 */
	struct UFrequencyMatchKnobComponent_BP_C_Event_OnPlayerOnKnobChanged_Params
	{	};

	/**
	 * Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.Event_OnLocallyFocusedChanged
	 */
	struct UFrequencyMatchKnobComponent_BP_C_Event_OnLocallyFocusedChanged_Params
	{	};

	/**
	 * Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.OnParentEnabledChanged
	 */
	struct UFrequencyMatchKnobComponent_BP_C_OnParentEnabledChanged_Params
	{
	public:
		class URBInteractionZoneComponent*                         Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C.ExecuteUbergraph_FrequencyMatchKnobComponent_BP
	 */
	struct UFrequencyMatchKnobComponent_BP_C_ExecuteUbergraph_FrequencyMatchKnobComponent_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
