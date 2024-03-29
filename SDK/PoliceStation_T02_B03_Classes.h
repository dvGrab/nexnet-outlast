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
	 * BlueprintGeneratedClass PoliceStation_T02_B03.PoliceStation_T02_B03_C
	 * Size -> 0x0038 (FullSize[0x0290] - InheritedSize[0x0258])
	 */
	class APoliceStation_T02_B03_C : public ARBLevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0258(0x0008) ZeroConstructor, Transient, DuplicateTransient
		unsigned char                                              snitchCellBlockingVolume[0x28];                          // 0x0260(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class ARBPlayerTriggerVolume*                              RBPlayerTriggerVolume_PS_T02_B03_BlockCell_ExecuteUbergraph_PoliceStation_T02_B03_RefProperty; // 0x0288(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void BndEvt__PoliceStation_T02_B03_PS_T02_B03_ObjCoord_03_GoTo_SnitchCell_K2Node_ActorBoundEvent_0_OnObjectiveCoordinatorStarted__DelegateSignature();
		void BndEvt__PoliceStation_T02_B03_PS_T02_B03_ObjCoord_03_GoTo_SnitchCell_K2Node_ActorBoundEvent_1_OnObjectiveCoordinatorCompleted__DelegateSignature(bool bIsJIP);
		void BndEvt__PoliceStation_T02_B03_RBPlayerTriggerVolume_PS_T02_B03_BlockCell_K2Node_ActorBoundEvent_6_OnPlayerTriggerVolumeTriggered__DelegateSignature(class URBPlayerTriggerComponent* Trigger);
		void ExecuteUbergraph_PoliceStation_T02_B03(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
