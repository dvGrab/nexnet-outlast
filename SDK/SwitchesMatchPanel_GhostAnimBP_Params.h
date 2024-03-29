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
	 * Function SwitchesMatchPanel_GhostAnimBP.SwitchesMatchPanel_GhostAnimBP_C.AnimGraph
	 */
	struct USwitchesMatchPanel_GhostAnimBP_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function SwitchesMatchPanel_GhostAnimBP.SwitchesMatchPanel_GhostAnimBP_C.FinishGhost
	 */
	struct USwitchesMatchPanel_GhostAnimBP_C_FinishGhost_Params
	{
	public:
		EGhostFinishReason                                         finishReason;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RWIY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    GhostFinishCustomReason;                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SwitchesMatchPanel_GhostAnimBP.SwitchesMatchPanel_GhostAnimBP_C.OnPressed
	 */
	struct USwitchesMatchPanel_GhostAnimBP_C_OnPressed_Params
	{
	public:
		class URBPasscodePadComponent*                             Pad;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SwitchesMatchPanel_GhostAnimBP.SwitchesMatchPanel_GhostAnimBP_C.BP_InitializeGhost
	 */
	struct USwitchesMatchPanel_GhostAnimBP_C_BP_InitializeGhost_Params
	{	};

	/**
	 * Function SwitchesMatchPanel_GhostAnimBP.SwitchesMatchPanel_GhostAnimBP_C.AnimNotify_Pressed
	 */
	struct USwitchesMatchPanel_GhostAnimBP_C_AnimNotify_Pressed_Params
	{	};

	/**
	 * Function SwitchesMatchPanel_GhostAnimBP.SwitchesMatchPanel_GhostAnimBP_C.AnimNotify_EntryDone
	 */
	struct USwitchesMatchPanel_GhostAnimBP_C_AnimNotify_EntryDone_Params
	{	};

	/**
	 * Function SwitchesMatchPanel_GhostAnimBP.SwitchesMatchPanel_GhostAnimBP_C.AnimNotify_Finished
	 */
	struct USwitchesMatchPanel_GhostAnimBP_C_AnimNotify_Finished_Params
	{	};

	/**
	 * Function SwitchesMatchPanel_GhostAnimBP.SwitchesMatchPanel_GhostAnimBP_C.ExecuteUbergraph_SwitchesMatchPanel_GhostAnimBP
	 */
	struct USwitchesMatchPanel_GhostAnimBP_C_ExecuteUbergraph_SwitchesMatchPanel_GhostAnimBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
