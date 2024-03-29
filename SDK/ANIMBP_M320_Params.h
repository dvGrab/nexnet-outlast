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
	 * Function ANIMBP_M320.ANIMBP_M320_C.AnimGraph
	 */
	struct UANIMBP_M320_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ANIMBP_M320.ANIMBP_M320_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M320_AnimGraphNode_ModifyBone_EDE7589748607C162DE04CB3782BCD3A
	 */
	struct UANIMBP_M320_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M320_AnimGraphNode_ModifyBone_EDE7589748607C162DE04CB3782BCD3A_Params
	{	};

	/**
	 * Function ANIMBP_M320.ANIMBP_M320_C.BlueprintUpdateAnimation
	 */
	struct UANIMBP_M320_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ANIMBP_M320.ANIMBP_M320_C.ExecuteUbergraph_ANIMBP_M320
	 */
	struct UANIMBP_M320_C_ExecuteUbergraph_ANIMBP_M320_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HHW3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
