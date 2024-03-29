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
	 * Function ExecutionActorBase_BP.ExecutionActorBase_BP_C.GetLoopAnim
	 */
	struct AExecutionActorBase_BP_C_GetLoopAnim_Params
	{
	public:
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAnimSequence*                                       Anim;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ExecutionActorBase_BP.ExecutionActorBase_BP_C.GetIntroAnim
	 */
	struct AExecutionActorBase_BP_C_GetIntroAnim_Params
	{
	public:
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAnimSequence*                                       Anim;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ExecutionActorBase_BP.ExecutionActorBase_BP_C.OnRep_WitnessStarted
	 */
	struct AExecutionActorBase_BP_C_OnRep_WitnessStarted_Params
	{	};

	/**
	 * Function ExecutionActorBase_BP.ExecutionActorBase_BP_C.StartWitness (Server)
	 */
	struct AExecutionActorBase_BP_C_StartWitnessServer_Params
	{	};

	/**
	 * Function ExecutionActorBase_BP.ExecutionActorBase_BP_C.Event_OnResetStage
	 */
	struct AExecutionActorBase_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function ExecutionActorBase_BP.ExecutionActorBase_BP_C.ExecuteUbergraph_ExecutionActorBase_BP
	 */
	struct AExecutionActorBase_BP_C_ExecuteUbergraph_ExecutionActorBase_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ExecutionActorBase_BP.ExecutionActorBase_BP_C.OnWitnessStartedChanged__DelegateSignature
	 */
	struct AExecutionActorBase_BP_C_OnWitnessStartedChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bStarted;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
