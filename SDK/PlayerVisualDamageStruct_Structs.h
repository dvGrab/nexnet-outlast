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
	 * UserDefinedStruct PlayerVisualDamageStruct.PlayerVisualDamageStruct
	 * Size -> 0x0020
	 */
	struct FPlayerVisualDamageStruct
	{
	public:
		TArray<class FName>                                        Bones_6_C747AE5A46548E83D42A21B4570211CB;                // 0x0000(0x0010) Edit, BlueprintVisible
		float                                                      Radius_7_785CDE8147D9F592EF8146ACE61C83F7;               // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DamageIntensity_10_ECC126F447F4594065D7469A6C6865B2;     // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumHits_13_FF1B16D046E438A9513ABE89CA040125;             // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    StartingIndex_16_C0C46E6A482364B5192E12B1A9DFC5C7;       // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
