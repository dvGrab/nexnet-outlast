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
	 * Function MaxStaminaBoost_BP.MaxStaminaBoost_BP_C.ConsumeTimeline__FinishedFunc
	 */
	struct AMaxStaminaBoost_BP_C_ConsumeTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function MaxStaminaBoost_BP.MaxStaminaBoost_BP_C.ConsumeTimeline__UpdateFunc
	 */
	struct AMaxStaminaBoost_BP_C_ConsumeTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function MaxStaminaBoost_BP.MaxStaminaBoost_BP_C.OnConsumeItemNotify
	 */
	struct AMaxStaminaBoost_BP_C_OnConsumeItemNotify_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MaxStaminaBoost_BP.MaxStaminaBoost_BP_C.OnConsumeItemCancelledNotify
	 */
	struct AMaxStaminaBoost_BP_C_OnConsumeItemCancelledNotify_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MaxStaminaBoost_BP.MaxStaminaBoost_BP_C.ExecuteUbergraph_MaxStaminaBoost_BP
	 */
	struct AMaxStaminaBoost_BP_C_ExecuteUbergraph_MaxStaminaBoost_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1V9V[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
