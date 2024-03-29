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
	 * Function Alarm_BP.Alarm_BP_C.UserConstructionScript
	 */
	struct AAlarm_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Alarm_BP.Alarm_BP_C.ReceiveTick
	 */
	struct AAlarm_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Alarm_BP.Alarm_BP_C.Event_OnTriggered
	 */
	struct AAlarm_BP_C_Event_OnTriggered_Params
	{	};

	/**
	 * Function Alarm_BP.Alarm_BP_C.Event_OnUntriggered
	 */
	struct AAlarm_BP_C_Event_OnUntriggered_Params
	{	};

	/**
	 * Function Alarm_BP.Alarm_BP_C.ToggleOnOff
	 */
	struct AAlarm_BP_C_ToggleOnOff_Params
	{
	public:
		bool                                                       bAlarmState;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Alarm_BP.Alarm_BP_C.Event_OnResetStage
	 */
	struct AAlarm_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function Alarm_BP.Alarm_BP_C.ExecuteUbergraph_Alarm_BP
	 */
	struct AAlarm_BP_C_ExecuteUbergraph_Alarm_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
