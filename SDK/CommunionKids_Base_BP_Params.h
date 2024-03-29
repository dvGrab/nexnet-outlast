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
	 * Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.SetBlood
	 */
	struct ACommunionKids_Base_BP_C_SetBlood_Params
	{
	public:
		float                                                      IncrementalValue;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.OnRep_OrientationYaw
	 */
	struct ACommunionKids_Base_BP_C_OnRep_OrientationYaw_Params
	{	};

	/**
	 * Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.ApplyStateToAnimInstance
	 */
	struct ACommunionKids_Base_BP_C_ApplyStateToAnimInstance_Params
	{
	public:
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.OnRep_IsReorienting
	 */
	struct ACommunionKids_Base_BP_C_OnRep_IsReorienting_Params
	{	};

	/**
	 * Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.TickRecentering
	 */
	struct ACommunionKids_Base_BP_C_TickRecentering_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JACQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.ShouldBPTick
	 */
	struct ACommunionKids_Base_BP_C_ShouldBPTick_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V643[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.OnRep_IsRecentering
	 */
	struct ACommunionKids_Base_BP_C_OnRep_IsRecentering_Params
	{	};

	/**
	 * Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.TickReorientingAngle
	 */
	struct ACommunionKids_Base_BP_C_TickReorientingAngle_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.OnRep_IsLooking
	 */
	struct ACommunionKids_Base_BP_C_OnRep_IsLooking_Params
	{	};

	/**
	 * Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.Refresh Anim State
	 */
	struct ACommunionKids_Base_BP_C_Refresh_Anim_State_Params
	{	};

	/**
	 * Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.OnRep_IsPraying
	 */
	struct ACommunionKids_Base_BP_C_OnRep_IsPraying_Params
	{	};

	/**
	 * Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.StartExiting
	 */
	struct ACommunionKids_Base_BP_C_StartExiting_Params
	{	};

	/**
	 * Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.Event_StartedScriptedAnim
	 */
	struct ACommunionKids_Base_BP_C_Event_StartedScriptedAnim_Params
	{	};

	/**
	 * Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.Event_OnResetStage
	 */
	struct ACommunionKids_Base_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.Detach
	 */
	struct ACommunionKids_Base_BP_C_Detach_Params
	{	};

	/**
	 * Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.StartPraying
	 */
	struct ACommunionKids_Base_BP_C_StartPraying_Params
	{	};

	/**
	 * Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.StartStaring
	 */
	struct ACommunionKids_Base_BP_C_StartStaring_Params
	{
	public:
		class AActor*                                              StaringActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.ReceiveTick
	 */
	struct ACommunionKids_Base_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.ReceiveBeginPlay
	 */
	struct ACommunionKids_Base_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function CommunionKids_Base_BP.CommunionKids_Base_BP_C.ExecuteUbergraph_CommunionKids_Base_BP
	 */
	struct ACommunionKids_Base_BP_C_ExecuteUbergraph_CommunionKids_Base_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5O7V[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
