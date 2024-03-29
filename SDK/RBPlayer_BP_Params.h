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
	 * Function RBPlayer_BP.RBPlayer_BP_C.GetMainParentSkeletalMesh
	 */
	struct ARBPlayer_BP_C_GetMainParentSkeletalMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.GetWatchComponent
	 */
	struct ARBPlayer_BP_C_GetWatchComponent_Params
	{
	public:
		class UStaticMeshComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.GetPlayerCustomizationInfo
	 */
	struct ARBPlayer_BP_C_GetPlayerCustomizationInfo_Params
	{
	public:
		struct FRBPlayerCustomizationInfo                          ReturnValue;                                             // 0x0000(0x0038)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.GetSkeletalMeshComponentForSlot
	 */
	struct ARBPlayer_BP_C_GetSkeletalMeshComponentForSlot_Params
	{
	public:
		EPlayerCustomizationSlot                                   Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UPNJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.GetAllShadowMeshes
	 */
	struct ARBPlayer_BP_C_GetAllShadowMeshes_Params
	{
	public:
		TArray<class UPrimitiveComponent*>                         ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, ContainsInstancedReference)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.GetMainShadowMesh
	 */
	struct ARBPlayer_BP_C_GetMainShadowMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.DebugShadowMesh
	 */
	struct ARBPlayer_BP_C_DebugShadowMesh_Params
	{	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.UpdateUnderwaterFX
	 */
	struct ARBPlayer_BP_C_UpdateUnderwaterFX_Params
	{	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.CopyMaterialsToShadowMesh
	 */
	struct ARBPlayer_BP_C_CopyMaterialsToShadowMesh_Params
	{
	public:
		class UMeshComponent*                                      PlayerMesh;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMeshComponent*                                      ShadowMesh;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.UpdateShadowActiveSkill
	 */
	struct ARBPlayer_BP_C_UpdateShadowActiveSkill_Params
	{	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.UpdateESOPVisibility
	 */
	struct ARBPlayer_BP_C_UpdateESOPVisibility_Params
	{	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.UpdateVisualDamage
	 */
	struct ARBPlayer_BP_C_UpdateVisualDamage_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.UpdateBloodSmearInDownedState
	 */
	struct ARBPlayer_BP_C_UpdateBloodSmearInDownedState_Params
	{	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.GetNextShuffledMaterial
	 */
	struct ARBPlayer_BP_C_GetNextShuffledMaterial_Params
	{
	public:
		class UMaterialInstanceConstant*                           NewParam;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.ApplyBloodDecal
	 */
	struct ARBPlayer_BP_C_ApplyBloodDecal_Params
	{
	public:
		class UMaterialInstanceConstant*                           MatDecal;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Scale;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Rotate;                                                  // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CW7Y[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.ApplyDamageVFX
	 */
	struct ARBPlayer_BP_C_ApplyDamageVFX_Params
	{
	public:
		EDamageType                                                InfoType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ENPCWeapon                                                 NPCWeapon;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PYNF[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      DmdAmount;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             DmgLocation;                                             // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             DmgDirection;                                            // 0x0014(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              SourceActor;                                             // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bBloodParticles;                                         // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GGS2[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.GetRelevantForDamageExtraMeshes
	 */
	struct ARBPlayer_BP_C_GetRelevantForDamageExtraMeshes_Params
	{
	public:
		TArray<class USkeletalMeshComponent*>                      SkeletalMeshes_;                                         // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.TryPlayFacialAnim
	 */
	struct ARBPlayer_BP_C_TryPlayFacialAnim_Params
	{
	public:
		class FString                                              lineId;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.ApplyBloodOnRightHand
	 */
	struct ARBPlayer_BP_C_ApplyBloodOnRightHand_Params
	{	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.UpdateBloodHand
	 */
	struct ARBPlayer_BP_C_UpdateBloodHand_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.GetFaceFXSkeletalMeshComponent
	 */
	struct ARBPlayer_BP_C_GetFaceFXSkeletalMeshComponent_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.GetFacePoseAsset
	 */
	struct ARBPlayer_BP_C_GetFacePoseAsset_Params
	{
	public:
		class UPoseAsset*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.UpdateShadowPickup
	 */
	struct ARBPlayer_BP_C_UpdateShadowPickup_Params
	{
	public:
		class ARBPickup*                                           Old;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPickup*                                           New;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.UpdateBloodDrippingParticle
	 */
	struct ARBPlayer_BP_C_UpdateBloodDrippingParticle_Params
	{	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.DebugVisualDamage
	 */
	struct ARBPlayer_BP_C_DebugVisualDamage_Params
	{	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.ReduceVisualDamage
	 */
	struct ARBPlayer_BP_C_ReduceVisualDamage_Params
	{
	public:
		bool                                                       Increased;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V24W[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      newHealth;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.ApplyVisualDamageToSkelMeshes
	 */
	struct ARBPlayer_BP_C_ApplyVisualDamageToSkelMeshes_Params
	{	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.RefreshHeadCapVisibility
	 */
	struct ARBPlayer_BP_C_RefreshHeadCapVisibility_Params
	{	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.UpdateHeadCapMesh
	 */
	struct ARBPlayer_BP_C_UpdateHeadCapMesh_Params
	{	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.Should Hide Customization Slot in 1P
	 */
	struct ARBPlayer_BP_C_Should_Hide_Customization_Slot_in_P_Params
	{
	public:
		EPlayerCustomizationSlot                                   Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ShouldHide;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.ClearExtraCustomizationMeshes
	 */
	struct ARBPlayer_BP_C_ClearExtraCustomizationMeshes_Params
	{	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.CreateShadowmeshCopyOfStaticMesh
	 */
	struct ARBPlayer_BP_C_CreateShadowmeshCopyOfStaticMesh_Params
	{
	public:
		class UStaticMeshComponent*                                InVisualMesh;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USkeletalMeshComponent*                              Parent;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStaticMeshComponent*                                OutNewComponent;                                         // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.CreateSkeletalMeshForShadow
	 */
	struct ARBPlayer_BP_C_CreateSkeletalMeshForShadow_Params
	{
	public:
		class USkeletalMeshComponent*                              InVisibleMesh;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     InParent;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bKeepRelativeTransform;                                  // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_58XL[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USkeletalMeshComponent*                              Out;                                                     // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.Remove Shadow Meshes
	 */
	struct ARBPlayer_BP_C_Remove_Shadow_Meshes_Params
	{	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.CreateShadowmeshCopyOfSkeletalMesh
	 */
	struct ARBPlayer_BP_C_CreateShadowmeshCopyOfSkeletalMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              InVisibleMesh;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     InParent;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              InAnimInstance;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USkeletalMeshComponent*                              OutShadowMeshComponent;                                  // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.Update Shadow Mesh
	 */
	struct ARBPlayer_BP_C_Update_Shadow_Mesh_Params
	{
	public:
		bool                                                       ForceClean;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.UpdateESOPBatteryType
	 */
	struct ARBPlayer_BP_C_UpdateESOPBatteryType_Params
	{	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.ResetDamageMaterials
	 */
	struct ARBPlayer_BP_C_ResetDamageMaterials_Params
	{	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.ApplyVisualDamageToCharacter
	 */
	struct ARBPlayer_BP_C_ApplyVisualDamageToCharacter_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      damageAmount;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              SrcActor;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.CustomizeCharacterModel
	 */
	struct ARBPlayer_BP_C_CustomizeCharacterModel_Params
	{
	public:
		class URBCustomizationOutfit*                              OutfitOverride;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.Event_PlayHitReactionEffects
	 */
	struct ARBPlayer_BP_C_Event_PlayHitReactionEffects_Params
	{
	public:
		struct FPlayerHitReactionParams                            hitReaction;                                             // 0x0000(0x0048)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		struct FVector                                             attackLoc;                                               // 0x0048(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      hitRelativeAngle;                                        // 0x0054(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.SetInitialPlayerSettings
	 */
	struct ARBPlayer_BP_C_SetInitialPlayerSettings_Params
	{	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.UserConstructionScript
	 */
	struct ARBPlayer_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.OnLoaded_E32B3EA245CB7B65286791842D20B97F
	 */
	struct ARBPlayer_BP_C_OnLoaded_E32B3EA245CB7B65286791842D20B97F_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.Event_OnPlayerPerspectiveChanged
	 */
	struct ARBPlayer_BP_C_Event_OnPlayerPerspectiveChanged_Params
	{	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.Event_OnDie
	 */
	struct ARBPlayer_BP_C_Event_OnDie_Params
	{	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.Event_OnTakeDamage
	 */
	struct ARBPlayer_BP_C_Event_OnTakeDamage_Params
	{
	public:
		struct FDamageInfo                                         Info;                                                    // 0x0000(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.BndEvt__NVComponent_K2Node_ComponentBoundEvent_0_OnNVStateChanged__DelegateSignature
	 */
	struct ARBPlayer_BP_C_BndEvt__NVComponent_K2Node_ComponentBoundEvent_0_OnNVStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bOn;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.Event_OnCustomizationChanged
	 */
	struct ARBPlayer_BP_C_Event_OnCustomizationChanged_Params
	{	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.Event_StartSpectatingLocally
	 */
	struct ARBPlayer_BP_C_Event_StartSpectatingLocally_Params
	{	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.Event_StopSpectatingLocally
	 */
	struct ARBPlayer_BP_C_Event_StopSpectatingLocally_Params
	{	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.ReceiveEndPlay
	 */
	struct ARBPlayer_BP_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.SetRemoteCameraIntercomInteractibilitty
	 */
	struct ARBPlayer_BP_C_SetRemoteCameraIntercomInteractibilitty_Params
	{
	public:
		class ARemoteCameraIntercom__BP_C*                         RemoteCameraIntercom;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInteractibleValue;                                      // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.Server_SetCameraIntercomActive
	 */
	struct ARBPlayer_BP_C_Server_SetCameraIntercomActive_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GABR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ACameraIntercom__BP_C*                               CameraIntercom;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.Server_SetCameraIntercomPitchYaw
	 */
	struct ARBPlayer_BP_C_Server_SetCameraIntercomPitchYaw_Params
	{
	public:
		float                                                      Pitch;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Yaw;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ACameraIntercom__BP_C*                               CameraIntercom;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsTalking;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.Multicast_SetCameraIntercomPitchYaw
	 */
	struct ARBPlayer_BP_C_Multicast_SetCameraIntercomPitchYaw_Params
	{
	public:
		float                                                      Pitch;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Yaw;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ACameraIntercom__BP_C*                               CameraIntercom;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsTalking;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.Multicast_SetCameraIntercomActive
	 */
	struct ARBPlayer_BP_C_Multicast_SetCameraIntercomActive_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_04W7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ACameraIntercom__BP_C*                               CameraIntercom;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.Multicast_CameraIntercomInteractibility
	 */
	struct ARBPlayer_BP_C_Multicast_CameraIntercomInteractibility_Params
	{
	public:
		class ARemoteCameraIntercom__BP_C*                         RemoteCameraIntercom;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInteractibleValue;                                      // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.Event_InitReplicated
	 */
	struct ARBPlayer_BP_C_Event_InitReplicated_Params
	{	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.PlaySoundOnPlayer
	 */
	struct ARBPlayer_BP_C_PlaySoundOnPlayer_Params
	{
	public:
		class UAkAudioEvent*                                       akEvent;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.ReceiveBeginPlay
	 */
	struct ARBPlayer_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.BP_OnTrapRoomFailed
	 */
	struct ARBPlayer_BP_C_BP_OnTrapRoomFailed_Params
	{	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.Event_OnLastConsumedBatteryTypeChanged
	 */
	struct ARBPlayer_BP_C_Event_OnLastConsumedBatteryTypeChanged_Params
	{
	public:
		EItemType                                                  batteryType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.Event_OnFootstep
	 */
	struct ARBPlayer_BP_C_Event_OnFootstep_Params
	{
	public:
		struct FFootstepData                                       FootstepData;                                            // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.UpdatePerspective
	 */
	struct ARBPlayer_BP_C_UpdatePerspective_Params
	{	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.UpdateCustomization
	 */
	struct ARBPlayer_BP_C_UpdateCustomization_Params
	{	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.OnHealthUpdated_Event
	 */
	struct ARBPlayer_BP_C_OnHealthUpdated_Event_Params
	{
	public:
		float                                                      newHealth;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIncreased;                                              // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.OnExtraCustomizationMeshesAddedForSlot
	 */
	struct ARBPlayer_BP_C_OnExtraCustomizationMeshesAddedForSlot_Params
	{
	public:
		TArray<class USkeletalMeshComponent*>                      addedExtraMeshes;                                        // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		EPlayerCustomizationSlot                                   Slot;                                                    // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.OnAffectedByPsychosisGas_BP
	 */
	struct ARBPlayer_BP_C_OnAffectedByPsychosisGas_BP_Params
	{	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.UpdateShadowPickupEvent
	 */
	struct ARBPlayer_BP_C_UpdateShadowPickupEvent_Params
	{
	public:
		class ARBPickup*                                           oldItem;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPickup*                                           newItem;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.ReceiveTick
	 */
	struct ARBPlayer_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.ShowProxyLight
	 */
	struct ARBPlayer_BP_C_ShowProxyLight_Params
	{	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.Broadcast2DSound
	 */
	struct ARBPlayer_BP_C_Broadcast2DSound_Params
	{
	public:
		class UAkAudioEvent*                                       Event;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.OnNVAnimationDone_Event
	 */
	struct ARBPlayer_BP_C_OnNVAnimationDone_Event_Params
	{
	public:
		bool                                                       isNvActive;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.NVAnimationDone
	 */
	struct ARBPlayer_BP_C_NVAnimationDone_Params
	{	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.Event_OnNVAnimationNotify
	 */
	struct ARBPlayer_BP_C_Event_OnNVAnimationNotify_Params
	{
	public:
		bool                                                       bWantsNvOn;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ENightVisionAnimNotifyType                                 Type;                                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.SetProxylightEnabled
	 */
	struct ARBPlayer_BP_C_SetProxylightEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.ApplyDefaultNV
	 */
	struct ARBPlayer_BP_C_ApplyDefaultNV_Params
	{	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.UnderwaterStateChanged
	 */
	struct ARBPlayer_BP_C_UnderwaterStateChanged_Params
	{
	public:
		bool                                                       bIsUnderwater;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.Event_OnHealthRestored
	 */
	struct ARBPlayer_BP_C_Event_OnHealthRestored_Params
	{	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.Event_OnActiveSkillActorChanged
	 */
	struct ARBPlayer_BP_C_Event_OnActiveSkillActorChanged_Params
	{
	public:
		class AActor*                                              activeSkillActor;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.Event_OnEnterActiveSkillLimiterZone
	 */
	struct ARBPlayer_BP_C_Event_OnEnterActiveSkillLimiterZone_Params
	{
	public:
		class ARBActiveSkillLimiterZone*                           zoneEntered;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.Event_OnExitActiveSkillLimiterZone
	 */
	struct ARBPlayer_BP_C_Event_OnExitActiveSkillLimiterZone_Params
	{
	public:
		class ARBActiveSkillLimiterZone*                           zoneExited;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.Event_OnRemainingRespawnIncreased
	 */
	struct ARBPlayer_BP_C_Event_OnRemainingRespawnIncreased_Params
	{	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.ExecuteUbergraph_RBPlayer_BP
	 */
	struct ARBPlayer_BP_C_ExecuteUbergraph_RBPlayer_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MDNG[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.ShadowMeshCompleted__DelegateSignature
	 */
	struct ARBPlayer_BP_C_ShadowMeshCompleted__DelegateSignature_Params
	{	};

	/**
	 * Function RBPlayer_BP.RBPlayer_BP_C.Deleteme__DelegateSignature
	 */
	struct ARBPlayer_BP_C_Deleteme__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
