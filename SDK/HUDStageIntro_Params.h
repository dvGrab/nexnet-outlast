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
	 * Function HUDStageIntro.HUDStageIntro_C.GetTrialName
	 */
	struct UHUDStageIntro_C_GetTrialName_Params
	{
	public:
		class FText                                                StageName;                                               // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function HUDStageIntro.HUDStageIntro_C.GetStageName
	 */
	struct UHUDStageIntro_C_GetStageName_Params
	{
	public:
		class FText                                                StageName;                                               // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function HUDStageIntro.HUDStageIntro_C.ShowNextVariator
	 */
	struct UHUDStageIntro_C_ShowNextVariator_Params
	{	};

	/**
	 * Function HUDStageIntro.HUDStageIntro_C.InitVariators
	 */
	struct UHUDStageIntro_C_InitVariators_Params
	{	};

	/**
	 * Function HUDStageIntro.HUDStageIntro_C.Finished_5005AE6A43210FC2510BF2B1AF634AB5
	 */
	struct UHUDStageIntro_C_Finished_5005AE6A43210FC2510BF2B1AF634AB5_Params
	{	};

	/**
	 * Function HUDStageIntro.HUDStageIntro_C.Event_Show
	 */
	struct UHUDStageIntro_C_Event_Show_Params
	{	};

	/**
	 * Function HUDStageIntro.HUDStageIntro_C.Tick
	 */
	struct UHUDStageIntro_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUDStageIntro.HUDStageIntro_C.ExecuteUbergraph_HUDStageIntro
	 */
	struct UHUDStageIntro_C_ExecuteUbergraph_HUDStageIntro_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WWTI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
