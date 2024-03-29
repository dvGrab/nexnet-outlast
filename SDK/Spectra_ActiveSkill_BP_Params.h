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
	 * Function Spectra_ActiveSkill_BP.Spectra_ActiveSkill_BP_C.UserConstructionScript
	 */
	struct ASpectra_ActiveSkill_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Spectra_ActiveSkill_BP.Spectra_ActiveSkill_BP_C.Event_OnVisionActiveChanged
	 */
	struct ASpectra_ActiveSkill_BP_C_Event_OnVisionActiveChanged_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFullEffect;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Spectra_ActiveSkill_BP.Spectra_ActiveSkill_BP_C.Event_OnForceDeactivatedEffectTriggered
	 */
	struct ASpectra_ActiveSkill_BP_C_Event_OnForceDeactivatedEffectTriggered_Params
	{	};

	/**
	 * Function Spectra_ActiveSkill_BP.Spectra_ActiveSkill_BP_C.ExecuteUbergraph_Spectra_ActiveSkill_BP
	 */
	struct ASpectra_ActiveSkill_BP_C_ExecuteUbergraph_Spectra_ActiveSkill_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
