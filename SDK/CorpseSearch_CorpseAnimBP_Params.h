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
	 * Function CorpseSearch_CorpseAnimBP.CorpseSearch_CorpseAnimBP_C.AnimGraph
	 */
	struct UCorpseSearch_CorpseAnimBP_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function CorpseSearch_CorpseAnimBP.CorpseSearch_CorpseAnimBP_C.Play Enter Animation
	 */
	struct UCorpseSearch_CorpseAnimBP_C_PlayEnterAnimation_Params
	{	};

	/**
	 * Function CorpseSearch_CorpseAnimBP.CorpseSearch_CorpseAnimBP_C.BlueprintBeginPlay
	 */
	struct UCorpseSearch_CorpseAnimBP_C_BlueprintBeginPlay_Params
	{	};

	/**
	 * Function CorpseSearch_CorpseAnimBP.CorpseSearch_CorpseAnimBP_C.Stop Animation
	 */
	struct UCorpseSearch_CorpseAnimBP_C_StopAnimation_Params
	{
	public:
		bool                                                       IsSuccess;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CorpseSearch_CorpseAnimBP.CorpseSearch_CorpseAnimBP_C.Reset Animation State
	 */
	struct UCorpseSearch_CorpseAnimBP_C_ResetAnimationState_Params
	{	};

	/**
	 * Function CorpseSearch_CorpseAnimBP.CorpseSearch_CorpseAnimBP_C.ExecuteUbergraph_CorpseSearch_CorpseAnimBP
	 */
	struct UCorpseSearch_CorpseAnimBP_C_ExecuteUbergraph_CorpseSearch_CorpseAnimBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
