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
	 * Function FrequencyMatchPanel_GhostAnimBP.FrequencyMatchPanel_GhostAnimBP_C.AnimGraph
	 */
	struct UFrequencyMatchPanel_GhostAnimBP_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function FrequencyMatchPanel_GhostAnimBP.FrequencyMatchPanel_GhostAnimBP_C.FinishGhost
	 */
	struct UFrequencyMatchPanel_GhostAnimBP_C_FinishGhost_Params
	{
	public:
		EGhostFinishReason                                         finishReason;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E2D1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    GhostFinishCustomReason;                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FrequencyMatchPanel_GhostAnimBP.FrequencyMatchPanel_GhostAnimBP_C.BP_InitializeGhost
	 */
	struct UFrequencyMatchPanel_GhostAnimBP_C_BP_InitializeGhost_Params
	{	};

	/**
	 * Function FrequencyMatchPanel_GhostAnimBP.FrequencyMatchPanel_GhostAnimBP_C.AnimNotify_EntryDone
	 */
	struct UFrequencyMatchPanel_GhostAnimBP_C_AnimNotify_EntryDone_Params
	{	};

	/**
	 * Function FrequencyMatchPanel_GhostAnimBP.FrequencyMatchPanel_GhostAnimBP_C.AnimNotify_Finished
	 */
	struct UFrequencyMatchPanel_GhostAnimBP_C_AnimNotify_Finished_Params
	{	};

	/**
	 * Function FrequencyMatchPanel_GhostAnimBP.FrequencyMatchPanel_GhostAnimBP_C.ExecuteUbergraph_FrequencyMatchPanel_GhostAnimBP
	 */
	struct UFrequencyMatchPanel_GhostAnimBP_C_ExecuteUbergraph_FrequencyMatchPanel_GhostAnimBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9JRG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
