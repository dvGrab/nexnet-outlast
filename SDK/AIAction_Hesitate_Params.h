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
	 * Function AIAction_Hesitate.AIAction_Hesitate_C.ShouldPerformAction
	 */
	struct UAIAction_Hesitate_C_ShouldPerformAction_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIAction_Hesitate.AIAction_Hesitate_C.EndAction_Blueprint
	 */
	struct UAIAction_Hesitate_C_EndAction_Blueprint_Params
	{	};

	/**
	 * Function AIAction_Hesitate.AIAction_Hesitate_C.Tick_Blueprint
	 */
	struct UAIAction_Hesitate_C_Tick_Blueprint_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIAction_Hesitate.AIAction_Hesitate_C.InitAction_Blueprint
	 */
	struct UAIAction_Hesitate_C_InitAction_Blueprint_Params
	{
	public:
		class ACyberneticController*                               Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIAction_Hesitate.AIAction_Hesitate_C.BeginAction_Blueprint
	 */
	struct UAIAction_Hesitate_C_BeginAction_Blueprint_Params
	{	};

	/**
	 * Function AIAction_Hesitate.AIAction_Hesitate_C.ExecuteUbergraph_AIAction_Hesitate
	 */
	struct UAIAction_Hesitate_C_ExecuteUbergraph_AIAction_Hesitate_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G7UN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
