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
	 * BlueprintGeneratedClass Clue_NarrativeScreen_BP.Clue_NarrativeScreen_BP_C
	 * Size -> 0x0010 (FullSize[0x03C0] - InheritedSize[0x03B0])
	 */
	class AClue_NarrativeScreen_BP_C : public ANarrativeScreen01_BP_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class URBPlayerInvestigationZoneComponent*                 RBPlayerInvestigationZone;                               // 0x03B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		class URBPlayerInvestigationZoneComponent* GetAssociatedInvestigationComponent();
		struct FClueData GetClue();
		void SetClue(const struct FClueData& ClueData);
		void ExecuteUbergraph_Clue_NarrativeScreen_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
