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
	 * BlueprintGeneratedClass PoliceStation_T02_B02.PoliceStation_T02_B02_C
	 * Size -> 0x00F0 (FullSize[0x0348] - InheritedSize[0x0258])
	 */
	class APoliceStation_T02_B02_C : public ARBLevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0258(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class ARBWaypoint*>                                 coyleWaypoints;                                          // 0x0260(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		class ARBBot*                                              coyleParking;                                            // 0x0270(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ARBWaypoint*>                                 coyleFullWaypoint;                                       // 0x0278(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class ARBWaypoint*>                                 CoyleWaypointEndBasement;                                // 0x0288(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		unsigned char                                              Closetpourambient[0x28];                                 // 0x0298(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TArray<class AVolume*>                                     AllowedVolumes;                                          // 0x02C0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class AActor*>                                      PointList;                                               // 0x02D0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		unsigned char                                              MCloset_Basement[0x10];                                  // 0x02E0(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              Spline_AvellanosParking[0x28];                           // 0x02F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       Pointing;                                                // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P34B[0x7];                                   // 0x0319(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ARBRoomGroup*                                        RBRoomGroup_T02_B02_ExecuteUbergraph_PoliceStation_T02_B02_RefProperty; // 0x0320(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBDarknessVolume*                                   RBDarknessVolume_Parking_ExecuteUbergraph_PoliceStation_T02_B02_RefProperty; // 0x0328(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBPlayerTriggerVolume*                              RBPlayerTriggerVolumeAvellanos_3_ExecuteUbergraph_PoliceStation_T02_B02_RefProperty; // 0x0330(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AAvellanos01_BP_C*                                   AvellanosSnitchCell_BP_ExecuteUbergraph_PoliceStation_T02_B02_RefProperty; // 0x0338(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBAmbientSound*                                     VO_Scripted_Avellanos_GenericDirections_Down02_2_ExecuteUbergraph_PoliceStation_T02_B02_RefProperty; // 0x0340(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void BndEvt__PoliceStation_T02_B02_Generator_ObjCoord_BP_2_K2Node_ActorBoundEvent_4_OnObjectiveCoordinatorStarted__DelegateSignature();
		void BndEvt__PoliceStation_T02_B02_Generator_ObjCoord_BP_2_K2Node_ActorBoundEvent_5_OnObjectiveCoordinatorCompleted__DelegateSignature(bool bIsJIP);
		void PST02B02_StartBasementTV();
		void BndEvt__PoliceStation_T02_B02_RBPlayerTriggerVolume_PowerOff2_K2Node_ActorBoundEvent_0_OnPlayerTriggerVolumeTriggered__DelegateSignature(class URBPlayerTriggerComponent* Trigger);
		void B02_StartBasementExitLight();
		void B02_StartBasementExitLight_Off();
		void BndEvt__PoliceStation_T02_B02_RBPlayerTriggerVolumeAvellanos_3_K2Node_ActorBoundEvent_2_OnPlayerTriggerVolumeTriggered__DelegateSignature(class URBPlayerTriggerComponent* Trigger);
		void B02_JailAvellanosPointLeft();
		void B02_JailAvellanosCentered();
		void B02_JailAvellanosExit();
		void ExecuteUbergraph_PoliceStation_T02_B02(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
