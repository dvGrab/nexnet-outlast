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
	 * BlueprintGeneratedClass DoorBase_BP.DoorBase_BP_C
	 * Size -> 0x0380 (FullSize[0x0FF8] - InheritedSize[0x0C78])
	 */
	class ADoorBase_BP_C : public ARBDoor
	{
	public:
		unsigned char                                              UnknownData_HXT0[0x8];                                   // 0x0C78(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0C80(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class URBSoundComponent*                                   RBSound;                                                 // 0x0C88(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Editor_DoorKnobBackward;                                 // 0x0C90(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Editor_DoorKnobForward;                                  // 0x0C98(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBDeadRepulsionBoxComponent*                        RBDeadRepulsionBox;                                      // 0x0CA0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                CollisionMesh;                                           // 0x0CA8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                DoorTrap_ElectricBox_LeftTop;                            // 0x0CB0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                DoorTrap_ElectricBox_LeftBottom;                         // 0x0CB8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                DoorTrap_ElectricBox_TopRight;                           // 0x0CC0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                DoorTrap_ElectricBox_TopLeft;                            // 0x0CC8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                DoorTrap_ElectricBox_TopCornerLeft;                      // 0x0CD0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                DoorTrap_ElectricBox_TopCornerRight;                     // 0x0CD8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                DoorTrap_ElectricBox_RightTop;                           // 0x0CE0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                DoorTrap_ElectricBox_RightBottom;                        // 0x0CE8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBEditorClearanceCollisionBoxComponent*             DoorEditorClearanceBlockerComponent;                     // 0x0CF0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBInteractionZoneComponent*                         PerpendicularInteractZoneBox;                            // 0x0CF8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      ShakeTimeline_NewTrack_0_BDE1E5944BBC888587EC4A87C58026E7; // 0x0D00(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         ShakeTimeline__Direction_BDE1E5944BBC888587EC4A87C58026E7; // 0x0D04(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1UI5[0x3];                                   // 0x0D05(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  ShakeTimeline;                                           // 0x0D08(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          ShakeStartTransform;                                     // 0x0D10(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTransform                                          ShakeEndTransform;                                       // 0x0D40(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bForceNoVolumetricLightmaps;                             // 0x0D70(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       UseLockBars;                                             // 0x0D71(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UOJB[0x6];                                   // 0x0D72(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<int32_t, class UStaticMeshComponent*>                 TrapIndicatorRef;                                        // 0x0D78(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		int32_t                                                    NumberOfTrappedTells;                                    // 0x0DC8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_94SX[0x4];                                   // 0x0DCC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          TrapTellRef_Right_Bottom;                                // 0x0DD0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTransform                                          TrapTellRef_Right_Top;                                   // 0x0E00(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTransform                                          TrapTellRef_TopCorner_Right;                             // 0x0E30(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTransform                                          TrapTellRef_TopCorner_Left;                              // 0x0E60(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTransform                                          TrapTellRef_Top_Left;                                    // 0x0E90(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTransform                                          TrapTellRef_Top_Right;                                   // 0x0EC0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTransform                                          TrapTellRef_Left_Bottom;                                 // 0x0EF0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTransform                                          TrapTellRef_Left_Top;                                    // 0x0F20(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TMap<int32_t, class UStaticMeshComponent*>                 TrapIndicatorCoverRef;                                   // 0x0F50(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TMap<int32_t, class USpotLightComponent*>                  TrapIndicatorCoverLight;                                 // 0x0FA0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UStaticMeshComponent*                                SpawnWindowCollision;                                    // 0x0FF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AddWindowCollision(class AActor* Actor, class USceneComponent* AttachBase);
		void HasDestructibleDoor(bool* NewParam);
		void ApplyDoorCollisionTypeToDoor();
		void GetTrapTellMaxIndex(int32_t* TrapTellMaxIndex);
		void ClearAllTrapTells();
		void TryAddNewTrapTell(bool bFromFront);
		void GetRandomTrapIndicator(int32_t* TellIndex, class UStaticMesh** Mesh, struct FTransform* RelativeTransform);
		void InitializeSettings(class AActor* Actor);
		void SetLockBarsVisibility();
		void DisableDestructibleDoorCollision();
		void UserConstructionScript();
		void ShakeTimeline__FinishedFunc();
		void ShakeTimeline__UpdateFunc();
		void BP_OnDoorBashEvent(class ARBPawn* Pawn, bool bSuccess, bool bApplyVisualDoorDamage, EBashDoorType bashType);
		void ShakeDoor();
		void BP_OnDoorBarsLockingEvent(bool bLocking);
		void BP_OnDoorUnhingeEvent(class ARBPawn* Pawn);
		void Event_PostRegisterAllComponents();
		void BP_OnActorAttachedToDoor(class AActor* Actor);
		void BP_OnDoorTrappedStateChanged(bool bTrapped, bool bFromFront);
		void Event_OnResetStage();
		void BP_OnDoorTrapActivated();
		void BP_OnDoorTrapDisarmed();
		void Event_SnapToState();
		void PostToggled(bool bToggleEnabled);
		void ExecuteUbergraph_DoorBase_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
