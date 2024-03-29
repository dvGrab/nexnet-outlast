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
	 * BlueprintGeneratedClass ChildrenGrinder_InteractionPanel_BP.ChildrenGrinder_InteractionPanel_BP_C
	 * Size -> 0x0038 (FullSize[0x0BF8] - InheritedSize[0x0BC0])
	 */
	class UChildrenGrinder_InteractionPanel_BP_C : public URBLargeObjectInteractionPanelComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0BC0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class ARBLargePickup*>                              ObjectsUsed;                                             // 0x0BC8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, Transient, DisableEditOnInstance
		TArray<class ARBLargePickup*>                              ObjectsUsed_Replicated;                                  // 0x0BD8(0x0010) Edit, BlueprintVisible, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance
		class USceneComponent*                                     LargeObjectRef;                                          // 0x0BE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       ThrowInAnimation;                                        // 0x0BF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool IsInteractionPossible(class ARBPawn* interactorPawn);
		class USceneComponent* GetLargeObjectRef(class ARBLargePickup* pickup);
		class UAnimSequence* GetSpecialMoveAnimation(class ARBPawn* Pawn, bool bIsFirstPerson);
		bool GetInteractionPawnLocation(class ARBPawn* Pawn, ESpecialMove specialMove, struct FVector* OutLocation, struct FVector* outDirection);
		void Event_OnLargeObjectDoAction(class ARBLargePickup* largeObject, class ARBPawn* interactor);
		void Event_OnResetStage();
		void ReceiveBeginPlay();
		void Event_OnTossIntoFinished(class ARBLargePickup* largeObject);
		void ExecuteUbergraph_ChildrenGrinder_InteractionPanel_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
