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
	 * Function AIAction_WorldBuilding.AIAction_WorldBuilding_C.ShouldPerformAction
	 */
	struct UAIAction_WorldBuilding_C_ShouldPerformAction_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIAction_WorldBuilding.AIAction_WorldBuilding_C.BeginAction_Blueprint
	 */
	struct UAIAction_WorldBuilding_C_BeginAction_Blueprint_Params
	{	};

	/**
	 * Function AIAction_WorldBuilding.AIAction_WorldBuilding_C.Tick_Blueprint
	 */
	struct UAIAction_WorldBuilding_C_Tick_Blueprint_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIAction_WorldBuilding.AIAction_WorldBuilding_C.ExecuteUbergraph_AIAction_WorldBuilding
	 */
	struct UAIAction_WorldBuilding_C_ExecuteUbergraph_AIAction_WorldBuilding_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
