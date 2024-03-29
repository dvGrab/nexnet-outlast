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
	 * Function SocialMenuCharacter.SocialMenuCharacter_C.GetMainParentSkeletalMesh
	 */
	struct ASocialMenuCharacter_C_GetMainParentSkeletalMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SocialMenuCharacter.SocialMenuCharacter_C.GetWatchComponent
	 */
	struct ASocialMenuCharacter_C_GetWatchComponent_Params
	{
	public:
		class UStaticMeshComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SocialMenuCharacter.SocialMenuCharacter_C.GetPlayerCustomizationInfo
	 */
	struct ASocialMenuCharacter_C_GetPlayerCustomizationInfo_Params
	{
	public:
		struct FRBPlayerCustomizationInfo                          ReturnValue;                                             // 0x0000(0x0038)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SocialMenuCharacter.SocialMenuCharacter_C.GetSkeletalMeshComponentForSlot
	 */
	struct ASocialMenuCharacter_C_GetSkeletalMeshComponentForSlot_Params
	{
	public:
		EPlayerCustomizationSlot                                   Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RSEF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SocialMenuCharacter.SocialMenuCharacter_C.SetBatteryMaterial
	 */
	struct ASocialMenuCharacter_C_SetBatteryMaterial_Params
	{	};

	/**
	 * Function SocialMenuCharacter.SocialMenuCharacter_C.GetFacePose
	 */
	struct ASocialMenuCharacter_C_GetFacePose_Params
	{
	public:
		class UPoseAsset*                                          FacePoseAsset;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SocialMenuCharacter.SocialMenuCharacter_C.TryShow
	 */
	struct ASocialMenuCharacter_C_TryShow_Params
	{	};

	/**
	 * Function SocialMenuCharacter.SocialMenuCharacter_C.RefreshRigs
	 */
	struct ASocialMenuCharacter_C_RefreshRigs_Params
	{	};

	/**
	 * Function SocialMenuCharacter.SocialMenuCharacter_C.SetLightingChannels
	 */
	struct ASocialMenuCharacter_C_SetLightingChannels_Params
	{	};

	/**
	 * Function SocialMenuCharacter.SocialMenuCharacter_C.OverrideActorMaterials
	 */
	struct ASocialMenuCharacter_C_OverrideActorMaterials_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SocialMenuCharacter.SocialMenuCharacter_C.SetupMaterialOverride
	 */
	struct ASocialMenuCharacter_C_SetupMaterialOverride_Params
	{	};

	/**
	 * Function SocialMenuCharacter.SocialMenuCharacter_C.CleanSpawnedRigs
	 */
	struct ASocialMenuCharacter_C_CleanSpawnedRigs_Params
	{	};

	/**
	 * Function SocialMenuCharacter.SocialMenuCharacter_C.CleanExtraMeshes
	 */
	struct ASocialMenuCharacter_C_CleanExtraMeshes_Params
	{	};

	/**
	 * Function SocialMenuCharacter.SocialMenuCharacter_C.RefreshPlayerCusto
	 */
	struct ASocialMenuCharacter_C_RefreshPlayerCusto_Params
	{	};

	/**
	 * Function SocialMenuCharacter.SocialMenuCharacter_C.Show
	 */
	struct ASocialMenuCharacter_C_Show_Params
	{	};

	/**
	 * Function SocialMenuCharacter.SocialMenuCharacter_C.UserConstructionScript
	 */
	struct ASocialMenuCharacter_C_UserConstructionScript_Params
	{	};

	/**
	 * Function SocialMenuCharacter.SocialMenuCharacter_C.SetFocusTimeline__FinishedFunc
	 */
	struct ASocialMenuCharacter_C_SetFocusTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function SocialMenuCharacter.SocialMenuCharacter_C.SetFocusTimeline__UpdateFunc
	 */
	struct ASocialMenuCharacter_C_SetFocusTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function SocialMenuCharacter.SocialMenuCharacter_C.ReceiveEndPlay
	 */
	struct ASocialMenuCharacter_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SocialMenuCharacter.SocialMenuCharacter_C.OnExtraCustomizationMeshesAddedForSlot
	 */
	struct ASocialMenuCharacter_C_OnExtraCustomizationMeshesAddedForSlot_Params
	{
	public:
		TArray<class USkeletalMeshComponent*>                      addedExtraMeshes;                                        // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		EPlayerCustomizationSlot                                   Slot;                                                    // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SocialMenuCharacter.SocialMenuCharacter_C.Event_RefreshPlayerCustomization
	 */
	struct ASocialMenuCharacter_C_Event_RefreshPlayerCustomization_Params
	{	};

	/**
	 * Function SocialMenuCharacter.SocialMenuCharacter_C.Event_RefreshPlayerActiveSkill
	 */
	struct ASocialMenuCharacter_C_Event_RefreshPlayerActiveSkill_Params
	{	};

	/**
	 * Function SocialMenuCharacter.SocialMenuCharacter_C.SetFocusEnabled
	 */
	struct ASocialMenuCharacter_C_SetFocusEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SocialMenuCharacter.SocialMenuCharacter_C.Event_OnSetup
	 */
	struct ASocialMenuCharacter_C_Event_OnSetup_Params
	{	};

	/**
	 * Function SocialMenuCharacter.SocialMenuCharacter_C.Event_OnVisibleChanged
	 */
	struct ASocialMenuCharacter_C_Event_OnVisibleChanged_Params
	{	};

	/**
	 * Function SocialMenuCharacter.SocialMenuCharacter_C.ExecuteUbergraph_SocialMenuCharacter
	 */
	struct ASocialMenuCharacter_C_ExecuteUbergraph_SocialMenuCharacter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
