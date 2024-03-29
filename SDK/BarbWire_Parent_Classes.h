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
	 * BlueprintGeneratedClass BarbWire_Parent.BarbWire_Parent_C
	 * Size -> 0x0027 (FullSize[0x03F2] - InheritedSize[0x03CB])
	 */
	class ABarbWire_Parent_C : public AMeshPopulate_Parent_C
	{
	public:
		unsigned char                                              UnknownData_4RGA[0x5];                                   // 0x03CB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FModuleMeshData>                             BarbwireMeshes;                                          // 0x03D0(0x0010) Edit, BlueprintVisible
		TArray<struct FModuleMeshData>                             PostMeshes;                                              // 0x03E0(0x0010) Edit, BlueprintVisible
		bool                                                       UseLastPost;                                             // 0x03F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EMeshPopulateDirection                                     Direction;                                               // 0x03F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
