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
	 * BlueprintGeneratedClass RubbishScatterer_BP.RubbishScatterer_BP_C
	 * Size -> 0x0169 (FullSize[0x03D9] - InheritedSize[0x0270])
	 */
	class ARubbishScatterer_BP_C : public ARBRubbishScatterer
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             End;                                                     // 0x0280(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxZDistance;                                            // 0x028C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxYDistance;                                            // 0x0290(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxXDistance;                                            // 0x0294(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TileX;                                                   // 0x0298(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TileY;                                                   // 0x029C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TileZ;                                                   // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ELockAxis                                                  LockAxis;                                                // 0x02A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QPUL[0x3];                                   // 0x02A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GridPrecision;                                           // 0x02A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             InitialOffset;                                           // 0x02AC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            InitialRotation;                                         // 0x02B8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PreviousAnchor;                                          // 0x02C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2XW0[0x3];                                   // 0x02C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PreviousActorPos;                                        // 0x02C8(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseMaterialOverride;                                     // 0x02D4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_10EI[0x3];                                   // 0x02D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInstanceConstant*>                   Material;                                                // 0x02D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UStaticMesh*                                         StaticMesh;                                              // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ELockAxis                                                  PreviousLockAxis;                                        // 0x02F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       OverrideLightmapResolution;                              // 0x02F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D1GI[0x2];                                   // 0x02F2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LightmapRes;                                             // 0x02F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Pivot;                                                   // 0x02F8(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaterialTiling;                                          // 0x0304(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                CollisionProfileName;                                    // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FStretchableModulesPartsRandomization>       MeshLibrary;                                             // 0x0310(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UStaticMesh*                                         CurrentStaticMesh;                                       // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseFirstAssetRescaling;                                  // 0x0328(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ECanBeCharacterBase                                        CanStepUpOn;                                             // 0x0329(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EComponentMobility                                         Mobility;                                                // 0x032A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_K8IX[0x1];                                   // 0x032B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RandomMeshSeed;                                          // 0x032C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumComponents;                                           // 0x0330(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KGNA[0x4];                                   // 0x0334(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UStaticMeshComponent*>                        StaticmeshComponents;                                    // 0x0338(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       UseLibraryMaterialOverride;                              // 0x0348(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HD32[0x7];                                   // 0x0349(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UStaticMesh*>                                 LibrarySpecialMeshes;                                    // 0x0350(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      MinStretchRatio;                                         // 0x0360(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PAU7[0x4];                                   // 0x0364(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDataTable*                                          DataTable;                                               // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EStretchableLibraryMode                                    MeshLibraryMode;                                         // 0x0370(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseMeshPivotPointForBounds;                             // 0x0371(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLightingChannels                                   LightChannels;                                           // 0x0372(0x0001) Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_5YA0[0x1];                                   // 0x0373(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        DynamicData;                                             // 0x0374(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4Q2X[0x4];                                   // 0x0384(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRubbishScattererStruct>                     RubbishLibrary;                                          // 0x0388(0x0010) Edit, BlueprintVisible, ContainsInstancedReference
		TArray<struct FRubbishScattererStruct>                     DecalsLibrary;                                           // 0x0398(0x0010) Edit, BlueprintVisible, ContainsInstancedReference
		int32_t                                                    Seed;                                                    // 0x03A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QBMJ[0x4];                                   // 0x03AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UHierarchicalInstancedStaticMeshComponent*>   InstancedStaticmeshes;                                   // 0x03B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       UseInstancedStaticMeshes;                                // 0x03C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7ZOP[0x3];                                   // 0x03C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumCurrentInstances;                                     // 0x03C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxInstances;                                            // 0x03C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ActorsAmount;                                            // 0x03CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRandomStream                                       MeshRandomSeed;                                          // 0x03D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor
		ECollisionEnabled                                          Collisions;                                              // 0x03D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AddNewStaticmesh(float Relative_Transform_Location_X, float Relative_Transform_Location_Y, float Relative_Transform_Location_Z, float Relative_Transform_Rotation_X_Roll, float Relative_Transform_Rotation_Y_Pitch, float Relative_Transform_Rotation_Z_Yaw, float Relative_Transform_Scale_X, float Relative_Transform_Scale_Y, float Relative_Transform_Scale_Z, class UStaticMesh* NewMesh);
		void Scatter();
		void Populate();
		void MoveAnchorGizmo();
		void AssingDynMatData();
		void AssignLightChannel();
		void RunConstructionScript();
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
		void ReceiveBeginPlay();
		void ExecuteUbergraph_RubbishScatterer_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
