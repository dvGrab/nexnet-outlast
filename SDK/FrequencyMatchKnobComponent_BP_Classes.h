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
	 * BlueprintGeneratedClass FrequencyMatchKnobComponent_BP.FrequencyMatchKnobComponent_BP_C
	 * Size -> 0x0058 (FullSize[0x0988] - InheritedSize[0x0930])
	 */
	class UFrequencyMatchKnobComponent_BP_C : public URBFrequencyMatchKnobComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0930(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      MaxRotationAngle;                                        // 0x0938(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PKTD[0x4];                                   // 0x093C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          DefaultParentTransform;                                  // 0x0940(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                StatusMesh;                                              // 0x0970(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CloseToCompletedRatio;                                   // 0x0978(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BVQH[0x4];                                   // 0x097C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  Default_Mat;                                             // 0x0980(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void RefreshLocallyFocused();
		void RefreshRTPC();
		void RefreshShimmer();
		void Refresh();
		void RefreshPosition();
		void IsCloseToCompleted(bool* Value);
		void RefreshStatus();
		void OnParentConstruction(class UStaticMeshComponent* StatusMesh);
		void ReceiveBeginPlay();
		void Event_OnResetStage();
		void Event_OnIsCompletedChanged();
		void OnInteractingPawnChanged(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting);
		void Event_OnCurrentRatioChanged();
		void Event_OnPlayerOnKnobChanged();
		void Event_OnLocallyFocusedChanged();
		void OnParentEnabledChanged(class URBInteractionZoneComponent* Component);
		void ExecuteUbergraph_FrequencyMatchKnobComponent_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
