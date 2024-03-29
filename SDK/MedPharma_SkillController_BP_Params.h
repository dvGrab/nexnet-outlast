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
	 * Function MedPharma_SkillController_BP.MedPharma_SkillController_BP_C.UpdateParticleEmitter
	 */
	struct AMedPharma_SkillController_BP_C_UpdateParticleEmitter_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MedPharma_SkillController_BP.MedPharma_SkillController_BP_C.Event_OnItemHeldInHandChanged
	 */
	struct AMedPharma_SkillController_BP_C_Event_OnItemHeldInHandChanged_Params
	{
	public:
		bool                                                       bHeldInHand;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MedPharma_SkillController_BP.MedPharma_SkillController_BP_C.On Skill Deactivate FX
	 */
	struct AMedPharma_SkillController_BP_C_On_Skill_Deactivate_FX_Params
	{
	public:
		bool                                                       IsInZone;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MedPharma_SkillController_BP.MedPharma_SkillController_BP_C.ExecuteUbergraph_MedPharma_SkillController_BP
	 */
	struct AMedPharma_SkillController_BP_C_ExecuteUbergraph_MedPharma_SkillController_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
