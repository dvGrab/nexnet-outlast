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
	 * BlueprintGeneratedClass ZoneTimingPanelComponent_BP.ZoneTimingPanelComponent_BP_C
	 * Size -> 0x0078 (FullSize[0x1568] - InheritedSize[0x14F0])
	 */
	class UZoneTimingPanelComponent_BP_C : public URBZoneTimingPanelComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x14F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class UStaticMeshComponent*>                        Bulbs;                                                   // 0x14F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		float                                                      BulbStartPosition;                                       // 0x1508(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BulbIndividualSize;                                      // 0x150C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MeterStartPos;                                           // 0x1510(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MeterEndPos;                                             // 0x1514(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     BulbListRoot;                                            // 0x1518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MeterNeedle;                                             // 0x1520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Handle;                                                  // 0x1528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                RPMNeedle;                                               // 0x1530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInterface*                                  ThresholdNeedleBaseMaterial;                             // 0x1538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInterface*                                  ThresholdReachedNeedleMaterial;                          // 0x1540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TriggeredBulbIndex;                                      // 0x1548(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		ETimingInputResultType                                     TriggeredBulbResult;                                     // 0x154C(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_O6WR[0x3];                                   // 0x154D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LastTriggeredBulbIndex;                                  // 0x1550(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9A2T[0x4];                                   // 0x1554(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         BulbStaticMesh;                                          // 0x1558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           RPMNeedleRange;                                          // 0x1560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnRep_TriggeredBulbIndex();
		bool ShouldBPTick();
		void ClearLastTriggeredBulb();
		void RefreshRPMIndicator();
		void RefreshBulbColor(class UStaticMeshComponent* Bulb, ETimingInputResultType Result);
		void RefreshNeedlePosition();
		void InitMeterSize();
		void RefreshAllBulbColors();
		void InitializePanelParts();
		bool GetInteractionPawnLocation(class ARBPawn* Pawn, ESpecialMove specialMove, struct FVector* OutLocation, struct FVector* outDirection);
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void Event_OnResetStage();
		void BP_OnPawnInteractingChanged(class ARBPawn* newPawnInteracting);
		void OnTickEnabledChanged_Event(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting);
		void OnTriggeredBulbIndexChanged();
		void Event_OnInputEvent(class ARBPlayer* Player, int32_t targetIndex, float Timestamp, ETimingInputResultType Result);
		void Event_OnTargetInfoChanged();
		void Event_OnInteractionAnimationDone();
		void PostToggled(bool bToggleEnabled);
		void ExecuteUbergraph_ZoneTimingPanelComponent_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
