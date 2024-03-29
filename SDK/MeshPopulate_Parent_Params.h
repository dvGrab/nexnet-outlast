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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function MeshPopulate_Parent.MeshPopulate_Parent_C.BP_MapCheck
	 */
	struct AMeshPopulate_Parent_C_BP_MapCheck_Params
	{
	public:
		EMapCheckType                                              checkType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B8XD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              outErrorMsg;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MeshPopulate_Parent.MeshPopulate_Parent_C.FixUp
	 */
	struct AMeshPopulate_Parent_C_FixUp_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MeshPopulate_Parent.MeshPopulate_Parent_C.SetBoxCollisionSettings
	 */
	struct AMeshPopulate_Parent_C_SetBoxCollisionSettings_Params
	{	};

	/**
	 * Function MeshPopulate_Parent.MeshPopulate_Parent_C.PrintAllUsedMeshes
	 */
	struct AMeshPopulate_Parent_C_PrintAllUsedMeshes_Params
	{	};

	/**
	 * Function MeshPopulate_Parent.MeshPopulate_Parent_C.ApplyPhysicalMaterialToBoxComponent
	 */
	struct AMeshPopulate_Parent_C_ApplyPhysicalMaterialToBoxComponent_Params
	{	};

	/**
	 * Function MeshPopulate_Parent.MeshPopulate_Parent_C.SetExcludedStaticMeshComponents
	 */
	struct AMeshPopulate_Parent_C_SetExcludedStaticMeshComponents_Params
	{
	public:
		TArray<class UStaticMesh*>                                 StaticmeshComponents;                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MeshPopulate_Parent.MeshPopulate_Parent_C.SetLoadedOnServerAndCollisions
	 */
	struct AMeshPopulate_Parent_C_SetLoadedOnServerAndCollisions_Params
	{
	public:
		class UPrimitiveComponent*                                 PrimitiveComponent;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MeshPopulate_Parent.MeshPopulate_Parent_C.CreateBoxCollisionForBounds
	 */
	struct AMeshPopulate_Parent_C_CreateBoxCollisionForBounds_Params
	{	};

	/**
	 * Function MeshPopulate_Parent.MeshPopulate_Parent_C.GetHypothenuse
	 */
	struct AMeshPopulate_Parent_C_GetHypothenuse_Params
	{
	public:
		EMeshPopulateDirection                                     Direction;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6POX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Hypotenuse;                                              // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MeshPopulate_Parent.MeshPopulate_Parent_C.PushRandomSeed
	 */
	struct AMeshPopulate_Parent_C_PushRandomSeed_Params
	{	};

	/**
	 * Function MeshPopulate_Parent.MeshPopulate_Parent_C.Warning
	 */
	struct AMeshPopulate_Parent_C_Warning_Params
	{	};

	/**
	 * Function MeshPopulate_Parent.MeshPopulate_Parent_C.SetSeed
	 */
	struct AMeshPopulate_Parent_C_SetSeed_Params
	{	};

	/**
	 * Function MeshPopulate_Parent.MeshPopulate_Parent_C.SnapGizmosOnGrid
	 */
	struct AMeshPopulate_Parent_C_SnapGizmosOnGrid_Params
	{	};

	/**
	 * Function MeshPopulate_Parent.MeshPopulate_Parent_C.CheckSize
	 */
	struct AMeshPopulate_Parent_C_CheckSize_Params
	{
	public:
		struct FVector                                             SizeLeft;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMeshPopulateDirection                                     Direction;                                               // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TRNT[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Size;                                                    // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SizeIsvalid;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MeshPopulate_Parent.MeshPopulate_Parent_C.Get Next Group
	 */
	struct AMeshPopulate_Parent_C_Get_Next_Group_Params
	{
	public:
		TArray<struct FModuleMeshData>                             Aray;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		float                                                      SizeLeft;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      NewSizeLeft;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      GroupSize;                                               // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MeshPopulate_Parent.MeshPopulate_Parent_C.MinGroupSize
	 */
	struct AMeshPopulate_Parent_C_MinGroupSize_Params
	{
	public:
		TArray<struct FModuleMeshData>                             Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		float                                                      SmallerGroupSize;                                        // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      BiggestGroupSize;                                        // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MeshPopulate_Parent.MeshPopulate_Parent_C.Get Next Mesh
	 */
	struct AMeshPopulate_Parent_C_Get_Next_Mesh_Params
	{
	public:
		TArray<struct FModuleMeshData>                             Aray;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		float                                                      SizeLeft;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      NewSizeLeft;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MeshSize;                                                // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MeshPopulate_Parent.MeshPopulate_Parent_C.PushStaticMesh
	 */
	struct AMeshPopulate_Parent_C_PushStaticMesh_Params
	{
	public:
		EMeshPopulateDirection                                     Direction;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NBPW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Location;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FModuleMeshData                                     Mesh;                                                    // 0x0008(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		bool                                                       Inverted;                                                // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UseOverwriteMaterial;                                    // 0x0029(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UseOverwriteLightmap;                                    // 0x002A(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RVUD[0x5];                                   // 0x002B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UStaticMeshComponent*                                StaticMeshComponant;                                     // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4VZP[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MeshPopulate_Parent.MeshPopulate_Parent_C.MinMeshSize
	 */
	struct AMeshPopulate_Parent_C_MinMeshSize_Params
	{
	public:
		TArray<struct FModuleMeshData>                             Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		float                                                      SmallerMeshSize;                                         // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MeshPopulate_Parent.MeshPopulate_Parent_C.FindClosestMeshSize
	 */
	struct AMeshPopulate_Parent_C_FindClosestMeshSize_Params
	{
	public:
		TArray<struct FModuleMeshData>                             Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		float                                                      SizeLeft;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MeshPopulate_Parent.MeshPopulate_Parent_C.CheckMeshSize
	 */
	struct AMeshPopulate_Parent_C_CheckMeshSize_Params
	{
	public:
		TArray<struct FModuleMeshData>                             Meshes;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		EMeshPopulateDirection                                     Direction;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IJJX[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MeshPopulate_Parent.MeshPopulate_Parent_C.PresetMaterials
	 */
	struct AMeshPopulate_Parent_C_PresetMaterials_Params
	{
	public:
		TArray<class UMaterialInterface*>                          TargetArray;                                             // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		EGrayBoxMat_ENU                                            Index;                                                   // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MeshPopulate_Parent.MeshPopulate_Parent_C.SelectRandomMesh
	 */
	struct AMeshPopulate_Parent_C_SelectRandomMesh_Params
	{
	public:
		TArray<struct FModuleAlternativeMeshData>                  ArrayMeshAlternatif;                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UStaticMesh*                                         _Mesh1;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStaticMesh*                                         Mesh;                                                    // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           MeshOffset;                                              // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MeshPopulate_Parent.MeshPopulate_Parent_C.SetStaticMeshSet
	 */
	struct AMeshPopulate_Parent_C_SetStaticMeshSet_Params
	{
	public:
		class UStaticMeshComponent*                                Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStaticMesh*                                         NewMesh;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       UseOverwriteMaterial;                                    // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UseOverwriteLightmap;                                    // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3ZA4[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      DrawDistance;                                            // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MeshPopulate_Parent.MeshPopulate_Parent_C.PrintError
	 */
	struct AMeshPopulate_Parent_C_PrintError_Params
	{	};

	/**
	 * Function MeshPopulate_Parent.MeshPopulate_Parent_C.UseShadowMask
	 */
	struct AMeshPopulate_Parent_C_UseShadowMask_Params
	{
	public:
		struct FVector                                             ShadowMeshScale;                                         // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMeshPopulateDirection                                     XY;                                                      // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4CRF[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ShadowMeshLocation;                                      // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MeshPopulate_Parent.MeshPopulate_Parent_C.SetMaterials
	 */
	struct AMeshPopulate_Parent_C_SetMaterials_Params
	{
	public:
		class UPrimitiveComponent*                                 Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MeshPopulate_Parent.MeshPopulate_Parent_C.SetGizmoLimit
	 */
	struct AMeshPopulate_Parent_C_SetGizmoLimit_Params
	{
	public:
		EMeshPopulateDirection                                     Direction;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ARN7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MeshPopulate_Parent.MeshPopulate_Parent_C.SetGizmo
	 */
	struct AMeshPopulate_Parent_C_SetGizmo_Params
	{	};

	/**
	 * Function MeshPopulate_Parent.MeshPopulate_Parent_C.SetScaleGroup
	 */
	struct AMeshPopulate_Parent_C_SetScaleGroup_Params
	{
	public:
		struct FVector                                             Scale;                                                   // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NewSize;                                                 // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MeshPopulate_Parent.MeshPopulate_Parent_C.MaximumGroupHeight
	 */
	struct AMeshPopulate_Parent_C_MaximumGroupHeight_Params
	{
	public:
		TArray<struct FModuleMeshData>                             GroupArray;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		EMeshPopulateDirection                                     Direction;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AD84[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      AlphaMin;                                                // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AlphaMax;                                                // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      BetaMin;                                                 // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      BetaMax;                                                 // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Size;                                                    // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MeshPopulate_Parent.MeshPopulate_Parent_C.PopulateSurface
	 */
	struct AMeshPopulate_Parent_C_PopulateSurface_Params
	{
	public:
		TArray<struct FModuleMeshData>                             MeshesArray;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       UseMeshSecondSizeAdd;                                    // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C2T1[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      GapBetweenRow;                                           // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMeshPopulateDirection                                     Direction;                                               // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UW1W[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             SizeLeft;                                                // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Offset;                                                  // 0x0028(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            OffsetRotation;                                          // 0x0034(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Scale;                                                   // 0x0040(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       UseXScale;                                               // 0x004C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UseYScale;                                               // 0x004D(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UseZScale;                                               // 0x004E(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Inverted;                                                // 0x004F(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ZInverted;                                               // 0x0050(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ResetAlphaLocation;                                      // 0x0051(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ResetBetaLocation;                                       // 0x0052(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SwitchMeshOrientation;                                   // 0x0053(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UseOverwriteMaterial;                                    // 0x0054(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UseOverwriteLightmap;                                    // 0x0055(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5QZG[0x2];                                   // 0x0056(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    MaxNumberOfRow;                                          // 0x0058(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      OverwriteBetaScale;                                      // 0x005C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             LastLocation;                                            // 0x0060(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MaxSecondSize;                                           // 0x006C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SecondScale;                                             // 0x0070(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TNX0[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FStaticmeshArray_Stuc>                       AllStactimeshes;                                         // 0x0078(0x0010)  (Parm, OutParm, ContainsInstancedReference)
		int32_t                                                    RowCount;                                                // 0x0088(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LastAlphaMeshSize;                                       // 0x008C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AlphaScale;                                              // 0x0090(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MeshPopulate_Parent.MeshPopulate_Parent_C.MaximumHeight
	 */
	struct AMeshPopulate_Parent_C_MaximumHeight_Params
	{
	public:
		TArray<struct FModuleMeshData>                             Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		float                                                      _MaxHeight1;                                             // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Height;                                                  // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      BiggestMeshSize;                                         // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SmallerMeshSize;                                         // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MeshPopulate_Parent.MeshPopulate_Parent_C.PopulateRow
	 */
	struct AMeshPopulate_Parent_C_PopulateRow_Params
	{
	public:
		EMeshPopulateDirection                                     Selection;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XD8A[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FModuleMeshData>                             meshArray;                                               // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		float                                                      AlphaSizeLeft;                                           // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Offset;                                                  // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Scale;                                                   // 0x0028(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Inverted;                                                // 0x0034(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ZInverted;                                               // 0x0035(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UseXScale;                                               // 0x0036(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UseYScale;                                               // 0x0037(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UseZScale;                                               // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ResetAlphaLocation;                                      // 0x0039(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VL0X[0x2];                                   // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            OffsetRotation;                                          // 0x003C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SwitchMeshOrientation;                                   // 0x0048(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UseOverwriteMaterial;                                    // 0x0049(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UseOverwriteLightmap;                                    // 0x004A(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UseScale;                                                // 0x004B(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      BetaScale;                                               // 0x004C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             LastLocation;                                            // 0x0050(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7XG0[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UStaticMeshComponent*>                        StaticmeshComponents1;                                   // 0x0060(0x0010)  (Parm, OutParm, ContainsInstancedReference)
		float                                                      LastAlphaMeshSize;                                       // 0x0070(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AlphaScale;                                              // 0x0074(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MeshPopulate_Parent.MeshPopulate_Parent_C.NumOfMesh
	 */
	struct AMeshPopulate_Parent_C_NumOfMesh_Params
	{
	public:
		float                                                      MeshSize;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SizeLeft;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Num;                                                     // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      NewSizeLeft;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MeshPopulate_Parent.MeshPopulate_Parent_C.PopulateStaticMesh
	 */
	struct AMeshPopulate_Parent_C_PopulateStaticMesh_Params
	{
	public:
		EMeshPopulateDirection                                     Direction;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_R6IL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FModuleMeshData                                     Mesh01;                                                  // 0x0008(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		struct FRotator                                            OffsetRotation;                                          // 0x0028(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Inverted;                                                // 0x0034(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SwitchMeshOrientation;                                   // 0x0035(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UseOverwriteMaterial;                                    // 0x0036(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UseOverwriteLightmap;                                    // 0x0037(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Location;                                                // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CECS[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UStaticMeshComponent*                                OutputPin;                                               // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KILF[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MeshPopulate_Parent.MeshPopulate_Parent_C.SetScale
	 */
	struct AMeshPopulate_Parent_C_SetScale_Params
	{
	public:
		TArray<struct FModuleMeshData>                             meshArray;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		EMeshPopulateDirection                                     Selection;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IOQH[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Size;                                                    // 0x0014(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      HeightDelete;                                            // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MeshPopulate_Parent.MeshPopulate_Parent_C.UserConstructionScript
	 */
	struct AMeshPopulate_Parent_C_UserConstructionScript_Params
	{	};

	/**
	 * Function MeshPopulate_Parent.MeshPopulate_Parent_C.BP_PrepareMapCheck
	 */
	struct AMeshPopulate_Parent_C_BP_PrepareMapCheck_Params
	{	};

	/**
	 * Function MeshPopulate_Parent.MeshPopulate_Parent_C.OnPostActorsPasted
	 */
	struct AMeshPopulate_Parent_C_OnPostActorsPasted_Params
	{
	public:
		TArray<class AActor*>                                      pastedActors;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MeshPopulate_Parent.MeshPopulate_Parent_C.PostAddedToLevel
	 */
	struct AMeshPopulate_Parent_C_PostAddedToLevel_Params
	{	};

	/**
	 * Function MeshPopulate_Parent.MeshPopulate_Parent_C.PostDuplicated
	 */
	struct AMeshPopulate_Parent_C_PostDuplicated_Params
	{
	public:
		class AActor*                                              duplicationParent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MeshPopulate_Parent.MeshPopulate_Parent_C.PostEditMove
	 */
	struct AMeshPopulate_Parent_C_PostEditMove_Params
	{
	public:
		bool                                                       bFinished;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MeshPopulate_Parent.MeshPopulate_Parent_C.TickSelected
	 */
	struct AMeshPopulate_Parent_C_TickSelected_Params
	{	};

	/**
	 * Function MeshPopulate_Parent.MeshPopulate_Parent_C.PostEditChange
	 */
	struct AMeshPopulate_Parent_C_PostEditChange_Params
	{
	public:
		class FName                                                PropertyName;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MeshPopulate_Parent.MeshPopulate_Parent_C.OnEditorPostLoad
	 */
	struct AMeshPopulate_Parent_C_OnEditorPostLoad_Params
	{	};

	/**
	 * Function MeshPopulate_Parent.MeshPopulate_Parent_C.ExecuteUbergraph_MeshPopulate_Parent
	 */
	struct AMeshPopulate_Parent_C_ExecuteUbergraph_MeshPopulate_Parent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SX03[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
