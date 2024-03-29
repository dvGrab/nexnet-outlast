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
	 * BlueprintGeneratedClass SplineAnchor_BP.SplineAnchor_BP_C
	 * Size -> 0x0052 (FullSize[0x054A] - InheritedSize[0x04F8])
	 */
	class ASplineAnchor_BP_C : public ASplineFollowing_Base_BP_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04F8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class URBBoxNavMeshBlockingComponent*                      RBBoxNavMeshBlocking;                                    // 0x0500(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                TrackMotorPin;                                           // 0x0508(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBSoundComponent*                                   SplineSoundComp;                                         // 0x0510(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBRepulsionComponent*                               RBRepulsion;                                             // 0x0518(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                TrackMotor;                                              // 0x0520(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             New_Location;                                            // 0x0528(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bDoorDetectionRequired;                                  // 0x0534(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EL92[0x3];                                   // 0x0535(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       MovingSoundStart;                                        // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       MovingSoundStop;                                         // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsMovingSound;                                          // 0x0548(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       bUsedNavMeshBlocking;                                    // 0x0549(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void InitNavMeshBlocking();
		void UpdateNavMeshBlocking(bool bMoving);
		void UpdateSplineSound();
		void OnRep_bIsMovingSound();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void StartMovingSound();
		void StopMovingSound();
		void BndEvt__SplineAnchor_BP_NetworkSync_K2Node_ComponentBoundEvent_0_OnNetworkSyncComponentEvent__DelegateSignature(class URBNetworkSyncComponent* networkSyncComponent);
		void BP_OnStartedMoving();
		void BP_OnStoppedMoving();
		void ExecuteUbergraph_SplineAnchor_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
