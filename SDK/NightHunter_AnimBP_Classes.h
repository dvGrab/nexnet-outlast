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
	 * AnimBlueprintGeneratedClass NightHunter_AnimBP.NightHunter_AnimBP_C
	 * Size -> 0x0008 (FullSize[0x9200] - InheritedSize[0x91F8])
	 */
	class UNightHunter_AnimBP_C : public Ugrunt_h1_AnimBP_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x91F8(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnInDarknessChange();
		void Event_OnInDarknessChanged();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_NightHunter_AnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
