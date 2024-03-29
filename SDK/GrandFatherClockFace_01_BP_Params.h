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
	 * Function GrandFatherClockFace-01_BP.GrandFatherClockFace-01_BP_C.Set Time
	 */
	struct AGrandFatherClockFace__BP_C_Set_Time_Params
	{
	public:
		bool                                                       IgnoreServerTime;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RWJK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GrandFatherClockFace-01_BP.GrandFatherClockFace-01_BP_C.IncrementTime
	 */
	struct AGrandFatherClockFace__BP_C_IncrementTime_Params
	{	};

	/**
	 * Function GrandFatherClockFace-01_BP.GrandFatherClockFace-01_BP_C.UpdateRotations
	 */
	struct AGrandFatherClockFace__BP_C_UpdateRotations_Params
	{	};

	/**
	 * Function GrandFatherClockFace-01_BP.GrandFatherClockFace-01_BP_C.UserConstructionScript
	 */
	struct AGrandFatherClockFace__BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function GrandFatherClockFace-01_BP.GrandFatherClockFace-01_BP_C.ReceiveTick
	 */
	struct AGrandFatherClockFace__BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GrandFatherClockFace-01_BP.GrandFatherClockFace-01_BP_C.ReceiveBeginPlay
	 */
	struct AGrandFatherClockFace__BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function GrandFatherClockFace-01_BP.GrandFatherClockFace-01_BP_C.StartClock
	 */
	struct AGrandFatherClockFace__BP_C_StartClock_Params
	{
	public:
		bool                                                       IgnoreServerTime;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GrandFatherClockFace-01_BP.GrandFatherClockFace-01_BP_C.StopClock
	 */
	struct AGrandFatherClockFace__BP_C_StopClock_Params
	{	};

	/**
	 * Function GrandFatherClockFace-01_BP.GrandFatherClockFace-01_BP_C.ExecuteUbergraph_GrandFatherClockFace-01_BP
	 */
	struct AGrandFatherClockFace__BP_C_ExecuteUbergraph_GrandFatherClockFace__BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
