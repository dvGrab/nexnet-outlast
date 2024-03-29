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
	 * BlueprintGeneratedClass DestructibleWallBase_BP.DestructibleWallBase_BP_C
	 * Size -> 0x01F0 (FullSize[0x0820] - InheritedSize[0x0630])
	 */
	class ADestructibleWallBase_BP_C : public ARBBreakableObstacle
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0630(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class URBPingComponent*                                    RBPing;                                                  // 0x0638(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Collision;                                               // 0x0640(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            P_LastHit;                                               // 0x0648(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            FourthHitParticles;                                      // 0x0650(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            ThirdHitParticles;                                       // 0x0658(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            SecondHitParticles;                                      // 0x0660(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            FirstHitParticles;                                       // 0x0668(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     Arrow;                                                   // 0x0670(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Back;                                                    // 0x0678(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Front;                                                   // 0x0680(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBDestructibleComponent*                            RBDestructible;                                          // 0x0688(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_NewTrack_0_B725ADCE40EE854CF4933E953ED44EBF;  // 0x0690(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_B725ADCE40EE854CF4933E953ED44EBF;  // 0x0694(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UTGO[0x3];                                   // 0x0695(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x0698(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LastDurabilityRatio;                                     // 0x06A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WL8P[0x4];                                   // 0x06A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        PlanksToMove01;                                          // 0x06A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        PlanksToBreak01;                                         // 0x06B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        PlanksToMove02;                                          // 0x06C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        PlanksToBreak02;                                         // 0x06D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        PlanksToMove03;                                          // 0x06E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        PlanksToBreak03;                                         // 0x06F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        PlanksToMove04;                                          // 0x0708(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        PlanksToBreak04;                                         // 0x0718(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    HitIndex;                                                // 0x0728(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_S2GY[0x4];                                   // 0x072C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGenericBreakableObstaclesBonesStruct>       ForwardPlanks;                                           // 0x0730(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FVector                                             StartingLocation;                                        // 0x0740(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_10Z7[0x4];                                   // 0x074C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGenericBreakableObstaclesBonesStruct>       BackwardPlanks;                                          // 0x0750(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        DoNotMove;                                               // 0x0760(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCameraShakeData                                    shakeData;                                               // 0x0770(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class FScriptMulticastDelegate                             Broken;                                                  // 0x0810(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void ResetLigthingSettings();
		void UserConstructionScript();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void Shake();
		void FirsHit(const struct FVector& Vector);
		void SecondHit(const struct FVector& Vector);
		void ThirdHit(const struct FVector& Vector);
		void FourthHit(const struct FVector& Vector);
		void forceBreak();
		void BndEvt__DamageableComponent_K2Node_ComponentBoundEvent_3_OnDamageableDamaged__DelegateSignature(class URBDamageableComponent* DamageableComponent, bool IsDestroyed);
		void Event_SnapToState();
		void UpdateDuratility();
		void Event_OnResetStage();
		void Event_OnBreakObject(class AActor* SourceActor);
		void ReceiveBeginPlay();
		void plankHit(TArray<class FName> PlankToMove, TArray<class FName> PlanksToBreak, const struct FVector& A);
		void ExecuteUbergraph_DestructibleWallBase_BP(int32_t EntryPoint);
		void Broken__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
