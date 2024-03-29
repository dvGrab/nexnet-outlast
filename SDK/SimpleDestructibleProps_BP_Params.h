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
	 * Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.OnRep_isOff
	 */
	struct ASimpleDestructibleProps_BP_C_OnRep_isOff_Params
	{	};

	/**
	 * Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.UpdateHittable
	 */
	struct ASimpleDestructibleProps_BP_C_UpdateHittable_Params
	{	};

	/**
	 * Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.UpdateLastHitterInfo
	 */
	struct ASimpleDestructibleProps_BP_C_UpdateLastHitterInfo_Params
	{
	public:
		class AActor*                                              LastHitter;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.SetCurrentSounds
	 */
	struct ASimpleDestructibleProps_BP_C_SetCurrentSounds_Params
	{
	public:
		TArray<struct FSimpleDestructibleSound_Stuc>               Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.SetCurrentLights
	 */
	struct ASimpleDestructibleProps_BP_C_SetCurrentLights_Params
	{
	public:
		TArray<struct FSimpleDestructibleLights_Stuc>              Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.SetCurrentParticles
	 */
	struct ASimpleDestructibleProps_BP_C_SetCurrentParticles_Params
	{
	public:
		TArray<struct FSimpleDestructibleParticles_Stuc>           Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.SetCurrentPhysicalMeshes
	 */
	struct ASimpleDestructibleProps_BP_C_SetCurrentPhysicalMeshes_Params
	{
	public:
		TArray<struct FSimpleDestructiblePhysicalMesh_Stuc>        Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		bool                                                       ApplyImpulse;                                            // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GNJU[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.SetCurrentMeshes
	 */
	struct ASimpleDestructibleProps_BP_C_SetCurrentMeshes_Params
	{
	public:
		TArray<struct FSimpleDestructibleMeshes_Stuc>              Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.CleanLastState
	 */
	struct ASimpleDestructibleProps_BP_C_CleanLastState_Params
	{	};

	/**
	 * Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.UpdateBroken
	 */
	struct ASimpleDestructibleProps_BP_C_UpdateBroken_Params
	{
	public:
		bool                                                       Toggle;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9V5O[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.OnCurrentStageChanged
	 */
	struct ASimpleDestructibleProps_BP_C_OnCurrentStageChanged_Params
	{	};

	/**
	 * Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.OnRep_CurrentStage
	 */
	struct ASimpleDestructibleProps_BP_C_OnRep_CurrentStage_Params
	{	};

	/**
	 * Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.SetOn
	 */
	struct ASimpleDestructibleProps_BP_C_SetOn_Params
	{
	public:
		bool                                                       isOff;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.UserConstructionScript
	 */
	struct ASimpleDestructibleProps_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.Timeline_0__FinishedFunc
	 */
	struct ASimpleDestructibleProps_BP_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.Timeline_0__UpdateFunc
	 */
	struct ASimpleDestructibleProps_BP_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.ReceiveBeginPlay
	 */
	struct ASimpleDestructibleProps_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.Event_OnTriggered
	 */
	struct ASimpleDestructibleProps_BP_C_Event_OnTriggered_Params
	{	};

	/**
	 * Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.Event_OnUntriggered
	 */
	struct ASimpleDestructibleProps_BP_C_Event_OnUntriggered_Params
	{	};

	/**
	 * Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.BlastLight
	 */
	struct ASimpleDestructibleProps_BP_C_BlastLight_Params
	{	};

	/**
	 * Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.Event_SnapToState
	 */
	struct ASimpleDestructibleProps_BP_C_Event_SnapToState_Params
	{	};

	/**
	 * Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.BndEvt__DamageableComponent_K2Node_ComponentBoundEvent_2_OnDamageableDamaged__DelegateSignature
	 */
	struct ASimpleDestructibleProps_BP_C_BndEvt__DamageableComponent_K2Node_ComponentBoundEvent_2_OnDamageableDamaged__DelegateSignature_Params
	{
	public:
		class URBDamageableComponent*                              DamageableComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsDestroyed;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.ExecuteUbergraph_SimpleDestructibleProps_BP
	 */
	struct ASimpleDestructibleProps_BP_C_ExecuteUbergraph_SimpleDestructibleProps_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.OnBrokenChanged__DelegateSignature
	 */
	struct ASimpleDestructibleProps_BP_C_OnBrokenChanged__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
