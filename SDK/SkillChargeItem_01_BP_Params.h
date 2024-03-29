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
	 * Function SkillChargeItem-01_BP.SkillChargeItem-01_BP_C.UserConstructionScript
	 */
	struct ASkillChargeItem__BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function SkillChargeItem-01_BP.SkillChargeItem-01_BP_C.OnConsumeItemCancelledNotify
	 */
	struct ASkillChargeItem__BP_C_OnConsumeItemCancelledNotify_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillChargeItem-01_BP.SkillChargeItem-01_BP_C.ExecuteUbergraph_SkillChargeItem-01_BP
	 */
	struct ASkillChargeItem__BP_C_ExecuteUbergraph_SkillChargeItem__BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JB5N[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
