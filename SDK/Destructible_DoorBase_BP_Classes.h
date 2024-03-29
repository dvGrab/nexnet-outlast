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
	 * BlueprintGeneratedClass Destructible_DoorBase_BP.Destructible_DoorBase_BP_C
	 * Size -> 0x0011 (FullSize[0x1009] - InheritedSize[0x0FF8])
	 */
	class ADestructible_DoorBase_BP_C : public ADoorBase_BP_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0FF8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class URBActorPrevisComponent*                             DestructibleDoor;                                        // 0x1000(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsToggledOff;                                           // 0x1008(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void HasDestructibleDoor(bool* NewParam);
		void ApplyDoorCollisionTypeToDestructible(class AActor* Destructible);
		void BndEvt__DestructibleDoor_K2Node_ComponentBoundEvent_0_OnActorPrevisRuntimeChildActorChanged__DelegateSignature(class URBActorPrevisComponent* actorPrevis, class AActor* runtimeChildActor);
		void PostToggled(bool bToggleEnabled);
		void Event_OnResetStage();
		void ExecuteUbergraph_Destructible_DoorBase_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
