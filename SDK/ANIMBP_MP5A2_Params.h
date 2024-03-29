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
	 * Function ANIMBP_MP5A2.ANIMBP_MP5A2_C.AnimGraph
	 */
	struct UANIMBP_MP5A2_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ANIMBP_MP5A2.ANIMBP_MP5A2_C.BlueprintUpdateAnimation
	 */
	struct UANIMBP_MP5A2_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ANIMBP_MP5A2.ANIMBP_MP5A2_C.AnimNotify_DropSpeedReloadMagazine
	 */
	struct UANIMBP_MP5A2_C_AnimNotify_DropSpeedReloadMagazine_Params
	{	};

	/**
	 * Function ANIMBP_MP5A2.ANIMBP_MP5A2_C.AnimNotify_ShowMag
	 */
	struct UANIMBP_MP5A2_C_AnimNotify_ShowMag_Params
	{	};

	/**
	 * Function ANIMBP_MP5A2.ANIMBP_MP5A2_C.ExecuteUbergraph_ANIMBP_MP5A2
	 */
	struct UANIMBP_MP5A2_C_ExecuteUbergraph_ANIMBP_MP5A2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
