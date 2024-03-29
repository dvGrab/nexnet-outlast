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
	 * Function RubbishScatterer_BP.RubbishScatterer_BP_C.AddNewStaticmesh
	 */
	struct ARubbishScatterer_BP_C_AddNewStaticmesh_Params
	{
	public:
		float                                                      Relative_Transform_Location_X;                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Relative_Transform_Location_Y;                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Relative_Transform_Location_Z;                           // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Relative_Transform_Rotation_X_Roll;                      // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Relative_Transform_Rotation_Y_Pitch;                     // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Relative_Transform_Rotation_Z_Yaw;                       // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Relative_Transform_Scale_X;                              // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Relative_Transform_Scale_Y;                              // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Relative_Transform_Scale_Z;                              // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3FM0[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UStaticMesh*                                         NewMesh;                                                 // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RubbishScatterer_BP.RubbishScatterer_BP_C.Scatter
	 */
	struct ARubbishScatterer_BP_C_Scatter_Params
	{	};

	/**
	 * Function RubbishScatterer_BP.RubbishScatterer_BP_C.Populate
	 */
	struct ARubbishScatterer_BP_C_Populate_Params
	{	};

	/**
	 * Function RubbishScatterer_BP.RubbishScatterer_BP_C.MoveAnchorGizmo
	 */
	struct ARubbishScatterer_BP_C_MoveAnchorGizmo_Params
	{	};

	/**
	 * Function RubbishScatterer_BP.RubbishScatterer_BP_C.AssingDynMatData
	 */
	struct ARubbishScatterer_BP_C_AssingDynMatData_Params
	{	};

	/**
	 * Function RubbishScatterer_BP.RubbishScatterer_BP_C.AssignLightChannel
	 */
	struct ARubbishScatterer_BP_C_AssignLightChannel_Params
	{	};

	/**
	 * Function RubbishScatterer_BP.RubbishScatterer_BP_C.RunConstructionScript
	 */
	struct ARubbishScatterer_BP_C_RunConstructionScript_Params
	{	};

	/**
	 * Function RubbishScatterer_BP.RubbishScatterer_BP_C.CreateLibraryMeshes
	 */
	struct ARubbishScatterer_BP_C_CreateLibraryMeshes_Params
	{	};

	/**
	 * Function RubbishScatterer_BP.RubbishScatterer_BP_C.ShuffleSpecialMeshesSeed
	 */
	struct ARubbishScatterer_BP_C_ShuffleSpecialMeshesSeed_Params
	{
	public:
		TArray<class UStaticMesh*>                                 _Staticmeshes;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class UStaticMesh*>                                 SuffledSM;                                               // 0x0010(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function RubbishScatterer_BP.RubbishScatterer_BP_C.AssignPerLibMeshMaterialOverride
	 */
	struct ARubbishScatterer_BP_C_AssignPerLibMeshMaterialOverride_Params
	{	};

	/**
	 * Function RubbishScatterer_BP.RubbishScatterer_BP_C.ShuffleWithSeed
	 */
	struct ARubbishScatterer_BP_C_ShuffleWithSeed_Params
	{	};

	/**
	 * Function RubbishScatterer_BP.RubbishScatterer_BP_C.GetStandardStaticmeshLibrary
	 */
	struct ARubbishScatterer_BP_C_GetStandardStaticmeshLibrary_Params
	{
	public:
		TArray<class UStaticMesh*>                                 _PossibleMeshLibrary;                                    // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function RubbishScatterer_BP.RubbishScatterer_BP_C.GetSpecialStaticmeshLibrary
	 */
	struct ARubbishScatterer_BP_C_GetSpecialStaticmeshLibrary_Params
	{
	public:
		TArray<class UStaticMesh*>                                 _PossibleMeshLibrary;                                    // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function RubbishScatterer_BP.RubbishScatterer_BP_C.ReassignStaticMeshFromLibrary
	 */
	struct ARubbishScatterer_BP_C_ReassignStaticMeshFromLibrary_Params
	{	};

	/**
	 * Function RubbishScatterer_BP.RubbishScatterer_BP_C.SetStaticMeshComponent
	 */
	struct ARubbishScatterer_BP_C_SetStaticMeshComponent_Params
	{	};

	/**
	 * Function RubbishScatterer_BP.RubbishScatterer_BP_C.GetScale
	 */
	struct ARubbishScatterer_BP_C_GetScale_Params
	{
	public:
		ELockAxis                                                  Axis;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1K6B[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CurrentModuleScale;                                      // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       UsingTiling;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZKHV[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Scale;                                                   // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RubbishScatterer_BP.RubbishScatterer_BP_C.GetOffset
	 */
	struct ARubbishScatterer_BP_C_GetOffset_Params
	{
	public:
		ELockAxis                                                  Axis;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3BXY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CurrentModuleScale;                                      // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MaxDistance;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NumLoop;                                                 // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isTiling;                                                // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HU6U[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Offset;                                                  // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RubbishScatterer_BP.RubbishScatterer_BP_C.SetIsTiling
	 */
	struct ARubbishScatterer_BP_C_SetIsTiling_Params
	{
	public:
		bool                                                       isTiling;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RubbishScatterer_BP.RubbishScatterer_BP_C.GetFinalTranslation
	 */
	struct ARubbishScatterer_BP_C_GetFinalTranslation_Params
	{
	public:
		bool                                                       Tiling;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SH6B[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      X;                                                       // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Y;                                                       // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Z;                                                       // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RubbishScatterer_BP.RubbishScatterer_BP_C.SetMaterialsToTriPlanarMapping
	 */
	struct ARubbishScatterer_BP_C_SetMaterialsToTriPlanarMapping_Params
	{	};

	/**
	 * Function RubbishScatterer_BP.RubbishScatterer_BP_C.FixTilingForAxisUsage
	 */
	struct ARubbishScatterer_BP_C_FixTilingForAxisUsage_Params
	{	};

	/**
	 * Function RubbishScatterer_BP.RubbishScatterer_BP_C.CheckForPreviousLockAxis
	 */
	struct ARubbishScatterer_BP_C_CheckForPreviousLockAxis_Params
	{	};

	/**
	 * Function RubbishScatterer_BP.RubbishScatterer_BP_C.AddStaticMeshAtLocation
	 */
	struct ARubbishScatterer_BP_C_AddStaticMeshAtLocation_Params
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
	 * Function RubbishScatterer_BP.RubbishScatterer_BP_C.CreateComponents
	 */
	struct ARubbishScatterer_BP_C_CreateComponents_Params
	{	};

	/**
	 * Function RubbishScatterer_BP.RubbishScatterer_BP_C.LimitGizmo
	 */
	struct ARubbishScatterer_BP_C_LimitGizmo_Params
	{	};

	/**
	 * Function RubbishScatterer_BP.RubbishScatterer_BP_C.UserConstructionScript
	 */
	struct ARubbishScatterer_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function RubbishScatterer_BP.RubbishScatterer_BP_C.ReceiveBeginPlay
	 */
	struct ARubbishScatterer_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function RubbishScatterer_BP.RubbishScatterer_BP_C.ExecuteUbergraph_RubbishScatterer_BP
	 */
	struct ARubbishScatterer_BP_C_ExecuteUbergraph_RubbishScatterer_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
