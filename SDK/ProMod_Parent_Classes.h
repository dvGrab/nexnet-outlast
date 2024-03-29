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
	 * BlueprintGeneratedClass ProMod_Parent.ProMod_Parent_C
	 * Size -> 0x0264 (FullSize[0x04C4] - InheritedSize[0x0260])
	 */
	class AProMod_Parent_C : public ARBPipeModule
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FVector                                             End;                                                     // 0x0268(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxZDistance;                                            // 0x0274(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxYDistance;                                            // 0x0278(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxTilingDistance;                                       // 0x027C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Tiling;                                                  // 0x0280(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TileY;                                                   // 0x0284(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TileZ;                                                   // 0x0288(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ELockAxis                                                  LockAxis;                                                // 0x028C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LC60[0x3];                                   // 0x028D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GridPrecision;                                           // 0x0290(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             InitialOffset;                                           // 0x0294(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            InitialRotation;                                         // 0x02A0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PreviousAnchor;                                          // 0x02AC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2W7E[0x3];                                   // 0x02AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PreviousActorPos;                                        // 0x02B0(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseMaterialOverride;                                     // 0x02BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       UseMaterialOverrideOnDetails;                            // 0x02BD(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_963W[0x2];                                   // 0x02BE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInstanceConstant*>                   Materials;                                               // 0x02C0(0x0010) Edit, BlueprintVisible
		ELockAxis                                                  PreviousLockAxis;                                        // 0x02D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ERIF[0x7];                                   // 0x02D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInstanceConstant*>                   MaterialsSplines;                                        // 0x02D8(0x0010) Edit, BlueprintVisible
		bool                                                       OverrideLightmapResolution;                              // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WFGF[0x3];                                   // 0x02E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Pivot;                                                   // 0x02EC(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                CollisionProfileName;                                    // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FStretchableModulesPartsRandomization>       MeshLibrary;                                             // 0x0300(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UStaticMesh*                                         CurrentStaticMesh;                                       // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseFirstAssetRescaling;                                  // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ECanBeCharacterBase                                        CanStepUpOn;                                             // 0x0319(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EComponentMobility                                         Mobility;                                                // 0x031A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GILH[0x1];                                   // 0x031B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RandomMeshSeed;                                          // 0x031C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumComponents;                                           // 0x0320(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YENS[0x4];                                   // 0x0324(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UStaticMeshComponent*>                        StaticmeshComponents;                                    // 0x0328(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UStaticMesh*>                                 LibrarySpecialMeshes;                                    // 0x0338(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UStaticMeshComponent*>                        TempMeshComponents;                                      // 0x0348(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class USplineMeshComponent*>                        TempSplineComponents;                                    // 0x0358(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UMaterialInstanceDynamic*>                    MainPipeMaterials;                                       // 0x0368(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       UseLibraryMaterialOverride;                              // 0x0378(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NC41[0x3];                                   // 0x0379(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinStretchRatio;                                         // 0x037C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDataTable*                                          DataTable;                                               // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EStretchableLibraryMode                                    MeshLibraryMode;                                         // 0x0388(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLightingChannels                                   LightChannels;                                           // 0x0389(0x0001) Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_K350[0x2];                                   // 0x038A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        DynamicData;                                             // 0x038C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_I6A7[0x4];                                   // 0x039C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              OwningActors[0x10];                                      // 0x03A0(0x0010) UNKNOWN PROPERTY: ArrayProperty
		float                                                      ElbowMaxDistance;                                        // 0x03B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ElbowTangent;                                            // 0x03B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<int32_t>                                            Channels;                                                // 0x03B8(0x0010) Edit, BlueprintVisible
		float                                                      EndPipeThreshold;                                        // 0x03C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_K4I3[0x4];                                   // 0x03CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         StraightPipe;                                            // 0x03D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         TConnector;                                              // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         XConnector;                                              // 0x03E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         PipeConnector;                                           // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         ElbowPipe;                                               // 0x03F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FPipeModuleDetailParameters>                 ProceduralDetails;                                       // 0x03F8(0x0010) Edit, BlueprintVisible
		TArray<struct FTransform>                                  Detail;                                                  // 0x0408(0x0010) Edit, BlueprintVisible
		TArray<class UStaticMesh*>                                 ManualDetails;                                           // 0x0418(0x0010) Edit, BlueprintVisible
		unsigned char                                              ConnectorList[0x10];                                     // 0x0428(0x0010) UNKNOWN PROPERTY: ArrayProperty
		class UMaterialInterface*                                  ElbowMaterialOverride;                                   // 0x0438(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              ProModManager[0x28];                                     // 0x0440(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              TargetActor2[0x28];                                      // 0x0468(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       FixTwist;                                                // 0x0490(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bUseDetailRotation;                                      // 0x0491(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseEndSegmentDetailMesh;                                // 0x0492(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Hack;                                                    // 0x0493(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bStaticShadow;                                           // 0x0494(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7VO2[0x3];                                   // 0x0495(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Start_Roll;                                              // 0x0498(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      End_Roll;                                                // 0x049C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           Start_Scale;                                             // 0x04A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           End_Scale;                                               // 0x04A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SplineUpVector;                                          // 0x04B0(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bCollisionEnabled;                                       // 0x04BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bDetailsCollisionEnabled;                                // 0x04BD(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		ELightmapType                                              Default_Lightmap_Type;                                   // 0x04BE(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       debug;                                                   // 0x04BF(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      DiffuseBoost;                                            // 0x04C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool FixUp();
		void SetupCollision(class UPrimitiveComponent* Target, bool bIsDetail);
		void ApplyNewMeshSettings(class UMeshComponent* NewMeshComponent);
		void MakePipeConnection2();
		void CustRunConstruction();
		void CleanOwningActors(bool* bChanged);
		void SetMaterialOverrides();
		void AddManualDetail(class UStaticMesh* NewMesh, const struct FRotator& RotOffset, const struct FVector& Scale, const struct FVector& Offset);
		void IsSameChannel(class AProMod_Parent_C* CurrentModule, bool* IsValid);
		void IsValidIntersection(class AProMod_Parent_C* TargetActor, bool* Valid, struct FVector* IntersectionPos);
		void KeepTextureRatio();
		void CreateDynamicMaterials();
		void AddDetailComponent(float _minDistance, float _Offset, class UStaticMesh* StaticMesh, float _Rotation);
		void AddPipeDetails();
		struct FVector GetPipeVector(class AProMod_Parent_C* Pipe);
		void GetConnectorRotation(class AProMod_Parent_C* LocalPipe, class AProMod_Parent_C* TargetPipe, bool isInvertedRoles, float _PivotDistanceFromTarget, struct FRotator* Rotation);
		void ClearAllComponents();
		void RegisterToPipeModuleManager(bool* Valid);
		void CreateSplineMeshComp(const struct FVector& WorldLocation, const struct FVector& Tangent1, const struct FVector& WorldLocation2, const struct FVector& Tangen2, class AProMod_Parent_C* TargetPipeModule, bool bShouldFlipSpline);
		void isCornerPipe(class AProMod_Parent_C* _TargetPipe, bool* isCornerPipe, struct FVector* TargetLocation1, struct FVector* TargetEndWorldLocation1, struct FVector* ActorEndWorldLocation1, struct FVector* ActorWorldLocation1, class AProMod_Parent_C** TargetPipe1, bool* bShouldFlipSpline);
		void IsCurrentAtFullExtentFromTarget(class AProMod_Parent_C* TargetPipeModule1, class AProMod_Parent_C* TargetPipeModule2, bool* IsAtFullExtent, float* PivotDistanceFromTarget);
		void AddUniqueSMCAndActorToArray(class AProMod_Parent_C* TargetActor, class UStaticMeshComponent* StaticMeshComponent, class USplineMeshComponent* SplineMeshComponent);
		void RebuildTargets();
		void GetAxisFromVector(const struct FVector& Vector, int32_t* AxisIndex);
		void MakePipeConnection();
		void MoveAnchorGizmos();
		void AssingDynMatData();
		void AssignLightChannel();
		void CreateStretchingMeshesComponents();
		void CreateLibraryMeshes();
		void ShuffleSpecialMeshesSeed(TArray<class UStaticMesh*>* _Staticmeshes, TArray<class UStaticMesh*>* SuffledSM);
		void AssignPerLibMeshMaterialOverride();
		void ShuffleWithSeed();
		void GetStandardStaticmeshLibrary(TArray<class UStaticMesh*>* _PossibleMeshLibrary);
		void GetSpecialStaticmeshLibrary(TArray<class UStaticMesh*>* _PossibleMeshLibrary);
		void ReassignStaticMeshFromLibrary();
		void SetStaticMeshComponent();
		void GetScale(ELockAxis Axis, float CurrentModuleScale, bool UsingTiling, float* Scale);
		void GetOffset(ELockAxis Axis, float CurrentModuleScale, int32_t MaxDistance, int32_t NumLoop, bool isTiling, float* Offset);
		void SetIsTiling(bool* isTiling);
		void GetFinalTranslation(bool Tiling, float* X, float* Y, float* Z);
		void SetMaterialsToTriPlanarMapping();
		void FixTilingForAxisUsage();
		void CheckForPreviousLockAxis();
		void AddStaticMeshAtLocation(float Relative_Transform_Scale_X, float Relative_Transform_Scale_Z, float Relative_Transform_Scale_Y, float Relative_Transform_Location_X, float Relative_Transform_Location_Y, float Relative_Transform_Location_Z);
		void CreateComponents();
		void LimitGizmo();
		void UserConstructionScript();
		void OnEditorPostLoad();
		void OnPostActorsPasted(TArray<class AActor*> pastedActors);
		void PostDuplicated(class AActor* duplicationParent);
		void ReceiveBeginPlay();
		void PostEditMove(bool bFinished);
		void PostAddedToLevel();
		void TickSelected();
		void PostEditChange(const class FName& PropertyName);
		void ExecuteUbergraph_ProMod_Parent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
