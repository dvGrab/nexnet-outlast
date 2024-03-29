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
	 * Function Hidespot_Base_BP.Hidespot_Base_BP_C.GetPingItemName
	 */
	struct AHidespot_Base_BP_C_GetPingItemName_Params
	{
	public:
		class FText                                                outName;                                                 // 0x0000(0x0018)  (Parm, OutParm)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hidespot_Base_BP.Hidespot_Base_BP_C.GetPingEnabled
	 */
	struct AHidespot_Base_BP_C_GetPingEnabled_Params
	{
	public:
		class ARBPlayer*                                           pingOwner;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          HitResult;                                               // 0x0008(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		bool                                                       outIsEnabled;                                            // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0091(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7UGV[0x2];                                   // 0x0092(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Hidespot_Base_BP.Hidespot_Base_BP_C.GetPlayerPingData
	 */
	struct AHidespot_Base_BP_C_GetPlayerPingData_Params
	{
	public:
		class ARBPlayer*                                           pingOwner;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          HitResult;                                               // 0x0008(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		struct FPlayerPingData                                     outData;                                                 // 0x0090(0x0028)  (Parm, OutParm)
		bool                                                       ReturnValue;                                             // 0x00B8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DKF4[0x3];                                   // 0x00B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Hidespot_Base_BP.Hidespot_Base_BP_C.GetPlayerPingWorldLocation
	 */
	struct AHidespot_Base_BP_C_GetPlayerPingWorldLocation_Params
	{
	public:
		class ARBPlayer*                                           pingOwner;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          HitResult;                                               // 0x0008(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		struct FVector                                             OutLocation;                                             // 0x0090(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x009C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hidespot_Base_BP.Hidespot_Base_BP_C.GetStateName
	 */
	struct AHidespot_Base_BP_C_GetStateName_Params
	{
	public:
		class FString                                              stateA;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              stateB;                                                  // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hidespot_Base_BP.Hidespot_Base_BP_C.IsStateA
	 */
	struct AHidespot_Base_BP_C_IsStateA_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hidespot_Base_BP.Hidespot_Base_BP_C.ShouldBeIgnoredForLots
	 */
	struct AHidespot_Base_BP_C_ShouldBeIgnoredForLots_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hidespot_Base_BP.Hidespot_Base_BP_C.FixUp
	 */
	struct AHidespot_Base_BP_C_FixUp_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hidespot_Base_BP.Hidespot_Base_BP_C.RandomizeEnabledMeshes
	 */
	struct AHidespot_Base_BP_C_RandomizeEnabledMeshes_Params
	{
	public:
		class USceneComponent*                                     RandomizationRoot;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    RandomSeedOffset;                                        // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OQK2[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Hidespot_Base_BP.Hidespot_Base_BP_C.UpdateInteractionIgnoreComponents
	 */
	struct AHidespot_Base_BP_C_UpdateInteractionIgnoreComponents_Params
	{
	public:
		class URBHidespotComponent*                                hidespot;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hidespot_Base_BP.Hidespot_Base_BP_C.Editor_RefreshEnabledMeshesVisibility
	 */
	struct AHidespot_Base_BP_C_Editor_RefreshEnabledMeshesVisibility_Params
	{
	public:
		bool                                                       bShowEnabledVisuals;                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GGAZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Hidespot_Base_BP.Hidespot_Base_BP_C.IntitializeClearanceBoxes
	 */
	struct AHidespot_Base_BP_C_IntitializeClearanceBoxes_Params
	{	};

	/**
	 * Function Hidespot_Base_BP.Hidespot_Base_BP_C.DisabledAttachedComponentsFromServer
	 */
	struct AHidespot_Base_BP_C_DisabledAttachedComponentsFromServer_Params
	{
	public:
		class USceneComponent*                                     Parent;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hidespot_Base_BP.Hidespot_Base_BP_C.DisableExtraComponentsFromServer
	 */
	struct AHidespot_Base_BP_C_DisableExtraComponentsFromServer_Params
	{	};

	/**
	 * Function Hidespot_Base_BP.Hidespot_Base_BP_C.SetupMasterPose
	 */
	struct AHidespot_Base_BP_C_SetupMasterPose_Params
	{	};

	/**
	 * Function Hidespot_Base_BP.Hidespot_Base_BP_C.GatherAvailableRandomizationSceneComp
	 */
	struct AHidespot_Base_BP_C_GatherAvailableRandomizationSceneComp_Params
	{
	public:
		class USceneComponent*                                     Root;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class USceneComponent*>                             Availables;                                              // 0x0008(0x0010)  (Parm, OutParm, ContainsInstancedReference)
		TArray<class USceneComponent*>                             Discarded;                                               // 0x0018(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function Hidespot_Base_BP.Hidespot_Base_BP_C.TrySetupRandomizedSkeletalMeshFromRoot
	 */
	struct AHidespot_Base_BP_C_TrySetupRandomizedSkeletalMeshFromRoot_Params
	{
	public:
		class USceneComponent*                                     InComponent;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hidespot_Base_BP.Hidespot_Base_BP_C.TrySetupRandomizedSkeletalMesh
	 */
	struct AHidespot_Base_BP_C_TrySetupRandomizedSkeletalMesh_Params
	{
	public:
		class USceneComponent*                                     InComponent;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hidespot_Base_BP.Hidespot_Base_BP_C.WakeUpDisabledSkeletalMesh
	 */
	struct AHidespot_Base_BP_C_WakeUpDisabledSkeletalMesh_Params
	{
	public:
		class USceneComponent*                                     OverrideDisableRoot;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hidespot_Base_BP.Hidespot_Base_BP_C.Editor_RefreshDisabledMeshesVisibility
	 */
	struct AHidespot_Base_BP_C_Editor_RefreshDisabledMeshesVisibility_Params
	{
	public:
		bool                                                       bShowDisabledVisuals;                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hidespot_Base_BP.Hidespot_Base_BP_C.SetDisabledMeshesState
	 */
	struct AHidespot_Base_BP_C_SetDisabledMeshesState_Params
	{
	public:
		bool                                                       bDisabled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_92HJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USceneComponent*                                     RandomizationRootOverride;                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hidespot_Base_BP.Hidespot_Base_BP_C.RandomizeDisabledMeshes
	 */
	struct AHidespot_Base_BP_C_RandomizeDisabledMeshes_Params
	{
	public:
		class USceneComponent*                                     RandomizationRoot;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    RandomSeedOffset;                                        // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N6PH[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Hidespot_Base_BP.Hidespot_Base_BP_C.TryGenerateRandomSeed
	 */
	struct AHidespot_Base_BP_C_TryGenerateRandomSeed_Params
	{	};

	/**
	 * Function Hidespot_Base_BP.Hidespot_Base_BP_C.UserConstructionScript
	 */
	struct AHidespot_Base_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Hidespot_Base_BP.Hidespot_Base_BP_C.PrepareState
	 */
	struct AHidespot_Base_BP_C_PrepareState_Params
	{
	public:
		bool                                                       bStateA;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R4DL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              randomOwner;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hidespot_Base_BP.Hidespot_Base_BP_C.OnPostActorsPasted
	 */
	struct AHidespot_Base_BP_C_OnPostActorsPasted_Params
	{
	public:
		TArray<class AActor*>                                      pastedActors;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Hidespot_Base_BP.Hidespot_Base_BP_C.PostAddedToLevel
	 */
	struct AHidespot_Base_BP_C_PostAddedToLevel_Params
	{	};

	/**
	 * Function Hidespot_Base_BP.Hidespot_Base_BP_C.PostEditChange
	 */
	struct AHidespot_Base_BP_C_PostEditChange_Params
	{
	public:
		class FName                                                PropertyName;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hidespot_Base_BP.Hidespot_Base_BP_C.PostEditMove
	 */
	struct AHidespot_Base_BP_C_PostEditMove_Params
	{
	public:
		bool                                                       bFinished;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hidespot_Base_BP.Hidespot_Base_BP_C.TickSelected
	 */
	struct AHidespot_Base_BP_C_TickSelected_Params
	{	};

	/**
	 * Function Hidespot_Base_BP.Hidespot_Base_BP_C.PostDuplicated
	 */
	struct AHidespot_Base_BP_C_PostDuplicated_Params
	{
	public:
		class AActor*                                              duplicationParent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hidespot_Base_BP.Hidespot_Base_BP_C.Event_OnResetStage
	 */
	struct AHidespot_Base_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function Hidespot_Base_BP.Hidespot_Base_BP_C.PostToggled
	 */
	struct AHidespot_Base_BP_C_PostToggled_Params
	{
	public:
		bool                                                       bToggleEnabled;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hidespot_Base_BP.Hidespot_Base_BP_C.SetShouldBeIgnoredForLots
	 */
	struct AHidespot_Base_BP_C_SetShouldBeIgnoredForLots_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hidespot_Base_BP.Hidespot_Base_BP_C.SetState
	 */
	struct AHidespot_Base_BP_C_SetState_Params
	{
	public:
		bool                                                       bStateA;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hidespot_Base_BP.Hidespot_Base_BP_C.OnEditorPostLoad
	 */
	struct AHidespot_Base_BP_C_OnEditorPostLoad_Params
	{	};

	/**
	 * Function Hidespot_Base_BP.Hidespot_Base_BP_C.ExecuteUbergraph_Hidespot_Base_BP
	 */
	struct AHidespot_Base_BP_C_ExecuteUbergraph_Hidespot_Base_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
