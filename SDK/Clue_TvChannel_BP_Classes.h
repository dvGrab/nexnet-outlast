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
	 * BlueprintGeneratedClass Clue_TvChannel_BP.Clue_TvChannel_BP_C
	 * Size -> 0x0027 (FullSize[0x0498] - InheritedSize[0x0471])
	 */
	class AClue_TvChannel_BP_C : public AtvChannel_BP_C
	{
	public:
		unsigned char                                              UnknownData_F58Y[0x7];                                   // 0x0471(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0478(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FClueData                                           Clue;                                                    // 0x0480(0x0008) Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify, NoDestructor
		class FName                                                EmptyName;                                               // 0x0488(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AClue_NarrativeScreen_BP_C*                          MasterInvestigationTV;                                   // 0x0490(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash

	public:
		class URBPlayerInvestigationZoneComponent* GetAssociatedInvestigationComponent();
		struct FClueData GetClue();
		void OnRep_MasterInvestigationTV();
		void UpdateClueText();
		void GetInvestigationZone(class URBPlayerInvestigationZoneComponent** InvestigationZone);
		void SetInvestigationZoneEnabled(bool Enabled);
		void HasValidClue(bool* IsValid);
		void HideClue();
		void ShowClue();
		void OnRep_Clue();
		void SetClue(const struct FClueData& ClueData);
		void Event_OnResetStage();
		void Event_OnLinkedScreenAdded(class ARBNarrativeScreen* linkedScreen);
		void ExecuteUbergraph_Clue_TvChannel_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
