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
	 * BlueprintGeneratedClass Guard_BP.Guard_BP_C
	 * Size -> 0x00AC (FullSize[0x0711] - InheritedSize[0x0665])
	 */
	class AGuard_BP_C : public ABackgroundCharacter_BP_C
	{
	public:
		unsigned char                                              UnknownData_NXKY[0x3];                                   // 0x0665(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0668(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                Guard_Revolver;                                          // 0x0670(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    VoCollisionSphere;                                       // 0x0678(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              GuardHead;                                               // 0x0680(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class USkeletalMesh*>                               HeadOptions;                                             // 0x0688(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       CanPlayVO;                                               // 0x0698(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsPlayerOverlappingBox;                                  // 0x0699(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8VKL[0x2];                                   // 0x069A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ExasperationLevel;                                       // 0x069C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UAkAudioEvent*>                               ChosenProximityVoicelines;                               // 0x06A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UAkAudioEvent*>                               ProximityVoicelinesMale01_01;                            // 0x06B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UAkAudioEvent*>                               ProximityVoicelinesMale01_02;                            // 0x06C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UAkAudioEvent*>                               ProximityVoicelinesMale01_03;                            // 0x06D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UAkAudioEvent*>                               ProximityVoicelinesMale02_01;                            // 0x06E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UAkAudioEvent*>                               ProximityVoicelinesMale02_02;                            // 0x06F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UAkAudioEvent*>                               ProximityVoicelinesMale02_03;                            // 0x0700(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsSilent;                                                // 0x0710(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ChooseVoiceAndLine();
		void PlayProximityVO();
		class UPoseAsset* GetFacePoseAsset();
		void BuildAppearance();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void Event_OnResetStage();
		void BndEvt__Guard_BP_VoCollisionSphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void BndEvt__Guard_BP_VoCollisionSphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void ExecuteUbergraph_Guard_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
