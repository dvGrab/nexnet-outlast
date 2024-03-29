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
	 * BlueprintGeneratedClass GasReservoir_InteractionPanel_BP.GasReservoir_InteractionPanel_BP_C
	 * Size -> 0x0048 (FullSize[0x0BA8] - InheritedSize[0x0B60])
	 */
	class UGasReservoir_InteractionPanel_BP_C : public URBLargeObjectInteractionPanelComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0B60(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     LargeObjectRef;                                          // 0x0B68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Gauge;                                                   // 0x0B70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentGaugeRatio;                                       // 0x0B78(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UN68[0x4];                                   // 0x0B7C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                Light;                                                   // 0x0B80(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             UpdateGaugeNeedle;                                       // 0x0B88(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             UpdateGasLight;                                          // 0x0B98(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void RefreshGaugeNeedleAngleRatio(float ratio);
		void UpdateGaugeValue(float DeltaTime);
		bool ShouldBPTick();
		class USceneComponent* GetLargeObjectRef(class ARBLargePickup* pickup);
		bool GetInteractionPawnLocation(class ARBPawn* Pawn, ESpecialMove specialMove, struct FVector* OutLocation, struct FVector* outDirection);
		void ReceiveBeginPlay();
		void Event_OnResetStage();
		void ReceiveTick(float DeltaSeconds);
		void Event_OnNumberOfCompletedInteractionsChanged();
		void ExecuteUbergraph_GasReservoir_InteractionPanel_BP(int32_t EntryPoint);
		void UpdateGasLight__DelegateSignature(bool bLightOn);
		void UpdateGaugeNeedle__DelegateSignature(float needleRatio);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
