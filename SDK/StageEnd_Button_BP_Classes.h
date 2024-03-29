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
	 * BlueprintGeneratedClass StageEnd_Button_BP.StageEnd_Button_BP_C
	 * Size -> 0x003B (FullSize[0x0358] - InheritedSize[0x031D])
	 */
	class AStageEnd_Button_BP_C : public ABase_Movable_Button_BP_C
	{
	public:
		unsigned char                                              UnknownData_XBT2[0x3];                                   // 0x031D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0320(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              Minute_1;                                                // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Second_00;                                               // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Second_1;                                                // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Minute_00;                                               // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentTime;                                             // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Time_Before_Damage_At_End_Of_Stage;                      // 0x0354(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetTrainArrivalTime(float Time);
		void Update_Time(int32_t Time);
		void ReceiveBeginPlay();
		void Event_OnResetStage();
		void WakeTimerMeshes();
		void BndEvt__StageEnd_Button_BP_ButtonPressComponent_K2Node_ComponentBoundEvent_2_OnInteractionEvent__DelegateSignature(class ARBPawn* interactor, class URBInteractibleComponent* Component);
		void BndEvt__StageEnd_Button_BP_ButtonPressComponent_K2Node_ComponentBoundEvent_3_OnEnabledChanged__DelegateSignature(class URBInteractionZoneComponent* Component);
		void ExecuteUbergraph_StageEnd_Button_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
