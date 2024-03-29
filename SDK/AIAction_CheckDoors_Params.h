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
	 * Function AIAction_CheckDoors.AIAction_CheckDoors_C.ResetData
	 */
	struct UAIAction_CheckDoors_C_ResetData_Params
	{	};

	/**
	 * Function AIAction_CheckDoors.AIAction_CheckDoors_C.CanCheckDoor
	 */
	struct UAIAction_CheckDoors_C_CanCheckDoor_Params
	{
	public:
		class ADoor*                                               Door;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Return_Value;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIAction_CheckDoors.AIAction_CheckDoors_C.Event_RemoveLastCheckedDoor
	 */
	struct UAIAction_CheckDoors_C_Event_RemoveLastCheckedDoor_Params
	{	};

	/**
	 * Function AIAction_CheckDoors.AIAction_CheckDoors_C.OnCreate_Blueprint
	 */
	struct UAIAction_CheckDoors_C_OnCreate_Blueprint_Params
	{
	public:
		class ACyberneticController*                               Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIAction_CheckDoors.AIAction_CheckDoors_C.Tick_Blueprint
	 */
	struct UAIAction_CheckDoors_C_Tick_Blueprint_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIAction_CheckDoors.AIAction_CheckDoors_C.OnMoveComplete_Blueprint
	 */
	struct UAIAction_CheckDoors_C_OnMoveComplete_Blueprint_Params
	{
	public:
		class AAIController*                                       Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    RequestID;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIAction_CheckDoors.AIAction_CheckDoors_C.BeginAction_Blueprint
	 */
	struct UAIAction_CheckDoors_C_BeginAction_Blueprint_Params
	{	};

	/**
	 * Function AIAction_CheckDoors.AIAction_CheckDoors_C.OnPathFound_Blueprint
	 */
	struct UAIAction_CheckDoors_C_OnPathFound_Blueprint_Params
	{
	public:
		int32_t                                                    PathId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ERonNavigationQueryResult                                  Result;                                                  // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIAction_CheckDoors.AIAction_CheckDoors_C.InitAction_Blueprint
	 */
	struct UAIAction_CheckDoors_C_InitAction_Blueprint_Params
	{
	public:
		class ACyberneticController*                               Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIAction_CheckDoors.AIAction_CheckDoors_C.EndAction_Blueprint
	 */
	struct UAIAction_CheckDoors_C_EndAction_Blueprint_Params
	{	};

	/**
	 * Function AIAction_CheckDoors.AIAction_CheckDoors_C.ExecuteUbergraph_AIAction_CheckDoors
	 */
	struct UAIAction_CheckDoors_C_ExecuteUbergraph_AIAction_CheckDoors_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
