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
	 * Function StretchableModule.StretchableModule_C.MoveAnchorGizmo
	 */
	struct AStretchableModule_C_MoveAnchorGizmo_Params
	{	};

	/**
	 * Function StretchableModule.StretchableModule_C.AssingDynMatData
	 */
	struct AStretchableModule_C_AssingDynMatData_Params
	{	};

	/**
	 * Function StretchableModule.StretchableModule_C.AssignLightChannel
	 */
	struct AStretchableModule_C_AssignLightChannel_Params
	{	};

	/**
	 * Function StretchableModule.StretchableModule_C.RunConstructionScript
	 */
	struct AStretchableModule_C_RunConstructionScript_Params
	{	};

	/**
	 * Function StretchableModule.StretchableModule_C.CreateLibraryMeshes
	 */
	struct AStretchableModule_C_CreateLibraryMeshes_Params
	{	};

	/**
	 * Function StretchableModule.StretchableModule_C.ShuffleSpecialMeshesSeed
	 */
	struct AStretchableModule_C_ShuffleSpecialMeshesSeed_Params
	{
	public:
		TArray<class UStaticMesh*>                                 _Staticmeshes;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class UStaticMesh*>                                 SuffledSM;                                               // 0x0010(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function StretchableModule.StretchableModule_C.AssignPerLibMeshMaterialOverride
	 */
	struct AStretchableModule_C_AssignPerLibMeshMaterialOverride_Params
	{	};

	/**
	 * Function StretchableModule.StretchableModule_C.ShuffleWithSeed
	 */
	struct AStretchableModule_C_ShuffleWithSeed_Params
	{	};

	/**
	 * Function StretchableModule.StretchableModule_C.GetStandardStaticmeshLibrary
	 */
	struct AStretchableModule_C_GetStandardStaticmeshLibrary_Params
	{
	public:
		TArray<class UStaticMesh*>                                 _PossibleMeshLibrary;                                    // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function StretchableModule.StretchableModule_C.GetSpecialStaticmeshLibrary
	 */
	struct AStretchableModule_C_GetSpecialStaticmeshLibrary_Params
	{
	public:
		TArray<class UStaticMesh*>                                 _PossibleMeshLibrary;                                    // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function StretchableModule.StretchableModule_C.ReassignStaticMeshFromLibrary
	 */
	struct AStretchableModule_C_ReassignStaticMeshFromLibrary_Params
	{	};

	/**
	 * Function StretchableModule.StretchableModule_C.SetStaticMeshComponent
	 */
	struct AStretchableModule_C_SetStaticMeshComponent_Params
	{	};

	/**
	 * Function StretchableModule.StretchableModule_C.GetScale
	 */
	struct AStretchableModule_C_GetScale_Params
	{
	public:
		ELockAxis                                                  Axis;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SGFN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CurrentModuleScale;                                      // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       UsingTiling;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_18OT[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Scale;                                                   // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StretchableModule.StretchableModule_C.GetOffset
	 */
	struct AStretchableModule_C_GetOffset_Params
	{
	public:
		ELockAxis                                                  Axis;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A8QM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CurrentModuleScale;                                      // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MaxDistance;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NumLoop;                                                 // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isTiling;                                                // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YIHC[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Offset;                                                  // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StretchableModule.StretchableModule_C.SetIsTiling
	 */
	struct AStretchableModule_C_SetIsTiling_Params
	{
	public:
		bool                                                       isTiling;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StretchableModule.StretchableModule_C.GetFinalTranslation
	 */
	struct AStretchableModule_C_GetFinalTranslation_Params
	{
	public:
		bool                                                       Tiling;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_34XM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      X;                                                       // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Y;                                                       // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Z;                                                       // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StretchableModule.StretchableModule_C.SetMaterialsToTriPlanarMapping
	 */
	struct AStretchableModule_C_SetMaterialsToTriPlanarMapping_Params
	{	};

	/**
	 * Function StretchableModule.StretchableModule_C.FixTilingForAxisUsage
	 */
	struct AStretchableModule_C_FixTilingForAxisUsage_Params
	{	};

	/**
	 * Function StretchableModule.StretchableModule_C.CheckForPreviousLockAxis
	 */
	struct AStretchableModule_C_CheckForPreviousLockAxis_Params
	{	};

	/**
	 * Function StretchableModule.StretchableModule_C.AddStaticMeshAtLocation
	 */
	struct AStretchableModule_C_AddStaticMeshAtLocation_Params
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
	 * Function StretchableModule.StretchableModule_C.CreateComponents
	 */
	struct AStretchableModule_C_CreateComponents_Params
	{	};

	/**
	 * Function StretchableModule.StretchableModule_C.LimitGizmo
	 */
	struct AStretchableModule_C_LimitGizmo_Params
	{	};

	/**
	 * Function StretchableModule.StretchableModule_C.UserConstructionScript
	 */
	struct AStretchableModule_C_UserConstructionScript_Params
	{	};

	/**
	 * Function StretchableModule.StretchableModule_C.ReceiveBeginPlay
	 */
	struct AStretchableModule_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function StretchableModule.StretchableModule_C.ExecuteUbergraph_StretchableModule
	 */
	struct AStretchableModule_C_ExecuteUbergraph_StretchableModule_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
