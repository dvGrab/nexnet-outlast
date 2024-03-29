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
	 * BlueprintGeneratedClass HandRail_Base_BP.HandRail_Base_BP_C
	 * Size -> 0x0002 (FullSize[0x0413] - InheritedSize[0x0411])
	 */
	class AHandRail_Base_BP_C : public AMeshPopulate_BP_C
	{
	public:
		EHandRail_End_ENU                                          FirstMesh;                                               // 0x0411(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EHandRail_End_ENU                                          LastMesh;                                                // 0x0412(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
