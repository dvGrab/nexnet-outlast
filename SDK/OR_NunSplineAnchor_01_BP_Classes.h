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
	 * BlueprintGeneratedClass OR_NunSplineAnchor_01_BP.OR_NunSplineAnchor-01_BP_C
	 * Size -> 0x0050 (FullSize[0x0548] - InheritedSize[0x04F8])
	 */
	class AOR_NunSplineAnchor__BP_C : public ASplineFollowing_Base_BP_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04F8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     RotationAnchor;                                          // 0x0500(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBSoundComponent*                                   SplineSoundComp;                                         // 0x0508(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBRepulsionComponent*                               RBRepulsion;                                             // 0x0510(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                TrackMotorPin;                                           // 0x0518(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                TrackMotor;                                              // 0x0520(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      RotationTimeline_YawAngle_3C1B62D34552C64ED827F8B709C54FE8; // 0x0528(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         RotationTimeline__Direction_3C1B62D34552C64ED827F8B709C54FE8; // 0x052C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0JOE[0x3];                                   // 0x052D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  RotationTimeline;                                        // 0x0530(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AMansionGuideMannequin__BP_C*                        LinkedMannequin;                                         // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TurnMannequinLeft;                                       // 0x0540(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       TurnMannequinRight;                                      // 0x0541(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       TurnMannequinForward;                                    // 0x0542(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       TurnMannequinBackward;                                   // 0x0543(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Speed_Divider;                                           // 0x0544(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetupSplineFollowing(class ASplineFollowing_Base_BP_C* SplineFollower, class USplineComponent* SplineComponent, float NetworkSyncInitialValue, ENetworkSyncType NetworkSyncType);
		void PlayAnimation(class UAnimationAsset* NewAnimToPlay);
		void RevertMannequinAnimation();
		void UserConstructionScript();
		void RotationTimeline__FinishedFunc();
		void RotationTimeline__UpdateFunc();
		void OnWorldFullyLoaded();
		void Event_OnTriggered();
		void Event_OnUntriggered();
		void Start_Spline_Following(class ABase_SplineActor_BP_C* MannequinSplineActor, float Network_Sync_Initial_Value, const struct FRotator& Rotation_Offset, ENetworkSyncType Network_Sync_Type);
		void UpdateSoundLoop();
		void Event_SnapToState();
		void OnWorldPopulateFinished();
		void BP_OnPingPongExtremityEvent(float progress);
		void ReceiveBeginPlay();
		void BP_OnCurrentSplineCompChanged();
		void ExecuteUbergraph_OR_NunSplineAnchor__BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
