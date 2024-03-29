#pragma once

/**
 * Name: READYORNOT
 * Version: 0.0.1
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
	 * Function DynamicCoverSystem.CoverGenOverrideVolume.GenerateCoverPoints
	 */
	struct ACoverGenOverrideVolume_GenerateCoverPoints_Params
	{	};

	/**
	 * Function DynamicCoverSystem.CoverPoint.StopPreviewCoverAnim
	 */
	struct ACoverPoint_StopPreviewCoverAnim_Params
	{	};

	/**
	 * Function DynamicCoverSystem.CoverPoint.SetStandCoverType
	 */
	struct ACoverPoint_SetStandCoverType_Params
	{
	public:
		EStandCoverType                                            NewCoverType;                                            // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DynamicCoverSystem.CoverPoint.SetCrouchCoverType
	 */
	struct ACoverPoint_SetCrouchCoverType_Params
	{
	public:
		ECrouchCoverType                                           NewCoverType;                                            // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DynamicCoverSystem.CoverPoint.ResetCoverTypes
	 */
	struct ACoverPoint_ResetCoverTypes_Params
	{	};

	/**
	 * Function DynamicCoverSystem.CoverPoint.PreviewCoverAnim
	 */
	struct ACoverPoint_PreviewCoverAnim_Params
	{	};

	/**
	 * Function DynamicCoverSystem.CoverSystem.ReleaseCover
	 */
	struct UCoverSystem_ReleaseCover_Params
	{
	public:
		struct FCoreUObject_FVector                                InCoverPoint;                                            // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DynamicCoverSystem.CoverSystem.OccupyCover
	 */
	struct UCoverSystem_OccupyCover_Params
	{
	public:
		struct FCoreUObject_FVector                                InCoverPoint;                                            // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DynamicCoverSystem.CoverSystem.IsCoverPointOccupied
	 */
	struct UCoverSystem_IsCoverPointOccupied_Params
	{
	public:
		struct FCoreUObject_FVector                                InCoverLocation;                                         // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DynamicCoverSystem.NotifyingRecastNavMesh.GenerateCoverPoints
	 */
	struct ANotifyingRecastNavMesh_GenerateCoverPoints_Params
	{	};

	/**
	 * Function DynamicCoverSystem.NotifyingRecastNavMesh.DeleteAllCoverPoints
	 */
	struct ANotifyingRecastNavMesh_DeleteAllCoverPoints_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
