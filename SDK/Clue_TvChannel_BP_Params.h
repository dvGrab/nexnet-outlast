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
	 * Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.GetAssociatedInvestigationComponent
	 */
	struct AClue_TvChannel_BP_C_GetAssociatedInvestigationComponent_Params
	{
	public:
		class URBPlayerInvestigationZoneComponent*                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.GetClue
	 */
	struct AClue_TvChannel_BP_C_GetClue_Params
	{
	public:
		struct FClueData                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor)
	};

	/**
	 * Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.OnRep_MasterInvestigationTV
	 */
	struct AClue_TvChannel_BP_C_OnRep_MasterInvestigationTV_Params
	{	};

	/**
	 * Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.UpdateClueText
	 */
	struct AClue_TvChannel_BP_C_UpdateClueText_Params
	{	};

	/**
	 * Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.GetInvestigationZone
	 */
	struct AClue_TvChannel_BP_C_GetInvestigationZone_Params
	{
	public:
		class URBPlayerInvestigationZoneComponent*                 InvestigationZone;                                       // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.SetInvestigationZoneEnabled
	 */
	struct AClue_TvChannel_BP_C_SetInvestigationZoneEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U6WF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.HasValidClue
	 */
	struct AClue_TvChannel_BP_C_HasValidClue_Params
	{
	public:
		bool                                                       IsValid;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.HideClue
	 */
	struct AClue_TvChannel_BP_C_HideClue_Params
	{	};

	/**
	 * Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.ShowClue
	 */
	struct AClue_TvChannel_BP_C_ShowClue_Params
	{	};

	/**
	 * Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.OnRep_Clue
	 */
	struct AClue_TvChannel_BP_C_OnRep_Clue_Params
	{	};

	/**
	 * Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.SetClue
	 */
	struct AClue_TvChannel_BP_C_SetClue_Params
	{
	public:
		struct FClueData                                           ClueData;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.Event_OnResetStage
	 */
	struct AClue_TvChannel_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.Event_OnLinkedScreenAdded
	 */
	struct AClue_TvChannel_BP_C_Event_OnLinkedScreenAdded_Params
	{
	public:
		class ARBNarrativeScreen*                                  linkedScreen;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.ExecuteUbergraph_Clue_TvChannel_BP
	 */
	struct AClue_TvChannel_BP_C_ExecuteUbergraph_Clue_TvChannel_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
