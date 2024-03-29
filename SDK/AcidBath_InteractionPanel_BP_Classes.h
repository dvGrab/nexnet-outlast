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
	 * BlueprintGeneratedClass AcidBath_InteractionPanel_BP.AcidBath_InteractionPanel_BP_C
	 * Size -> 0x0060 (FullSize[0x0C20] - InheritedSize[0x0BC0])
	 */
	class UAcidBath_InteractionPanel_BP_C : public URBLargeObjectInteractionPanelComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0BC0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class ARBLargePickup*>                              ObjectsUsed;                                             // 0x0BC8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, Transient, DisableEditOnInstance
		TArray<class ARBLargePickup*>                              ObjectsUsed_Replicated;                                  // 0x0BD8(0x0010) Edit, BlueprintVisible, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance
		class USceneComponent*                                     AnimationStartPosition;                                  // 0x0BE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                AnimationStartPositionTag;                               // 0x0BF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class USceneComponent*>                             LargeObjectRefs;                                         // 0x0BF8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class FName>                                        LargeObjectRefTagsToUse;                                 // 0x0C08(0x0010) Edit, BlueprintVisible
		float                                                      RTPCPourRatio;                                           // 0x0C18(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RTPCFillRatio;                                           // 0x0C1C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateRTPC(float DeltaTime);
		void GetAmountOfBottlesAndHeadsUsed(int32_t* BottleUsed, int32_t* HeadsUsed);
		void InitializeLinkedObject();
		bool ShouldBPTick();
		class USceneComponent* GetLargeObjectRef(class ARBLargePickup* pickup);
		class UAnimSequence* GetSpecialMoveAnimation(class ARBPawn* Pawn, bool bIsFirstPerson);
		bool GetInteractionPawnLocation(class ARBPawn* Pawn, ESpecialMove specialMove, struct FVector* OutLocation, struct FVector* outDirection);
		void Event_OnLargeObjectDoAction(class ARBLargePickup* largeObject, class ARBPawn* interactor);
		void Event_OnResetStage();
		void ReceiveBeginPlay();
		void Event_OnTossIntoFinished(class ARBLargePickup* largeObject);
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_AcidBath_InteractionPanel_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
