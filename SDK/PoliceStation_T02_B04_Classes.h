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
	 * BlueprintGeneratedClass PoliceStation_T02_B04.PoliceStation_T02_B04_C
	 * Size -> 0x36D8 (FullSize[0x3930] - InheritedSize[0x0258])
	 */
	class APoliceStation_T02_B04_C : public ARBLevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0258(0x0008) ZeroConstructor, Transient, DuplicateTransient
		unsigned char                                              MonsterCloset_SpawnCoyleEasy[0x28];                      // 0x0260(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class ARBBot*                                              SpawnedCoyle;                                            // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ARBWaypoint*>                                 Coyle_PatrolPoints;                                      // 0x0290(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		class APushable_OnRail_Snitch_BP_C*                        Snitch;                                                  // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FAIConfigData                                       Coyle_Final;                                             // 0x02A8(0x11BC) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		unsigned char                                              UnknownData_ACGN[0x4];                                   // 0x1464(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              MonsterCloset_SpawnPouncer[0x28];                        // 0x1468(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       isGateUnlocked;                                          // 0x1490(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isCoyleTriggerPassed;                                    // 0x1491(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isCoyleSpawned;                                          // 0x1492(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D5AD[0x1];                                   // 0x1493(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAIConfigData                                       CoylePatrolTight;                                        // 0x1494(0x11BC) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FRBAIConditionSet                                   ConditionPusherSpawn;                                    // 0x2650(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		unsigned char                                              MonsterCloset_Pusher[0x28];                              // 0x2660(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              MonsterCloset_ProwlerBasement[0x28];                     // 0x2688(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FAIConfigData                                       Coyle_Final_Exit;                                        // 0x26B0(0x11BC) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		unsigned char                                              UnknownData_CBBD[0x4];                                   // 0x386C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              MonsterCloset_SpawnCoyleHard[0x28];                      // 0x3870(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              local_CoyleCloset[0x28];                                 // 0x3898(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class ARBLeashMarker*                                      local_CoyleLeash;                                        // 0x38C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      local_PusherTimer;                                       // 0x38C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8GYM[0x4];                                   // 0x38CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      CoyleInvestigateElectrocution;                           // 0x38D0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class ARBWaypoint*>                                 CoyleEndWaypointList;                                    // 0x38E0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		unsigned char                                              RollingDoorsVariators[0x10];                             // 0x38F0(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              RollingGates_RailFirst[0x28];                            // 0x3900(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class ARBRoomGroup*                                        RBRoomGroup_T02_B04_0_ExecuteUbergraph_PoliceStation_T02_B04_RefProperty; // 0x3928(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void BndEvt__PoliceStation_T02_B04_PushCart_ObjCoord_BP3_2_K2Node_ActorBoundEvent_0_OnObjectiveCoordinatorStarted__DelegateSignature();
		void BndEvt__PoliceStation_T02_B04_PS_T02_B04_ObjCoord_PushCart_Snitch_K2Node_ActorBoundEvent_2_OnObjectiveCoordinatorCompleted__DelegateSignature(bool bIsJIP);
		void BndEvt__PoliceStation_T02_B04_RBGameplayTriggerVolume_FirstGate_K2Node_ActorBoundEvent_6_OnGameplayTriggerEvent__DelegateSignature(class URBGameplayTriggerComponent* Trigger);
		void BndEvt__PoliceStation_T02_B04_RBGameplayTriggerVolume_SecondGate_K2Node_ActorBoundEvent_7_OnGameplayTriggerEvent__DelegateSignature(class URBGameplayTriggerComponent* Trigger);
		void BndEvt__PoliceStation_T02_B04_RBGameplayTriggerVolume_ThirdGate_K2Node_ActorBoundEvent_8_OnGameplayTriggerEvent__DelegateSignature(class URBGameplayTriggerComponent* Trigger);
		void PST02B04_CloseRailTV();
		void Cheat_SpawnEndCoyle();
		void BndEvt__PoliceStation_T02_B04_RBGameplayTriggerVolume_CoyleTrigger_K2Node_ActorBoundEvent_3_OnGameplayTriggerEvent__DelegateSignature(class URBGameplayTriggerComponent* Trigger);
		void B04_ActivateRollingDoorVariators();
		void OnFirstGateTriggered(bool IsOn, class ARBTriggerable* triggerable);
		void BndEvt__PoliceStation_T02_B04_RBGameplayTriggerVolume_FirstGate_K2Node_ActorBoundEvent_1_OnGameplayTriggerEvent__DelegateSignature(class URBGameplayTriggerComponent* Trigger);
		void ExecuteUbergraph_PoliceStation_T02_B04(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
