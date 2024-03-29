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
	 * BlueprintGeneratedClass MeshPopulate_Parent.MeshPopulate_Parent_C
	 * Size -> 0x0183 (FullSize[0x03CB] - InheritedSize[0x0248])
	 */
	class AMeshPopulate_Parent_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0248(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       BoxCollision;                                            // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      SnapGizmosOnGridSize;                                    // 0x0260(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             GizmoLocation;                                           // 0x0264(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Location;                                                // 0x0270(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Scale;                                                   // 0x027C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumMesh;                                                 // 0x0288(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Gizmo2Location;                                          // 0x028C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseMainScale;                                            // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       InvertMesh;                                              // 0x0299(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       UseBetaScale;                                            // 0x029A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JLS5[0x5];                                   // 0x029B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInterface*>                          OverwriteMaterials;                                      // 0x02A0(0x0010) Edit, BlueprintVisible
		bool                                                       UseRandomMaterials;                                      // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_82R1[0x7];                                   // 0x02B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRandomMaterials>                            RandomMaterials;                                         // 0x02B8(0x0010) Edit, BlueprintVisible
		bool                                                       bCanEverAffectNavigation;                                // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RO2E[0x3];                                   // 0x02C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AlphaSizeMin;                                            // 0x02CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NumberNumberOfObjectLimit;                               // 0x02D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EMeshPopulateDirection                                     XY;                                                      // 0x02D4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECollisionResponse                                         AudioMeshCollisionResponse;                              // 0x02D5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_X60Q[0x2];                                   // 0x02D6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NumberOfObject;                                          // 0x02D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BetaSizeMin;                                             // 0x02DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DrawDistanceCull;                                        // 0x02E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DiffuseBoost;                                            // 0x02E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLightingChannels                                   Lighting_Channels;                                       // 0x02E8(0x0001) Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_GCJT[0x3];                                   // 0x02E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AlphaSmallestSizeMesh;                                   // 0x02EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AlphaBiggestSizeMesh;                                    // 0x02F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AlphaNumberOfMeshes;                                     // 0x02F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BetaSmallestSizeMesh;                                    // 0x02F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    BetaNumberOfMeshes;                                      // 0x02FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BetaBiggestSizeMesh;                                     // 0x0300(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AlphaTotal;                                              // 0x0304(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BetaTotal;                                               // 0x0308(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Seed;                                                    // 0x030C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SeedCurrent;                                             // 0x0310(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_I788[0x4];                                   // 0x0314(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FModuleMeshData                                     MeshSize;                                                // 0x0318(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		float                                                      SeedMaterials;                                           // 0x0330(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SeedMaterialsCurrent;                                    // 0x0334(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LightmapSizeMulitiplier;                                 // 0x0338(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LightmapSizeMin;                                         // 0x033C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LightmapSizeMax;                                         // 0x0340(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TestNewPopulateRow;                                      // 0x0344(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EFAY[0x3];                                   // 0x0345(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AlphaScaleNextMeshTheshold;                              // 0x0348(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BetaScaleNextMeshTheshold;                               // 0x034C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       BlockAudio;                                              // 0x0350(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       BlockVisibility;                                         // 0x0351(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MDEC[0x2];                                   // 0x0352(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        MaterialDynamicData;                                     // 0x0354(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseNewSeed;                                              // 0x0364(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ECanBeCharacterBase                                        Can_Character_Step_Up_On;                                // 0x0365(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       BlockPing;                                               // 0x0366(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CRYA[0x1];                                   // 0x0367(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinCollisionThickness;                                   // 0x0368(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             CollisionOffset;                                         // 0x036C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            CollisionRotation;                                       // 0x0378(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             CollisionScale;                                          // 0x0384(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             FixedCollisionSize;                                      // 0x0390(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             FixedCollisionLocation;                                  // 0x039C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UStaticMesh*>                                 ExcludedStaticMeshComponents;                            // 0x03A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bUseAutomaticBoxCollsion;                                // 0x03B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bForceNoCollisionNotOnServer;                            // 0x03B9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_47TS[0x6];                                   // 0x03BA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPhysicalMaterial*                                   PhysicalMaterial;                                        // 0x03C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RequiresPhysicalMaterial;                                // 0x03C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bOverride_z;                                             // 0x03C9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bStaticShadow;                                           // 0x03CA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		bool BP_MapCheck(EMapCheckType checkType, class FString* outErrorMsg);
		bool FixUp();
		void SetBoxCollisionSettings();
		void PrintAllUsedMeshes();
		void ApplyPhysicalMaterialToBoxComponent();
		void SetExcludedStaticMeshComponents(TArray<class UStaticMesh*>* StaticmeshComponents);
		void SetLoadedOnServerAndCollisions(class UPrimitiveComponent* PrimitiveComponent);
		void CreateBoxCollisionForBounds();
		void GetHypothenuse(EMeshPopulateDirection Direction, float* Hypotenuse);
		void PushRandomSeed();
		void Warning();
		void SetSeed();
		void SnapGizmosOnGrid();
		void CheckSize(const struct FVector& SizeLeft, EMeshPopulateDirection Direction, float Size, bool* SizeIsvalid);
		void Get_Next_Group(TArray<struct FModuleMeshData>* Aray, float SizeLeft, int32_t* Index, float* NewSizeLeft, float* GroupSize);
		void MinGroupSize(TArray<struct FModuleMeshData>* Array, float* SmallerGroupSize, float* BiggestGroupSize);
		void Get_Next_Mesh(TArray<struct FModuleMeshData>* Aray, float SizeLeft, int32_t* Index, float* NewSizeLeft, float* MeshSize);
		void PushStaticMesh(EMeshPopulateDirection Direction, float Location, const struct FModuleMeshData& Mesh, bool Inverted, bool UseOverwriteMaterial, bool UseOverwriteLightmap, class UStaticMeshComponent** StaticMeshComponant);
		void MinMeshSize(TArray<struct FModuleMeshData>* Array, float* SmallerMeshSize);
		void FindClosestMeshSize(TArray<struct FModuleMeshData>* Array, float SizeLeft, int32_t* Index);
		void CheckMeshSize(TArray<struct FModuleMeshData>* Meshes, EMeshPopulateDirection Direction);
		void PresetMaterials(TArray<class UMaterialInterface*> TargetArray, EGrayBoxMat_ENU Index);
		void SelectRandomMesh(TArray<struct FModuleAlternativeMeshData>* ArrayMeshAlternatif, class UStaticMesh* _Mesh1, class UStaticMesh** Mesh, struct FVector2D* MeshOffset);
		void SetStaticMeshSet(class UStaticMeshComponent* Target, class UStaticMesh* NewMesh, bool UseOverwriteMaterial, bool UseOverwriteLightmap, float DrawDistance);
		void PrintError();
		void UseShadowMask(const struct FVector& ShadowMeshScale, EMeshPopulateDirection XY, const struct FVector& ShadowMeshLocation);
		void SetMaterials(class UPrimitiveComponent* Target);
		void SetGizmoLimit(EMeshPopulateDirection Direction);
		void SetGizmo();
		void SetScaleGroup(struct FVector* Scale, struct FVector* NewSize);
		void MaximumGroupHeight(TArray<struct FModuleMeshData>* GroupArray, EMeshPopulateDirection Direction, float* AlphaMin, float* AlphaMax, float* BetaMin, float* BetaMax, struct FVector* Size);
		void PopulateSurface(TArray<struct FModuleMeshData>* MeshesArray, bool UseMeshSecondSizeAdd, float GapBetweenRow, EMeshPopulateDirection Direction, const struct FVector& SizeLeft, const struct FVector& Offset, const struct FRotator& OffsetRotation, const struct FVector& Scale, bool UseXScale, bool UseYScale, bool UseZScale, bool Inverted, bool ZInverted, bool ResetAlphaLocation, bool ResetBetaLocation, bool SwitchMeshOrientation, bool UseOverwriteMaterial, bool UseOverwriteLightmap, int32_t MaxNumberOfRow, float OverwriteBetaScale, struct FVector* LastLocation, float* MaxSecondSize, float* SecondScale, TArray<struct FStaticmeshArray_Stuc>* AllStactimeshes, int32_t* RowCount, float* LastAlphaMeshSize, float* AlphaScale);
		void MaximumHeight(TArray<struct FModuleMeshData>* Array, float _MaxHeight1, float* Height, float* BiggestMeshSize, float* SmallerMeshSize);
		void PopulateRow(EMeshPopulateDirection Selection, TArray<struct FModuleMeshData>* meshArray, float AlphaSizeLeft, const struct FVector& Offset, const struct FVector& Scale, bool Inverted, bool ZInverted, bool UseXScale, bool UseYScale, bool UseZScale, bool ResetAlphaLocation, const struct FRotator& OffsetRotation, bool SwitchMeshOrientation, bool UseOverwriteMaterial, bool UseOverwriteLightmap, bool UseScale, float BetaScale, struct FVector* LastLocation, TArray<class UStaticMeshComponent*>* StaticmeshComponents1, float* LastAlphaMeshSize, float* AlphaScale);
		void NumOfMesh(float MeshSize, float SizeLeft, int32_t* Num, float* NewSizeLeft);
		void PopulateStaticMesh(EMeshPopulateDirection Direction, const struct FModuleMeshData& Mesh01, const struct FRotator& OffsetRotation, bool Inverted, bool SwitchMeshOrientation, bool UseOverwriteMaterial, bool UseOverwriteLightmap, float Location, class UStaticMeshComponent** OutputPin);
		void SetScale(TArray<struct FModuleMeshData>* meshArray, EMeshPopulateDirection Selection, const struct FVector& Size, float HeightDelete);
		void UserConstructionScript();
		void BP_PrepareMapCheck();
		void OnPostActorsPasted(TArray<class AActor*> pastedActors);
		void PostAddedToLevel();
		void PostDuplicated(class AActor* duplicationParent);
		void PostEditMove(bool bFinished);
		void TickSelected();
		void PostEditChange(const class FName& PropertyName);
		void OnEditorPostLoad();
		void ExecuteUbergraph_MeshPopulate_Parent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
