#pragma once

/**
 * Name: OUTLAST
 * Version: 0.0.2_fixed
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
	 * BlueprintGeneratedClass PS_AvellanosSplineAnchor_01_BP.PS_AvellanosSplineAnchor-01_BP_C
	 * Size -> 0x0038 (FullSize[0x0520] - InheritedSize[0x04E8])
	 */
	class APS_AvellanosSplineAnchor01_BP_C : public ASplineFollowing_Base_BP_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class URBSoundComponent*                                   SplineSoundComp;                                         // 0x04F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBRepulsionComponent*                               RBRepulsion;                                             // 0x04F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                TrackMotorPin01;                                         // 0x0500(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                TrackMotor01;                                            // 0x0508(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class AMansionGuideMannequin01_BP_C*                       LinkedMannequin;                                         // 0x0510(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TurnMannequinLeft;                                       // 0x0518(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       TurnMannequinRight;                                      // 0x0519(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       TurnMannequinForward;                                    // 0x051A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       TurnMannequinBackward;                                   // 0x051B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Speed_Divider;                                           // 0x051C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetupSplineFollowing(class ASplineFollowing_Base_BP_C* SplineFollower, class USplineComponent* SplineComponent, float NetworkSyncInitialValue, ENetworkSyncType NetworkSyncType);
		void PlayAnimation(class UAnimationAsset* NewAnimToPlay);
		void RevertMannequinAnimation();
		void OnWorldFullyLoaded();
		void OnWorldPopulateFinished();
		void Event_OnTriggered();
		void Event_OnUntriggered();
		void StartSplineFollowing(class AMannequinSplineActor01_BP_C* MannequinSplineActor, float NetworkSyncInitialValue, const struct FRotator& RotationOffset, ENetworkSyncType NetworkSyncType);
		void UpdateSoundLoop();
		void Event_SnapToState();
		void ExecuteUbergraph_PS_AvellanosSplineAnchor01_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
