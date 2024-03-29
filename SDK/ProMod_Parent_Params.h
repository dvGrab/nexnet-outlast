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
	 * Function ProMod_Parent.ProMod_Parent_C.FixUp
	 */
	struct AProMod_Parent_C_FixUp_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.SetupCollision
	 */
	struct AProMod_Parent_C_SetupCollision_Params
	{
	public:
		class UPrimitiveComponent*                                 Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsDetail;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.ApplyNewMeshSettings
	 */
	struct AProMod_Parent_C_ApplyNewMeshSettings_Params
	{
	public:
		class UMeshComponent*                                      NewMeshComponent;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.MakePipeConnection2
	 */
	struct AProMod_Parent_C_MakePipeConnection2_Params
	{	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.CustRunConstruction
	 */
	struct AProMod_Parent_C_CustRunConstruction_Params
	{
	public:
		unsigned char                                              UnknownData_YGOB[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.CleanOwningActors
	 */
	struct AProMod_Parent_C_CleanOwningActors_Params
	{
	public:
		bool                                                       bChanged;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_76YR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.SetMaterialOverrides
	 */
	struct AProMod_Parent_C_SetMaterialOverrides_Params
	{	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.AddManualDetail
	 */
	struct AProMod_Parent_C_AddManualDetail_Params
	{
	public:
		class UStaticMesh*                                         NewMesh;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            RotOffset;                                               // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Scale;                                                   // 0x0014(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Offset;                                                  // 0x0020(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.IsSameChannel
	 */
	struct AProMod_Parent_C_IsSameChannel_Params
	{
	public:
		class AProMod_Parent_C*                                    CurrentModule;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsValid;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I1ID[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.IsValidIntersection
	 */
	struct AProMod_Parent_C_IsValidIntersection_Params
	{
	public:
		class AProMod_Parent_C*                                    TargetActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Valid;                                                   // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L9QN[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             IntersectionPos;                                         // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.KeepTextureRatio
	 */
	struct AProMod_Parent_C_KeepTextureRatio_Params
	{	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.CreateDynamicMaterials
	 */
	struct AProMod_Parent_C_CreateDynamicMaterials_Params
	{	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.AddDetailComponent
	 */
	struct AProMod_Parent_C_AddDetailComponent_Params
	{
	public:
		float                                                      _minDistance;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      _Offset;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStaticMesh*                                         StaticMesh;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      _Rotation;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.AddPipeDetails
	 */
	struct AProMod_Parent_C_AddPipeDetails_Params
	{	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.GetPipeVector
	 */
	struct AProMod_Parent_C_GetPipeVector_Params
	{
	public:
		class AProMod_Parent_C*                                    Pipe;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OSJN[0xC];                                   // 0x0014(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.GetConnectorRotation
	 */
	struct AProMod_Parent_C_GetConnectorRotation_Params
	{
	public:
		class AProMod_Parent_C*                                    LocalPipe;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AProMod_Parent_C*                                    TargetPipe;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isInvertedRoles;                                         // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_253T[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      _PivotDistanceFromTarget;                                // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            Rotation;                                                // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4PAZ[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.ClearAllComponents
	 */
	struct AProMod_Parent_C_ClearAllComponents_Params
	{	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.RegisterToPipeModuleManager
	 */
	struct AProMod_Parent_C_RegisterToPipeModuleManager_Params
	{
	public:
		bool                                                       Valid;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A3AA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.CreateSplineMeshComp
	 */
	struct AProMod_Parent_C_CreateSplineMeshComp_Params
	{
	public:
		struct FVector                                             WorldLocation;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Tangent1;                                                // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             WorldLocation2;                                          // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Tangen2;                                                 // 0x0024(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AProMod_Parent_C*                                    TargetPipeModule;                                        // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bShouldFlipSpline;                                       // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RVTZ[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.isCornerPipe
	 */
	struct AProMod_Parent_C_isCornerPipe_Params
	{
	public:
		class AProMod_Parent_C*                                    _TargetPipe;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isCornerPipe;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B0BC[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             TargetLocation1;                                         // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             TargetEndWorldLocation1;                                 // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ActorEndWorldLocation1;                                  // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ActorWorldLocation1;                                     // 0x0030(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BQ1O[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AProMod_Parent_C*                                    TargetPipe1;                                             // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bShouldFlipSpline;                                       // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K8QD[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.IsCurrentAtFullExtentFromTarget
	 */
	struct AProMod_Parent_C_IsCurrentAtFullExtentFromTarget_Params
	{
	public:
		class AProMod_Parent_C*                                    TargetPipeModule1;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AProMod_Parent_C*                                    TargetPipeModule2;                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsAtFullExtent;                                          // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3SWS[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      PivotDistanceFromTarget;                                 // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.AddUniqueSMCAndActorToArray
	 */
	struct AProMod_Parent_C_AddUniqueSMCAndActorToArray_Params
	{
	public:
		class AProMod_Parent_C*                                    TargetActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStaticMeshComponent*                                StaticMeshComponent;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USplineMeshComponent*                                SplineMeshComponent;                                     // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.RebuildTargets
	 */
	struct AProMod_Parent_C_RebuildTargets_Params
	{	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.GetAxisFromVector
	 */
	struct AProMod_Parent_C_GetAxisFromVector_Params
	{
	public:
		struct FVector                                             Vector;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AxisIndex;                                               // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.MakePipeConnection
	 */
	struct AProMod_Parent_C_MakePipeConnection_Params
	{
	public:
		unsigned char                                              UnknownData_6S11[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.MoveAnchorGizmos
	 */
	struct AProMod_Parent_C_MoveAnchorGizmos_Params
	{	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.AssingDynMatData
	 */
	struct AProMod_Parent_C_AssingDynMatData_Params
	{	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.AssignLightChannel
	 */
	struct AProMod_Parent_C_AssignLightChannel_Params
	{	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.CreateStretchingMeshesComponents
	 */
	struct AProMod_Parent_C_CreateStretchingMeshesComponents_Params
	{	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.CreateLibraryMeshes
	 */
	struct AProMod_Parent_C_CreateLibraryMeshes_Params
	{	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.ShuffleSpecialMeshesSeed
	 */
	struct AProMod_Parent_C_ShuffleSpecialMeshesSeed_Params
	{
	public:
		TArray<class UStaticMesh*>                                 _Staticmeshes;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class UStaticMesh*>                                 SuffledSM;                                               // 0x0010(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.AssignPerLibMeshMaterialOverride
	 */
	struct AProMod_Parent_C_AssignPerLibMeshMaterialOverride_Params
	{	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.ShuffleWithSeed
	 */
	struct AProMod_Parent_C_ShuffleWithSeed_Params
	{	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.GetStandardStaticmeshLibrary
	 */
	struct AProMod_Parent_C_GetStandardStaticmeshLibrary_Params
	{
	public:
		TArray<class UStaticMesh*>                                 _PossibleMeshLibrary;                                    // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.GetSpecialStaticmeshLibrary
	 */
	struct AProMod_Parent_C_GetSpecialStaticmeshLibrary_Params
	{
	public:
		TArray<class UStaticMesh*>                                 _PossibleMeshLibrary;                                    // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.ReassignStaticMeshFromLibrary
	 */
	struct AProMod_Parent_C_ReassignStaticMeshFromLibrary_Params
	{	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.SetStaticMeshComponent
	 */
	struct AProMod_Parent_C_SetStaticMeshComponent_Params
	{	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.GetScale
	 */
	struct AProMod_Parent_C_GetScale_Params
	{
	public:
		ELockAxis                                                  Axis;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JI5R[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CurrentModuleScale;                                      // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       UsingTiling;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TIK3[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Scale;                                                   // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.GetOffset
	 */
	struct AProMod_Parent_C_GetOffset_Params
	{
	public:
		ELockAxis                                                  Axis;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PA7K[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CurrentModuleScale;                                      // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MaxDistance;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NumLoop;                                                 // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isTiling;                                                // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L55H[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Offset;                                                  // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.SetIsTiling
	 */
	struct AProMod_Parent_C_SetIsTiling_Params
	{
	public:
		bool                                                       isTiling;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.GetFinalTranslation
	 */
	struct AProMod_Parent_C_GetFinalTranslation_Params
	{
	public:
		bool                                                       Tiling;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2VDR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      X;                                                       // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Y;                                                       // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Z;                                                       // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.SetMaterialsToTriPlanarMapping
	 */
	struct AProMod_Parent_C_SetMaterialsToTriPlanarMapping_Params
	{	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.FixTilingForAxisUsage
	 */
	struct AProMod_Parent_C_FixTilingForAxisUsage_Params
	{	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.CheckForPreviousLockAxis
	 */
	struct AProMod_Parent_C_CheckForPreviousLockAxis_Params
	{	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.AddStaticMeshAtLocation
	 */
	struct AProMod_Parent_C_AddStaticMeshAtLocation_Params
	{
	public:
		float                                                      Relative_Transform_Scale_X;                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Relative_Transform_Scale_Z;                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Relative_Transform_Scale_Y;                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Relative_Transform_Location_X;                           // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Relative_Transform_Location_Y;                           // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Relative_Transform_Location_Z;                           // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.CreateComponents
	 */
	struct AProMod_Parent_C_CreateComponents_Params
	{	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.LimitGizmo
	 */
	struct AProMod_Parent_C_LimitGizmo_Params
	{	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.UserConstructionScript
	 */
	struct AProMod_Parent_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.OnEditorPostLoad
	 */
	struct AProMod_Parent_C_OnEditorPostLoad_Params
	{	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.OnPostActorsPasted
	 */
	struct AProMod_Parent_C_OnPostActorsPasted_Params
	{
	public:
		TArray<class AActor*>                                      pastedActors;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.PostDuplicated
	 */
	struct AProMod_Parent_C_PostDuplicated_Params
	{
	public:
		class AActor*                                              duplicationParent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.ReceiveBeginPlay
	 */
	struct AProMod_Parent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.PostEditMove
	 */
	struct AProMod_Parent_C_PostEditMove_Params
	{
	public:
		bool                                                       bFinished;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.PostAddedToLevel
	 */
	struct AProMod_Parent_C_PostAddedToLevel_Params
	{	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.TickSelected
	 */
	struct AProMod_Parent_C_TickSelected_Params
	{	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.PostEditChange
	 */
	struct AProMod_Parent_C_PostEditChange_Params
	{
	public:
		class FName                                                PropertyName;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ProMod_Parent.ProMod_Parent_C.ExecuteUbergraph_ProMod_Parent
	 */
	struct AProMod_Parent_C_ExecuteUbergraph_ProMod_Parent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
