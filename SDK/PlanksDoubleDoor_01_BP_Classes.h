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
	 * BlueprintGeneratedClass PlanksDoubleDoor_01_BP.PlanksDoubleDoor-01_BP_C
	 * Size -> 0x00D8 (FullSize[0x06D0] - InheritedSize[0x05F8])
	 */
	class APlanksDoubleDoor__BP_C : public ARBSlidingLock
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05F8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class URBActorPrevisComponent*                             DestructibleActor;                                       // 0x0600(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDecalComponent*                                     CoopDecalBack;                                           // 0x0608(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDecalComponent*                                     CoopDecalFront;                                          // 0x0610(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBDamageableComponent*                              RBDamageable;                                            // 0x0618(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class AActor*                                              ActorToLock_1;                                           // 0x0620(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBContainer*                                        ContainerToLock;                                         // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          BaseTransform;                                           // 0x0630(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTransform                                          FinalTransform;                                          // 0x0660(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDoorDestroyed;                                          // 0x0690(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WHZ0[0xF];                                   // 0x0691(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          InitialTransform;                                        // 0x06A0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		struct FTransform BP_OverrideEditorCompTranform(const class FName& compName, bool bLocked, const struct FTransform& Transform);
		void OnSetup();
		void BP_PostDoorInitialization();
		void BndEvt__RBDamageable_K2Node_ComponentBoundEvent_0_OnDamageableDestroyed__DelegateSignature(class URBDamageableComponent* DamageableComponent);
		void ReceiveBeginPlay();
		void BP_OnUnlock();
		void ExecuteUbergraph_PlanksDoubleDoor__BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
