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
	 * 		Name   -> Function StretchableModule.StretchableModule_C.MoveAnchorGizmo
	 * 		Flags  -> ()
	 */
	void AStretchableModule_C::MoveAnchorGizmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StretchableModule.StretchableModule_C.MoveAnchorGizmo");
		
		AStretchableModule_C_MoveAnchorGizmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StretchableModule.StretchableModule_C.AssingDynMatData
	 * 		Flags  -> ()
	 */
	void AStretchableModule_C::AssingDynMatData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StretchableModule.StretchableModule_C.AssingDynMatData");
		
		AStretchableModule_C_AssingDynMatData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StretchableModule.StretchableModule_C.AssignLightChannel
	 * 		Flags  -> ()
	 */
	void AStretchableModule_C::AssignLightChannel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StretchableModule.StretchableModule_C.AssignLightChannel");
		
		AStretchableModule_C_AssignLightChannel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StretchableModule.StretchableModule_C.RunConstructionScript
	 * 		Flags  -> ()
	 */
	void AStretchableModule_C::RunConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StretchableModule.StretchableModule_C.RunConstructionScript");
		
		AStretchableModule_C_RunConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StretchableModule.StretchableModule_C.CreateLibraryMeshes
	 * 		Flags  -> ()
	 */
	void AStretchableModule_C::CreateLibraryMeshes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StretchableModule.StretchableModule_C.CreateLibraryMeshes");
		
		AStretchableModule_C_CreateLibraryMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StretchableModule.StretchableModule_C.ShuffleSpecialMeshesSeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UStaticMesh*>                         _Staticmeshes                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class UStaticMesh*>                         SuffledSM                                                  (Parm, OutParm)
	 */
	void AStretchableModule_C::ShuffleSpecialMeshesSeed(TArray<class UStaticMesh*>* _Staticmeshes, TArray<class UStaticMesh*>* SuffledSM)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StretchableModule.StretchableModule_C.ShuffleSpecialMeshesSeed");
		
		AStretchableModule_C_ShuffleSpecialMeshesSeed_Params params {};
		
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
	 * 		Name   -> Function StretchableModule.StretchableModule_C.AssignPerLibMeshMaterialOverride
	 * 		Flags  -> ()
	 */
	void AStretchableModule_C::AssignPerLibMeshMaterialOverride()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StretchableModule.StretchableModule_C.AssignPerLibMeshMaterialOverride");
		
		AStretchableModule_C_AssignPerLibMeshMaterialOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StretchableModule.StretchableModule_C.ShuffleWithSeed
	 * 		Flags  -> ()
	 */
	void AStretchableModule_C::ShuffleWithSeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StretchableModule.StretchableModule_C.ShuffleWithSeed");
		
		AStretchableModule_C_ShuffleWithSeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StretchableModule.StretchableModule_C.GetStandardStaticmeshLibrary
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UStaticMesh*>                         _PossibleMeshLibrary                                       (Parm, OutParm)
	 */
	void AStretchableModule_C::GetStandardStaticmeshLibrary(TArray<class UStaticMesh*>* _PossibleMeshLibrary)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StretchableModule.StretchableModule_C.GetStandardStaticmeshLibrary");
		
		AStretchableModule_C_GetStandardStaticmeshLibrary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (_PossibleMeshLibrary != nullptr)
			*_PossibleMeshLibrary = params._PossibleMeshLibrary;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StretchableModule.StretchableModule_C.GetSpecialStaticmeshLibrary
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UStaticMesh*>                         _PossibleMeshLibrary                                       (Parm, OutParm)
	 */
	void AStretchableModule_C::GetSpecialStaticmeshLibrary(TArray<class UStaticMesh*>* _PossibleMeshLibrary)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StretchableModule.StretchableModule_C.GetSpecialStaticmeshLibrary");
		
		AStretchableModule_C_GetSpecialStaticmeshLibrary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (_PossibleMeshLibrary != nullptr)
			*_PossibleMeshLibrary = params._PossibleMeshLibrary;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StretchableModule.StretchableModule_C.ReassignStaticMeshFromLibrary
	 * 		Flags  -> ()
	 */
	void AStretchableModule_C::ReassignStaticMeshFromLibrary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StretchableModule.StretchableModule_C.ReassignStaticMeshFromLibrary");
		
		AStretchableModule_C_ReassignStaticMeshFromLibrary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StretchableModule.StretchableModule_C.SetStaticMeshComponent
	 * 		Flags  -> ()
	 */
	void AStretchableModule_C::SetStaticMeshComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StretchableModule.StretchableModule_C.SetStaticMeshComponent");
		
		AStretchableModule_C_SetStaticMeshComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StretchableModule.StretchableModule_C.GetScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELockAxis                                          Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CurrentModuleScale                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               UsingTiling                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Scale                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStretchableModule_C::GetScale(ELockAxis Axis, float CurrentModuleScale, bool UsingTiling, float* Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StretchableModule.StretchableModule_C.GetScale");
		
		AStretchableModule_C_GetScale_Params params {};
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
	 * 		Name   -> Function StretchableModule.StretchableModule_C.GetOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELockAxis                                          Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CurrentModuleScale                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MaxDistance                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NumLoop                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isTiling                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Offset                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStretchableModule_C::GetOffset(ELockAxis Axis, float CurrentModuleScale, int32_t MaxDistance, int32_t NumLoop, bool isTiling, float* Offset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StretchableModule.StretchableModule_C.GetOffset");
		
		AStretchableModule_C_GetOffset_Params params {};
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
	 * 		Name   -> Function StretchableModule.StretchableModule_C.SetIsTiling
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isTiling                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStretchableModule_C::SetIsTiling(bool* isTiling)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StretchableModule.StretchableModule_C.SetIsTiling");
		
		AStretchableModule_C_SetIsTiling_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isTiling != nullptr)
			*isTiling = params.isTiling;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StretchableModule.StretchableModule_C.GetFinalTranslation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Tiling                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              X                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Y                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Z                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStretchableModule_C::GetFinalTranslation(bool Tiling, float* X, float* Y, float* Z)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StretchableModule.StretchableModule_C.GetFinalTranslation");
		
		AStretchableModule_C_GetFinalTranslation_Params params {};
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
	 * 		Name   -> Function StretchableModule.StretchableModule_C.SetMaterialsToTriPlanarMapping
	 * 		Flags  -> ()
	 */
	void AStretchableModule_C::SetMaterialsToTriPlanarMapping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StretchableModule.StretchableModule_C.SetMaterialsToTriPlanarMapping");
		
		AStretchableModule_C_SetMaterialsToTriPlanarMapping_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StretchableModule.StretchableModule_C.FixTilingForAxisUsage
	 * 		Flags  -> ()
	 */
	void AStretchableModule_C::FixTilingForAxisUsage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StretchableModule.StretchableModule_C.FixTilingForAxisUsage");
		
		AStretchableModule_C_FixTilingForAxisUsage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StretchableModule.StretchableModule_C.CheckForPreviousLockAxis
	 * 		Flags  -> ()
	 */
	void AStretchableModule_C::CheckForPreviousLockAxis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StretchableModule.StretchableModule_C.CheckForPreviousLockAxis");
		
		AStretchableModule_C_CheckForPreviousLockAxis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StretchableModule.StretchableModule_C.AddStaticMeshAtLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Relative_Transform_Scale_X                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Relative_Transform_Scale_Z                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Relative_Transform_Scale_Y                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Relative_Transform_Location_X                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Relative_Transform_Location_Y                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Relative_Transform_Location_Z                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStretchableModule_C::AddStaticMeshAtLocation(float Relative_Transform_Scale_X, float Relative_Transform_Scale_Z, float Relative_Transform_Scale_Y, float Relative_Transform_Location_X, float Relative_Transform_Location_Y, float Relative_Transform_Location_Z)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StretchableModule.StretchableModule_C.AddStaticMeshAtLocation");
		
		AStretchableModule_C_AddStaticMeshAtLocation_Params params {};
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
	 * 		Name   -> Function StretchableModule.StretchableModule_C.CreateComponents
	 * 		Flags  -> ()
	 */
	void AStretchableModule_C::CreateComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StretchableModule.StretchableModule_C.CreateComponents");
		
		AStretchableModule_C_CreateComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StretchableModule.StretchableModule_C.LimitGizmo
	 * 		Flags  -> ()
	 */
	void AStretchableModule_C::LimitGizmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StretchableModule.StretchableModule_C.LimitGizmo");
		
		AStretchableModule_C_LimitGizmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StretchableModule.StretchableModule_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AStretchableModule_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StretchableModule.StretchableModule_C.UserConstructionScript");
		
		AStretchableModule_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StretchableModule.StretchableModule_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AStretchableModule_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StretchableModule.StretchableModule_C.ReceiveBeginPlay");
		
		AStretchableModule_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StretchableModule.StretchableModule_C.ExecuteUbergraph_StretchableModule
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStretchableModule_C::ExecuteUbergraph_StretchableModule(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StretchableModule.StretchableModule_C.ExecuteUbergraph_StretchableModule");
		
		AStretchableModule_C_ExecuteUbergraph_StretchableModule_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStretchableModule_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStretchableModule_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StretchableModule.StretchableModule_C");
		return ptr;
	}

}


