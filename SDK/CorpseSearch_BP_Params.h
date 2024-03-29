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
	 * Function CorpseSearch_BP.CorpseSearch_BP_C.GetObjectiveTypeIndex
	 */
	struct ACorpseSearch_BP_C_GetObjectiveTypeIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0JYV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CorpseSearch_BP.CorpseSearch_BP_C.GetAssociatedInvestigationComponent
	 */
	struct ACorpseSearch_BP_C_GetAssociatedInvestigationComponent_Params
	{
	public:
		class URBPlayerInvestigationZoneComponent*                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CorpseSearch_BP.CorpseSearch_BP_C.GetClue
	 */
	struct ACorpseSearch_BP_C_GetClue_Params
	{
	public:
		struct FClueData                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor)
	};

	/**
	 * Function CorpseSearch_BP.CorpseSearch_BP_C.GetSpecificObjectiveActorTarget
	 */
	struct ACorpseSearch_BP_C_GetSpecificObjectiveActorTarget_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CorpseSearch_BP.CorpseSearch_BP_C.GetStateName
	 */
	struct ACorpseSearch_BP_C_GetStateName_Params
	{
	public:
		class FString                                              stateA;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              stateB;                                                  // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CorpseSearch_BP.CorpseSearch_BP_C.IsStateA
	 */
	struct ACorpseSearch_BP_C_IsStateA_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CorpseSearch_BP.CorpseSearch_BP_C.ShouldBeIgnoredForLots
	 */
	struct ACorpseSearch_BP_C_ShouldBeIgnoredForLots_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CorpseSearch_BP.CorpseSearch_BP_C.ApplyClue
	 */
	struct ACorpseSearch_BP_C_ApplyClue_Params
	{
	public:
		int32_t                                                    ClueSpotIndex;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                clueName;                                                // 0x0004(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JZVY[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CorpseSearch_BP.CorpseSearch_BP_C.Set Clues
	 */
	struct ACorpseSearch_BP_C_SetClues_Params
	{
	public:
		class UMaterialInstanceDynamic*                            DynMaterial;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture*                                            Texture;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ClueRotation;                                            // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           CluePosition;                                            // 0x0014(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           ClueScale;                                               // 0x001C(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CorpseSearch_BP.CorpseSearch_BP_C.CreateDynamicMat
	 */
	struct ACorpseSearch_BP_C_CreateDynamicMat_Params
	{
	public:
		class UMeshComponent*                                      Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMaterialInstanceDynamic*                            DynamicMat;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CorpseSearch_BP.CorpseSearch_BP_C.OnRep_Clue
	 */
	struct ACorpseSearch_BP_C_OnRep_Clue_Params
	{	};

	/**
	 * Function CorpseSearch_BP.CorpseSearch_BP_C.GetSpawnedItem
	 */
	struct ACorpseSearch_BP_C_GetSpawnedItem_Params
	{
	public:
		class ARBPickup*                                           Item;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CorpseSearch_BP.CorpseSearch_BP_C.SetTickEnabled
	 */
	struct ACorpseSearch_BP_C_SetTickEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CorpseSearch_BP.CorpseSearch_BP_C.UserConstructionScript
	 */
	struct ACorpseSearch_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function CorpseSearch_BP.CorpseSearch_BP_C.SetState
	 */
	struct ACorpseSearch_BP_C_SetState_Params
	{
	public:
		bool                                                       bStateA;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CorpseSearch_BP.CorpseSearch_BP_C.SetShouldBeIgnoredForLots
	 */
	struct ACorpseSearch_BP_C_SetShouldBeIgnoredForLots_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CorpseSearch_BP.CorpseSearch_BP_C.Set Server Interactor Ready
	 */
	struct ACorpseSearch_BP_C_SetServerInteractorReady_Params
	{	};

	/**
	 * Function CorpseSearch_BP.CorpseSearch_BP_C.OnSpawnedItemInfosChanged
	 */
	struct ACorpseSearch_BP_C_OnSpawnedItemInfosChanged_Params
	{	};

	/**
	 * Function CorpseSearch_BP.CorpseSearch_BP_C.BndEvt__CorpseSearch_BP_CorpseSearch_PanelComponent_BP_K2Node_ComponentBoundEvent_3_OnPanelEvent__DelegateSignature
	 */
	struct ACorpseSearch_BP_C_BndEvt__CorpseSearch_BP_CorpseSearch_PanelComponent_BP_K2Node_ComponentBoundEvent_3_OnPanelEvent__DelegateSignature_Params
	{
	public:
		class URBInteractiblePanelComponent*                       panel;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             pawnInteracting;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CorpseSearch_BP.CorpseSearch_BP_C.OnObjectFound
	 */
	struct ACorpseSearch_BP_C_OnObjectFound_Params
	{	};

	/**
	 * Function CorpseSearch_BP.CorpseSearch_BP_C.SetClue
	 */
	struct ACorpseSearch_BP_C_SetClue_Params
	{
	public:
		struct FClueData                                           ClueData;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function CorpseSearch_BP.CorpseSearch_BP_C.BndEvt__CorpseSearch_BP_CorpseSearch_PanelComponent_BP_K2Node_ComponentBoundEvent_1_OnEnabledChanged__DelegateSignature
	 */
	struct ACorpseSearch_BP_C_BndEvt__CorpseSearch_BP_CorpseSearch_PanelComponent_BP_K2Node_ComponentBoundEvent_1_OnEnabledChanged__DelegateSignature_Params
	{
	public:
		class URBInteractionZoneComponent*                         Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CorpseSearch_BP.CorpseSearch_BP_C.BndEvt__CorpseSearch_BP_CorpseSearch_PanelComponent_BP_K2Node_ComponentBoundEvent_0_OnPanelEvent__DelegateSignature
	 */
	struct ACorpseSearch_BP_C_BndEvt__CorpseSearch_BP_CorpseSearch_PanelComponent_BP_K2Node_ComponentBoundEvent_0_OnPanelEvent__DelegateSignature_Params
	{
	public:
		class URBInteractiblePanelComponent*                       panel;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             pawnInteracting;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CorpseSearch_BP.CorpseSearch_BP_C.ExecuteUbergraph_CorpseSearch_BP
	 */
	struct ACorpseSearch_BP_C_ExecuteUbergraph_CorpseSearch_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CorpseSearch_BP.CorpseSearch_BP_C.ResetAnimation__DelegateSignature
	 */
	struct ACorpseSearch_BP_C_ResetAnimation__DelegateSignature_Params
	{	};

	/**
	 * Function CorpseSearch_BP.CorpseSearch_BP_C.StartAnimation__DelegateSignature
	 */
	struct ACorpseSearch_BP_C_StartAnimation__DelegateSignature_Params
	{	};

	/**
	 * Function CorpseSearch_BP.CorpseSearch_BP_C.StopAnimation__DelegateSignature
	 */
	struct ACorpseSearch_BP_C_StopAnimation__DelegateSignature_Params
	{
	public:
		bool                                                       IsSuccess;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
