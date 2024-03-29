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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct SimpleDestructibleLights_Stuc.SimpleDestructibleLights_Stuc
	 * Size -> 0x0044
	 */
	struct FSimpleDestructibleLights_Stuc
	{
	public:
		struct FTransform                                          Transform_35_BE02A85A4D672EC0EE0753BA5DB32250;           // 0x0000(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		struct FLinearColor                                        Color_34_126C9C9A407DAA940612D9A3ECBF4995;               // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Intensity_33_892237444996609AAE542090551DA063;           // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
