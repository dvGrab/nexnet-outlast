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
	 * Function SplineMeshBase_BP.SplineMeshBase_BP_C.FlattenTangent
	 */
	struct ASplineMeshBase_BP_C_FlattenTangent_Params
	{
	public:
		class USplineComponent*                                    Spline;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SplineMeshBase_BP.SplineMeshBase_BP_C.SetSplinePosition
	 */
	struct ASplineMeshBase_BP_C_SetSplinePosition_Params
	{	};

	/**
	 * Function SplineMeshBase_BP.SplineMeshBase_BP_C.ClearGeneratedMeshes
	 */
	struct ASplineMeshBase_BP_C_ClearGeneratedMeshes_Params
	{	};

	/**
	 * Function SplineMeshBase_BP.SplineMeshBase_BP_C.Construct Spline Meshes
	 */
	struct ASplineMeshBase_BP_C_Construct_Spline_Meshes_Params
	{	};

	/**
	 * Function SplineMeshBase_BP.SplineMeshBase_BP_C.SnapPointOnGrid
	 */
	struct ASplineMeshBase_BP_C_SnapPointOnGrid_Params
	{
	public:
		class USplineComponent*                                    Spline;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SplineMeshBase_BP.SplineMeshBase_BP_C.FindClosetMeshes
	 */
	struct ASplineMeshBase_BP_C_FindClosetMeshes_Params
	{
	public:
		int32_t                                                    A;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UOZ5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USplineComponent*                                    Target;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FSplineMeshData>                             Meshes;                                                  // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    Index;                                                   // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SplineMeshBase_BP.SplineMeshBase_BP_C.AddStaticMesh
	 */
	struct ASplineMeshBase_BP_C_AddStaticMesh_Params
	{
	public:
		struct FVector                                             StartPos;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             StartTangent;                                            // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             EndPos;                                                  // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             EndTangent;                                              // 0x0024(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStaticMesh*                                         NewMesh;                                                 // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SplineMeshBase_BP.SplineMeshBase_BP_C.AddDetailsMeshes
	 */
	struct ASplineMeshBase_BP_C_AddDetailsMeshes_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            Relative_Transform_Rotation;                             // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SplineMeshBase_BP.SplineMeshBase_BP_C.UserConstructionScript
	 */
	struct ASplineMeshBase_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function SplineMeshBase_BP.SplineMeshBase_BP_C.PostToggled
	 */
	struct ASplineMeshBase_BP_C_PostToggled_Params
	{
	public:
		bool                                                       bToggleEnabled;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SplineMeshBase_BP.SplineMeshBase_BP_C.ExecuteUbergraph_SplineMeshBase_BP
	 */
	struct ASplineMeshBase_BP_C_ExecuteUbergraph_SplineMeshBase_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
