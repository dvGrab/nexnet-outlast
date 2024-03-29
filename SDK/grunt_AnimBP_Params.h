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
	 * Function grunt_AnimBP.grunt_AnimBP_C.NightHunter_EnterLight
	 */
	struct Ugrunt_AnimBP_C_NightHunter_EnterLight_Params
	{
	public:
		struct FPoseLink                                           Input;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           NightHunter_EnterLight;                                  // 0x0010(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function grunt_AnimBP.grunt_AnimBP_C.NightHunter_InLight
	 */
	struct Ugrunt_AnimBP_C_NightHunter_InLight_Params
	{
	public:
		struct FPoseLink                                           InPose;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           NightHunter_InLight;                                     // 0x0010(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function grunt_AnimBP.grunt_AnimBP_C.AnimGraph
	 */
	struct Ugrunt_AnimBP_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function grunt_AnimBP.grunt_AnimBP_C.ShouldReactToLight
	 */
	struct Ugrunt_AnimBP_C_ShouldReactToLight_Params
	{
	public:
		bool                                                       ShouldReactToLight;                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function grunt_AnimBP.grunt_AnimBP_C.BlueprintBeginPlay
	 */
	struct Ugrunt_AnimBP_C_BlueprintBeginPlay_Params
	{	};

	/**
	 * Function grunt_AnimBP.grunt_AnimBP_C.AnimNotify_HoldOn
	 */
	struct Ugrunt_AnimBP_C_AnimNotify_HoldOn_Params
	{	};

	/**
	 * Function grunt_AnimBP.grunt_AnimBP_C.AnimNotify_LetGo
	 */
	struct Ugrunt_AnimBP_C_AnimNotify_LetGo_Params
	{	};

	/**
	 * Function grunt_AnimBP.grunt_AnimBP_C.AnimNotify_InLight
	 */
	struct Ugrunt_AnimBP_C_AnimNotify_InLight_Params
	{	};

	/**
	 * Function grunt_AnimBP.grunt_AnimBP_C.AnimNotify_InDark
	 */
	struct Ugrunt_AnimBP_C_AnimNotify_InDark_Params
	{	};

	/**
	 * Function grunt_AnimBP.grunt_AnimBP_C.Toogle Break from BlindedPose
	 */
	struct Ugrunt_AnimBP_C_Toogle_Break_from_BlindedPose_Params
	{	};

	/**
	 * Function grunt_AnimBP.grunt_AnimBP_C.Event_OnInDarknessChanged
	 */
	struct Ugrunt_AnimBP_C_Event_OnInDarknessChanged_Params
	{	};

	/**
	 * Function grunt_AnimBP.grunt_AnimBP_C.BlueprintUpdateAnimation
	 */
	struct Ugrunt_AnimBP_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function grunt_AnimBP.grunt_AnimBP_C.AnimNotify_ResetEnterLight
	 */
	struct Ugrunt_AnimBP_C_AnimNotify_ResetEnterLight_Params
	{	};

	/**
	 * Function grunt_AnimBP.grunt_AnimBP_C.ExecuteUbergraph_grunt_AnimBP
	 */
	struct Ugrunt_AnimBP_C_ExecuteUbergraph_grunt_AnimBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
