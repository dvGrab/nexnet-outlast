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
	 * BlueprintGeneratedClass TG_Coyle_Flash_01_Seq.SequenceDirector_C
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USequenceDirector_C : public ULevelSequenceDirector
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0038(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USequenceDirector_C*                                 Self_1;                                                  // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SequenceEvent__ENTRYPOINTSequenceDirector_2(class ACineCoyle01_BP_C* DrugCoyle);
		void SequenceEvent__ENTRYPOINTSequenceDirector_1(class ACineCoyle01_BP_C* DrugCoyle);
		void DrugCoyle_Event_1(class ACineCoyle01_BP_C* DrugCoyle, class UAnimationAsset* NewAnimToPlay);
		void DrugCoyle_Event_2(class ACineCoyle01_BP_C* DrugCoyle, class UAnimSequence* Anim, float Time);
		void ExecuteUbergraph_SequenceDirector(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
