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
	 * BlueprintGeneratedClass Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C
	 * Size -> 0x00C0 (FullSize[0x0A28] - InheritedSize[0x0968])
	 */
	class ABase_HeadEvidence_LargePickup_BP_C : public ABase_LargePickup_BP_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0968(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UArrowComponent*                                     Arrow;                                                   // 0x0970(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   Ngr_HeadDissolving;                                      // 0x0978(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     FX_Dummy;                                                // 0x0980(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      DissolveTL_EmitterScaleZ_B85C1D3B421E9B45077A64A45465D232; // 0x0988(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DissolveTL_Rotation_B85C1D3B421E9B45077A64A45465D232;    // 0x098C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DissolveTL_Move_B85C1D3B421E9B45077A64A45465D232;        // 0x0990(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DissolveTL_DisolveOn_B85C1D3B421E9B45077A64A45465D232;   // 0x0994(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         DissolveTL__Direction_B85C1D3B421E9B45077A64A45465D232;  // 0x0998(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2F5D[0x7];                                   // 0x0999(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  DissolveTL;                                              // 0x09A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UStaticMesh*>                                 AvailableHeadMeshes;                                     // 0x09A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    MeshIndex;                                               // 0x09B8(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		struct FVector                                             HeadWorldLocation;                                       // 0x09BC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            HeadWorldRotation;                                       // 0x09C8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            HeadRotationOffset;                                      // 0x09D4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDissolved;                                              // 0x09E0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_Q985[0xF];                                   // 0x09E1(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          InitialRelativeTransform;                                // 0x09F0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class ARBTriggerable*                                      LockingTriggerable;                                      // 0x0A20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool IsInteractionPossible(class ARBPawn* interactorPawn);
		void SetLockingTriggerable(class ARBTriggerable* triggerable);
		void OnRep_bDissolved();
		void SetWaterLevel(float Value);
		void Set_Dissolve(float Value);
		void GetAllActiveHeads(TArray<class ABase_HeadEvidence_LargePickup_BP_C*>* OutActors);
		void DressUp_Server();
		void OnRep_MeshIndex();
		void DissolveTL__FinishedFunc();
		void DissolveTL__UpdateFunc();
		void Event_OnResetStage();
		void OnWorldPopulateFinished();
		void Dissolve();
		void ReceiveBeginPlay();
		void OnDissolve();
		void ExecuteUbergraph_Base_HeadEvidence_LargePickup_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
