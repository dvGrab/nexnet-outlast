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
	 * BlueprintGeneratedClass BodyArmsDefinition.BodyArmsDefinition_C
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UBodyArmsDefinition_C : public UPrimaryDataAsset
	{
	public:
		struct FBodyOutfitElement                                  LeftArm;                                                 // 0x0030(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FBodyOutfitElement                                  RightArm;                                                // 0x0048(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
