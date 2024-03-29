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
	 * Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.GetStateName
	 */
	struct AProximityDetector_QuestItem_BP_C_GetStateName_Params
	{
	public:
		class FString                                              stateA;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              stateB;                                                  // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.IsStateA
	 */
	struct AProximityDetector_QuestItem_BP_C_IsStateA_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.ShouldBeIgnoredForLots
	 */
	struct AProximityDetector_QuestItem_BP_C_ShouldBeIgnoredForLots_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.CheckForProximityChange
	 */
	struct AProximityDetector_QuestItem_BP_C_CheckForProximityChange_Params
	{
	public:
		bool                                                       bSomethingChanged;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.ShouldFogLightBeVisible
	 */
	struct AProximityDetector_QuestItem_BP_C_ShouldFogLightBeVisible_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AEDY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    LIghtLevel;                                              // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.RefreshFogLight
	 */
	struct AProximityDetector_QuestItem_BP_C_RefreshFogLight_Params
	{	};

	/**
	 * Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.StartAudioLoop
	 */
	struct AProximityDetector_QuestItem_BP_C_StartAudioLoop_Params
	{	};

	/**
	 * Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.StopAudioLoop
	 */
	struct AProximityDetector_QuestItem_BP_C_StopAudioLoop_Params
	{	};

	/**
	 * Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.RefreshAudioState
	 */
	struct AProximityDetector_QuestItem_BP_C_RefreshAudioState_Params
	{
	public:
		bool                                                       bAllowAudio;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YNAK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.UserConstructionScript
	 */
	struct AProximityDetector_QuestItem_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.PrepareState
	 */
	struct AProximityDetector_QuestItem_BP_C_PrepareState_Params
	{
	public:
		bool                                                       bStateA;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2ADX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              randomOwner;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.SetShouldBeIgnoredForLots
	 */
	struct AProximityDetector_QuestItem_BP_C_SetShouldBeIgnoredForLots_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.SetState
	 */
	struct AProximityDetector_QuestItem_BP_C_SetState_Params
	{
	public:
		bool                                                       bStateA;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.BP_OnProximityLevelChanged
	 */
	struct AProximityDetector_QuestItem_BP_C_BP_OnProximityLevelChanged_Params
	{	};

	/**
	 * Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.BP_OnEquipped
	 */
	struct AProximityDetector_QuestItem_BP_C_BP_OnEquipped_Params
	{	};

	/**
	 * Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.BP_OnUnequipped
	 */
	struct AProximityDetector_QuestItem_BP_C_BP_OnUnequipped_Params
	{	};

	/**
	 * Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.ExecuteUbergraph_ProximityDetector_QuestItem_BP
	 */
	struct AProximityDetector_QuestItem_BP_C_ExecuteUbergraph_ProximityDetector_QuestItem_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
