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
	 * BlueprintGeneratedClass MaxStaminaBoost_BP.MaxStaminaBoost_BP_C
	 * Size -> 0x0018 (FullSize[0x0A08] - InheritedSize[0x09F0])
	 */
	class AMaxStaminaBoost_BP_C : public ASimpleMesh_Pickup_BP_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x09F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      ConsumeTimeline_NewTrack_0_E36C6E9F4B838C52FC8F1D9D56902A7C; // 0x09F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         ConsumeTimeline__Direction_E36C6E9F4B838C52FC8F1D9D56902A7C; // 0x09FC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PRJ8[0x3];                                   // 0x09FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  ConsumeTimeline;                                         // 0x0A00(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ConsumeTimeline__FinishedFunc();
		void ConsumeTimeline__UpdateFunc();
		void OnConsumeItemNotify(class ARBPawn* Pawn);
		void OnConsumeItemCancelledNotify(class ARBPawn* Pawn);
		void ExecuteUbergraph_MaxStaminaBoost_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
