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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass Cont_Utility_ToolBox_BP.Cont-Utility-ToolBox_BP_C
	 * Size -> 0x00D1 (FullSize[0x05C1] - InheritedSize[0x04F0])
	 */
	class ACont_Utility_ToolBox_BP_C : public ARBInteractibleContainer
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class URBEditorClearanceCollisionBoxComponent*             OpenClearanceBox;                                        // 0x04F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              InteractableOwnerClearanceBoxComponent_BP[0x8];          // 0x0500(0x0008) UNKNOWN PROPERTY: ObjectProperty
		class UStaticMeshComponent*                                GasTrapTriggerMesh;                                      // 0x0508(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                GasTrapMesh;                                             // 0x0510(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                PadLock;                                                 // 0x0518(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                PadLockBar;                                              // 0x0520(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Hinge;                                                   // 0x0528(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBOutlineComponent*                                 RBOutline;                                               // 0x0530(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBContainerSpawnLocationComponent*                  RightSpawnLocation;                                      // 0x0538(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBContainerSpawnLocationComponent*                  LeftSpawnLocation;                                       // 0x0540(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                RefStaticmesh;                                           // 0x0548(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                ToolBox;                                                 // 0x0550(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         InteractionStaticMesh;                                   // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          BaseTransform;                                           // 0x0560(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTransform                                          InteractionBaseTransform;                                // 0x0590(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bOpenAnimPlayed;                                         // 0x05C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetLookAtLocation(struct FVector* outLookAtLocation);
		bool GetInteractionPawnLocation(class ARBPawn* Pawn, ESpecialMove specialMove, struct FVector* OutLocation, struct FVector* outDirection);
		bool PlaySpecialMoveAnimation(class ARBPawn* interactorPawn, ESpecialMove specialMove);
		void UserConstructionScript();
		void Event_SnapToState();
		void Event_OnIsOpenedChanged();
		void OnPawnPlaySpecialMoveAnimation(class ARBPawn* Pawn, ESpecialMove specialMove);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_Cont_Utility_ToolBox_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
