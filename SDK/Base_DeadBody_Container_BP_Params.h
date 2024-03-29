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
	 * Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.GetMainParentSkeletalMesh
	 */
	struct ABase_DeadBody_Container_BP_C_GetMainParentSkeletalMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.GetWatchComponent
	 */
	struct ABase_DeadBody_Container_BP_C_GetWatchComponent_Params
	{
	public:
		class UStaticMeshComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.GetPlayerCustomizationInfo
	 */
	struct ABase_DeadBody_Container_BP_C_GetPlayerCustomizationInfo_Params
	{
	public:
		struct FRBPlayerCustomizationInfo                          ReturnValue;                                             // 0x0000(0x0038)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.GetSkeletalMeshComponentForSlot
	 */
	struct ABase_DeadBody_Container_BP_C_GetSkeletalMeshComponentForSlot_Params
	{
	public:
		EPlayerCustomizationSlot                                   Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GWTP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.ValidateArmWristBoneSetup
	 */
	struct ABase_DeadBody_Container_BP_C_ValidateArmWristBoneSetup_Params
	{
	public:
		class USkeletalMeshComponent*                              Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.UserConstructionScript
	 */
	struct ABase_DeadBody_Container_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.PlayDeadBodyAnim
	 */
	struct ABase_DeadBody_Container_BP_C_PlayDeadBodyAnim_Params
	{
	public:
		class UAnimSequenceBase*                                   Anim;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.OnInteractionStarted
	 */
	struct ABase_DeadBody_Container_BP_C_OnInteractionStarted_Params
	{
	public:
		class URBContainerSpawnLocationComponent*                  spawnLocationComponent;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.ReceiveBeginPlay
	 */
	struct ABase_DeadBody_Container_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.Event_OnResetStage
	 */
	struct ABase_DeadBody_Container_BP_C_Event_OnResetStage_Params
	{	};

	/**
	 * Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.ForceEndPose
	 */
	struct ABase_DeadBody_Container_BP_C_ForceEndPose_Params
	{
	public:
		class UAnimSequenceBase*                                   Anim;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.Event_OnNotifyPlayRigSequence
	 */
	struct ABase_DeadBody_Container_BP_C_Event_OnNotifyPlayRigSequence_Params
	{
	public:
		class UAnimationAsset*                                     AnimToPlay;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.BndEvt__HandSpawnLocation_K2Node_ComponentBoundEvent_3_OnContainerPickupInteractionEvent__DelegateSignature
	 */
	struct ABase_DeadBody_Container_BP_C_BndEvt__HandSpawnLocation_K2Node_ComponentBoundEvent_3_OnContainerPickupInteractionEvent__DelegateSignature_Params
	{
	public:
		class URBContainerSpawnLocationComponent*                  Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             interactor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPickup*                                           pickup;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.BndEvt__ESOPSpawnLocation_K2Node_ComponentBoundEvent_4_OnContainerPickupInteractionEvent__DelegateSignature
	 */
	struct ABase_DeadBody_Container_BP_C_BndEvt__ESOPSpawnLocation_K2Node_ComponentBoundEvent_4_OnContainerPickupInteractionEvent__DelegateSignature_Params
	{
	public:
		class URBContainerSpawnLocationComponent*                  Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             interactor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPickup*                                           pickup;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.BndEvt__GroundSpawnLocation_K2Node_ComponentBoundEvent_5_OnContainerPickupInteractionEvent__DelegateSignature
	 */
	struct ABase_DeadBody_Container_BP_C_BndEvt__GroundSpawnLocation_K2Node_ComponentBoundEvent_5_OnContainerPickupInteractionEvent__DelegateSignature_Params
	{
	public:
		class URBContainerSpawnLocationComponent*                  Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPawn*                                             interactor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPickup*                                           pickup;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.Event_OnCustomizationChanged
	 */
	struct ABase_DeadBody_Container_BP_C_Event_OnCustomizationChanged_Params
	{	};

	/**
	 * Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.ActivateHeadCapsule
	 */
	struct ABase_DeadBody_Container_BP_C_ActivateHeadCapsule_Params
	{	};

	/**
	 * Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.OnExtraCustomizationMeshesAddedForSlot
	 */
	struct ABase_DeadBody_Container_BP_C_OnExtraCustomizationMeshesAddedForSlot_Params
	{
	public:
		TArray<class USkeletalMeshComponent*>                      addedExtraMeshes;                                        // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		EPlayerCustomizationSlot                                   Slot;                                                    // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.ValidateMovedAnim
	 */
	struct ABase_DeadBody_Container_BP_C_ValidateMovedAnim_Params
	{	};

	/**
	 * Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.Event_OnMovedDeadBodySequenceChanged
	 */
	struct ABase_DeadBody_Container_BP_C_Event_OnMovedDeadBodySequenceChanged_Params
	{	};

	/**
	 * Function Base_DeadBody_Container_BP.Base_DeadBody_Container_BP_C.ExecuteUbergraph_Base_DeadBody_Container_BP
	 */
	struct ABase_DeadBody_Container_BP_C_ExecuteUbergraph_Base_DeadBody_Container_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
