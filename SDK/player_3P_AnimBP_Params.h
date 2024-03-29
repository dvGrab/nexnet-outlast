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
	 * Function player_3P_AnimBP.player_3P_AnimBP_C.AnimGraph
	 */
	struct Uplayer_3P_AnimBP_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function player_3P_AnimBP.player_3P_AnimBP_C.ToggleAFK
	 */
	struct Uplayer_3P_AnimBP_C_ToggleAFK_Params
	{	};

	/**
	 * Function player_3P_AnimBP.player_3P_AnimBP_C.ShouldIgnoreLookAround
	 */
	struct Uplayer_3P_AnimBP_C_ShouldIgnoreLookAround_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function player_3P_AnimBP.player_3P_AnimBP_C.AnimNotify_IsGone
	 */
	struct Uplayer_3P_AnimBP_C_AnimNotify_IsGone_Params
	{	};

	/**
	 * Function player_3P_AnimBP.player_3P_AnimBP_C.AnimNotify_IsIdle
	 */
	struct Uplayer_3P_AnimBP_C_AnimNotify_IsIdle_Params
	{	};

	/**
	 * Function player_3P_AnimBP.player_3P_AnimBP_C.AnimNotify_IsBack
	 */
	struct Uplayer_3P_AnimBP_C_AnimNotify_IsBack_Params
	{	};

	/**
	 * Function player_3P_AnimBP.player_3P_AnimBP_C.BlueprintUpdateAnimation
	 */
	struct Uplayer_3P_AnimBP_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function player_3P_AnimBP.player_3P_AnimBP_C.AnimNotify_Dead
	 */
	struct Uplayer_3P_AnimBP_C_AnimNotify_Dead_Params
	{	};

	/**
	 * Function player_3P_AnimBP.player_3P_AnimBP_C.AnimNotify_Alive
	 */
	struct Uplayer_3P_AnimBP_C_AnimNotify_Alive_Params
	{	};

	/**
	 * Function player_3P_AnimBP.player_3P_AnimBP_C.AnimNotify_IdleBreaker
	 */
	struct Uplayer_3P_AnimBP_C_AnimNotify_IdleBreaker_Params
	{	};

	/**
	 * Function player_3P_AnimBP.player_3P_AnimBP_C.AnimNotify_StartPush_Left
	 */
	struct Uplayer_3P_AnimBP_C_AnimNotify_StartPush_Left_Params
	{	};

	/**
	 * Function player_3P_AnimBP.player_3P_AnimBP_C.AnimNotify_StopPush_Left
	 */
	struct Uplayer_3P_AnimBP_C_AnimNotify_StopPush_Left_Params
	{	};

	/**
	 * Function player_3P_AnimBP.player_3P_AnimBP_C.ExecuteUbergraph_player_3P_AnimBP
	 */
	struct Uplayer_3P_AnimBP_C_ExecuteUbergraph_player_3P_AnimBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
