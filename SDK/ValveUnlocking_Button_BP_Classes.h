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
	 * BlueprintGeneratedClass ValveUnlocking_Button_BP.ValveUnlocking-Button_BP_C
	 * Size -> 0x004C (FullSize[0x0304] - InheritedSize[0x02B8])
	 */
	class AValveUnlockingButton_BP_C : public ABase_ButtonCoop_Base_BP_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                CableConduitJunctionCornerBox01;                         // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Diode03;                                                 // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Diode02;                                                 // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Diode01;                                                 // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Diode05;                                                 // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Diode04;                                                 // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class UStaticMeshComponent*>                        TimerDiodes;                                             // 0x02F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		int32_t                                                    DiodeLightOnCount;                                       // 0x0300(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void TickTimer();
		void RefreshTimerDiodesVisual();
		void ShouldTick(bool* bShouldTick);
		void UserConstructionScript();
		void ReceiveTick(float DeltaSeconds);
		void BndEvt__ValveUnlockingButton_BP_OperatableComponent_K2Node_ComponentBoundEvent_0_OnCoopOperatableEvent__DelegateSignature(class URBCoopOperatableComponent* Component);
		void BndEvt__ValveUnlockingButton_BP_OperatableComponent_K2Node_ComponentBoundEvent_1_OnEnabledChanged__DelegateSignature(class URBInteractionZoneComponent* Component);
		void ExecuteUbergraph_ValveUnlockingButton_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
