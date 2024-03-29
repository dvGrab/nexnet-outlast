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
	 * Function ScreenshotPlayer_AnimBP.ScreenshotPlayer_AnimBP_C.AnimGraph
	 */
	struct UScreenshotPlayer_AnimBP_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ScreenshotPlayer_AnimBP.ScreenshotPlayer_AnimBP_C.BlueprintUpdateAnimation
	 */
	struct UScreenshotPlayer_AnimBP_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScreenshotPlayer_AnimBP.ScreenshotPlayer_AnimBP_C.BlueprintInitializeAnimation
	 */
	struct UScreenshotPlayer_AnimBP_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function ScreenshotPlayer_AnimBP.ScreenshotPlayer_AnimBP_C.ExecuteUbergraph_ScreenshotPlayer_AnimBP
	 */
	struct UScreenshotPlayer_AnimBP_C_ExecuteUbergraph_ScreenshotPlayer_AnimBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
