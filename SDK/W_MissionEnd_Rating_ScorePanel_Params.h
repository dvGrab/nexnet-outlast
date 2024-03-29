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
	 * Function W_MissionEnd_Rating_ScorePanel.W_MissionEnd_Rating_ScorePanel_C.PreConstruct
	 */
	struct UW_MissionEnd_Rating_ScorePanel_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_MissionEnd_Rating_ScorePanel.W_MissionEnd_Rating_ScorePanel_C.Construct
	 */
	struct UW_MissionEnd_Rating_ScorePanel_C_Construct_Params
	{	};

	/**
	 * Function W_MissionEnd_Rating_ScorePanel.W_MissionEnd_Rating_ScorePanel_C.AddScores
	 */
	struct UW_MissionEnd_Rating_ScorePanel_C_AddScores_Params
	{
	public:
		TArray<struct FScoreGroup>                                 Scores;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function W_MissionEnd_Rating_ScorePanel.W_MissionEnd_Rating_ScorePanel_C.NextScore
	 */
	struct UW_MissionEnd_Rating_ScorePanel_C_NextScore_Params
	{	};

	/**
	 * Function W_MissionEnd_Rating_ScorePanel.W_MissionEnd_Rating_ScorePanel_C.AddToProgress
	 */
	struct UW_MissionEnd_Rating_ScorePanel_C_AddToProgress_Params
	{
	public:
		class UW_MissionEnd_RatingScoreEntry_C*                    EntryWidget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Score;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_MissionEnd_Rating_ScorePanel.W_MissionEnd_Rating_ScorePanel_C.AddPenalties
	 */
	struct UW_MissionEnd_Rating_ScorePanel_C_AddPenalties_Params
	{
	public:
		TArray<struct FScorePenaltyData>                           Scores;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_MissionEnd_Rating_ScorePanel.W_MissionEnd_Rating_ScorePanel_C.NextPenalty
	 */
	struct UW_MissionEnd_Rating_ScorePanel_C_NextPenalty_Params
	{	};

	/**
	 * Function W_MissionEnd_Rating_ScorePanel.W_MissionEnd_Rating_ScorePanel_C.PenalizeProgress
	 */
	struct UW_MissionEnd_Rating_ScorePanel_C_PenalizeProgress_Params
	{
	public:
		class UW_MissionEnd_RatingScoreEntry_C*                    EntryWidget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Score;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_MissionEnd_Rating_ScorePanel.W_MissionEnd_Rating_ScorePanel_C.ExecuteUbergraph_W_MissionEnd_Rating_ScorePanel
	 */
	struct UW_MissionEnd_Rating_ScorePanel_C_ExecuteUbergraph_W_MissionEnd_Rating_ScorePanel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_MissionEnd_Rating_ScorePanel.W_MissionEnd_Rating_ScorePanel_C.AllPenaltiesAdded__DelegateSignature
	 */
	struct UW_MissionEnd_Rating_ScorePanel_C_AllPenaltiesAdded__DelegateSignature_Params
	{	};

	/**
	 * Function W_MissionEnd_Rating_ScorePanel.W_MissionEnd_Rating_ScorePanel_C.AllScoresAdded__DelegateSignature
	 */
	struct UW_MissionEnd_Rating_ScorePanel_C_AllScoresAdded__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
