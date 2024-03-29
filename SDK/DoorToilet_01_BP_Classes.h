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
	 * BlueprintGeneratedClass DoorToilet_01_BP.DoorToilet-01_BP_C
	 * Size -> 0x0037 (FullSize[0x1040] - InheritedSize[0x1009])
	 */
	class ADoorToilet__BP_C : public ADestructible_DoorBase_BP_C
	{
	public:
		unsigned char                                              UnknownData_GMX9[0x7];                                   // 0x1009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          PadLockTransform;                                        // 0x1010(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
