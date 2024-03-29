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
	 * BlueprintGeneratedClass ChainFenceTopCorridor_01_BP.ChainFenceTopCorridor-01_BP_C
	 * Size -> 0x00FD (FullSize[0x04C8] - InheritedSize[0x03CB])
	 */
	class AChainFenceTopCorridor__BP_C : public AMeshPopulate_Parent_C
	{
	public:
		unsigned char                                              UnknownData_IOCH[0x5];                                   // 0x03CB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FModuleMeshData>                             GridMeshes;                                              // 0x03D0(0x0010) Edit, BlueprintVisible
		TArray<struct FModuleMeshData>                             MiddleBarMeshes;                                         // 0x03E0(0x0010) Edit, BlueprintVisible
		class UStaticMesh*                                         VerticalPoleStaticMesh;                                  // 0x03F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EChainFenceHookType                                        HookStart;                                               // 0x03F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EChainFenceHookType                                        HookEnd;                                                 // 0x03F9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       useLeftSideBar;                                          // 0x03FA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       useRightSideBar;                                         // 0x03FB(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       useVerticalPole;                                         // 0x03FC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       ZInverted;                                               // 0x03FD(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XPGV[0x2];                                   // 0x03FE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PoleNum;                                                 // 0x0400(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      zBarbwire;                                               // 0x0404(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FModuleMeshData>                             SideBarMeshesOO;                                         // 0x0408(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FModuleMeshData>                             SideBarMeshesOI;                                         // 0x0418(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FModuleMeshData>                             SideBarMeshesII;                                         // 0x0428(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FModuleMeshData>                             VerticalPoleStaticMeshes;                                // 0x0438(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    NumberOfMeshes;                                          // 0x0448(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       NoBarEnd;                                                // 0x044C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       NoBarStart;                                              // 0x044D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_I95B[0x2];                                   // 0x044E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FModuleMeshData>                             SideBarMeshStartRight;                                   // 0x0450(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FModuleMeshData>                             SideBarMeshesStartLeft;                                  // 0x0460(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       SideBarMeshesStartLeftInverted;                          // 0x0470(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PMY8[0x7];                                   // 0x0471(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FModuleMeshData>                             SideBarMeshEndRight;                                     // 0x0478(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FModuleMeshData>                             SideBarMeshEndLeft;                                      // 0x0488(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      BetaMeshSize;                                            // 0x0498(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Offset;                                                  // 0x049C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       BetaLastPass;                                            // 0x04A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       BetaLassPass;                                            // 0x04A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SideBarMeshesStartRightInverted;                         // 0x04AA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CastShadows;                                             // 0x04AB(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AlphaFirstSize;                                          // 0x04AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AlphaLastSize;                                           // 0x04B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      yMiddleLocation;                                         // 0x04B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MiddleSizeLeft;                                          // 0x04B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MiddleSizeLeft2;                                         // 0x04BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      yLastLocation;                                           // 0x04C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      yLastLocation2;                                          // 0x04C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void RowVariables(TArray<struct FModuleMeshData>* MeshesArray, float SizeLeft, float* TotalSize, float* TotalSize2, float* TotalSize3, float* FirstMeshSize, float* MiddleSizeLeft, float* MiddleSizeLeft2, float* LastMeshSize, int32_t* NumOfMeshes);
		void SetCastShadow(bool CastShadows);
		void setVariables();
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
