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
	 * Function MenuCharacter.MenuCharacter_C.GetMainParentSkeletalMesh
	 */
	struct AMenuCharacter_C_GetMainParentSkeletalMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MenuCharacter.MenuCharacter_C.GetWatchComponent
	 */
	struct AMenuCharacter_C_GetWatchComponent_Params
	{
	public:
		class UStaticMeshComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MenuCharacter.MenuCharacter_C.GetPlayerCustomizationInfo
	 */
	struct AMenuCharacter_C_GetPlayerCustomizationInfo_Params
	{
	public:
		struct FRBPlayerCustomizationInfo                          ReturnValue;                                             // 0x0000(0x0038)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function MenuCharacter.MenuCharacter_C.GetSkeletalMeshComponentForSlot
	 */
	struct AMenuCharacter_C_GetSkeletalMeshComponentForSlot_Params
	{
	public:
		EPlayerCustomizationSlot                                   Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L5PQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MenuCharacter.MenuCharacter_C.GetFacePoseAsset
	 */
	struct AMenuCharacter_C_GetFacePoseAsset_Params
	{
	public:
		class UPoseAsset*                                          FacePoseAsset;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MenuCharacter.MenuCharacter_C.ResetPlacementAndAnim
	 */
	struct AMenuCharacter_C_ResetPlacementAndAnim_Params
	{	};

	/**
	 * Function MenuCharacter.MenuCharacter_C.HasCustomizationChanged
	 */
	struct AMenuCharacter_C_HasCustomizationChanged_Params
	{
	public:
		struct FRBPlayerCustomizationInfo                          RBPlayerCustomizationInfo;                               // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       bHasChanged;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CA5P[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MenuCharacter.MenuCharacter_C.SetHairColor
	 */
	struct AMenuCharacter_C_SetHairColor_Params
	{
	public:
		class FName                                                newHairColor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MenuCharacter.MenuCharacter_C.CycleDebugPose
	 */
	struct AMenuCharacter_C_CycleDebugPose_Params
	{	};

	/**
	 * Function MenuCharacter.MenuCharacter_C.SetCharacterHidden
	 */
	struct AMenuCharacter_C_SetCharacterHidden_Params
	{
	public:
		bool                                                       Hidden;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MenuCharacter.MenuCharacter_C.SetDebugMode
	 */
	struct AMenuCharacter_C_SetDebugMode_Params
	{
	public:
		bool                                                       debug;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MenuCharacter.MenuCharacter_C.SetLightsActivation
	 */
	struct AMenuCharacter_C_SetLightsActivation_Params
	{
	public:
		bool                                                       bAffectWorld;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I360[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MenuCharacter.MenuCharacter_C.GetCameras
	 */
	struct AMenuCharacter_C_GetCameras_Params
	{	};

	/**
	 * Function MenuCharacter.MenuCharacter_C.DeactivateViewer
	 */
	struct AMenuCharacter_C_DeactivateViewer_Params
	{	};

	/**
	 * Function MenuCharacter.MenuCharacter_C.ActivateViewer
	 */
	struct AMenuCharacter_C_ActivateViewer_Params
	{
	public:
		class AActor*                                              CustomReturnViewTarget;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MenuCharacter.MenuCharacter_C.SetLightingChannels
	 */
	struct AMenuCharacter_C_SetLightingChannels_Params
	{	};

	/**
	 * Function MenuCharacter.MenuCharacter_C.SetCustomization
	 */
	struct AMenuCharacter_C_SetCustomization_Params
	{
	public:
		struct FRBPlayerCustomizationInfo                          customizationInfo;                                       // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MenuCharacter.MenuCharacter_C.OnCategoryClicked
	 */
	struct AMenuCharacter_C_OnCategoryClicked_Params
	{
	public:
		ECustomizationMenuCategory                                 CustomizationCategory;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MenuCharacter.MenuCharacter_C.OnItemBought
	 */
	struct AMenuCharacter_C_OnItemBought_Params
	{	};

	/**
	 * Function MenuCharacter.MenuCharacter_C.On Item Equipped
	 */
	struct AMenuCharacter_C_On_Item_Equipped_Params
	{	};

	/**
	 * Function MenuCharacter.MenuCharacter_C.ChangeBodyType
	 */
	struct AMenuCharacter_C_ChangeBodyType_Params
	{
	public:
		bool                                                       IsFemale;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R3GL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class URBPlayerCustomizationOption*>                Options;                                                 // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MenuCharacter.MenuCharacter_C.UpdateCustomization
	 */
	struct AMenuCharacter_C_UpdateCustomization_Params
	{
	public:
		class URBPlayerCustomizationOption*                        Option;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MenuCharacter.MenuCharacter_C.CleanSpawnedRigs
	 */
	struct AMenuCharacter_C_CleanSpawnedRigs_Params
	{	};

	/**
	 * Function MenuCharacter.MenuCharacter_C.GetSelectedCustomizationOption
	 */
	struct AMenuCharacter_C_GetSelectedCustomizationOption_Params
	{
	public:
		EPlayerCustomizationSlot                                   Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RKFY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class URBPlayerCustomizationOption*                        SelectedOption;                                          // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MenuCharacter.MenuCharacter_C.UpdateSlotSelection
	 */
	struct AMenuCharacter_C_UpdateSlotSelection_Params
	{
	public:
		class URBPlayerCustomizationOption*                        NewCustomizationOption;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MenuCharacter.MenuCharacter_C.LoadCustomization
	 */
	struct AMenuCharacter_C_LoadCustomization_Params
	{	};

	/**
	 * Function MenuCharacter.MenuCharacter_C.Show
	 */
	struct AMenuCharacter_C_Show_Params
	{	};

	/**
	 * Function MenuCharacter.MenuCharacter_C.DressCharacter
	 */
	struct AMenuCharacter_C_DressCharacter_Params
	{	};

	/**
	 * Function MenuCharacter.MenuCharacter_C.UserConstructionScript
	 */
	struct AMenuCharacter_C_UserConstructionScript_Params
	{	};

	/**
	 * Function MenuCharacter.MenuCharacter_C.AddCharacterRotation
	 */
	struct AMenuCharacter_C_AddCharacterRotation_Params
	{
	public:
		float                                                      Factor;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MenuCharacter.MenuCharacter_C.ReceiveBeginPlay
	 */
	struct AMenuCharacter_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MenuCharacter.MenuCharacter_C.ReceiveEndPlay
	 */
	struct AMenuCharacter_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MenuCharacter.MenuCharacter_C.CustomEvent_1
	 */
	struct AMenuCharacter_C_CustomEvent_1_Params
	{
	public:
		ECustomizationMenuCategory                                 CustomizationMenuCategory;                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MenuCharacter.MenuCharacter_C.BindOnCategoryChanged
	 */
	struct AMenuCharacter_C_BindOnCategoryChanged_Params
	{	};

	/**
	 * Function MenuCharacter.MenuCharacter_C.GoingToMainPosition
	 */
	struct AMenuCharacter_C_GoingToMainPosition_Params
	{	};

	/**
	 * Function MenuCharacter.MenuCharacter_C.StartInteracting
	 */
	struct AMenuCharacter_C_StartInteracting_Params
	{	};

	/**
	 * Function MenuCharacter.MenuCharacter_C.RequestDressCharacter
	 */
	struct AMenuCharacter_C_RequestDressCharacter_Params
	{	};

	/**
	 * Function MenuCharacter.MenuCharacter_C.OnExtraCustomizationMeshesAddedForSlot
	 */
	struct AMenuCharacter_C_OnExtraCustomizationMeshesAddedForSlot_Params
	{
	public:
		TArray<class USkeletalMeshComponent*>                      addedExtraMeshes;                                        // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		EPlayerCustomizationSlot                                   Slot;                                                    // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MenuCharacter.MenuCharacter_C.RequestSpawnRig
	 */
	struct AMenuCharacter_C_RequestSpawnRig_Params
	{
	public:
		EActiveSkillType                                           skillType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MenuCharacter.MenuCharacter_C.OnActiveSkillLoaded
	 */
	struct AMenuCharacter_C_OnActiveSkillLoaded_Params
	{	};

	/**
	 * Function MenuCharacter.MenuCharacter_C.OnPlayerCustoLoaded
	 */
	struct AMenuCharacter_C_OnPlayerCustoLoaded_Params
	{	};

	/**
	 * Function MenuCharacter.MenuCharacter_C.OnCustomizationLoaded
	 */
	struct AMenuCharacter_C_OnCustomizationLoaded_Params
	{
	public:
		class AActor*                                              customizationOwner;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    requestID;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EPawnCustomizationRequestType                              requestType;                                             // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MenuCharacter.MenuCharacter_C.ReachedMainPosition
	 */
	struct AMenuCharacter_C_ReachedMainPosition_Params
	{	};

	/**
	 * Function MenuCharacter.MenuCharacter_C.OnCurrentLoadoutChanged
	 */
	struct AMenuCharacter_C_OnCurrentLoadoutChanged_Params
	{	};

	/**
	 * Function MenuCharacter.MenuCharacter_C.ExecuteUbergraph_MenuCharacter
	 */
	struct AMenuCharacter_C_ExecuteUbergraph_MenuCharacter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MenuCharacter.MenuCharacter_C.OnCustomizationLoadedEvent__DelegateSignature
	 */
	struct AMenuCharacter_C_OnCustomizationLoadedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MenuCharacter.MenuCharacter_C.OncategoryClickedEvent__DelegateSignature
	 */
	struct AMenuCharacter_C_OncategoryClickedEvent__DelegateSignature_Params
	{
	public:
		ECustomizationMenuCategory                                 CustomizationMenuCategory;                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
