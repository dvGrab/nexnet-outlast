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
	 * Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.UpdateScreensMDD
	 */
	struct ANarrativeScreenBase_BP_C_UpdateScreensMDD_Params
	{
	public:
		float                                                      On;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      JumpRefresh;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Empty;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Emissive;                                                // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.TurnOnLight
	 */
	struct ANarrativeScreenBase_BP_C_TurnOnLight_Params
	{
	public:
		bool                                                       Condition;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_65CA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.SpawnLight
	 */
	struct ANarrativeScreenBase_BP_C_SpawnLight_Params
	{	};

	/**
	 * Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.LinkTextureToChannel
	 */
	struct ANarrativeScreenBase_BP_C_LinkTextureToChannel_Params
	{	};

	/**
	 * Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.UpdateTVOn
	 */
	struct ANarrativeScreenBase_BP_C_UpdateTVOn_Params
	{
	public:
		bool                                                       Force;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J8Q5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.SetScreenMaterial
	 */
	struct ANarrativeScreenBase_BP_C_SetScreenMaterial_Params
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.UserConstructionScript
	 */
	struct ANarrativeScreenBase_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.ScreenRefreshInTL__FinishedFunc
	 */
	struct ANarrativeScreenBase_BP_C_ScreenRefreshInTL__FinishedFunc_Params
	{	};

	/**
	 * Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.ScreenRefreshInTL__UpdateFunc
	 */
	struct ANarrativeScreenBase_BP_C_ScreenRefreshInTL__UpdateFunc_Params
	{	};

	/**
	 * Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.ScreenRefreshInTL__NewTrack_1__EventFunc
	 */
	struct ANarrativeScreenBase_BP_C_ScreenRefreshInTL__NewTrack_1__EventFunc_Params
	{	};

	/**
	 * Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.Timeline_1__FinishedFunc
	 */
	struct ANarrativeScreenBase_BP_C_Timeline_1__FinishedFunc_Params
	{	};

	/**
	 * Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.Timeline_1__UpdateFunc
	 */
	struct ANarrativeScreenBase_BP_C_Timeline_1__UpdateFunc_Params
	{	};

	/**
	 * Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.UpdateTVOnVisuals_Internal
	 */
	struct ANarrativeScreenBase_BP_C_UpdateTVOnVisuals_Internal_Params
	{
	public:
		bool                                                       IsOn;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.Event_OnLinkedStatusChanged
	 */
	struct ANarrativeScreenBase_BP_C_Event_OnLinkedStatusChanged_Params
	{	};

	/**
	 * Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.Event_OnIsOnChanged
	 */
	struct ANarrativeScreenBase_BP_C_Event_OnIsOnChanged_Params
	{	};

	/**
	 * Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.ReceiveBeginPlay
	 */
	struct ANarrativeScreenBase_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.flashRefreshJump
	 */
	struct ANarrativeScreenBase_BP_C_flashRefreshJump_Params
	{	};

	/**
	 * Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.ManualUnmute
	 */
	struct ANarrativeScreenBase_BP_C_ManualUnmute_Params
	{	};

	/**
	 * Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.ManualMute
	 */
	struct ANarrativeScreenBase_BP_C_ManualMute_Params
	{	};

	/**
	 * Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.startDisfunctional
	 */
	struct ANarrativeScreenBase_BP_C_startDisfunctional_Params
	{	};

	/**
	 * Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.stopDisfunctional
	 */
	struct ANarrativeScreenBase_BP_C_stopDisfunctional_Params
	{	};

	/**
	 * Function NarrativeScreenBase_BP.NarrativeScreenBase_BP_C.ExecuteUbergraph_NarrativeScreenBase_BP
	 */
	struct ANarrativeScreenBase_BP_C_ExecuteUbergraph_NarrativeScreenBase_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
