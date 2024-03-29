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
	 * Function ANIMBP_M249.ANIMBP_M249_C.AnimGraph
	 */
	struct UANIMBP_M249_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ANIMBP_M249.ANIMBP_M249_C.BlueprintUpdateAnimation
	 */
	struct UANIMBP_M249_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ANIMBP_M249.ANIMBP_M249_C.AnimNotify_EjectMag
	 */
	struct UANIMBP_M249_C_AnimNotify_EjectMag_Params
	{	};

	/**
	 * Function ANIMBP_M249.ANIMBP_M249_C.ExecuteUbergraph_ANIMBP_M249
	 */
	struct UANIMBP_M249_C_ExecuteUbergraph_ANIMBP_M249_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
