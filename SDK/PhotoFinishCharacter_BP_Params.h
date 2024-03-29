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
	 * Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.GetMainParentSkeletalMesh
	 */
	struct APhotoFinishCharacter_BP_C_GetMainParentSkeletalMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.GetWatchComponent
	 */
	struct APhotoFinishCharacter_BP_C_GetWatchComponent_Params
	{
	public:
		class UStaticMeshComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.GetPlayerCustomizationInfo
	 */
	struct APhotoFinishCharacter_BP_C_GetPlayerCustomizationInfo_Params
	{
	public:
		struct FRBPlayerCustomizationInfo                          ReturnValue;                                             // 0x0000(0x0038)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.GetSkeletalMeshComponentForSlot
	 */
	struct APhotoFinishCharacter_BP_C_GetSkeletalMeshComponentForSlot_Params
	{
	public:
		EPlayerCustomizationSlot                                   Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EPE0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.GetFacePose
	 */
	struct APhotoFinishCharacter_BP_C_GetFacePose_Params
	{
	public:
		class UPoseAsset*                                          GetFacePose;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.SetupTrialSucessSettings
	 */
	struct APhotoFinishCharacter_BP_C_SetupTrialSucessSettings_Params
	{	};

	/**
	 * Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.SetAnimBlueprintSelectionActive
	 */
	struct APhotoFinishCharacter_BP_C_SetAnimBlueprintSelectionActive_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O5GB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.SetCharacterTQ
	 */
	struct APhotoFinishCharacter_BP_C_SetCharacterTQ_Params
	{
	public:
		float                                                      in_TQ;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.TryShow
	 */
	struct APhotoFinishCharacter_BP_C_TryShow_Params
	{	};

	/**
	 * Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.RefreshRigs
	 */
	struct APhotoFinishCharacter_BP_C_RefreshRigs_Params
	{	};

	/**
	 * Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.SetLightingChannels
	 */
	struct APhotoFinishCharacter_BP_C_SetLightingChannels_Params
	{	};

	/**
	 * Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.OverrideActorMaterials
	 */
	struct APhotoFinishCharacter_BP_C_OverrideActorMaterials_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.SetupMaterialOverride
	 */
	struct APhotoFinishCharacter_BP_C_SetupMaterialOverride_Params
	{	};

	/**
	 * Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.CleanSpawnedRigs
	 */
	struct APhotoFinishCharacter_BP_C_CleanSpawnedRigs_Params
	{	};

	/**
	 * Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.CleanExtraMeshes
	 */
	struct APhotoFinishCharacter_BP_C_CleanExtraMeshes_Params
	{	};

	/**
	 * Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.RefreshPlayerCusto
	 */
	struct APhotoFinishCharacter_BP_C_RefreshPlayerCusto_Params
	{	};

	/**
	 * Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.Show
	 */
	struct APhotoFinishCharacter_BP_C_Show_Params
	{	};

	/**
	 * Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.UserConstructionScript
	 */
	struct APhotoFinishCharacter_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.SetFocusTimeline__FinishedFunc
	 */
	struct APhotoFinishCharacter_BP_C_SetFocusTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.SetFocusTimeline__UpdateFunc
	 */
	struct APhotoFinishCharacter_BP_C_SetFocusTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.ReceiveEndPlay
	 */
	struct APhotoFinishCharacter_BP_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.OnExtraCustomizationMeshesAddedForSlot
	 */
	struct APhotoFinishCharacter_BP_C_OnExtraCustomizationMeshesAddedForSlot_Params
	{
	public:
		TArray<class USkeletalMeshComponent*>                      addedExtraMeshes;                                        // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		EPlayerCustomizationSlot                                   Slot;                                                    // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.Event_RefreshPlayerCustomization
	 */
	struct APhotoFinishCharacter_BP_C_Event_RefreshPlayerCustomization_Params
	{	};

	/**
	 * Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.Event_RefreshPlayerActiveSkill
	 */
	struct APhotoFinishCharacter_BP_C_Event_RefreshPlayerActiveSkill_Params
	{	};

	/**
	 * Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.SetFocusEnabled
	 */
	struct APhotoFinishCharacter_BP_C_SetFocusEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.Event_OnSetup
	 */
	struct APhotoFinishCharacter_BP_C_Event_OnSetup_Params
	{	};

	/**
	 * Function PhotoFinishCharacter_BP.PhotoFinishCharacter_BP_C.ExecuteUbergraph_PhotoFinishCharacter_BP
	 */
	struct APhotoFinishCharacter_BP_C_ExecuteUbergraph_PhotoFinishCharacter_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
