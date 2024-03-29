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
	 * BlueprintGeneratedClass MurkoffCatWalk_01_BP.MurkoffCatWalk-01_BP_C
	 * Size -> 0x002F (FullSize[0x0440] - InheritedSize[0x0411])
	 */
	class AMurkoffCatWalk__BP_C : public AMeshPopulate_BP_C
	{
	public:
		unsigned char                                              UnknownData_0YTC[0x7];                                   // 0x0411(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FModuleMeshData>                             Grid;                                                    // 0x0418(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       UseRightFence;                                           // 0x0428(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       UseLeftFence;                                            // 0x0429(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_53KN[0x6];                                   // 0x042A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         MeshCross;                                               // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         MeshEnd;                                                 // 0x0438(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
