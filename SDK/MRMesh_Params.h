﻿#pragma once

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
	 * Function MRMesh.MeshReconstructorBase.StopReconstruction
	 */
	struct UMeshReconstructorBase_StopReconstruction_Params
	{	};

	/**
	 * Function MRMesh.MeshReconstructorBase.StartReconstruction
	 */
	struct UMeshReconstructorBase_StartReconstruction_Params
	{	};

	/**
	 * Function MRMesh.MeshReconstructorBase.PauseReconstruction
	 */
	struct UMeshReconstructorBase_PauseReconstruction_Params
	{	};

	/**
	 * Function MRMesh.MeshReconstructorBase.IsReconstructionStarted
	 */
	struct UMeshReconstructorBase_IsReconstructionStarted_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MRMesh.MeshReconstructorBase.IsReconstructionPaused
	 */
	struct UMeshReconstructorBase_IsReconstructionPaused_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MRMesh.MeshReconstructorBase.DisconnectMRMesh
	 */
	struct UMeshReconstructorBase_DisconnectMRMesh_Params
	{	};

	/**
	 * Function MRMesh.MeshReconstructorBase.ConnectMRMesh
	 */
	struct UMeshReconstructorBase_ConnectMRMesh_Params
	{
	public:
		class UMRMeshComponent*                                    Mesh;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature
	 */
	struct UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BD36[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FVector>                                     Vertices;                                                // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<int32_t>                                            Triangles;                                               // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FVector>                                     Normals;                                                 // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<float>                                              Confidence;                                              // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh
	 */
	struct UMockDataMeshTrackerComponent_DisconnectMRMesh_Params
	{
	public:
		class UMRMeshComponent*                                    InMRMeshPtr;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh
	 */
	struct UMockDataMeshTrackerComponent_ConnectMRMesh_Params
	{
	public:
		class UMRMeshComponent*                                    InMRMeshPtr;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MRMesh.MRMeshComponent.SetWireframeMaterial
	 */
	struct UMRMeshComponent_SetWireframeMaterial_Params
	{
	public:
		class UMaterialInterface*                                  InMaterial;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MRMesh.MRMeshComponent.SetWireframeColor
	 */
	struct UMRMeshComponent_SetWireframeColor_Params
	{
	public:
		struct FLinearColor                                        InColor;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MRMesh.MRMeshComponent.SetUseWireframe
	 */
	struct UMRMeshComponent_SetUseWireframe_Params
	{
	public:
		bool                                                       bUseWireframe;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MRMesh.MRMeshComponent.SetEnableMeshOcclusion
	 */
	struct UMRMeshComponent_SetEnableMeshOcclusion_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MRMesh.MRMeshComponent.IsConnected
	 */
	struct UMRMeshComponent_IsConnected_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MRMesh.MRMeshComponent.GetWireframeColor
	 */
	struct UMRMeshComponent_GetWireframeColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MRMesh.MRMeshComponent.GetUseWireframe
	 */
	struct UMRMeshComponent_GetUseWireframe_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MRMesh.MRMeshComponent.GetEnableMeshOcclusion
	 */
	struct UMRMeshComponent_GetEnableMeshOcclusion_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MRMesh.MRMeshComponent.ForceNavMeshUpdate
	 */
	struct UMRMeshComponent_ForceNavMeshUpdate_Params
	{	};

	/**
	 * Function MRMesh.MRMeshComponent.Clear
	 */
	struct UMRMeshComponent_Clear_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
