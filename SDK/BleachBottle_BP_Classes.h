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
	 * BlueprintGeneratedClass BleachBottle_BP.BleachBottle_BP_C
	 * Size -> 0x0004 (FullSize[0x096C] - InheritedSize[0x0968])
	 */
	class ABleachBottle_BP_C : public ABase_LargePickup_BP_C
	{
	public:
		int32_t                                                    SectionIndex;                                            // 0x0968(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		int32_t GetObjectiveTypeIndex();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
