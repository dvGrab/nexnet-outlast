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
	 * UserDefinedStruct SimpleDestructibleParticles_Stuc.SimpleDestructibleParticles_Stuc
	 * Size -> 0x0042
	 */
	struct FSimpleDestructibleParticles_Stuc
	{
	public:
		class UParticleSystem*                                     Particles_31_BE02A85A4D672EC0EE0753BA5DB32250;           // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8MPQ[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform_29_733E3EDC4A483A7A8FEFDE9ABCB7005F;           // 0x0010(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		bool                                                       UseDestroyerRotation_34_7483BC0C4383043DE50CC3844A7EAA51; // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       KeeptoNextStages_37_191C83EC4F90FEEF291306A4C0544BD0;    // 0x0041(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
