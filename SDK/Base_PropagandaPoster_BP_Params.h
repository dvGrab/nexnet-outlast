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
	 * Function Base_PropagandaPoster_BP.Base_PropagandaPoster_BP_C.FixUp
	 */
	struct ABase_PropagandaPoster_BP_C_FixUp_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Base_PropagandaPoster_BP.Base_PropagandaPoster_BP_C.GetStateName
	 */
	struct ABase_PropagandaPoster_BP_C_GetStateName_Params
	{
	public:
		class FString                                              stateA;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              stateB;                                                  // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Base_PropagandaPoster_BP.Base_PropagandaPoster_BP_C.IsStateA
	 */
	struct ABase_PropagandaPoster_BP_C_IsStateA_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Base_PropagandaPoster_BP.Base_PropagandaPoster_BP_C.ShouldBeIgnoredForLots
	 */
	struct ABase_PropagandaPoster_BP_C_ShouldBeIgnoredForLots_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Base_PropagandaPoster_BP.Base_PropagandaPoster_BP_C.SetRandomMaterial
	 */
	struct ABase_PropagandaPoster_BP_C_SetRandomMaterial_Params
	{	};

	/**
	 * Function Base_PropagandaPoster_BP.Base_PropagandaPoster_BP_C.SnapToState
	 */
	struct ABase_PropagandaPoster_BP_C_SnapToState_Params
	{	};

	/**
	 * Function Base_PropagandaPoster_BP.Base_PropagandaPoster_BP_C.Refresh Visibility
	 */
	struct ABase_PropagandaPoster_BP_C_Refresh_Visibility_Params
	{	};

	/**
	 * Function Base_PropagandaPoster_BP.Base_PropagandaPoster_BP_C.SelectPosterMesh
	 */
	struct ABase_PropagandaPoster_BP_C_SelectPosterMesh_Params
	{	};

	/**
	 * Function Base_PropagandaPoster_BP.Base_PropagandaPoster_BP_C.IsMeshOffsetValid
	 */
	struct ABase_PropagandaPoster_BP_C_IsMeshOffsetValid_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8IKY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Base_PropagandaPoster_BP.Base_PropagandaPoster_BP_C.GetMeshOffsetFromCenter
	 */
	struct ABase_PropagandaPoster_BP_C_GetMeshOffsetFromCenter_Params
	{
	public:
		float                                                      HeightOffset;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Angle;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_PropagandaPoster_BP.Base_PropagandaPoster_BP_C.RandomizePoster
	 */
	struct ABase_PropagandaPoster_BP_C_RandomizePoster_Params
	{	};

	/**
	 * Function Base_PropagandaPoster_BP.Base_PropagandaPoster_BP_C.OnRep_HasInteracted
	 */
	struct ABase_PropagandaPoster_BP_C_OnRep_HasInteracted_Params
	{	};

	/**
	 * Function Base_PropagandaPoster_BP.Base_PropagandaPoster_BP_C.UserConstructionScript
	 */
	struct ABase_PropagandaPoster_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Base_PropagandaPoster_BP.Base_PropagandaPoster_BP_C.OnWorldFullyLoaded
	 */
	struct ABase_PropagandaPoster_BP_C_OnWorldFullyLoaded_Params
	{	};

	/**
	 * Function Base_PropagandaPoster_BP.Base_PropagandaPoster_BP_C.OnEditorPostLoad
	 */
	struct ABase_PropagandaPoster_BP_C_OnEditorPostLoad_Params
	{	};

	/**
	 * Function Base_PropagandaPoster_BP.Base_PropagandaPoster_BP_C.OnPostActorsPasted
	 */
	struct ABase_PropagandaPoster_BP_C_OnPostActorsPasted_Params
	{
	public:
		TArray<class AActor*>                                      pastedActors;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Base_PropagandaPoster_BP.Base_PropagandaPoster_BP_C.PostDuplicated
	 */
	struct ABase_PropagandaPoster_BP_C_PostDuplicated_Params
	{
	public:
		class AActor*                                              duplicationParent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_PropagandaPoster_BP.Base_PropagandaPoster_BP_C.PostEditChange
	 */
	struct ABase_PropagandaPoster_BP_C_PostEditChange_Params
	{
	public:
		class FName                                                PropertyName;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_PropagandaPoster_BP.Base_PropagandaPoster_BP_C.PostEditMove
	 */
	struct ABase_PropagandaPoster_BP_C_PostEditMove_Params
	{
	public:
		bool                                                       bFinished;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Base_PropagandaPoster_BP.Base_PropagandaPoster_BP_C.PrepareState
	 */
	struct ABase_PropagandaPoster_BP_C_PrepareState_Params
	{
	public:
		bool                                                       bStateA;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_56VJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              randomOwner;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_PropagandaPoster_BP.Base_PropagandaPoster_BP_C.ReceiveBeginPlay
	 */
	struct ABase_PropagandaPoster_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Base_PropagandaPoster_BP.Base_PropagandaPoster_BP_C.SetState
	 */
	struct ABase_PropagandaPoster_BP_C_SetState_Params
	{
	public:
		bool                                                       bStateA;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Base_PropagandaPoster_BP.Base_PropagandaPoster_BP_C.SetShouldBeIgnoredForLots
	 */
	struct ABase_PropagandaPoster_BP_C_SetShouldBeIgnoredForLots_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Base_PropagandaPoster_BP.Base_PropagandaPoster_BP_C.Event_OnResetStage
	 */
	struct ABase_PropagandaPoster_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function Base_PropagandaPoster_BP.Base_PropagandaPoster_BP_C.PostAddedToLevel
	 */
	struct ABase_PropagandaPoster_BP_C_PostAddedToLevel_Params
	{	};

	/**
	 * Function Base_PropagandaPoster_BP.Base_PropagandaPoster_BP_C.BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_1_OnInteractionEvent__DelegateSignature
	 */
	struct ABase_PropagandaPoster_BP_C_BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_1_OnInteractionEvent__DelegateSignature_Params
	{
	public:
		class ARBPawn*                                             interactor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class URBInteractibleComponent*                            Component;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_PropagandaPoster_BP.Base_PropagandaPoster_BP_C.TickSelected
	 */
	struct ABase_PropagandaPoster_BP_C_TickSelected_Params
	{	};

	/**
	 * Function Base_PropagandaPoster_BP.Base_PropagandaPoster_BP_C.BndEvt__Base_PropagandaPoster_BP_RBRandomizableHelper_K2Node_ComponentBoundEvent_0_OnRandomStateChangedEvent__DelegateSignature
	 */
	struct ABase_PropagandaPoster_BP_C_BndEvt__Base_PropagandaPoster_BP_RBRandomizableHelper_K2Node_ComponentBoundEvent_0_OnRandomStateChangedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Base_PropagandaPoster_BP.Base_PropagandaPoster_BP_C.OnWorldPopulateFinished
	 */
	struct ABase_PropagandaPoster_BP_C_OnWorldPopulateFinished_Params
	{	};

	/**
	 * Function Base_PropagandaPoster_BP.Base_PropagandaPoster_BP_C.ExecuteUbergraph_Base_PropagandaPoster_BP
	 */
	struct ABase_PropagandaPoster_BP_C_ExecuteUbergraph_Base_PropagandaPoster_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
