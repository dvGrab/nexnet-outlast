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
	 * Function ExecutionActor_NPC_AnimBP.ExecutionActor_NPC_AnimBP_C.AnimGraph
	 */
	struct UExecutionActor_NPC_AnimBP_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ExecutionActor_NPC_AnimBP.ExecutionActor_NPC_AnimBP_C.BlueprintBeginPlay
	 */
	struct UExecutionActor_NPC_AnimBP_C_BlueprintBeginPlay_Params
	{	};

	/**
	 * Function ExecutionActor_NPC_AnimBP.ExecutionActor_NPC_AnimBP_C.OnWitnessStartedChanged
	 */
	struct UExecutionActor_NPC_AnimBP_C_OnWitnessStartedChanged_Params
	{
	public:
		bool                                                       bStarted;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ExecutionActor_NPC_AnimBP.ExecutionActor_NPC_AnimBP_C.BlueprintInitializeAnimation
	 */
	struct UExecutionActor_NPC_AnimBP_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function ExecutionActor_NPC_AnimBP.ExecutionActor_NPC_AnimBP_C.ExecuteUbergraph_ExecutionActor_NPC_AnimBP
	 */
	struct UExecutionActor_NPC_AnimBP_C_ExecuteUbergraph_ExecutionActor_NPC_AnimBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0M06[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
