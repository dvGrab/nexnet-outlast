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
	 * BlueprintGeneratedClass MetalBar_DoorLock_BP.MetalBar-DoorLock_BP_C
	 * Size -> 0x002C (FullSize[0x0624] - InheritedSize[0x05F8])
	 */
	class AMetalBar_DoorLock_BP_C : public ARBSlidingLock
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05F8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                LockRestRight;                                           // 0x0600(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                LockRestLeft;                                            // 0x0608(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                LockBase;                                                // 0x0610(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                DoorRef;                                                 // 0x0618(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      LastTriggeredStimulusTimestamp;                          // 0x0620(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SnapBarToPosition();
		void GetCurrentAnimSequence(class UAnimSequence** AnimSequence);
		void GetLockedTransform(struct FTransform* UnlockedTransform);
		void GetUnlockedTransform(struct FTransform* UnlockedTransform);
		struct FTransform BP_OverrideEditorCompTranform(const class FName& compName, bool bLocked, const struct FTransform& Transform);
		void OnSetup();
		void UserConstructionScript();
		void BP_OnInitialization();
		void Event_SnapToState();
		void ReceiveBeginPlay();
		void BP_ApplyAnimatedTransform(float curveValue, class ARBPawn* interactorPawn);
		void BP_OnDoorOwnerChanged();
		void Event_OnResetStage();
		void ExecuteUbergraph_MetalBar_DoorLock_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
