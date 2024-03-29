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
	 * Function AIAction_SurrenderExit.AIAction_SurrenderExit_C.IsFakeExit
	 */
	struct UAIAction_SurrenderExit_C_IsFakeExit_Params
	{
	public:
		ESurrenderExitType                                         ExitType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Return_Value;                                            // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIAction_SurrenderExit.AIAction_SurrenderExit_C.ShouldPerformAction
	 */
	struct UAIAction_SurrenderExit_C_ShouldPerformAction_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIAction_SurrenderExit.AIAction_SurrenderExit_C.BeginAction_Blueprint
	 */
	struct UAIAction_SurrenderExit_C_BeginAction_Blueprint_Params
	{	};

	/**
	 * Function AIAction_SurrenderExit.AIAction_SurrenderExit_C.Tick_Blueprint
	 */
	struct UAIAction_SurrenderExit_C_Tick_Blueprint_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIAction_SurrenderExit.AIAction_SurrenderExit_C.ExecuteUbergraph_AIAction_SurrenderExit
	 */
	struct UAIAction_SurrenderExit_C_ExecuteUbergraph_AIAction_SurrenderExit_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
