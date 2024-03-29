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
	 * BlueprintGeneratedClass TG_Intro_02_Seq.SequenceDirector_C
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class USequenceDirector_C : public ULevelSequenceDirector
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0038(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void SequenceEvent__ENTRYPOINTSequenceDirector_3();
		void SequenceEvent__ENTRYPOINTSequenceDirector_2();
		void SequenceEvent__ENTRYPOINTSequenceDirector_1();
		void CloseLights();
		void Stop_Drug_Particles();
		void StartDrugParticles();
		void bpiBlurEntity();
		void StartDrugSpray();
		void StopDrugSpray();
		void CloseLight();
		void ExecuteUbergraph_SequenceDirector(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
