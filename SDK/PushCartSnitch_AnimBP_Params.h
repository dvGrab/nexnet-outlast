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
	 * Function PushCartSnitch_AnimBP.PushCartSnitch_AnimBP_C.AnimGraph
	 */
	struct UPushCartSnitch_AnimBP_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function PushCartSnitch_AnimBP.PushCartSnitch_AnimBP_C.PlayReaction
	 */
	struct UPushCartSnitch_AnimBP_C_PlayReaction_Params
	{
	public:
		class UAnimSequence*                                       Sequence;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PushCartSnitch_AnimBP.PushCartSnitch_AnimBP_C.BlueprintUpdateAnimation
	 */
	struct UPushCartSnitch_AnimBP_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PushCartSnitch_AnimBP.PushCartSnitch_AnimBP_C.Pawn Pushing Changed
	 */
	struct UPushCartSnitch_AnimBP_C_PawnPushingChanged_Params
	{
	public:
		class ARBBasePushable*                                     pushable;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class URBPushableComponent*                                pushableComponent;                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             Pawn;                                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PushCartSnitch_AnimBP.PushCartSnitch_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PushCartSnitch_AnimBP_AnimGraphNode_CopyPoseFromMesh_A4D0B84A40E13C402B1EBDAA2AEDD348
	 */
	struct UPushCartSnitch_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PushCartSnitch_AnimBP_AnimGraphNode_CopyPoseFromMesh_A4D0B84A40E13C402B1EBDAA2AEDD348_Params
	{	};

	/**
	 * Function PushCartSnitch_AnimBP.PushCartSnitch_AnimBP_C.GetZapped
	 */
	struct UPushCartSnitch_AnimBP_C_GetZapped_Params
	{
	public:
		float                                                      Intensity;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ThisKillsTheMan;                                         // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PushCartSnitch_AnimBP.PushCartSnitch_AnimBP_C.PlayBreaker
	 */
	struct UPushCartSnitch_AnimBP_C_PlayBreaker_Params
	{	};

	/**
	 * Function PushCartSnitch_AnimBP.PushCartSnitch_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PushCartSnitch_AnimBP_AnimGraphNode_TransitionResult_D4B95FA64DF8947CA137ABB3DC1A0938
	 */
	struct UPushCartSnitch_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PushCartSnitch_AnimBP_AnimGraphNode_TransitionResult_D4B95FA64DF8947CA137ABB3DC1A0938_Params
	{	};

	/**
	 * Function PushCartSnitch_AnimBP.PushCartSnitch_AnimBP_C.BlueprintBeginPlay
	 */
	struct UPushCartSnitch_AnimBP_C_BlueprintBeginPlay_Params
	{	};

	/**
	 * Function PushCartSnitch_AnimBP.PushCartSnitch_AnimBP_C.GetHitByProjectile
	 */
	struct UPushCartSnitch_AnimBP_C_GetHitByProjectile_Params
	{
	public:
		EBasicDirection                                            Direction;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PushCartSnitch_AnimBP.PushCartSnitch_AnimBP_C.OnStartOrStopMoving_Event_1
	 */
	struct UPushCartSnitch_AnimBP_C_OnStartOrStopMoving_Event_1_Params
	{
	public:
		bool                                                       IsMoving;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PushCartSnitch_AnimBP.PushCartSnitch_AnimBP_C.ExecuteUbergraph_PushCartSnitch_AnimBP
	 */
	struct UPushCartSnitch_AnimBP_C_ExecuteUbergraph_PushCartSnitch_AnimBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
