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
	 * Function KeyItemDestination_GhostAnim_BP.KeyItemDestination_GhostAnim_BP_C.AnimGraph
	 */
	struct UKeyItemDestination_GhostAnim_BP_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function KeyItemDestination_GhostAnim_BP.KeyItemDestination_GhostAnim_BP_C.FinishGhost
	 */
	struct UKeyItemDestination_GhostAnim_BP_C_FinishGhost_Params
	{
	public:
		EGhostFinishReason                                         finishReason;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E0B9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    GhostFinishCustomReason;                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function KeyItemDestination_GhostAnim_BP.KeyItemDestination_GhostAnim_BP_C.BP_InitializeGhost
	 */
	struct UKeyItemDestination_GhostAnim_BP_C_BP_InitializeGhost_Params
	{	};

	/**
	 * Function KeyItemDestination_GhostAnim_BP.KeyItemDestination_GhostAnim_BP_C.OnGhostAnimNotify
	 */
	struct UKeyItemDestination_GhostAnim_BP_C_OnGhostAnimNotify_Params
	{
	public:
		EGhostAnimEvent                                            animEvent;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RQBS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                animEventName;                                           // 0x0004(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function KeyItemDestination_GhostAnim_BP.KeyItemDestination_GhostAnim_BP_C.ExecuteUbergraph_KeyItemDestination_GhostAnim_BP
	 */
	struct UKeyItemDestination_GhostAnim_BP_C_ExecuteUbergraph_KeyItemDestination_GhostAnim_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
