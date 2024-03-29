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
	 * BlueprintGeneratedClass GarageDoorOperatable_Base_BP.GarageDoorOperatable-Base_BP_C
	 * Size -> 0x007A (FullSize[0x0A62] - InheritedSize[0x09E8])
	 */
	class AGarageDoorOperatableBase_BP_C : public ARBGarageDoor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x09E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class URBDeadRepulsionBoxComponent*                        RBDeadRepulsionBox;                                      // 0x09F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       JackCollision;                                           // 0x09F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Jack01;                                                  // 0x0A00(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                JackBase01;                                              // 0x0A08(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                DoorTopCollision;                                        // 0x0A10(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBBoxNavMeshBlockingComponent*                      RBBoxNavMeshBlocking;                                    // 0x0A18(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x0A20(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                GarageDoorFrame3m01;                                     // 0x0A28(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBSoundConnectorComponent*                          RBSoundConnector;                                        // 0x0A30(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBSoundComponent*                                   SoundComponent;                                          // 0x0A38(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                DynamicCollision;                                        // 0x0A40(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      PreviousProgress;                                        // 0x0A48(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_B54S[0x4];                                   // 0x0A4C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ARBOperatable*                                       TriggerableSwitch;                                       // 0x0A50(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         GarageFrameStaticMesh;                                   // 0x0A58(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bAudio_Lifting;                                          // 0x0A60(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bAudio_Dropping;                                         // 0x0A61(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void Audio_ResetState();
		void Audio_StopJackHold();
		void Audio_StartJackHold();
		void Audio_StopJackLift();
		void Audio_StartJackLift();
		void Audio_ReachedDropDown();
		void Audio_StartDropDown();
		void Audio_ReachedLiftUp();
		void Audio_StartLiftUp();
		void RefreshJackVisibility();
		struct FVector GetCoopIconOffset();
		void OnRep_HasJack();
		void ReceiveBeginPlay();
		void UpdateAudio(float currentProgress);
		void Event_OnResetStage();
		void Event_OnJackHoldingStart();
		void Event_OnJackHoldingStop();
		void Event_OnOperationProgressChanged(float currentProgressRatio);
		void ExecuteUbergraph_GarageDoorOperatableBase_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
