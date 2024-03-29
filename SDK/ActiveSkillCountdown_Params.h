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
	 * Function ActiveSkillCountdown.ActiveSkillCountdown_C.UpdateCounter
	 */
	struct UActiveSkillCountdown_C_UpdateCounter_Params
	{	};

	/**
	 * Function ActiveSkillCountdown.ActiveSkillCountdown_C.On AS Cooldown State Changed
	 */
	struct UActiveSkillCountdown_C_On_AS_Cooldown_State_Changed_Params
	{
	public:
		bool                                                       isInCooldown;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T1ID[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ARBActiveSkill*                                      NewActiveSkill;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActiveSkillCountdown.ActiveSkillCountdown_C.Tick
	 */
	struct UActiveSkillCountdown_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActiveSkillCountdown.ActiveSkillCountdown_C.ExecuteUbergraph_ActiveSkillCountdown
	 */
	struct UActiveSkillCountdown_C_ExecuteUbergraph_ActiveSkillCountdown_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
