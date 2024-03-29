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
	 * BlueprintGeneratedClass Floor_BP.Floor_BP_C
	 * Size -> 0x0055 (FullSize[0x0420] - InheritedSize[0x03CB])
	 */
	class AFloor_BP_C : public AMeshPopulate_Parent_C
	{
	public:
		unsigned char                                              UnknownData_2MMK[0x5];                                   // 0x03CB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FModuleMeshData>                             FloorMeshes;                                             // 0x03D0(0x0010) Edit, BlueprintVisible
		bool                                                       UseFloor;                                                // 0x03E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       UseCeiling;                                              // 0x03E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       UseBaseFloor;                                            // 0x03E2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AUNW[0x5];                                   // 0x03E3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FModuleMeshData>                             BottomFloorMeshes00;                                     // 0x03E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FModuleMeshData>                             BottomFloorMeshes01;                                     // 0x03F8(0x0010) Edit, BlueprintVisible
		TArray<struct FModuleMeshData>                             BottomFloorMeshes02;                                     // 0x0408(0x0010) Edit, BlueprintVisible
		bool                                                       UseShadowMesh;                                           // 0x0418(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_M8BT[0x3];                                   // 0x0419(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ShadowZ;                                                 // 0x041C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
