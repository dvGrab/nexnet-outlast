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
	 * Function Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C.IsInteractionPossible
	 */
	struct ABase_HeadEvidence_LargePickup_BP_C_IsInteractionPossible_Params
	{
	public:
		class ARBPawn*                                             interactorPawn;                                          // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C.SetLockingTriggerable
	 */
	struct ABase_HeadEvidence_LargePickup_BP_C_SetLockingTriggerable_Params
	{
	public:
		class ARBTriggerable*                                      triggerable;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C.OnRep_bDissolved
	 */
	struct ABase_HeadEvidence_LargePickup_BP_C_OnRep_bDissolved_Params
	{	};

	/**
	 * Function Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C.SetWaterLevel
	 */
	struct ABase_HeadEvidence_LargePickup_BP_C_SetWaterLevel_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C.Set Dissolve
	 */
	struct ABase_HeadEvidence_LargePickup_BP_C_Set_Dissolve_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C.GetAllActiveHeads
	 */
	struct ABase_HeadEvidence_LargePickup_BP_C_GetAllActiveHeads_Params
	{
	public:
		TArray<class ABase_HeadEvidence_LargePickup_BP_C*>         OutActors;                                               // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C.DressUp (Server)
	 */
	struct ABase_HeadEvidence_LargePickup_BP_C_DressUp_Server_Params
	{	};

	/**
	 * Function Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C.OnRep_MeshIndex
	 */
	struct ABase_HeadEvidence_LargePickup_BP_C_OnRep_MeshIndex_Params
	{	};

	/**
	 * Function Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C.DissolveTL__FinishedFunc
	 */
	struct ABase_HeadEvidence_LargePickup_BP_C_DissolveTL__FinishedFunc_Params
	{	};

	/**
	 * Function Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C.DissolveTL__UpdateFunc
	 */
	struct ABase_HeadEvidence_LargePickup_BP_C_DissolveTL__UpdateFunc_Params
	{	};

	/**
	 * Function Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C.Event_OnResetStage
	 */
	struct ABase_HeadEvidence_LargePickup_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C.OnWorldPopulateFinished
	 */
	struct ABase_HeadEvidence_LargePickup_BP_C_OnWorldPopulateFinished_Params
	{	};

	/**
	 * Function Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C.Dissolve
	 */
	struct ABase_HeadEvidence_LargePickup_BP_C_Dissolve_Params
	{	};

	/**
	 * Function Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C.ReceiveBeginPlay
	 */
	struct ABase_HeadEvidence_LargePickup_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C.OnDissolve
	 */
	struct ABase_HeadEvidence_LargePickup_BP_C_OnDissolve_Params
	{	};

	/**
	 * Function Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C.ExecuteUbergraph_Base_HeadEvidence_LargePickup_BP
	 */
	struct ABase_HeadEvidence_LargePickup_BP_C_ExecuteUbergraph_Base_HeadEvidence_LargePickup_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
