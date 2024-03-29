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
	 * BlueprintGeneratedClass BASE_ElectricalSwitch_01_BP.BASE_ElectricalSwitch-01_BP_C
	 * Size -> 0x00F8 (FullSize[0x0750] - InheritedSize[0x0658])
	 */
	class ABASE_ElectricalSwitch__BP_C : public ARBOperatable
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0658(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class URBPingComponent*                                    RBPing;                                                  // 0x0660(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     AnimAnchor;                                              // 0x0668(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                HandleMesh;                                              // 0x0670(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              HingeMesh;                                               // 0x0678(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   Ngr_DeactivateSpark;                                     // 0x0680(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBOutlineComponent*                                 RBOutline;                                               // 0x0688(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBillboardComponent*                                 PadLockPosition;                                         // 0x0690(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Corner;                                                  // 0x0698(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Wire5cm5m;                                               // 0x06A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBSoundComponent*                                   RBSound;                                                 // 0x06A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         Rotation;                                                // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Speed;                                                   // 0x06B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2KK9[0x4];                                   // 0x06BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAnalogOperatableTriggerablesStruct>         ProgressiveTriggers;                                     // 0x06C0(0x0010) Edit, BlueprintVisible
		float                                                      PreviousProgressValue;                                   // 0x06D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             CablePosition;                                           // 0x06D4(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bRe_enableOnResetCompleted;                              // 0x06E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bToggleBackTriggeredItemsOnReset;                        // 0x06E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A2BQ[0x2];                                   // 0x06E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AdditionalDelayToReenableAfterReset;                     // 0x06E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnWaitingForResetCompletedChanged;                       // 0x06E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bWaitingForResetCompletedChanged;                        // 0x06F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BRPB[0x3];                                   // 0x06F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumberOfVisibleLights;                                   // 0x06FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class FName, class UMaterialInstance*>                LightNames;                                              // 0x0700(0x0050) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		bool GetInteractionPawnLocation(class ARBPawn* Pawn, ESpecialMove specialMove, struct FVector* OutLocation, struct FVector* outDirection);
		bool TestPhysicsClearance(class ARBPawn* interactorPawn);
		void HasInteractingPawn(bool* Value);
		void UpdateLightMaterial(int32_t CurrentLight, const class FName& MaterialName, class UMaterialInterface* Material);
		void SetWaitingForResetCompleted(bool Value);
		void SetCableHeight();
		void UserConstructionScript();
		void Event_OnOperationProgressChanged(float currentProgressRatio);
		void SetTriggerableActivation(bool Condition, class ARBTriggerable* RBTriggerable);
		void Event_OnCompletedOperation(TArray<class ARBPawn*> pawns);
		void Event_SnapToState();
		void Event_OnTimedReset();
		void Event_OnResetStage();
		void ReceiveBeginPlay();
		void UpdateLightDisplay();
		void Event_OnInteractorsChangedEvent();
		void ExecuteUbergraph_BASE_ElectricalSwitch__BP(int32_t EntryPoint);
		void OnWaitingForResetCompletedChanged__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
