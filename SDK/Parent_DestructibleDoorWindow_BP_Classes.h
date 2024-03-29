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
	 * BlueprintGeneratedClass Parent_DestructibleDoorWindow_BP.Parent_DestructibleDoorWindow_BP_C
	 * Size -> 0x0019 (FullSize[0x0529] - InheritedSize[0x0510])
	 */
	class AParent_DestructibleDoorWindow_BP_C : public AParent_DestructibleDoor_BP_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                SM_Window_Destroyed;                                     // 0x0518(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_Window;                                               // 0x0520(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       ToggledOff;                                              // 0x0528(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor

	public:
		void OnRep_ToggledOff();
		void Update_Broken_Window();
		void BndEvt__DamageableComponent_K2Node_ComponentBoundEvent_0_OnDamageableDamaged__DelegateSignature(class URBDamageableComponent* DamageableComponent, bool IsDestroyed);
		void Event_OnResetStage();
		void Event_SnapToState();
		void BndEvt__DamageableComponent_K2Node_ComponentBoundEvent_1_OnDamageableReset__DelegateSignature(class URBDamageableComponent* DamageableComponent);
		void PostToggled(bool bToggleEnabled);
		void BndEvt__Parent_DestructibleDoorWindow_BP_DamageableComponent_K2Node_ComponentBoundEvent_2_OnDamageableEvent__DelegateSignature(class URBDamageableComponent* DamageableComponent);
		void ExecuteUbergraph_Parent_DestructibleDoorWindow_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
