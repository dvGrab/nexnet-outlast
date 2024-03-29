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
	 * BlueprintGeneratedClass RollingDoorCounter_01_BP.RollingDoorCounter-01_BP_C
	 * Size -> 0x0038 (FullSize[0x0460] - InheritedSize[0x0428])
	 */
	class ARollingDoorCounter__BP_C : public ARBTriggerable
	{
	public:
		unsigned char                                              UnknownData_7XIJ[0x8];                                   // 0x0428(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0430(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class URBSoundComponent*                                   RB_Sound;                                                // 0x0438(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              WindowShutter;                                           // 0x0440(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Root;                                                    // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       StartMovingAkEvent;                                      // 0x0450(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       StopMovingAkEvent;                                       // 0x0458(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Close(bool bPlaySound);
		void Open(bool bPlaySound);
		void ReceiveBeginPlay();
		void Event_OnTriggered();
		void Event_OnUntriggered();
		void Event_SnapToState();
		void Shutter_SnapToState();
		void ExecuteUbergraph_RollingDoorCounter__BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
