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
	 * Function TempHealthGain-Consumable_BP.TempHealthGain-Consumable_BP_C.UserConstructionScript
	 */
	struct ATempHealthGain_Consumable_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TempHealthGain-Consumable_BP.TempHealthGain-Consumable_BP_C.OnConsumeItemNotify
	 */
	struct ATempHealthGain_Consumable_BP_C_OnConsumeItemNotify_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TempHealthGain-Consumable_BP.TempHealthGain-Consumable_BP_C.ExecuteUbergraph_TempHealthGain-Consumable_BP
	 */
	struct ATempHealthGain_Consumable_BP_C_ExecuteUbergraph_TempHealthGain_Consumable_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D8GG[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
