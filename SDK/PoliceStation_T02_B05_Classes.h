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
	 * BlueprintGeneratedClass PoliceStation_T02_B05.PoliceStation_T02_B05_C
	 * Size -> 0x0118 (FullSize[0x0370] - InheritedSize[0x0258])
	 */
	class APoliceStation_T02_B05_C : public ARBLevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0258(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       bGateObjectiveInitiated;                                 // 0x0260(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZUQX[0x7];                                   // 0x0261(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              KeyDoor00[0x28];                                         // 0x0268(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              KeyDoor01[0x28];                                         // 0x0290(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              KeyDoor02[0x28];                                         // 0x02B8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              KeyDoor03[0x28];                                         // 0x02E0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              NoKeyTrackGate_01[0x28];                                 // 0x0308(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              TV_FirstGate[0x28];                                      // 0x0330(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class ARBRoomGroup*                                        RBRoomGroup_T02_B04_FirstCorpseRoom_ExecuteUbergraph_PoliceStation_T02_B05_RefProperty; // 0x0358(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBRoomGroup*                                        RBRoomGroup_ExecutionRoom_ExecuteUbergraph_PoliceStation_T02_B05_RefProperty; // 0x0360(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBPlayerTriggerVolume*                              RBPlayerTriggerVolume_B05a_ReachFirstGate_ExecuteUbergraph_PoliceStation_T02_B05_RefProperty; // 0x0368(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void BndEvt__PoliceStation_T02_B05_PS_T02_B05_ObjCoord_QuestItem_GateKeys_K2Node_ActorBoundEvent_2_OnObjectiveCoordinatorCompleted__DelegateSignature(bool bIsJIP);
		void OnLastGateOpened(bool IsOn, class ARBTriggerable* triggerable);
		void BndEvt__PoliceStation_T02_B05_PS_T02_B05_ObjCoord_QuestItem_FirstGateKeys_K2Node_ActorBoundEvent_3_OnObjectiveCoordinatorStarted__DelegateSignature();
		void BndEvt__PoliceStation_T02_B05_PS_T02_B05_ObjCoord_QuestItem_AllGateKeys_K2Node_ActorBoundEvent_4_OnObjectiveCoordinatorStarted__DelegateSignature();
		void Cheat_OpenLockedGates();
		void OnSecondGateOpened(bool IsOn, class ARBTriggerable* triggerable);
		void B05_FirstGateInvestigationDone(class URBPlayerInvestigationZoneComponent* Component);
		void B05_ActivateFirstGateTrigger();
		void OnThirdGateOpened(bool IsOn, class ARBTriggerable* triggerable);
		void ExecuteUbergraph_PoliceStation_T02_B05(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
