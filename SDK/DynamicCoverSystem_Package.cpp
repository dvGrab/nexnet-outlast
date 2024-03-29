/**
 * Name: READYORNOT
 * Version: 0.0.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamicCoverSystem.CoverGenOverrideVolume.GenerateCoverPoints
	 * 		Flags  -> ()
	 */
	void ACoverGenOverrideVolume::GenerateCoverPoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamicCoverSystem.CoverGenOverrideVolume.GenerateCoverPoints");
		
		ACoverGenOverrideVolume_GenerateCoverPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACoverGenOverrideVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACoverGenOverrideVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DynamicCoverSystem.CoverGenOverrideVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamicCoverSystem.CoverPoint.StopPreviewCoverAnim
	 * 		Flags  -> ()
	 */
	void ACoverPoint::StopPreviewCoverAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamicCoverSystem.CoverPoint.StopPreviewCoverAnim");
		
		ACoverPoint_StopPreviewCoverAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamicCoverSystem.CoverPoint.SetStandCoverType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EStandCoverType                                    NewCoverType                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACoverPoint::SetStandCoverType(EStandCoverType NewCoverType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamicCoverSystem.CoverPoint.SetStandCoverType");
		
		ACoverPoint_SetStandCoverType_Params params {};
		params.NewCoverType = NewCoverType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamicCoverSystem.CoverPoint.SetCrouchCoverType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECrouchCoverType                                   NewCoverType                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACoverPoint::SetCrouchCoverType(ECrouchCoverType NewCoverType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamicCoverSystem.CoverPoint.SetCrouchCoverType");
		
		ACoverPoint_SetCrouchCoverType_Params params {};
		params.NewCoverType = NewCoverType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamicCoverSystem.CoverPoint.ResetCoverTypes
	 * 		Flags  -> ()
	 */
	void ACoverPoint::ResetCoverTypes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamicCoverSystem.CoverPoint.ResetCoverTypes");
		
		ACoverPoint_ResetCoverTypes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamicCoverSystem.CoverPoint.PreviewCoverAnim
	 * 		Flags  -> ()
	 */
	void ACoverPoint::PreviewCoverAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamicCoverSystem.CoverPoint.PreviewCoverAnim");
		
		ACoverPoint_PreviewCoverAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACoverPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACoverPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DynamicCoverSystem.CoverPoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamicCoverSystem.CoverSystem.ReleaseCover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector                        InCoverPoint                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCoverSystem::ReleaseCover(const struct FCoreUObject_FVector& InCoverPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamicCoverSystem.CoverSystem.ReleaseCover");
		
		UCoverSystem_ReleaseCover_Params params {};
		params.InCoverPoint = InCoverPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamicCoverSystem.CoverSystem.OccupyCover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector                        InCoverPoint                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCoverSystem::OccupyCover(const struct FCoreUObject_FVector& InCoverPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamicCoverSystem.CoverSystem.OccupyCover");
		
		UCoverSystem_OccupyCover_Params params {};
		params.InCoverPoint = InCoverPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamicCoverSystem.CoverSystem.IsCoverPointOccupied
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector                        InCoverLocation                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCoverSystem::IsCoverPointOccupied(const struct FCoreUObject_FVector& InCoverLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamicCoverSystem.CoverSystem.IsCoverPointOccupied");
		
		UCoverSystem_IsCoverPointOccupied_Params params {};
		params.InCoverLocation = InCoverLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoverSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoverSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DynamicCoverSystem.CoverSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamicCoverSystem.NotifyingRecastNavMesh.GenerateCoverPoints
	 * 		Flags  -> ()
	 */
	void ANotifyingRecastNavMesh::GenerateCoverPoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamicCoverSystem.NotifyingRecastNavMesh.GenerateCoverPoints");
		
		ANotifyingRecastNavMesh_GenerateCoverPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamicCoverSystem.NotifyingRecastNavMesh.DeleteAllCoverPoints
	 * 		Flags  -> ()
	 */
	void ANotifyingRecastNavMesh::DeleteAllCoverPoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamicCoverSystem.NotifyingRecastNavMesh.DeleteAllCoverPoints");
		
		ANotifyingRecastNavMesh_DeleteAllCoverPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANotifyingRecastNavMesh.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANotifyingRecastNavMesh::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DynamicCoverSystem.NotifyingRecastNavMesh");
		return ptr;
	}

}


