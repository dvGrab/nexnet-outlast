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
	 * Function AIAction_TakeHostage.AIAction_TakeHostage_C.IsCivilianNotFacingTarget
	 */
	struct UAIAction_TakeHostage_C_IsCivilianNotFacingTarget_Params
	{
	public:
		class ACivilianCharacter*                                  Civilian;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AReadyOrNotCharacter*                                Target;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Return_Value;                                            // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIAction_TakeHostage.AIAction_TakeHostage_C.IsCivilianFacingTarget
	 */
	struct UAIAction_TakeHostage_C_IsCivilianFacingTarget_Params
	{
	public:
		class ACivilianCharacter*                                  Civilian;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AReadyOrNotCharacter*                                Target;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Return_Value;                                            // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIAction_TakeHostage.AIAction_TakeHostage_C.AnySWATNearCivilian
	 */
	struct UAIAction_TakeHostage_C_AnySWATNearCivilian_Params
	{
	public:
		class ACivilianCharacter*                                  Civilian;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Return_Value;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UJRH[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function AIAction_TakeHostage.AIAction_TakeHostage_C.OnTakeHostageFinished
	 */
	struct UAIAction_TakeHostage_C_OnTakeHostageFinished_Params
	{
	public:
		class UBaseActivity*                                       Activity;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ACyberneticController*                               Controller;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIAction_TakeHostage.AIAction_TakeHostage_C.TraceForNearbyCivilians
	 */
	struct UAIAction_TakeHostage_C_TraceForNearbyCivilians_Params
	{
	public:
		TArray<class ACivilianCharacter*>                          Return_Value;                                            // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function AIAction_TakeHostage.AIAction_TakeHostage_C.ShouldPerformAction
	 */
	struct UAIAction_TakeHostage_C_ShouldPerformAction_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIAction_TakeHostage.AIAction_TakeHostage_C.FindClosestCivilian
	 */
	struct UAIAction_TakeHostage_C_FindClosestCivilian_Params
	{
	public:
		TArray<class ACivilianCharacter*>                          Civilians;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class ACivilianCharacter*                                  Return_Value;                                            // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIAction_TakeHostage.AIAction_TakeHostage_C.BeginAction_Blueprint
	 */
	struct UAIAction_TakeHostage_C_BeginAction_Blueprint_Params
	{	};

	/**
	 * Function AIAction_TakeHostage.AIAction_TakeHostage_C.Tick_Blueprint
	 */
	struct UAIAction_TakeHostage_C_Tick_Blueprint_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIAction_TakeHostage.AIAction_TakeHostage_C.OnCreate_Blueprint
	 */
	struct UAIAction_TakeHostage_C_OnCreate_Blueprint_Params
	{
	public:
		class ACyberneticController*                               Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIAction_TakeHostage.AIAction_TakeHostage_C.ExecuteUbergraph_AIAction_TakeHostage
	 */
	struct UAIAction_TakeHostage_C_ExecuteUbergraph_AIAction_TakeHostage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8LT7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
