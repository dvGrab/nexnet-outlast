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
	 * Function SASChair_ChairAnimBP.SASChair_ChairAnimBP_C.AnimGraph
	 */
	struct USASChair_ChairAnimBP_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function SASChair_ChairAnimBP.SASChair_ChairAnimBP_C.SetShouldFaceTV
	 */
	struct USASChair_ChairAnimBP_C_SetShouldFaceTV_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SASChair_ChairAnimBP.SASChair_ChairAnimBP_C.AnimNotify_OnIdle
	 */
	struct USASChair_ChairAnimBP_C_AnimNotify_OnIdle_Params
	{	};

	/**
	 * Function SASChair_ChairAnimBP.SASChair_ChairAnimBP_C.AnimNotify_OnFacingTV
	 */
	struct USASChair_ChairAnimBP_C_AnimNotify_OnFacingTV_Params
	{	};

	/**
	 * Function SASChair_ChairAnimBP.SASChair_ChairAnimBP_C.AnimNotify_ChairLeave
	 */
	struct USASChair_ChairAnimBP_C_AnimNotify_ChairLeave_Params
	{	};

	/**
	 * Function SASChair_ChairAnimBP.SASChair_ChairAnimBP_C.BlueprintUpdateAnimation
	 */
	struct USASChair_ChairAnimBP_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SASChair_ChairAnimBP.SASChair_ChairAnimBP_C.ExecuteUbergraph_SASChair_ChairAnimBP
	 */
	struct USASChair_ChairAnimBP_C_ExecuteUbergraph_SASChair_ChairAnimBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
