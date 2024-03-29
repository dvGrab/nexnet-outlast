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
	 * Function ElectrifiedDoorTrap-Right_BP.ElectrifiedDoorTrap-Right_BP_C.WillPlayerTriggerTrap
	 */
	struct AElectrifiedDoorTrap_Right_BP_C_WillPlayerTriggerTrap_Params
	{
	public:
		class ARBDoor*                                             door;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bWillTrigger;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZRQ4[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ElectrifiedDoorTrap-Right_BP.ElectrifiedDoorTrap-Right_BP_C.IsCurrentlyTriggering
	 */
	struct AElectrifiedDoorTrap_Right_BP_C_IsCurrentlyTriggering_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ElectrifiedDoorTrap-Right_BP.ElectrifiedDoorTrap-Right_BP_C.SpawnTrapDart
	 */
	struct AElectrifiedDoorTrap_Right_BP_C_SpawnTrapDart_Params
	{	};

	/**
	 * Function ElectrifiedDoorTrap-Right_BP.ElectrifiedDoorTrap-Right_BP_C.OnRep_TrapProjectile
	 */
	struct AElectrifiedDoorTrap_Right_BP_C_OnRep_TrapProjectile_Params
	{	};

	/**
	 * Function ElectrifiedDoorTrap-Right_BP.ElectrifiedDoorTrap-Right_BP_C.Reset
	 */
	struct AElectrifiedDoorTrap_Right_BP_C_Reset_Params
	{	};

	/**
	 * Function ElectrifiedDoorTrap-Right_BP.ElectrifiedDoorTrap-Right_BP_C.Event_OnTriggered
	 */
	struct AElectrifiedDoorTrap_Right_BP_C_Event_OnTriggered_Params
	{	};

	/**
	 * Function ElectrifiedDoorTrap-Right_BP.ElectrifiedDoorTrap-Right_BP_C.ReceiveBeginPlay
	 */
	struct AElectrifiedDoorTrap_Right_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ElectrifiedDoorTrap-Right_BP.ElectrifiedDoorTrap-Right_BP_C.Event_OnResetStage
	 */
	struct AElectrifiedDoorTrap_Right_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function ElectrifiedDoorTrap-Right_BP.ElectrifiedDoorTrap-Right_BP_C.ReceiveDestroyed
	 */
	struct AElectrifiedDoorTrap_Right_BP_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function ElectrifiedDoorTrap-Right_BP.ElectrifiedDoorTrap-Right_BP_C.BP_LinkTriggerTrap
	 */
	struct AElectrifiedDoorTrap_Right_BP_C_BP_LinkTriggerTrap_Params
	{
	public:
		class ARBWireTriggerTrap*                                  triggerTrap;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ElectrifiedDoorTrap-Right_BP.ElectrifiedDoorTrap-Right_BP_C.OnDoorRepulsionScheduled
	 */
	struct AElectrifiedDoorTrap_Right_BP_C_OnDoorRepulsionScheduled_Params
	{
	public:
		class ARBDoor*                                             door;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ElectrifiedDoorTrap-Right_BP.ElectrifiedDoorTrap-Right_BP_C.Event_SnapToState
	 */
	struct AElectrifiedDoorTrap_Right_BP_C_Event_SnapToState_Params
	{	};

	/**
	 * Function ElectrifiedDoorTrap-Right_BP.ElectrifiedDoorTrap-Right_BP_C.ExecuteUbergraph_ElectrifiedDoorTrap-Right_BP
	 */
	struct AElectrifiedDoorTrap_Right_BP_C_ExecuteUbergraph_ElectrifiedDoorTrap_Right_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
