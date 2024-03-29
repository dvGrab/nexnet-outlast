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
	 * Function AIAction_CheckEmptyWeapon.AIAction_CheckEmptyWeapon_C.ShouldPerformAction
	 */
	struct UAIAction_CheckEmptyWeapon_C_ShouldPerformAction_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIAction_CheckEmptyWeapon.AIAction_CheckEmptyWeapon_C.BeginAction_Blueprint
	 */
	struct UAIAction_CheckEmptyWeapon_C_BeginAction_Blueprint_Params
	{	};

	/**
	 * Function AIAction_CheckEmptyWeapon.AIAction_CheckEmptyWeapon_C.Tick_Blueprint
	 */
	struct UAIAction_CheckEmptyWeapon_C_Tick_Blueprint_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIAction_CheckEmptyWeapon.AIAction_CheckEmptyWeapon_C.ExecuteUbergraph_AIAction_CheckEmptyWeapon
	 */
	struct UAIAction_CheckEmptyWeapon_C_ExecuteUbergraph_AIAction_CheckEmptyWeapon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V4QX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
