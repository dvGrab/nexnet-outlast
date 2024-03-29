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
	 * BlueprintGeneratedClass PoliceStation_Trial2_QuestItem_Base_BP.PoliceStation_Trial2_QuestItem_Base_BP_C
	 * Size -> 0x0010 (FullSize[0x0B98] - InheritedSize[0x0B88])
	 */
	class APoliceStation_Trial2_QuestItem_Base_BP_C : public ASmallGatherDeliver_QuestItem_BP_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0B88(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FClueData                                           AssociatedClue;                                          // 0x0B90(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		class URBPlayerInvestigationZoneComponent* GetAssociatedInvestigationComponent();
		struct FClueData GetClue();
		void SetClue(const struct FClueData& ClueData);
		void ExecuteUbergraph_PoliceStation_Trial2_QuestItem_Base_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
