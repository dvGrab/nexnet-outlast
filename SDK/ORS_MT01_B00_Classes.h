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
	 * BlueprintGeneratedClass ORS_MT01_B00.ORS_MT01_B00_C
	 * Size -> 0x0048 (FullSize[0x02A0] - InheritedSize[0x0258])
	 */
	class AORS_MT01_B00_C : public ARBLevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0258(0x0008) ZeroConstructor, Transient, DuplicateTransient
		unsigned char                                              RollingGates[0x10];                                      // 0x0260(0x0010) UNKNOWN PROPERTY: ArrayProperty
		TArray<int32_t>                                            RandomlySelectedMatchingGates;                           // 0x0270(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class AAvellanos__BP_C*                                    Avellanos__BP_2_ExecuteUbergraph_ORS_MT01_B00_RefProperty; // 0x0280(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AAvellanos__BP_C*                                    Avellanos__BP2_5_ExecuteUbergraph_ORS_MT01_B00_RefProperty; // 0x0288(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBPlayerTriggerVolume*                              RBPlayerTriggerVolume2_3_ExecuteUbergraph_ORS_MT01_B00_RefProperty; // 0x0290(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBPlayerTriggerVolume*                              RBPlayerTriggerVolume3_6_ExecuteUbergraph_ORS_MT01_B00_RefProperty; // 0x0298(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnStageReady(const struct FRBStageID& StageID, const struct FRBMissionID& MissionID);
		void Event_OnResetStage();
		void BasementRandomGates();
		void BndEvt__ORS_MT01_B00_RBPlayerTriggerVolume_1_K2Node_ActorBoundEvent_1_OnPlayerTriggerVolumeTriggered__DelegateSignature(class URBPlayerTriggerComponent* Trigger);
		void BndEvt__ORS_MT01_B00_RBPlayerTriggerVolume2_3_K2Node_ActorBoundEvent_2_OnPlayerTriggerVolumeTriggered__DelegateSignature(class URBPlayerTriggerComponent* Trigger);
		void SoupeReady();
		void Avellanos1_Neutre();
		void BndEvt__ORS_MT01_B00_RBPlayerTriggerVolume3_6_K2Node_ActorBoundEvent_3_OnPlayerTriggerVolumeTriggered__DelegateSignature(class URBPlayerTriggerComponent* Trigger);
		void Avellanos1_Exit();
		void BndEvt__ORS_MT01_B00_ORS_MT01_B01_Simple_ObjCoord_K2Node_ActorBoundEvent_0_OnObjectiveCoordinatorCompleted__DelegateSignature(bool bIsJIP);
		void BndEvt__ORS_MT01_B00_ORS_MT01_B02_GatherAndDeliver_Bleach_K2Node_ActorBoundEvent_4_OnSingleObjectiveCompleted__DelegateSignature(class ARBBaseObjectiveCoordinator* coordinator, class AActor* Player, class AActor* objective);
		void BndEvt__ORS_MT01_B00_ORS_MT01_B03_Regroup_K2Node_ActorBoundEvent_5_OnObjectiveCoordinatorStarted__DelegateSignature();
		void BndEvt__ORS_MT01_B00_ORS_MT01_B03_Regroup_K2Node_ActorBoundEvent_6_OnObjectiveCoordinatorCompleted__DelegateSignature(bool bIsJIP);
		void BndEvt__ORS_MT01_B00_ORS_MT01_B03_Delay_ObjCoord_K2Node_ActorBoundEvent_7_OnObjectiveCoordinatorStarted__DelegateSignature();
		void BndEvt__ORS_MT01_B00_ORS_MT01_B03_ExitStage_K2Node_ActorBoundEvent_8_OnObjectiveCoordinatorStarted__DelegateSignature();
		void ExecuteUbergraph_ORS_MT01_B00(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
