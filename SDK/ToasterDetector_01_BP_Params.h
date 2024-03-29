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
	 * Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.UpdateRayDetectionDistance
	 */
	struct AToasterDetector__BP_C_UpdateRayDetectionDistance_Params
	{	};

	/**
	 * Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.CalculateTargetYaw
	 */
	struct AToasterDetector__BP_C_CalculateTargetYaw_Params
	{
	public:
		struct FVector                                             TrackedPosition;                                         // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Value;                                                   // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.CalculateTargetRoll
	 */
	struct AToasterDetector__BP_C_CalculateTargetRoll_Params
	{
	public:
		struct FVector                                             TrackedPosition;                                         // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Value;                                                   // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.UpdateTrackedTarget
	 */
	struct AToasterDetector__BP_C_UpdateTrackedTarget_Params
	{	};

	/**
	 * Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.UpdateIdleAnimationTime
	 */
	struct AToasterDetector__BP_C_UpdateIdleAnimationTime_Params
	{	};

	/**
	 * Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.OnRep_IdleAnimationStartTime
	 */
	struct AToasterDetector__BP_C_OnRep_IdleAnimationStartTime_Params
	{	};

	/**
	 * Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.UpdateCameraRotations
	 */
	struct AToasterDetector__BP_C_UpdateCameraRotations_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.UpdateDetectionLevel
	 */
	struct AToasterDetector__BP_C_UpdateDetectionLevel_Params
	{
	public:
		bool                                                       ShouldReset;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CXWF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.UserConstructionScript
	 */
	struct AToasterDetector__BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.Timeline_0__FinishedFunc
	 */
	struct AToasterDetector__BP_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.Timeline_0__UpdateFunc
	 */
	struct AToasterDetector__BP_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.ReceiveBeginPlay
	 */
	struct AToasterDetector__BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.ReceiveTick
	 */
	struct AToasterDetector__BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.PlayIdleAnimation
	 */
	struct AToasterDetector__BP_C_PlayIdleAnimation_Params
	{	};

	/**
	 * Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.StopIdleAnimation
	 */
	struct AToasterDetector__BP_C_StopIdleAnimation_Params
	{	};

	/**
	 * Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.SetIdleAnimationTime
	 */
	struct AToasterDetector__BP_C_SetIdleAnimationTime_Params
	{
	public:
		float                                                      NewTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.OnDetectionStateChanged
	 */
	struct AToasterDetector__BP_C_OnDetectionStateChanged_Params
	{
	public:
		EPlayerComponentDetectionState                             oldState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EPlayerComponentDetectionState                             newState;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.Event_OnResetStage
	 */
	struct AToasterDetector__BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.BndEvt__ToasterDetector-01_BP_RBDamageable_K2Node_ComponentBoundEvent_2_OnNumberOfHitsChanged__DelegateSignature
	 */
	struct AToasterDetector__BP_C_BndEvt__ToasterDetector__BP_RBDamageable_K2Node_ComponentBoundEvent_2_OnNumberOfHitsChanged__DelegateSignature_Params
	{
	public:
		class URBDamageableComponent*                              DamageableComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.ExecuteUbergraph_ToasterDetector-01_BP
	 */
	struct AToasterDetector__BP_C_ExecuteUbergraph_ToasterDetector__BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
