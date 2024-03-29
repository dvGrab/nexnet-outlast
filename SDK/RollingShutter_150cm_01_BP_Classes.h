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
	 * BlueprintGeneratedClass RollingShutter_150cm_01_BP.RollingShutter-150cm-01_BP_C
	 * Size -> 0x0020 (FullSize[0x0438] - InheritedSize[0x0418])
	 */
	class ARollingShutter150cm01_BP_C : public ARBTriggerable
	{
	public:
		unsigned char                                              UnknownData_4NG9[0x8];                                   // 0x0418(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0420(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              WindowShutter;                                           // 0x0428(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Root;                                                    // 0x0430(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void Close(bool bPlaySound);
		void Open(bool bPlaySound);
		void ReceiveBeginPlay();
		void Event_OnTriggered();
		void Event_OnUntriggered();
		void Event_SnapToState();
		void ShutterSnapToState();
		void ExecuteUbergraph_RollingShutter150cm01_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
