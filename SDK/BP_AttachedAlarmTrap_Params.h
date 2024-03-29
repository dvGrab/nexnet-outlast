#pragma once

/**
 * Name: READYORNOT
 * Version: 0.0.1
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
	 * Function BP_AttachedAlarmTrap.BP_AttachedAlarmTrap_C.OnTrapTriggered
	 */
	struct ABP_AttachedAlarmTrap_C_OnTrapTriggered_Params
	{
	public:
		class AReadyOrNotCharacter*                                TriggeredBy;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AttachedAlarmTrap.BP_AttachedAlarmTrap_C.OnTrapDisarmed
	 */
	struct ABP_AttachedAlarmTrap_C_OnTrapDisarmed_Params
	{
	public:
		class AReadyOrNotCharacter*                                DisarmedBy;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AttachedAlarmTrap.BP_AttachedAlarmTrap_C.ExecuteUbergraph_BP_AttachedAlarmTrap
	 */
	struct ABP_AttachedAlarmTrap_C_ExecuteUbergraph_BP_AttachedAlarmTrap_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A6IU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
