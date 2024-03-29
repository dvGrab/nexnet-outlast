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
	 * UserDefinedStruct SimpleDestructibleSound_Stuc.SimpleDestructibleSound_Stuc
	 * Size -> 0x0010
	 */
	struct FSimpleDestructibleSound_Stuc
	{
	public:
		class UAkAudioEvent*                                       Sound_29_F145667A40528EE611AD4399B1A02425;               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       SoundStop_32_D135B7FA45E94BE4B4019993D9D39DA7;           // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
