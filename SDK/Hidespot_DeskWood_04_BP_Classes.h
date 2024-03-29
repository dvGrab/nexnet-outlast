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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass Hidespot_DeskWood_04_BP.Hidespot_DeskWood-04_BP_C
	 * Size -> 0x001F (FullSize[0x0758] - InheritedSize[0x0739])
	 */
	class AHidespot_DeskWood04_BP_C : public AHidespot_Desk_Base_BP_C
	{
	public:
		unsigned char                                              UnknownData_9A0Y[0x7];                                   // 0x0739(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                DeskWoodDrawer06;                                        // 0x0740(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                DeskWoodDrawer05;                                        // 0x0748(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                DeskWoodDrawer04;                                        // 0x0750(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void RandomizeDrawer(class USceneComponent* Component, int32_t Seed);
		void FlipRelativeLocation(class USceneComponent* Component, bool bFlipX, bool bFlixY, bool bFlipZ);
		void FlipDesk();
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
