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
	 * Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.GetLookAtLocation
	 */
	struct ATriggerTrap_BatteryPowered_Right_BP_C_GetLookAtLocation_Params
	{
	public:
		struct FVector                                             outLookAtLocation;                                       // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.DestroyedSpawnedBattery
	 */
	struct ATriggerTrap_BatteryPowered_Right_BP_C_DestroyedSpawnedBattery_Params
	{	};

	/**
	 * Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.GetInteractionPawnLocation
	 */
	struct ATriggerTrap_BatteryPowered_Right_BP_C_GetInteractionPawnLocation_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESpecialMove                                               specialMove;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q8QC[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             OutLocation;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             outDirection;                                            // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O967[0xB];                                   // 0x0025(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.PlaySpecialMoveAnimation
	 */
	struct ATriggerTrap_BatteryPowered_Right_BP_C_PlaySpecialMoveAnimation_Params
	{
	public:
		class ARBPawn*                                             interactorPawn;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESpecialMove                                               specialMove;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.OnRep_bOpen
	 */
	struct ATriggerTrap_BatteryPowered_Right_BP_C_OnRep_bOpen_Params
	{	};

	/**
	 * Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.SetSpawnedItemsInteractible
	 */
	struct ATriggerTrap_BatteryPowered_Right_BP_C_SetSpawnedItemsInteractible_Params
	{
	public:
		bool                                                       IsInteractibe;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1L10[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.UserConstructionScript
	 */
	struct ATriggerTrap_BatteryPowered_Right_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.BP_OnArmed
	 */
	struct ATriggerTrap_BatteryPowered_Right_BP_C_BP_OnArmed_Params
	{	};

	/**
	 * Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.BP_OnDisarmed
	 */
	struct ATriggerTrap_BatteryPowered_Right_BP_C_BP_OnDisarmed_Params
	{	};

	/**
	 * Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.Event_OnCompletedOperation
	 */
	struct ATriggerTrap_BatteryPowered_Right_BP_C_Event_OnCompletedOperation_Params
	{
	public:
		TArray<class ARBPawn*>                                     pawns;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.OpenTrap
	 */
	struct ATriggerTrap_BatteryPowered_Right_BP_C_OpenTrap_Params
	{	};

	/**
	 * Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.OnRep_Open
	 */
	struct ATriggerTrap_BatteryPowered_Right_BP_C_OnRep_Open_Params
	{	};

	/**
	 * Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.BndEvt__BatterySpawnerActor_K2Node_ComponentBoundEvent_0_OnActorPrevisRuntimeChildActorChanged__DelegateSignature
	 */
	struct ATriggerTrap_BatteryPowered_Right_BP_C_BndEvt__BatterySpawnerActor_K2Node_ComponentBoundEvent_0_OnActorPrevisRuntimeChildActorChanged__DelegateSignature_Params
	{
	public:
		class URBActorPrevisComponent*                             actorPrevis;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              runtimeChildActor;                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.Event_SnapToState
	 */
	struct ATriggerTrap_BatteryPowered_Right_BP_C_Event_SnapToState_Params
	{	};

	/**
	 * Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.OnDisarmed_Internal
	 */
	struct ATriggerTrap_BatteryPowered_Right_BP_C_OnDisarmed_Internal_Params
	{
	public:
		bool                                                       bSnapToState;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.BP_OnTrapBatteryStateChanged
	 */
	struct ATriggerTrap_BatteryPowered_Right_BP_C_BP_OnTrapBatteryStateChanged_Params
	{	};

	/**
	 * Function TriggerTrap_BatteryPowered_Right_BP.TriggerTrap_BatteryPowered_Right_BP_C.ExecuteUbergraph_TriggerTrap_BatteryPowered_Right_BP
	 */
	struct ATriggerTrap_BatteryPowered_Right_BP_C_ExecuteUbergraph_TriggerTrap_BatteryPowered_Right_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
