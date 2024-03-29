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
	 * BlueprintGeneratedClass PoliceStation_T02_B06.PoliceStation_T02_B06_C
	 * Size -> 0x0148 (FullSize[0x03A0] - InheritedSize[0x0258])
	 */
	class APoliceStation_T02_B06_C : public ARBLevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0258(0x0008) ZeroConstructor, Transient, DuplicateTransient
		unsigned char                                              WitnessShutter01[0x28];                                  // 0x0260(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              WitnessShutter02[0x28];                                  // 0x0288(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              WitnessShutter03[0x28];                                  // 0x02B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              WitnessShutter04[0x28];                                  // 0x02D8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              WitnessShutter05[0x28];                                  // 0x0300(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              WitnessShutter06[0x28];                                  // 0x0328(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              WitnessShutter07[0x28];                                  // 0x0350(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              WitnessShutter08[0x28];                                  // 0x0378(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void BndEvt__PoliceStation_T02_B06_PoliceStation_Trial2_ElectrocutionCoord_BP_2_K2Node_ActorBoundEvent_0_OnObjectiveCoordinatorStarted__DelegateSignature();
		void BndEvt__PoliceStation_T02_B06_PS_T02_B06_ElectrocutionCoord_BP_K2Node_ActorBoundEvent_1_OnObjectiveCoordinatorCompleted__DelegateSignature(bool bIsJIP);
		void PST02B06_ManageExecution_TV(bool TVState);
		void ExecuteUbergraph_PoliceStation_T02_B06(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
