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
	 * Function HealthBoost-Consumable_BP.HealthBoost-Consumable_BP_C.UserConstructionScript
	 */
	struct AHealthBoost_Consumable_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function HealthBoost-Consumable_BP.HealthBoost-Consumable_BP_C.OnConsumeItemNotify
	 */
	struct AHealthBoost_Consumable_BP_C_OnConsumeItemNotify_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HealthBoost-Consumable_BP.HealthBoost-Consumable_BP_C.ExecuteUbergraph_HealthBoost-Consumable_BP
	 */
	struct AHealthBoost_Consumable_BP_C_ExecuteUbergraph_HealthBoost_Consumable_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZD2K[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
