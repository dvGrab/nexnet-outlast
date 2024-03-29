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
	 * UserDefinedStruct SimpleDestructibleStage_Stuc.SimpleDestructibleStage_Stuc
	 * Size -> 0x005A
	 */
	struct FSimpleDestructibleStage_Stuc
	{
	public:
		float                                                      HitsPoint_15_733E3EDC4A483A7A8FEFDE9ABCB7005F;           // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NMH3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSimpleDestructibleMeshes_Stuc>              Meshes_26_F145667A40528EE611AD4399B1A02425;              // 0x0008(0x0010) Edit, BlueprintVisible, ContainsInstancedReference
		TArray<struct FSimpleDestructiblePhysicalMesh_Stuc>        PhysicalMeshes_37_0EB5630540147F6E082CEE97235A8A40;      // 0x0018(0x0010) Edit, BlueprintVisible, ContainsInstancedReference
		TArray<struct FSimpleDestructibleParticles_Stuc>           Particles_27_BE02A85A4D672EC0EE0753BA5DB32250;           // 0x0028(0x0010) Edit, BlueprintVisible, ContainsInstancedReference
		TArray<struct FSimpleDestructibleLights_Stuc>              BlastLights_39_9AE6958344F75C364E9562A04E8777CC;         // 0x0038(0x0010) Edit, BlueprintVisible, ContainsInstancedReference
		TArray<struct FSimpleDestructibleSound_Stuc>               Sound_33_9FA9A92645BAF9D9E2669E838F860110;               // 0x0048(0x0010) Edit, BlueprintVisible, ContainsInstancedReference
		bool                                                       ToggleOnOff_43_54B4F87C4F1788F26F35D58FA64AC0BA;         // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       ApplyImpulseOnHit_41_9D5053AD4710F724E18443A473774E17;   // 0x0059(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
