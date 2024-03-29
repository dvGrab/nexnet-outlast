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
	 * Function PS_AvellanosSplineAnchor-01_BP.PS_AvellanosSplineAnchor-01_BP_C.SetupSplineFollowing
	 */
	struct APS_AvellanosSplineAnchor01_BP_C_SetupSplineFollowing_Params
	{
	public:
		class ASplineFollowing_Base_BP_C*                          SplineFollower;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USplineComponent*                                    SplineComponent;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      NetworkSyncInitialValue;                                 // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ENetworkSyncType                                           NetworkSyncType;                                         // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_J70P[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PS_AvellanosSplineAnchor-01_BP.PS_AvellanosSplineAnchor-01_BP_C.PlayAnimation
	 */
	struct APS_AvellanosSplineAnchor01_BP_C_PlayAnimation_Params
	{
	public:
		class UAnimationAsset*                                     NewAnimToPlay;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PS_AvellanosSplineAnchor-01_BP.PS_AvellanosSplineAnchor-01_BP_C.RevertMannequinAnimation
	 */
	struct APS_AvellanosSplineAnchor01_BP_C_RevertMannequinAnimation_Params
	{	};

	/**
	 * Function PS_AvellanosSplineAnchor-01_BP.PS_AvellanosSplineAnchor-01_BP_C.OnWorldFullyLoaded
	 */
	struct APS_AvellanosSplineAnchor01_BP_C_OnWorldFullyLoaded_Params
	{	};

	/**
	 * Function PS_AvellanosSplineAnchor-01_BP.PS_AvellanosSplineAnchor-01_BP_C.OnWorldPopulateFinished
	 */
	struct APS_AvellanosSplineAnchor01_BP_C_OnWorldPopulateFinished_Params
	{	};

	/**
	 * Function PS_AvellanosSplineAnchor-01_BP.PS_AvellanosSplineAnchor-01_BP_C.Event_OnTriggered
	 */
	struct APS_AvellanosSplineAnchor01_BP_C_Event_OnTriggered_Params
	{	};

	/**
	 * Function PS_AvellanosSplineAnchor-01_BP.PS_AvellanosSplineAnchor-01_BP_C.Event_OnUntriggered
	 */
	struct APS_AvellanosSplineAnchor01_BP_C_Event_OnUntriggered_Params
	{	};

	/**
	 * Function PS_AvellanosSplineAnchor-01_BP.PS_AvellanosSplineAnchor-01_BP_C.Start Spline Following
	 */
	struct APS_AvellanosSplineAnchor01_BP_C_StartSplineFollowing_Params
	{
	public:
		class AMannequinSplineActor01_BP_C*                        MannequinSplineActor;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      NetworkSyncInitialValue;                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            RotationOffset;                                          // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ENetworkSyncType                                           NetworkSyncType;                                         // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PS_AvellanosSplineAnchor-01_BP.PS_AvellanosSplineAnchor-01_BP_C.UpdateSoundLoop
	 */
	struct APS_AvellanosSplineAnchor01_BP_C_UpdateSoundLoop_Params
	{	};

	/**
	 * Function PS_AvellanosSplineAnchor-01_BP.PS_AvellanosSplineAnchor-01_BP_C.Event_SnapToState
	 */
	struct APS_AvellanosSplineAnchor01_BP_C_Event_SnapToState_Params
	{	};

	/**
	 * Function PS_AvellanosSplineAnchor-01_BP.PS_AvellanosSplineAnchor-01_BP_C.ExecuteUbergraph_PS_AvellanosSplineAnchor-01_BP
	 */
	struct APS_AvellanosSplineAnchor01_BP_C_ExecuteUbergraph_PS_AvellanosSplineAnchor01_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WBFR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
