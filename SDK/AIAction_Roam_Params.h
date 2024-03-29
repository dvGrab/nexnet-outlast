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
	 * Function AIAction_Roam.AIAction_Roam_C.ResetData
	 */
	struct UAIAction_Roam_C_ResetData_Params
	{	};

	/**
	 * Function AIAction_Roam.AIAction_Roam_C.ShouldPerformAction
	 */
	struct UAIAction_Roam_C_ShouldPerformAction_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIAction_Roam.AIAction_Roam_C.InitAction_Blueprint
	 */
	struct UAIAction_Roam_C_InitAction_Blueprint_Params
	{
	public:
		class ACyberneticController*                               Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIAction_Roam.AIAction_Roam_C.OnMoveComplete_Blueprint
	 */
	struct UAIAction_Roam_C_OnMoveComplete_Blueprint_Params
	{
	public:
		class AAIController*                                       Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    RequestID;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIAction_Roam.AIAction_Roam_C.Tick_Blueprint
	 */
	struct UAIAction_Roam_C_Tick_Blueprint_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIAction_Roam.AIAction_Roam_C.BeginAction_Blueprint
	 */
	struct UAIAction_Roam_C_BeginAction_Blueprint_Params
	{	};

	/**
	 * Function AIAction_Roam.AIAction_Roam_C.EndAction_Blueprint
	 */
	struct UAIAction_Roam_C_EndAction_Blueprint_Params
	{	};

	/**
	 * Function AIAction_Roam.AIAction_Roam_C.ExecuteUbergraph_AIAction_Roam
	 */
	struct UAIAction_Roam_C_ExecuteUbergraph_AIAction_Roam_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HEXO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
