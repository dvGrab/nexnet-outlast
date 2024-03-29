#pragma once

/**
 * Name: OUTLAST
 * Version: 0.0.2_fixed
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
	 * Function Spectra_Base_ActiveSkill_BP.Spectra_Base_ActiveSkill_BP_C.UserConstructionScript
	 */
	struct ASpectra_Base_ActiveSkill_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Spectra_Base_ActiveSkill_BP.Spectra_Base_ActiveSkill_BP_C.Event_OnVisionActiveChanged
	 */
	struct ASpectra_Base_ActiveSkill_BP_C_Event_OnVisionActiveChanged_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFullEffect;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Spectra_Base_ActiveSkill_BP.Spectra_Base_ActiveSkill_BP_C.ExecuteUbergraph_Spectra_Base_ActiveSkill_BP
	 */
	struct ASpectra_Base_ActiveSkill_BP_C_ExecuteUbergraph_Spectra_Base_ActiveSkill_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
