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
	 * Function AIAction_Startle.AIAction_Startle_C.CanStartle
	 */
	struct UAIAction_Startle_C_CanStartle_Params
	{
	public:
		bool                                                       Return_Value;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DEAU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function AIAction_Startle.AIAction_Startle_C.AngleToAnimation
	 */
	struct UAIAction_Startle_C_AngleToAnimation_Params
	{
	public:
		float                                                      InAngle;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bRight;                                                  // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M297[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Return_Value;                                            // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIAction_Startle.AIAction_Startle_C.IsLocationRightOfUs
	 */
	struct UAIAction_Startle_C_IsLocationRightOfUs_Params
	{
	public:
		struct FCoreUObject_FVector                                InLocation;                                              // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Return_Value;                                            // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J77J[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function AIAction_Startle.AIAction_Startle_C.ShouldPerformAction
	 */
	struct UAIAction_Startle_C_ShouldPerformAction_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIAction_Startle.AIAction_Startle_C.BeginAction_Blueprint
	 */
	struct UAIAction_Startle_C_BeginAction_Blueprint_Params
	{	};

	/**
	 * Function AIAction_Startle.AIAction_Startle_C.InitAction_Blueprint
	 */
	struct UAIAction_Startle_C_InitAction_Blueprint_Params
	{
	public:
		class ACyberneticController*                               Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIAction_Startle.AIAction_Startle_C.Tick_Blueprint
	 */
	struct UAIAction_Startle_C_Tick_Blueprint_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIAction_Startle.AIAction_Startle_C.ResetData
	 */
	struct UAIAction_Startle_C_ResetData_Params
	{	};

	/**
	 * Function AIAction_Startle.AIAction_Startle_C.ExecuteUbergraph_AIAction_Startle
	 */
	struct UAIAction_Startle_C_ExecuteUbergraph_AIAction_Startle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MTH7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
