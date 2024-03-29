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
	 * Function BaseFogger_SkillItem_BP.BaseFogger_SkillItem_BP_C.SpawnAndExplodeBomb_Server
	 */
	struct ABaseFogger_SkillItem_BP_C_SpawnAndExplodeBomb_Server_Params
	{
	public:
		class AActor*                                              BombActor;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseFogger_SkillItem_BP.BaseFogger_SkillItem_BP_C.Activate Light
	 */
	struct ABaseFogger_SkillItem_BP_C_Activate_Light_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       On;                                                      // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseFogger_SkillItem_BP.BaseFogger_SkillItem_BP_C.SpawnAndExplodeBomb_Client
	 */
	struct ABaseFogger_SkillItem_BP_C_SpawnAndExplodeBomb_Client_Params
	{
	public:
		class AActor*                                              BombActor;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseFogger_SkillItem_BP.BaseFogger_SkillItem_BP_C.Event_OnActivate
	 */
	struct ABaseFogger_SkillItem_BP_C_Event_OnActivate_Params
	{	};

	/**
	 * Function BaseFogger_SkillItem_BP.BaseFogger_SkillItem_BP_C.Event_OnExpiredUnactivated
	 */
	struct ABaseFogger_SkillItem_BP_C_Event_OnExpiredUnactivated_Params
	{	};

	/**
	 * Function BaseFogger_SkillItem_BP.BaseFogger_SkillItem_BP_C.Event_OnDeployed
	 */
	struct ABaseFogger_SkillItem_BP_C_Event_OnDeployed_Params
	{	};

	/**
	 * Function BaseFogger_SkillItem_BP.BaseFogger_SkillItem_BP_C.Event_OnPlaced
	 */
	struct ABaseFogger_SkillItem_BP_C_Event_OnPlaced_Params
	{	};

	/**
	 * Function BaseFogger_SkillItem_BP.BaseFogger_SkillItem_BP_C.Event_EffectFinished
	 */
	struct ABaseFogger_SkillItem_BP_C_Event_EffectFinished_Params
	{	};

	/**
	 * Function BaseFogger_SkillItem_BP.BaseFogger_SkillItem_BP_C.DestroySpawnedActors
	 */
	struct ABaseFogger_SkillItem_BP_C_DestroySpawnedActors_Params
	{	};

	/**
	 * Function BaseFogger_SkillItem_BP.BaseFogger_SkillItem_BP_C.ReceiveEndPlay
	 */
	struct ABaseFogger_SkillItem_BP_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseFogger_SkillItem_BP.BaseFogger_SkillItem_BP_C.ExecuteUbergraph_BaseFogger_SkillItem_BP
	 */
	struct ABaseFogger_SkillItem_BP_C_ExecuteUbergraph_BaseFogger_SkillItem_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
