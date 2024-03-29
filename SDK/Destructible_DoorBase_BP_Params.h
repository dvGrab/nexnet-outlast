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
	 * Function Destructible_DoorBase_BP.Destructible_DoorBase_BP_C.HasDestructibleDoor
	 */
	struct ADestructible_DoorBase_BP_C_HasDestructibleDoor_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Destructible_DoorBase_BP.Destructible_DoorBase_BP_C.ApplyDoorCollisionTypeToDestructible
	 */
	struct ADestructible_DoorBase_BP_C_ApplyDoorCollisionTypeToDestructible_Params
	{
	public:
		class AActor*                                              Destructible;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Destructible_DoorBase_BP.Destructible_DoorBase_BP_C.BndEvt__DestructibleDoor_K2Node_ComponentBoundEvent_0_OnActorPrevisRuntimeChildActorChanged__DelegateSignature
	 */
	struct ADestructible_DoorBase_BP_C_BndEvt__DestructibleDoor_K2Node_ComponentBoundEvent_0_OnActorPrevisRuntimeChildActorChanged__DelegateSignature_Params
	{
	public:
		class URBActorPrevisComponent*                             actorPrevis;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              runtimeChildActor;                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Destructible_DoorBase_BP.Destructible_DoorBase_BP_C.PostToggled
	 */
	struct ADestructible_DoorBase_BP_C_PostToggled_Params
	{
	public:
		bool                                                       bToggleEnabled;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Destructible_DoorBase_BP.Destructible_DoorBase_BP_C.Event_OnResetStage
	 */
	struct ADestructible_DoorBase_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function Destructible_DoorBase_BP.Destructible_DoorBase_BP_C.ExecuteUbergraph_Destructible_DoorBase_BP
	 */
	struct ADestructible_DoorBase_BP_C_ExecuteUbergraph_Destructible_DoorBase_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M84D[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
