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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct SoundTrap_Stuc.SoundTrap_Stuc
	 * Size -> 0x0044
	 */
	struct FSoundTrap_Stuc
	{
	public:
		TArray<class UStaticMesh*>                                 StaticMesh_9_C101FABA4058DA7E2E477A8670FB3496;           // 0x0000(0x0010) Edit, BlueprintVisible
		struct FTransform                                          Transform_5_D688841147DB42BCC71F2B87B1F8E3CE;            // 0x0010(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		int32_t                                                    Bones_8_217A515147D49200F66D828FF3005018;                // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
