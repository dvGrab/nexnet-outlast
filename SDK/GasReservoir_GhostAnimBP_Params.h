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
	 * Function GasReservoir_GhostAnimBP.GasReservoir_GhostAnimBP_C.AnimGraph
	 */
	struct UGasReservoir_GhostAnimBP_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function GasReservoir_GhostAnimBP.GasReservoir_GhostAnimBP_C.FinishGhost
	 */
	struct UGasReservoir_GhostAnimBP_C_FinishGhost_Params
	{
	public:
		EGhostFinishReason                                         finishReason;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V2UZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    GhostFinishCustomReason;                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasReservoir_GhostAnimBP.GasReservoir_GhostAnimBP_C.BP_ClearGhost
	 */
	struct UGasReservoir_GhostAnimBP_C_BP_ClearGhost_Params
	{	};

	/**
	 * Function GasReservoir_GhostAnimBP.GasReservoir_GhostAnimBP_C.AnimNotify_Holding
	 */
	struct UGasReservoir_GhostAnimBP_C_AnimNotify_Holding_Params
	{	};

	/**
	 * Function GasReservoir_GhostAnimBP.GasReservoir_GhostAnimBP_C.AnimNotify_Finish
	 */
	struct UGasReservoir_GhostAnimBP_C_AnimNotify_Finish_Params
	{	};

	/**
	 * Function GasReservoir_GhostAnimBP.GasReservoir_GhostAnimBP_C.BlueprintUpdateAnimation
	 */
	struct UGasReservoir_GhostAnimBP_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GasReservoir_GhostAnimBP.GasReservoir_GhostAnimBP_C.BP_InitializeGhost
	 */
	struct UGasReservoir_GhostAnimBP_C_BP_InitializeGhost_Params
	{	};

	/**
	 * Function GasReservoir_GhostAnimBP.GasReservoir_GhostAnimBP_C.ExecuteUbergraph_GasReservoir_GhostAnimBP
	 */
	struct UGasReservoir_GhostAnimBP_C_ExecuteUbergraph_GasReservoir_GhostAnimBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
