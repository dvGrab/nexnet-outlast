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
	 * BlueprintGeneratedClass PoliceStation_T02_B07.PoliceStation_T02_B07_C
	 * Size -> 0x0070 (FullSize[0x02C8] - InheritedSize[0x0258])
	 */
	class APoliceStation_T02_B07_C : public ARBLevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0258(0x0008) ZeroConstructor, Transient, DuplicateTransient
		unsigned char                                              Light_ExitStageButton[0x28];                             // 0x0260(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       isButtonPrezOn;                                          // 0x0288(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_THUZ[0x7];                                   // 0x0289(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              TV_Entrance[0x28];                                       // 0x0290(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class ARBPlayerTriggerVolume*                              RBPlayerTriggerVolume_B07_AvellanosEndTrigger_SAS_ExecuteUbergraph_PoliceStation_T02_B07_RefProperty; // 0x02B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBPlayerTriggerVolume*                              RBPlayerTriggerVolume_B07_AvellanosEndTrigger_Jail_ExecuteUbergraph_PoliceStation_T02_B07_RefProperty; // 0x02C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void BndEvt__PoliceStation_T02_B07_PS_T02_B07_ObjCoord_ExitStage_K2Node_ActorBoundEvent_1_OnObjectiveCoordinatorStarted__DelegateSignature();
		void BndEvt__PoliceStation_T02_B07_RBPlayerTriggerVolume_B07_AvellanosEndTrigger_K2Node_ActorBoundEvent_0_OnPlayerTriggerVolumeTriggered__DelegateSignature(class URBPlayerTriggerComponent* Trigger);
		void BndEvt__PoliceStation_T02_B07_RBPlayerTriggerVolume_B07_AvellanosEndTrigger_Jail_K2Node_ActorBoundEvent_2_OnPlayerTriggerVolumeTriggered__DelegateSignature(class URBPlayerTriggerComponent* Trigger);
		void ExecuteUbergraph_PoliceStation_T02_B07(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
