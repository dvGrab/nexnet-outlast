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
	 * Function Stamina-Consumable_BP.Stamina-Consumable_BP_C.Timeline_0__FinishedFunc
	 */
	struct AStamina_Consumable_BP_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function Stamina-Consumable_BP.Stamina-Consumable_BP_C.Timeline_0__UpdateFunc
	 */
	struct AStamina_Consumable_BP_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function Stamina-Consumable_BP.Stamina-Consumable_BP_C.OnConsumeItemNotify
	 */
	struct AStamina_Consumable_BP_C_OnConsumeItemNotify_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Stamina-Consumable_BP.Stamina-Consumable_BP_C.OnConsumeItemCancelledNotify
	 */
	struct AStamina_Consumable_BP_C_OnConsumeItemCancelledNotify_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Stamina-Consumable_BP.Stamina-Consumable_BP_C.ExecuteUbergraph_Stamina-Consumable_BP
	 */
	struct AStamina_Consumable_BP_C_ExecuteUbergraph_Stamina_Consumable_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VFTC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
