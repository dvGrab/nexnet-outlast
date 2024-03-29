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
	 * Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.SetupSplineFollowing
	 */
	struct AOR_NunSplineAnchor__BP_C_SetupSplineFollowing_Params
	{
	public:
		class ASplineFollowing_Base_BP_C*                          SplineFollower;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USplineComponent*                                    SplineComponent;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      NetworkSyncInitialValue;                                 // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ENetworkSyncType                                           NetworkSyncType;                                         // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3542[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.PlayAnimation
	 */
	struct AOR_NunSplineAnchor__BP_C_PlayAnimation_Params
	{
	public:
		class UAnimationAsset*                                     NewAnimToPlay;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.RevertMannequinAnimation
	 */
	struct AOR_NunSplineAnchor__BP_C_RevertMannequinAnimation_Params
	{	};

	/**
	 * Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.UserConstructionScript
	 */
	struct AOR_NunSplineAnchor__BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.RotationTimeline__FinishedFunc
	 */
	struct AOR_NunSplineAnchor__BP_C_RotationTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.RotationTimeline__UpdateFunc
	 */
	struct AOR_NunSplineAnchor__BP_C_RotationTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.OnWorldFullyLoaded
	 */
	struct AOR_NunSplineAnchor__BP_C_OnWorldFullyLoaded_Params
	{	};

	/**
	 * Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.Event_OnTriggered
	 */
	struct AOR_NunSplineAnchor__BP_C_Event_OnTriggered_Params
	{	};

	/**
	 * Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.Event_OnUntriggered
	 */
	struct AOR_NunSplineAnchor__BP_C_Event_OnUntriggered_Params
	{	};

	/**
	 * Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.Start Spline Following
	 */
	struct AOR_NunSplineAnchor__BP_C_Start_Spline_Following_Params
	{
	public:
		class ABase_SplineActor_BP_C*                              MannequinSplineActor;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Network_Sync_Initial_Value;                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            Rotation_Offset;                                         // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ENetworkSyncType                                           Network_Sync_Type;                                       // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.UpdateSoundLoop
	 */
	struct AOR_NunSplineAnchor__BP_C_UpdateSoundLoop_Params
	{	};

	/**
	 * Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.Event_SnapToState
	 */
	struct AOR_NunSplineAnchor__BP_C_Event_SnapToState_Params
	{	};

	/**
	 * Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.OnWorldPopulateFinished
	 */
	struct AOR_NunSplineAnchor__BP_C_OnWorldPopulateFinished_Params
	{	};

	/**
	 * Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.BP_OnPingPongExtremityEvent
	 */
	struct AOR_NunSplineAnchor__BP_C_BP_OnPingPongExtremityEvent_Params
	{
	public:
		float                                                      progress;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.ReceiveBeginPlay
	 */
	struct AOR_NunSplineAnchor__BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.BP_OnCurrentSplineCompChanged
	 */
	struct AOR_NunSplineAnchor__BP_C_BP_OnCurrentSplineCompChanged_Params
	{	};

	/**
	 * Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.ExecuteUbergraph_OR_NunSplineAnchor-01_BP
	 */
	struct AOR_NunSplineAnchor__BP_C_ExecuteUbergraph_OR_NunSplineAnchor__BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
