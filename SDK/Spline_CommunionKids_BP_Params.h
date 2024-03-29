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
	 * Function Spline_CommunionKids_BP.Spline_CommunionKids_BP_C.RefreshCollisionState
	 */
	struct ASpline_CommunionKids_BP_C_RefreshCollisionState_Params
	{	};

	/**
	 * Function Spline_CommunionKids_BP.Spline_CommunionKids_BP_C.IsSplineAnchorParentPlaying
	 */
	struct ASpline_CommunionKids_BP_C_IsSplineAnchorParentPlaying_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TVBJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Spline_CommunionKids_BP.Spline_CommunionKids_BP_C.GetSplineAnchorParent
	 */
	struct ASpline_CommunionKids_BP_C_GetSplineAnchorParent_Params
	{
	public:
		class ASplineAnchor_BP_C*                                  SplineAnchorParent;                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Spline_CommunionKids_BP.Spline_CommunionKids_BP_C.UserConstructionScript
	 */
	struct ASpline_CommunionKids_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Spline_CommunionKids_BP.Spline_CommunionKids_BP_C.StartStaring
	 */
	struct ASpline_CommunionKids_BP_C_StartStaring_Params
	{
	public:
		class AActor*                                              StaringActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Spline_CommunionKids_BP.Spline_CommunionKids_BP_C.StartPraying
	 */
	struct ASpline_CommunionKids_BP_C_StartPraying_Params
	{	};

	/**
	 * Function Spline_CommunionKids_BP.Spline_CommunionKids_BP_C.StartEating
	 */
	struct ASpline_CommunionKids_BP_C_StartEating_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Spline_CommunionKids_BP.Spline_CommunionKids_BP_C.DoneEating
	 */
	struct ASpline_CommunionKids_BP_C_DoneEating_Params
	{	};

	/**
	 * Function Spline_CommunionKids_BP.Spline_CommunionKids_BP_C.ReceiveBeginPlay
	 */
	struct ASpline_CommunionKids_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Spline_CommunionKids_BP.Spline_CommunionKids_BP_C.SplineAnchorMovingStateChanged
	 */
	struct ASpline_CommunionKids_BP_C_SplineAnchorMovingStateChanged_Params
	{
	public:
		bool                                                       bMoving;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Spline_CommunionKids_BP.Spline_CommunionKids_BP_C.ExecuteUbergraph_Spline_CommunionKids_BP
	 */
	struct ASpline_CommunionKids_BP_C_ExecuteUbergraph_Spline_CommunionKids_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CAZN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
