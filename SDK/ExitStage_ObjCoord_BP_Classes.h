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
	 * BlueprintGeneratedClass ExitStage_ObjCoord_BP.ExitStage_ObjCoord_BP_C
	 * Size -> 0x0030 (FullSize[0x2280] - InheritedSize[0x2250])
	 */
	class AExitStage_ObjCoord_BP_C : public ARBExitStageObjectiveCoordinator
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x2250(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FNarrativeScreenAnimationData                       CountdownAnimation;                                      // 0x2258(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		int32_t                                                    CurrentCountdownTime;                                    // 0x2270(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CountdownTextScale;                                      // 0x2274(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CountdownMinuteTextScale;                                // 0x2278(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TrainArrivalTime;                                        // 0x227C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void PlayCountdownVO();
		void SetTrainArrivalTime(int32_t Time);
		void SetCountdownTime(int32_t Time);
		void Event_OnCoordinatorStateChanged(EObjectiveCoordinatorState oldState, EObjectiveCoordinatorState newState);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void Event_OnExitStageObjectiveStateChanged(EExitStageObjectiveState objectiveState);
		void ReceiveTick(float DeltaSeconds);
		void Event_OnResetStage();
		void ExecuteUbergraph_ExitStage_ObjCoord_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
