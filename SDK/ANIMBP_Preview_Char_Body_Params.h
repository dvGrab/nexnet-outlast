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
	 * Function ANIMBP_Preview_Char_Body.ANIMBP_Preview_Char_Body_C.AnimGraph
	 */
	struct UANIMBP_Preview_Char_Body_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ANIMBP_Preview_Char_Body.ANIMBP_Preview_Char_Body_C.BlueprintUpdateAnimation
	 */
	struct UANIMBP_Preview_Char_Body_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ANIMBP_Preview_Char_Body.ANIMBP_Preview_Char_Body_C.ExecuteUbergraph_ANIMBP_Preview_Char_Body
	 */
	struct UANIMBP_Preview_Char_Body_C_ExecuteUbergraph_ANIMBP_Preview_Char_Body_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
