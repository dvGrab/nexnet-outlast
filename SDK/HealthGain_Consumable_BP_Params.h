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
	 * Function HealthGain-Consumable_BP.HealthGain-Consumable_BP_C.UserConstructionScript
	 */
	struct AHealthGain_Consumable_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function HealthGain-Consumable_BP.HealthGain-Consumable_BP_C.OnConsumeItemNotify
	 */
	struct AHealthGain_Consumable_BP_C_OnConsumeItemNotify_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HealthGain-Consumable_BP.HealthGain-Consumable_BP_C.ExecuteUbergraph_HealthGain-Consumable_BP
	 */
	struct AHealthGain_Consumable_BP_C_ExecuteUbergraph_HealthGain_Consumable_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V6H2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
