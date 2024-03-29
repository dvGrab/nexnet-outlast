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
	 * BlueprintGeneratedClass DONOTUSE_AcidBottle_BP.DONOTUSE_AcidBottle_BP_C
	 * Size -> 0x028C (FullSize[0x0BF4] - InheritedSize[0x0968])
	 */
	class ADONOTUSE_AcidBottle_BP_C : public ABase_LargePickup_BP_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0968(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ARBPawn*                                             LastHoldingPawn;                                         // 0x0970(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        RunningSpillTimerHandle;                                 // 0x0978(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FConfigurableFloat                                  SmallSpillRadius;                                        // 0x0980(0x00C8) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FConfigurableFloat                                  LargeSpillRadius;                                        // 0x0A48(0x00C8) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FConfigurableFloat                                  VeryLargeSpillRadius;                                    // 0x0B10(0x00C8) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		float                                                      RunningSpillTimer;                                       // 0x0BD8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RunningSpillFrequency;                                   // 0x0BDC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SectionIndex;                                            // 0x0BE0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinLandingHeightForVeryLargeSpill;                       // 0x0BE4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      VeryLargeSpillDamage;                                    // 0x0BE8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LargeSpillDamage;                                        // 0x0BEC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SmallSpillDamage;                                        // 0x0BF0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		int32_t GetObjectiveTypeIndex();
		bool ShouldBPTick();
		void DamagePlayersInRadius(EAcidBottleDamageType DamageType, class ARBPlayer* Player);
		void OnHoldingPlayerChangedEvent_Event_1(class ARBPawn* holdingPlayer, class ARBLargePickup* largePickup);
		void ReceiveBeginPlay();
		void OnPlayerLanded(class ARBPlayer* Player, float landingHeight);
		void OnPlayerTraversal(class ARBPlayer* Player, float landingHeight);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ReceiveTick(float DeltaSeconds);
		void OnDamagePlayer(class ARBPlayer* Player);
		void ExecuteUbergraph_DONOTUSE_AcidBottle_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
