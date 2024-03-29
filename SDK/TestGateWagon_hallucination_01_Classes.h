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
	 * BlueprintGeneratedClass TestGateWagon_hallucination_01.TestGateWagon-hallucination-01_C
	 * Size -> 0x0648 (FullSize[0x08A0] - InheritedSize[0x0258])
	 */
	class ATestGateWagon_hallucination__C : public ARBLevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0258(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FVector                                             ENtityBlurTL_NewTrack_0_55BF1A1E4ED79C429F892BA1BB98B2DF; // 0x0260(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         ENtityBlurTL__Direction_55BF1A1E4ED79C429F892BA1BB98B2DF; // 0x026C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_16MP[0x3];                                   // 0x026D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  ENtityBlurTL;                                            // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KRAL[0x8];                                   // 0x0278(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPostProcessSettings                                Settings;                                                // 0x0280(0x05C0) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       DrugSequenceStarted;                                     // 0x0840(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J5PL[0x7];                                   // 0x0841(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              RB_Sas[0x28];                                            // 0x0848(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class ALevelSequenceActor*                                 BeginSeq;                                                // 0x0870(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ALevelSequenceActor*                                 EnvSeq;                                                  // 0x0878(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ALevelSequenceActor*                                 MiddleSeq;                                               // 0x0880(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ALevelSequenceActor*                                 EndSeq;                                                  // 0x0888(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBFXControlActor*                                   RBFXControlActor_1_ExecuteUbergraph_TestGateWagon_hallucination__RefProperty; // 0x0890(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APostProcessVolume*                                  DrugPost_ExecuteUbergraph_TestGateWagon_hallucination__RefProperty; // 0x0898(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetLevelSequencers();
		void SetPivotRefRelativeToChair();
		void Get_Player_Chair_Location(class ARBSAS* Target, class URBSASChairPanelComponent** Chair);
		void ENtityBlurTL__FinishedFunc();
		void ENtityBlurTL__UpdateFunc();
		void DrugMiddle();
		void DrugEnd();
		void StartFXController();
		void StopFXController();
		void OnDrugEndStop();
		void OnDrugSequenceStop();
		void DrugStart();
		void EnableDrugPostProcess();
		void DisableDrugPostProcess();
		void ReceiveBeginPlay();
		void OnGameStageInfoChanged(const struct FRBGameStageInfo& gameStageInfo);
		void InitDrugSequence();
		void bpiBlurEntity();
		void ExecuteUbergraph_TestGateWagon_hallucination(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
