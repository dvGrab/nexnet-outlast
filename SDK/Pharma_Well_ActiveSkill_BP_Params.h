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
	 * Function Pharma_Well_ActiveSkill_BP.Pharma_Well_ActiveSkill_BP_C.UserConstructionScript
	 */
	struct APharma_Well_ActiveSkill_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Pharma_Well_ActiveSkill_BP.Pharma_Well_ActiveSkill_BP_C.MeshFadeIn__FinishedFunc
	 */
	struct APharma_Well_ActiveSkill_BP_C_MeshFadeIn__FinishedFunc_Params
	{	};

	/**
	 * Function Pharma_Well_ActiveSkill_BP.Pharma_Well_ActiveSkill_BP_C.MeshFadeIn__UpdateFunc
	 */
	struct APharma_Well_ActiveSkill_BP_C_MeshFadeIn__UpdateFunc_Params
	{	};

	/**
	 * Function Pharma_Well_ActiveSkill_BP.Pharma_Well_ActiveSkill_BP_C.FadeOut__FinishedFunc
	 */
	struct APharma_Well_ActiveSkill_BP_C_FadeOut__FinishedFunc_Params
	{	};

	/**
	 * Function Pharma_Well_ActiveSkill_BP.Pharma_Well_ActiveSkill_BP_C.FadeOut__UpdateFunc
	 */
	struct APharma_Well_ActiveSkill_BP_C_FadeOut__UpdateFunc_Params
	{	};

	/**
	 * Function Pharma_Well_ActiveSkill_BP.Pharma_Well_ActiveSkill_BP_C.ReceiveTick
	 */
	struct APharma_Well_ActiveSkill_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Pharma_Well_ActiveSkill_BP.Pharma_Well_ActiveSkill_BP_C.Event_OnIsActiveChanged
	 */
	struct APharma_Well_ActiveSkill_BP_C_Event_OnIsActiveChanged_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Pharma_Well_ActiveSkill_BP.Pharma_Well_ActiveSkill_BP_C.GroundTrace
	 */
	struct APharma_Well_ActiveSkill_BP_C_GroundTrace_Params
	{	};

	/**
	 * Function Pharma_Well_ActiveSkill_BP.Pharma_Well_ActiveSkill_BP_C.Event_OnPlayerInitReplicated
	 */
	struct APharma_Well_ActiveSkill_BP_C_Event_OnPlayerInitReplicated_Params
	{
	public:
		class ARBPlayer*                                           Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Pharma_Well_ActiveSkill_BP.Pharma_Well_ActiveSkill_BP_C.Event_OnActiveOnPawn
	 */
	struct APharma_Well_ActiveSkill_BP_C_Event_OnActiveOnPawn_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bActive;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Pharma_Well_ActiveSkill_BP.Pharma_Well_ActiveSkill_BP_C.AttatchToFoot
	 */
	struct APharma_Well_ActiveSkill_BP_C_AttatchToFoot_Params
	{	};

	/**
	 * Function Pharma_Well_ActiveSkill_BP.Pharma_Well_ActiveSkill_BP_C.Event_OnActiveLoudStart
	 */
	struct APharma_Well_ActiveSkill_BP_C_Event_OnActiveLoudStart_Params
	{	};

	/**
	 * Function Pharma_Well_ActiveSkill_BP.Pharma_Well_ActiveSkill_BP_C.Event_OnActiveLoudStop
	 */
	struct APharma_Well_ActiveSkill_BP_C_Event_OnActiveLoudStop_Params
	{	};

	/**
	 * Function Pharma_Well_ActiveSkill_BP.Pharma_Well_ActiveSkill_BP_C.Event_OnActiveQuietStart
	 */
	struct APharma_Well_ActiveSkill_BP_C_Event_OnActiveQuietStart_Params
	{	};

	/**
	 * Function Pharma_Well_ActiveSkill_BP.Pharma_Well_ActiveSkill_BP_C.Event_OnActiveQuietStop
	 */
	struct APharma_Well_ActiveSkill_BP_C_Event_OnActiveQuietStop_Params
	{	};

	/**
	 * Function Pharma_Well_ActiveSkill_BP.Pharma_Well_ActiveSkill_BP_C.Event_OnForceDeactivatedEffectTriggered
	 */
	struct APharma_Well_ActiveSkill_BP_C_Event_OnForceDeactivatedEffectTriggered_Params
	{	};

	/**
	 * Function Pharma_Well_ActiveSkill_BP.Pharma_Well_ActiveSkill_BP_C.ExecuteUbergraph_Pharma_Well_ActiveSkill_BP
	 */
	struct APharma_Well_ActiveSkill_BP_C_ExecuteUbergraph_Pharma_Well_ActiveSkill_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
