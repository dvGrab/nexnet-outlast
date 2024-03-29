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
	 * BlueprintGeneratedClass ChainFence_01_BP.ChainFence-01_BP_C
	 * Size -> 0x00CA (FullSize[0x0495] - InheritedSize[0x03CB])
	 */
	class AChainFence__BP_C : public AMeshPopulate_Parent_C
	{
	public:
		unsigned char                                              UnknownData_KC0U[0x5];                                   // 0x03CB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FModuleMeshData>                             PolesMeshes;                                             // 0x03D0(0x0010) Edit, BlueprintVisible
		TArray<struct FModuleMeshData>                             FirstPolesMeshes;                                        // 0x03E0(0x0010) Edit, BlueprintVisible
		TArray<struct FModuleMeshData>                             LastPolesMeshes;                                         // 0x03F0(0x0010) Edit, BlueprintVisible
		TArray<struct FModuleMeshData>                             GridMeshes;                                              // 0x0400(0x0010) Edit, BlueprintVisible
		TArray<struct FModuleMeshData>                             MidVerticalPoleMeshes;                                   // 0x0410(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FModuleMeshData>                             SidePoleMeshes;                                          // 0x0420(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       useTopPole;                                              // 0x0430(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       useVerticalPole;                                         // 0x0431(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       useFirstVerticalPole;                                    // 0x0432(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       useLastVerticalPole;                                     // 0x0433(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       InvertLastVerticalPole;                                  // 0x0434(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SQKP[0x3];                                   // 0x0435(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      zSidePole;                                               // 0x0438(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       useBarbWire;                                             // 0x043C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_87HE[0x3];                                   // 0x043D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             GridOffset;                                              // 0x0440(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bActiveState;                                            // 0x044C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EL93[0x3];                                   // 0x044D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FModuleMeshData>                             BarbwiresMeshes;                                         // 0x0450(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      Alpha_Scale;                                             // 0x0460(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7IL3[0x4];                                   // 0x0464(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FModuleMeshData>                             FirstVerticalPoleMeshes;                                 // 0x0468(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FModuleMeshData>                             LastVerticalPoleMeshes;                                  // 0x0478(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FVector                                             PoleOffset;                                              // 0x0488(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       usePoleGizmo;                                            // 0x0494(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void FindAlphaScale(TArray<struct FModuleMeshData>* Array, float* AlphaScale);
		void MakePoleArray(TArray<struct FModuleMeshData>* SourceDefault, TArray<struct FModuleMeshData>* Source, TArray<struct FModuleMeshData> Target);
		void SetAutomaticCollisionMeshExclusions();
		bool GetStateName(class FString* stateA, class FString* stateB);
		bool IsStateA();
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
