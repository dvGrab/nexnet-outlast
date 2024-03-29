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
	 * Function Battery-01_BP.Battery-01_BP_C.PlayBurnedSFX
	 */
	struct ABattery__BP_C_PlayBurnedSFX_Params
	{	};

	/**
	 * Function Battery-01_BP.Battery-01_BP_C.PlayBurnedVFX
	 */
	struct ABattery__BP_C_PlayBurnedVFX_Params
	{	};

	/**
	 * Function Battery-01_BP.Battery-01_BP_C.OnRep_bBurned
	 */
	struct ABattery__BP_C_OnRep_bBurned_Params
	{	};

	/**
	 * Function Battery-01_BP.Battery-01_BP_C.SetBurned
	 */
	struct ABattery__BP_C_SetBurned_Params
	{
	public:
		bool                                                       bNewBurnedState;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Battery-01_BP.Battery-01_BP_C.Timeline_0__FinishedFunc
	 */
	struct ABattery__BP_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function Battery-01_BP.Battery-01_BP_C.Timeline_0__UpdateFunc
	 */
	struct ABattery__BP_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function Battery-01_BP.Battery-01_BP_C.OnConsumeItemCancelledNotify
	 */
	struct ABattery__BP_C_OnConsumeItemCancelledNotify_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Battery-01_BP.Battery-01_BP_C.OnConsumeItemStartNotify
	 */
	struct ABattery__BP_C_OnConsumeItemStartNotify_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Battery-01_BP.Battery-01_BP_C.ExecuteUbergraph_Battery-01_BP
	 */
	struct ABattery__BP_C_ExecuteUbergraph_Battery__BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L64S[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
