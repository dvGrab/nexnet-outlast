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
	 * Function MansionGuideMannequin-01_BP.MansionGuideMannequin-01_BP_C.OnRep_MovingAnimation
	 */
	struct AMansionGuideMannequin__BP_C_OnRep_MovingAnimation_Params
	{	};

	/**
	 * Function MansionGuideMannequin-01_BP.MansionGuideMannequin-01_BP_C.PlayStationAnimation
	 */
	struct AMansionGuideMannequin__BP_C_PlayStationAnimation_Params
	{
	public:
		bool                                                       bWelcome;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bPointing;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VX3X[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Rotation;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MansionGuideMannequin-01_BP.MansionGuideMannequin-01_BP_C.OnRep_MannequinRotation
	 */
	struct AMansionGuideMannequin__BP_C_OnRep_MannequinRotation_Params
	{	};

	/**
	 * Function MansionGuideMannequin-01_BP.MansionGuideMannequin-01_BP_C.OnRep_PlayPointingAnimation
	 */
	struct AMansionGuideMannequin__BP_C_OnRep_PlayPointingAnimation_Params
	{	};

	/**
	 * Function MansionGuideMannequin-01_BP.MansionGuideMannequin-01_BP_C.OnRep_PlayWelcomeAnimation
	 */
	struct AMansionGuideMannequin__BP_C_OnRep_PlayWelcomeAnimation_Params
	{	};

	/**
	 * Function MansionGuideMannequin-01_BP.MansionGuideMannequin-01_BP_C.SetRotation
	 */
	struct AMansionGuideMannequin__BP_C_SetRotation_Params
	{
	public:
		float                                                      DesiredRotation;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DEX3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MansionGuideMannequin-01_BP.MansionGuideMannequin-01_BP_C.GoNeutral
	 */
	struct AMansionGuideMannequin__BP_C_GoNeutral_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
