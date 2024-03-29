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
	 * Function AcidBath_GhostAnimBP.AcidBath_GhostAnimBP_C.AnimGraph
	 */
	struct UAcidBath_GhostAnimBP_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function AcidBath_GhostAnimBP.AcidBath_GhostAnimBP_C.FinishGhost
	 */
	struct UAcidBath_GhostAnimBP_C_FinishGhost_Params
	{
	public:
		EGhostFinishReason                                         finishReason;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A8P5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    GhostFinishCustomReason;                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AcidBath_GhostAnimBP.AcidBath_GhostAnimBP_C.BP_InitializeGhost
	 */
	struct UAcidBath_GhostAnimBP_C_BP_InitializeGhost_Params
	{	};

	/**
	 * Function AcidBath_GhostAnimBP.AcidBath_GhostAnimBP_C.BP_ClearGhost
	 */
	struct UAcidBath_GhostAnimBP_C_BP_ClearGhost_Params
	{	};

	/**
	 * Function AcidBath_GhostAnimBP.AcidBath_GhostAnimBP_C.AnimNotify_Finish
	 */
	struct UAcidBath_GhostAnimBP_C_AnimNotify_Finish_Params
	{	};

	/**
	 * Function AcidBath_GhostAnimBP.AcidBath_GhostAnimBP_C.AnimNotify_Holding
	 */
	struct UAcidBath_GhostAnimBP_C_AnimNotify_Holding_Params
	{	};

	/**
	 * Function AcidBath_GhostAnimBP.AcidBath_GhostAnimBP_C.ExecuteUbergraph_AcidBath_GhostAnimBP
	 */
	struct UAcidBath_GhostAnimBP_C_ExecuteUbergraph_AcidBath_GhostAnimBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
