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
	 * Function W_Briefing_Objectives_List.W_Briefing_Objectives_List_C.PreConstruct
	 */
	struct UW_Briefing_Objectives_List_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Briefing_Objectives_List.W_Briefing_Objectives_List_C.InitObjectives
	 */
	struct UW_Briefing_Objectives_List_C_InitObjectives_Params
	{
	public:
		TArray<class AObjective*>                                  Objectives;                                              // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_Briefing_Objectives_List.W_Briefing_Objectives_List_C.InitChallenges
	 */
	struct UW_Briefing_Objectives_List_C_InitChallenges_Params
	{
	public:
		TArray<struct FST_SubObjective_Entry>                      Challenges;                                              // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_Briefing_Objectives_List.W_Briefing_Objectives_List_C.ExecuteUbergraph_W_Briefing_Objectives_List
	 */
	struct UW_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
