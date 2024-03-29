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
	 * Function ANIMBP_NVG.ANIMBP_NVG_C.AnimGraph
	 */
	struct UANIMBP_NVG_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ANIMBP_NVG.ANIMBP_NVG_C.GetPlayerCharacter
	 */
	struct UANIMBP_NVG_C_GetPlayerCharacter_Params
	{
	public:
		class APlayerCharacter*                                    PlayerCharacter;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ANIMBP_NVG.ANIMBP_NVG_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_NVG_AnimGraphNode_ModifyBone_4369C15F4C1308D1A6E87DB0C364A0F1
	 */
	struct UANIMBP_NVG_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_NVG_AnimGraphNode_ModifyBone_4369C15F4C1308D1A6E87DB0C364A0F1_Params
	{	};

	/**
	 * Function ANIMBP_NVG.ANIMBP_NVG_C.BlueprintUpdateAnimation
	 */
	struct UANIMBP_NVG_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ANIMBP_NVG.ANIMBP_NVG_C.AnimNotify_HideFPMesh
	 */
	struct UANIMBP_NVG_C_AnimNotify_HideFPMesh_Params
	{	};

	/**
	 * Function ANIMBP_NVG.ANIMBP_NVG_C.AnimNotify_ShowFPMesh
	 */
	struct UANIMBP_NVG_C_AnimNotify_ShowFPMesh_Params
	{	};

	/**
	 * Function ANIMBP_NVG.ANIMBP_NVG_C.ExecuteUbergraph_ANIMBP_NVG
	 */
	struct UANIMBP_NVG_C_ExecuteUbergraph_ANIMBP_NVG_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N8AF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
