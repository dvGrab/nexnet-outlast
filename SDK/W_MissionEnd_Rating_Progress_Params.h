#pragma once

/**
 * Name: READYORNOT
 * Version: 0.0.1
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
	 * Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.SequenceEvent__ENTRYPOINTW_MissionEnd_Rating_Progress_1
	 */
	struct UW_MissionEnd_Rating_Progress_C_SequenceEvent__ENTRYPOINTW_MissionEnd_Rating_Progress_1_Params
	{	};

	/**
	 * Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.UpdateSound
	 */
	struct UW_MissionEnd_Rating_Progress_C_UpdateSound_Params
	{	};

	/**
	 * Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.SetDebug
	 */
	struct UW_MissionEnd_Rating_Progress_C_SetDebug_Params
	{
	public:
		class FText                                                DebugText1;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                DebugText2;                                              // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                DebugText3;                                              // 0x0030(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.AddToScore
	 */
	struct UW_MissionEnd_Rating_Progress_C_AddToScore_Params
	{	};

	/**
	 * Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.UpdateProgressMeter
	 */
	struct UW_MissionEnd_Rating_Progress_C_UpdateProgressMeter_Params
	{
	public:
		int32_t                                                    CurrentScore;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.gradeSound
	 */
	struct UW_MissionEnd_Rating_Progress_C_gradeSound_Params
	{	};

	/**
	 * Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.PreConstruct
	 */
	struct UW_MissionEnd_Rating_Progress_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.Construct
	 */
	struct UW_MissionEnd_Rating_Progress_C_Construct_Params
	{	};

	/**
	 * Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.Tick
	 */
	struct UW_MissionEnd_Rating_Progress_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.UpdateScore
	 */
	struct UW_MissionEnd_Rating_Progress_C_UpdateScore_Params
	{
	public:
		struct FScoreGroup                                         ScoreData;                                               // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.UpdatePenalty
	 */
	struct UW_MissionEnd_Rating_Progress_C_UpdatePenalty_Params
	{
	public:
		struct FScorePenaltyData                                   PenaltyData;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.RevealGrade
	 */
	struct UW_MissionEnd_Rating_Progress_C_RevealGrade_Params
	{
	public:
		class FString                                              Grade;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.Destruct
	 */
	struct UW_MissionEnd_Rating_Progress_C_Destruct_Params
	{	};

	/**
	 * Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.ExecuteUbergraph_W_MissionEnd_Rating_Progress
	 */
	struct UW_MissionEnd_Rating_Progress_C_ExecuteUbergraph_W_MissionEnd_Rating_Progress_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
