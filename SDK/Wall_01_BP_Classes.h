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
	 * BlueprintGeneratedClass Wall_01_BP.Wall-01_BP_C
	 * Size -> 0x01C5 (FullSize[0x0590] - InheritedSize[0x03CB])
	 */
	class AWall__BP_C : public AMeshPopulate_Parent_C
	{
	public:
		bool                                                       FinishWithInbetween;                                     // 0x03CB(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    NumOfInBetween;                                          // 0x03CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseInbetweenSpace;                                       // 0x03D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       HideInbetweenMeshes;                                     // 0x03D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IOZN[0x2];                                   // 0x03D2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CurrentInbetweenSize;                                    // 0x03D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FModuleMeshData>                             WallPlank;                                               // 0x03D8(0x0010) Edit, BlueprintVisible
		TArray<struct FModuleMeshData>                             WallFrame;                                               // 0x03E8(0x0010) Edit, BlueprintVisible
		TArray<struct FModuleMeshData>                             WallFullFrame;                                           // 0x03F8(0x0010) Edit, BlueprintVisible
		bool                                                       UseBottomMolding;                                        // 0x0408(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       UseBottomMoldingInv;                                     // 0x0409(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       UseUpperMolding;                                         // 0x040A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       UseUpperMoldingInv;                                      // 0x040B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       UseBottomUpperExtreme;                                   // 0x040C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0VLF[0x3];                                   // 0x040D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FModuleMeshData>                             WallMeshes02A;                                           // 0x0410(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FModuleMeshData>                             WallMeshes02B;                                           // 0x0420(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FModuleMeshData>                             InBetweenMeshes;                                         // 0x0430(0x0010) Edit, BlueprintVisible
		TArray<struct FModuleMeshData>                             InBetweenMeshes02;                                       // 0x0440(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FModuleMeshData>                             BottomMeshes;                                            // 0x0450(0x0010) Edit, BlueprintVisible
		TArray<struct FModuleMeshData>                             BottomMeshes02;                                          // 0x0460(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FModuleMeshData>                             UpperMeshes;                                             // 0x0470(0x0010) Edit, BlueprintVisible
		TArray<struct FModuleMeshData>                             UpperMeshes02;                                           // 0x0480(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      InbetweenSizeTotal;                                      // 0x0490(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SecondTotal;                                             // 0x0494(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseTopPlank;                                             // 0x0498(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EWallSide_Enu                                              WallA;                                                   // 0x0499(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EWallSide_Enu                                              WallB;                                                   // 0x049A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseFullFrame;                                            // 0x049B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UseWallB;                                                // 0x049C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UseWallA;                                                // 0x049D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EWallEnd_Enu                                               WallEnd01;                                               // 0x049E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EWallEnd_Enu                                               WallEnd02;                                               // 0x049F(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bActiveState;                                            // 0x04A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_R6NY[0x3];                                   // 0x04A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ExtremeTopZ;                                             // 0x04A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FModuleMeshData>                             TopPlank;                                                // 0x04A8(0x0010) Edit, BlueprintVisible
		float                                                      WallHeight;                                              // 0x04B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InbetweenSize;                                           // 0x04BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         CornerInt;                                               // 0x04C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         CornerExt;                                               // 0x04C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         CornerFrameInt;                                          // 0x04D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         CornerFrameExt;                                          // 0x04D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         CornerFullFrameInt;                                      // 0x04E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         CornerFullFrameExt;                                      // 0x04E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         InBetweenMeshesCorners;                                  // 0x04F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         InBetweenMeshesT;                                        // 0x04F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseOverwriteOnlyOnWall;                                  // 0x0500(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SUUP[0x7];                                   // 0x0501(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         TopPlankCorner;                                          // 0x0508(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxScaledSecondSide;                                     // 0x0510(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             GapSize;                                                 // 0x0514(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             TotalGapSize;                                            // 0x0520(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             WallOffset;                                              // 0x052C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         WallBottomCornerInt;                                     // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         WallBottomCornerExt;                                     // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         WallTopCornerInt;                                        // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         WallTopCornerExt;                                        // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             WallScale;                                               // 0x0558(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SideWallOffset;                                          // 0x0564(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             InBetOffset;                                             // 0x0568(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             InBetScale;                                              // 0x0574(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         WallEndNormal;                                           // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         WallEndNormal2;                                          // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AddAutomaticBoxCollisionExcludedStaticMeshes();
		void InvertYminus(const struct FVector& LastLocation);
		void InvertXminus();
		void SetInbetween(TArray<struct FStaticmeshArray_Stuc>* NewParam);
		void Add_Inbetween_Row();
		void AddGap(TArray<struct FStaticmeshArray_Stuc>* NewParam);
		void SetGap(TArray<struct FModuleMeshData>* WallMeshes02A, EMeshPopulateDirection Direction, int32_t* NumberOfInbetween, float* TotalInbetweenSize, struct FVector* GapTotal);
		void PushEndWallMeshes(const struct FTransform& WallEndMeshesTransform, class UStaticMesh* EndMesh, const struct FVector& SizeLeft, bool UseZScale, bool UseExtreme, float ExtremeZ, bool UseOverwriteMaterial, bool UseOverwriteLightmap, bool IsInbetweenMesh);
		bool GetStateName(class FString* stateA, class FString* stateB);
		bool IsStateA();
		void WallEnd(const struct FVector& Relative_Transform_Location, const struct FVector& NewSize);
		void setVariable(struct FVector* NewSize);
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
