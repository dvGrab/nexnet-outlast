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
	 * BlueprintGeneratedClass SlidingLock_Operatable_01_BP.SlidingLock-Operatable-01_BP_C
	 * Size -> 0x00D8 (FullSize[0x06D0] - InheritedSize[0x05F8])
	 */
	class ASlidingLock_Operatable__BP_C : public ARBSlidingLock
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05F8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class URBDamageableComponent*                              damageable;                                              // 0x0600(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                FrameMetal;                                              // 0x0608(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SlidingLockDecalMesh;                                    // 0x0610(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Bar;                                                     // 0x0618(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                DoorMetal;                                               // 0x0620(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SlidingLockBar;                                          // 0x0628(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     Arrow;                                                   // 0x0630(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MWLL[0x8];                                   // 0x0638(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          DoorMetalInitialRelativeTransform;                       // 0x0640(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTransform                                          BarRelativeTransform;                                    // 0x0670(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTransform                                          FrameMetalWorldTransform;                                // 0x06A0(0x0030) Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor

	public:
		void OnRep_FrameMetalWorldTransform();
		void OnRep_FrameMetalTransform();
		void RestorePhysicsComponentsSnapshot();
		void TakePhysicsComponentsSnapshot();
		struct FTransform BP_OverrideEditorCompTranform(const class FName& compName, bool bLocked, const struct FTransform& Transform);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void OnSetup();
		void BP_OnLock();
		void BP_OnUnlock();
		void BndEvt__Damageable_K2Node_ComponentBoundEvent_0_OnDamageableDestroyed__DelegateSignature(class URBDamageableComponent* DamageableComponent);
		void Event_SnapToState();
		void Event_OnResetStage();
		void ExecuteUbergraph_SlidingLock_Operatable__BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
