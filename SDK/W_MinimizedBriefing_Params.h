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
	 * Function W_MinimizedBriefing.W_MinimizedBriefing_C.Construct
	 */
	struct UW_MinimizedBriefing_C_Construct_Params
	{	};

	/**
	 * Function W_MinimizedBriefing.W_MinimizedBriefing_C.Initialize
	 */
	struct UW_MinimizedBriefing_C_Initialize_Params
	{
	public:
		struct FMissionAudio                                       MissionAudio;                                            // 0x0000(0x0058)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<float, struct FTimelineEvent>                         EventEntries;                                            // 0x0058(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_MinimizedBriefing.W_MinimizedBriefing_C.ExecuteUbergraph_W_MinimizedBriefing
	 */
	struct UW_MinimizedBriefing_C_ExecuteUbergraph_W_MinimizedBriefing_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DD8P[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
