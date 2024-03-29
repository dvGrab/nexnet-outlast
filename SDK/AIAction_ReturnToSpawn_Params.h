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
	 * Function AIAction_ReturnToSpawn.AIAction_ReturnToSpawn_C.ShouldPerformAction
	 */
	struct UAIAction_ReturnToSpawn_C_ShouldPerformAction_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIAction_ReturnToSpawn.AIAction_ReturnToSpawn_C.BeginAction_Blueprint
	 */
	struct UAIAction_ReturnToSpawn_C_BeginAction_Blueprint_Params
	{	};

	/**
	 * Function AIAction_ReturnToSpawn.AIAction_ReturnToSpawn_C.OnMoveComplete_Blueprint
	 */
	struct UAIAction_ReturnToSpawn_C_OnMoveComplete_Blueprint_Params
	{
	public:
		class AAIController*                                       Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    RequestID;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIAction_ReturnToSpawn.AIAction_ReturnToSpawn_C.ExecuteUbergraph_AIAction_ReturnToSpawn
	 */
	struct UAIAction_ReturnToSpawn_C_ExecuteUbergraph_AIAction_ReturnToSpawn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QLGF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
