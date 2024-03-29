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
	 * Function BlindFogger_SkillItem_BP.BlindFogger_SkillItem_BP_C.SpawnAndExplodeBomb_Server
	 */
	struct ABlindFogger_SkillItem_BP_C_SpawnAndExplodeBomb_Server_Params
	{
	public:
		class AActor*                                              BombActor;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BlindFogger_SkillItem_BP.BlindFogger_SkillItem_BP_C.SpawnAndExplodeBomb_Client
	 */
	struct ABlindFogger_SkillItem_BP_C_SpawnAndExplodeBomb_Client_Params
	{
	public:
		class AActor*                                              BombActor;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BlindFogger_SkillItem_BP.BlindFogger_SkillItem_BP_C.Event_OnDeployed
	 */
	struct ABlindFogger_SkillItem_BP_C_Event_OnDeployed_Params
	{	};

	/**
	 * Function BlindFogger_SkillItem_BP.BlindFogger_SkillItem_BP_C.Event_OnActivate
	 */
	struct ABlindFogger_SkillItem_BP_C_Event_OnActivate_Params
	{	};

	/**
	 * Function BlindFogger_SkillItem_BP.BlindFogger_SkillItem_BP_C.Event_AudioDistractionTriggered
	 */
	struct ABlindFogger_SkillItem_BP_C_Event_AudioDistractionTriggered_Params
	{	};

	/**
	 * Function BlindFogger_SkillItem_BP.BlindFogger_SkillItem_BP_C.On Skill Deactivate FX
	 */
	struct ABlindFogger_SkillItem_BP_C_On_Skill_Deactivate_FX_Params
	{
	public:
		bool                                                       IsInZone;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BlindFogger_SkillItem_BP.BlindFogger_SkillItem_BP_C.ExecuteUbergraph_BlindFogger_SkillItem_BP
	 */
	struct ABlindFogger_SkillItem_BP_C_ExecuteUbergraph_BlindFogger_SkillItem_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TKM4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
