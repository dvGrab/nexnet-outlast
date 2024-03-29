/**
 * Name: TRIALS
 * Version: FINAL
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
	 * 		Name   -> Function RubbishScatterer_BP.RubbishScatterer_BP_C.AddNewStaticmesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Relative_Transform_Location_X                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Relative_Transform_Location_Y                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Relative_Transform_Location_Z                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Relative_Transform_Rotation_X_Roll                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Relative_Transform_Rotation_Y_Pitch                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Relative_Transform_Rotation_Z_Yaw                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Relative_Transform_Scale_X                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Relative_Transform_Scale_Y                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Relative_Transform_Scale_Z                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStaticMesh*                                 NewMesh                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARubbishScatterer_BP_C::AddNewStaticmesh(float Relative_Transform_Location_X, float Relative_Transform_Location_Y, float Relative_Transform_Location_Z, float Relative_Transform_Rotation_X_Roll, float Relative_Transform_Rotation_Y_Pitch, float Relative_Transform_Rotation_Z_Yaw, float Relative_Transform_Scale_X, float Relative_Transform_Scale_Y, float Relative_Transform_Scale_Z, class UStaticMesh* NewMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RubbishScatterer_BP.RubbishScatterer_BP_C.AddNewStaticmesh");
		
		ARubbishScatterer_BP_C_AddNewStaticmesh_Params params {};
		params.Relative_Transform_Location_X = Relative_Transform_Location_X;
		params.Relative_Transform_Location_Y = Relative_Transform_Location_Y;
		params.Relative_Transform_Location_Z = Relative_Transform_Location_Z;
		params.Relative_Transform_Rotation_X_Roll = Relative_Transform_Rotation_X_Roll;
		params.Relative_Transform_Rotation_Y_Pitch = Relative_Transform_Rotation_Y_Pitch;
		params.Relative_Transform_Rotation_Z_Yaw = Relative_Transform_Rotation_Z_Yaw;
		params.Relative_Transform_Scale_X = Relative_Transform_Scale_X;
		params.Relative_Transform_Scale_Y = Relative_Transform_Scale_Y;
		params.Relative_Transform_Scale_Z = Relative_Transform_Scale_Z;
		params.NewMesh = NewMesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RubbishScatterer_BP.RubbishScatterer_BP_C.Scatter
	 * 		Flags  -> ()
	 */
	void ARubbishScatterer_BP_C::Scatter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RubbishScatterer_BP.RubbishScatterer_BP_C.Scatter");
		
		ARubbishScatterer_BP_C_Scatter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RubbishScatterer_BP.RubbishScatterer_BP_C.Populate
	 * 		Flags  -> ()
	 */
	void ARubbishScatterer_BP_C::Populate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RubbishScatterer_BP.RubbishScatterer_BP_C.Populate");
		
		ARubbishScatterer_BP_C_Populate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RubbishScatterer_BP.RubbishScatterer_BP_C.MoveAnchorGizmo
	 * 		Flags  -> ()
	 */
	void ARubbishScatterer_BP_C::MoveAnchorGizmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RubbishScatterer_BP.RubbishScatterer_BP_C.MoveAnchorGizmo");
		
		ARubbishScatterer_BP_C_MoveAnchorGizmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RubbishScatterer_BP.RubbishScatterer_BP_C.AssingDynMatData
	 * 		Flags  -> ()
	 */
	void ARubbishScatterer_BP_C::AssingDynMatData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RubbishScatterer_BP.RubbishScatterer_BP_C.AssingDynMatData");
		
		ARubbishScatterer_BP_C_AssingDynMatData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RubbishScatterer_BP.RubbishScatterer_BP_C.AssignLightChannel
	 * 		Flags  -> ()
	 */
	void ARubbishScatterer_BP_C::AssignLightChannel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RubbishScatterer_BP.RubbishScatterer_BP_C.AssignLightChannel");
		
		ARubbishScatterer_BP_C_AssignLightChannel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RubbishScatterer_BP.RubbishScatterer_BP_C.RunConstructionScript
	 * 		Flags  -> ()
	 */
	void ARubbishScatterer_BP_C::RunConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RubbishScatterer_BP.RubbishScatterer_BP_C.RunConstructionScript");
		
		ARubbishScatterer_BP_C_RunConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RubbishScatterer_BP.RubbishScatterer_BP_C.CreateLibraryMeshes
	 * 		Flags  -> ()
	 */
	void ARubbishScatterer_BP_C::CreateLibraryMeshes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RubbishScatterer_BP.RubbishScatterer_BP_C.CreateLibraryMeshes");
		
		ARubbishScatterer_BP_C_CreateLibraryMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RubbishScatterer_BP.RubbishScatterer_BP_C.ShuffleSpecialMeshesSeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UStaticMesh*>                         _Staticmeshes                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class UStaticMesh*>                         SuffledSM                                                  (Parm, OutParm)
	 */
	void ARubbishScatterer_BP_C::ShuffleSpecialMeshesSeed(TArray<class UStaticMesh*>* _Staticmeshes, TArray<class UStaticMesh*>* SuffledSM)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RubbishScatterer_BP.RubbishScatterer_BP_C.ShuffleSpecialMeshesSeed");
		
		ARubbishScatterer_BP_C_ShuffleSpecialMeshesSeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (_Staticmeshes != nullptr)
			*_Staticmeshes = params._Staticmeshes;
		if (SuffledSM != nullptr)
			*SuffledSM = params.SuffledSM;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RubbishScatterer_BP.RubbishScatterer_BP_C.AssignPerLibMeshMaterialOverride
	 * 		Flags  -> ()
	 */
	void ARubbishScatterer_BP_C::AssignPerLibMeshMaterialOverride()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RubbishScatterer_BP.RubbishScatterer_BP_C.AssignPerLibMeshMaterialOverride");
		
		ARubbishScatterer_BP_C_AssignPerLibMeshMaterialOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RubbishScatterer_BP.RubbishScatterer_BP_C.ShuffleWithSeed
	 * 		Flags  -> ()
	 */
	void ARubbishScatterer_BP_C::ShuffleWithSeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RubbishScatterer_BP.RubbishScatterer_BP_C.ShuffleWithSeed");
		
		ARubbishScatterer_BP_C_ShuffleWithSeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RubbishScatterer_BP.RubbishScatterer_BP_C.GetStandardStaticmeshLibrary
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UStaticMesh*>                         _PossibleMeshLibrary                                       (Parm, OutParm)
	 */
	void ARubbishScatterer_BP_C::GetStandardStaticmeshLibrary(TArray<class UStaticMesh*>* _PossibleMeshLibrary)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RubbishScatterer_BP.RubbishScatterer_BP_C.GetStandardStaticmeshLibrary");
		
		ARubbishScatterer_BP_C_GetStandardStaticmeshLibrary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (_PossibleMeshLibrary != nullptr)
			*_PossibleMeshLibrary = params._PossibleMeshLibrary;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RubbishScatterer_BP.RubbishScatterer_BP_C.GetSpecialStaticmeshLibrary
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UStaticMesh*>                         _PossibleMeshLibrary                                       (Parm, OutParm)
	 */
	void ARubbishScatterer_BP_C::GetSpecialStaticmeshLibrary(TArray<class UStaticMesh*>* _PossibleMeshLibrary)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RubbishScatterer_BP.RubbishScatterer_BP_C.GetSpecialStaticmeshLibrary");
		
		ARubbishScatterer_BP_C_GetSpecialStaticmeshLibrary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (_PossibleMeshLibrary != nullptr)
			*_PossibleMeshLibrary = params._PossibleMeshLibrary;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RubbishScatterer_BP.RubbishScatterer_BP_C.ReassignStaticMeshFromLibrary
	 * 		Flags  -> ()
	 */
	void ARubbishScatterer_BP_C::ReassignStaticMeshFromLibrary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RubbishScatterer_BP.RubbishScatterer_BP_C.ReassignStaticMeshFromLibrary");
		
		ARubbishScatterer_BP_C_ReassignStaticMeshFromLibrary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RubbishScatterer_BP.RubbishScatterer_BP_C.SetStaticMeshComponent
	 * 		Flags  -> ()
	 */
	void ARubbishScatterer_BP_C::SetStaticMeshComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RubbishScatterer_BP.RubbishScatterer_BP_C.SetStaticMeshComponent");
		
		ARubbishScatterer_BP_C_SetStaticMeshComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RubbishScatterer_BP.RubbishScatterer_BP_C.GetScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELockAxis                                          Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CurrentModuleScale                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               UsingTiling                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Scale                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARubbishScatterer_BP_C::GetScale(ELockAxis Axis, float CurrentModuleScale, bool UsingTiling, float* Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RubbishScatterer_BP.RubbishScatterer_BP_C.GetScale");
		
		ARubbishScatterer_BP_C_GetScale_Params params {};
		params.Axis = Axis;
		params.CurrentModuleScale = CurrentModuleScale;
		params.UsingTiling = UsingTiling;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Scale != nullptr)
			*Scale = params.Scale;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RubbishScatterer_BP.RubbishScatterer_BP_C.GetOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELockAxis                                          Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CurrentModuleScale                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MaxDistance                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NumLoop                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isTiling                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Offset                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARubbishScatterer_BP_C::GetOffset(ELockAxis Axis, float CurrentModuleScale, int32_t MaxDistance, int32_t NumLoop, bool isTiling, float* Offset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RubbishScatterer_BP.RubbishScatterer_BP_C.GetOffset");
		
		ARubbishScatterer_BP_C_GetOffset_Params params {};
		params.Axis = Axis;
		params.CurrentModuleScale = CurrentModuleScale;
		params.MaxDistance = MaxDistance;
		params.NumLoop = NumLoop;
		params.isTiling = isTiling;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Offset != nullptr)
			*Offset = params.Offset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RubbishScatterer_BP.RubbishScatterer_BP_C.SetIsTiling
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isTiling                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARubbishScatterer_BP_C::SetIsTiling(bool* isTiling)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RubbishScatterer_BP.RubbishScatterer_BP_C.SetIsTiling");
		
		ARubbishScatterer_BP_C_SetIsTiling_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isTiling != nullptr)
			*isTiling = params.isTiling;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RubbishScatterer_BP.RubbishScatterer_BP_C.GetFinalTranslation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Tiling                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              X                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Y                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Z                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARubbishScatterer_BP_C::GetFinalTranslation(bool Tiling, float* X, float* Y, float* Z)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RubbishScatterer_BP.RubbishScatterer_BP_C.GetFinalTranslation");
		
		ARubbishScatterer_BP_C_GetFinalTranslation_Params params {};
		params.Tiling = Tiling;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (X != nullptr)
			*X = params.X;
		if (Y != nullptr)
			*Y = params.Y;
		if (Z != nullptr)
			*Z = params.Z;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RubbishScatterer_BP.RubbishScatterer_BP_C.SetMaterialsToTriPlanarMapping
	 * 		Flags  -> ()
	 */
	void ARubbishScatterer_BP_C::SetMaterialsToTriPlanarMapping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RubbishScatterer_BP.RubbishScatterer_BP_C.SetMaterialsToTriPlanarMapping");
		
		ARubbishScatterer_BP_C_SetMaterialsToTriPlanarMapping_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RubbishScatterer_BP.RubbishScatterer_BP_C.FixTilingForAxisUsage
	 * 		Flags  -> ()
	 */
	void ARubbishScatterer_BP_C::FixTilingForAxisUsage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RubbishScatterer_BP.RubbishScatterer_BP_C.FixTilingForAxisUsage");
		
		ARubbishScatterer_BP_C_FixTilingForAxisUsage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RubbishScatterer_BP.RubbishScatterer_BP_C.CheckForPreviousLockAxis
	 * 		Flags  -> ()
	 */
	void ARubbishScatterer_BP_C::CheckForPreviousLockAxis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RubbishScatterer_BP.RubbishScatterer_BP_C.CheckForPreviousLockAxis");
		
		ARubbishScatterer_BP_C_CheckForPreviousLockAxis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RubbishScatterer_BP.RubbishScatterer_BP_C.AddStaticMeshAtLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Relative_Transform_Scale_X                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Relative_Transform_Scale_Z                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Relative_Transform_Scale_Y                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Relative_Transform_Location_X                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Relative_Transform_Location_Y                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Relative_Transform_Location_Z                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARubbishScatterer_BP_C::AddStaticMeshAtLocation(float Relative_Transform_Scale_X, float Relative_Transform_Scale_Z, float Relative_Transform_Scale_Y, float Relative_Transform_Location_X, float Relative_Transform_Location_Y, float Relative_Transform_Location_Z)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RubbishScatterer_BP.RubbishScatterer_BP_C.AddStaticMeshAtLocation");
		
		ARubbishScatterer_BP_C_AddStaticMeshAtLocation_Params params {};
		params.Relative_Transform_Scale_X = Relative_Transform_Scale_X;
		params.Relative_Transform_Scale_Z = Relative_Transform_Scale_Z;
		params.Relative_Transform_Scale_Y = Relative_Transform_Scale_Y;
		params.Relative_Transform_Location_X = Relative_Transform_Location_X;
		params.Relative_Transform_Location_Y = Relative_Transform_Location_Y;
		params.Relative_Transform_Location_Z = Relative_Transform_Location_Z;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RubbishScatterer_BP.RubbishScatterer_BP_C.CreateComponents
	 * 		Flags  -> ()
	 */
	void ARubbishScatterer_BP_C::CreateComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RubbishScatterer_BP.RubbishScatterer_BP_C.CreateComponents");
		
		ARubbishScatterer_BP_C_CreateComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RubbishScatterer_BP.RubbishScatterer_BP_C.LimitGizmo
	 * 		Flags  -> ()
	 */
	void ARubbishScatterer_BP_C::LimitGizmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RubbishScatterer_BP.RubbishScatterer_BP_C.LimitGizmo");
		
		ARubbishScatterer_BP_C_LimitGizmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RubbishScatterer_BP.RubbishScatterer_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ARubbishScatterer_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RubbishScatterer_BP.RubbishScatterer_BP_C.UserConstructionScript");
		
		ARubbishScatterer_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RubbishScatterer_BP.RubbishScatterer_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ARubbishScatterer_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RubbishScatterer_BP.RubbishScatterer_BP_C.ReceiveBeginPlay");
		
		ARubbishScatterer_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RubbishScatterer_BP.RubbishScatterer_BP_C.ExecuteUbergraph_RubbishScatterer_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARubbishScatterer_BP_C::ExecuteUbergraph_RubbishScatterer_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RubbishScatterer_BP.RubbishScatterer_BP_C.ExecuteUbergraph_RubbishScatterer_BP");
		
		ARubbishScatterer_BP_C_ExecuteUbergraph_RubbishScatterer_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARubbishScatterer_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARubbishScatterer_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RubbishScatterer_BP.RubbishScatterer_BP_C");
		return ptr;
	}

}


