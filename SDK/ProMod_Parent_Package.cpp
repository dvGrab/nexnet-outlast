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
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.FixUp
	 * 		Flags  -> ()
	 */
	bool AProMod_Parent_C::FixUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.FixUp");
		
		AProMod_Parent_C_FixUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.SetupCollision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsDetail                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProMod_Parent_C::SetupCollision(class UPrimitiveComponent* Target, bool bIsDetail)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.SetupCollision");
		
		AProMod_Parent_C_SetupCollision_Params params {};
		params.Target = Target;
		params.bIsDetail = bIsDetail;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.ApplyNewMeshSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMeshComponent*                              NewMeshComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProMod_Parent_C::ApplyNewMeshSettings(class UMeshComponent* NewMeshComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.ApplyNewMeshSettings");
		
		AProMod_Parent_C_ApplyNewMeshSettings_Params params {};
		params.NewMeshComponent = NewMeshComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.MakePipeConnection2
	 * 		Flags  -> ()
	 */
	void AProMod_Parent_C::MakePipeConnection2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.MakePipeConnection2");
		
		AProMod_Parent_C_MakePipeConnection2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.CustRunConstruction
	 * 		Flags  -> ()
	 */
	void AProMod_Parent_C::CustRunConstruction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.CustRunConstruction");
		
		AProMod_Parent_C_CustRunConstruction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.CleanOwningActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bChanged                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProMod_Parent_C::CleanOwningActors(bool* bChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.CleanOwningActors");
		
		AProMod_Parent_C_CleanOwningActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bChanged != nullptr)
			*bChanged = params.bChanged;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.SetMaterialOverrides
	 * 		Flags  -> ()
	 */
	void AProMod_Parent_C::SetMaterialOverrides()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.SetMaterialOverrides");
		
		AProMod_Parent_C_SetMaterialOverrides_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.AddManualDetail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStaticMesh*                                 NewMesh                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    RotOffset                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Offset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProMod_Parent_C::AddManualDetail(class UStaticMesh* NewMesh, const struct FRotator& RotOffset, const struct FVector& Scale, const struct FVector& Offset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.AddManualDetail");
		
		AProMod_Parent_C_AddManualDetail_Params params {};
		params.NewMesh = NewMesh;
		params.RotOffset = RotOffset;
		params.Scale = Scale;
		params.Offset = Offset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.IsSameChannel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AProMod_Parent_C*                            CurrentModule                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProMod_Parent_C::IsSameChannel(class AProMod_Parent_C* CurrentModule, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.IsSameChannel");
		
		AProMod_Parent_C_IsSameChannel_Params params {};
		params.CurrentModule = CurrentModule;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.IsValidIntersection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AProMod_Parent_C*                            TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     IntersectionPos                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProMod_Parent_C::IsValidIntersection(class AProMod_Parent_C* TargetActor, bool* Valid, struct FVector* IntersectionPos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.IsValidIntersection");
		
		AProMod_Parent_C_IsValidIntersection_Params params {};
		params.TargetActor = TargetActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Valid != nullptr)
			*Valid = params.Valid;
		if (IntersectionPos != nullptr)
			*IntersectionPos = params.IntersectionPos;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.KeepTextureRatio
	 * 		Flags  -> ()
	 */
	void AProMod_Parent_C::KeepTextureRatio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.KeepTextureRatio");
		
		AProMod_Parent_C_KeepTextureRatio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.CreateDynamicMaterials
	 * 		Flags  -> ()
	 */
	void AProMod_Parent_C::CreateDynamicMaterials()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.CreateDynamicMaterials");
		
		AProMod_Parent_C_CreateDynamicMaterials_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.AddDetailComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              _minDistance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              _Offset                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStaticMesh*                                 StaticMesh                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              _Rotation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProMod_Parent_C::AddDetailComponent(float _minDistance, float _Offset, class UStaticMesh* StaticMesh, float _Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.AddDetailComponent");
		
		AProMod_Parent_C_AddDetailComponent_Params params {};
		params._minDistance = _minDistance;
		params._Offset = _Offset;
		params.StaticMesh = StaticMesh;
		params._Rotation = _Rotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.AddPipeDetails
	 * 		Flags  -> ()
	 */
	void AProMod_Parent_C::AddPipeDetails()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.AddPipeDetails");
		
		AProMod_Parent_C_AddPipeDetails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.GetPipeVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AProMod_Parent_C*                            Pipe                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FVector AProMod_Parent_C::GetPipeVector(class AProMod_Parent_C* Pipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.GetPipeVector");
		
		AProMod_Parent_C_GetPipeVector_Params params {};
		params.Pipe = Pipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.GetConnectorRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AProMod_Parent_C*                            LocalPipe                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AProMod_Parent_C*                            TargetPipe                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isInvertedRoles                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              _PivotDistanceFromTarget                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    Rotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProMod_Parent_C::GetConnectorRotation(class AProMod_Parent_C* LocalPipe, class AProMod_Parent_C* TargetPipe, bool isInvertedRoles, float _PivotDistanceFromTarget, struct FRotator* Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.GetConnectorRotation");
		
		AProMod_Parent_C_GetConnectorRotation_Params params {};
		params.LocalPipe = LocalPipe;
		params.TargetPipe = TargetPipe;
		params.isInvertedRoles = isInvertedRoles;
		params._PivotDistanceFromTarget = _PivotDistanceFromTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Rotation != nullptr)
			*Rotation = params.Rotation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.ClearAllComponents
	 * 		Flags  -> ()
	 */
	void AProMod_Parent_C::ClearAllComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.ClearAllComponents");
		
		AProMod_Parent_C_ClearAllComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.RegisterToPipeModuleManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProMod_Parent_C::RegisterToPipeModuleManager(bool* Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.RegisterToPipeModuleManager");
		
		AProMod_Parent_C_RegisterToPipeModuleManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Valid != nullptr)
			*Valid = params.Valid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.CreateSplineMeshComp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     WorldLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Tangent1                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     WorldLocation2                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Tangen2                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AProMod_Parent_C*                            TargetPipeModule                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bShouldFlipSpline                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProMod_Parent_C::CreateSplineMeshComp(const struct FVector& WorldLocation, const struct FVector& Tangent1, const struct FVector& WorldLocation2, const struct FVector& Tangen2, class AProMod_Parent_C* TargetPipeModule, bool bShouldFlipSpline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.CreateSplineMeshComp");
		
		AProMod_Parent_C_CreateSplineMeshComp_Params params {};
		params.WorldLocation = WorldLocation;
		params.Tangent1 = Tangent1;
		params.WorldLocation2 = WorldLocation2;
		params.Tangen2 = Tangen2;
		params.TargetPipeModule = TargetPipeModule;
		params.bShouldFlipSpline = bShouldFlipSpline;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.isCornerPipe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AProMod_Parent_C*                            _TargetPipe                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isCornerPipe                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     TargetLocation1                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     TargetEndWorldLocation1                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ActorEndWorldLocation1                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ActorWorldLocation1                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AProMod_Parent_C*                            TargetPipe1                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bShouldFlipSpline                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProMod_Parent_C::isCornerPipe(class AProMod_Parent_C* _TargetPipe, bool* isCornerPipe, struct FVector* TargetLocation1, struct FVector* TargetEndWorldLocation1, struct FVector* ActorEndWorldLocation1, struct FVector* ActorWorldLocation1, class AProMod_Parent_C** TargetPipe1, bool* bShouldFlipSpline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.isCornerPipe");
		
		AProMod_Parent_C_isCornerPipe_Params params {};
		params._TargetPipe = _TargetPipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isCornerPipe != nullptr)
			*isCornerPipe = params.isCornerPipe;
		if (TargetLocation1 != nullptr)
			*TargetLocation1 = params.TargetLocation1;
		if (TargetEndWorldLocation1 != nullptr)
			*TargetEndWorldLocation1 = params.TargetEndWorldLocation1;
		if (ActorEndWorldLocation1 != nullptr)
			*ActorEndWorldLocation1 = params.ActorEndWorldLocation1;
		if (ActorWorldLocation1 != nullptr)
			*ActorWorldLocation1 = params.ActorWorldLocation1;
		if (TargetPipe1 != nullptr)
			*TargetPipe1 = params.TargetPipe1;
		if (bShouldFlipSpline != nullptr)
			*bShouldFlipSpline = params.bShouldFlipSpline;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.IsCurrentAtFullExtentFromTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AProMod_Parent_C*                            TargetPipeModule1                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AProMod_Parent_C*                            TargetPipeModule2                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsAtFullExtent                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              PivotDistanceFromTarget                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProMod_Parent_C::IsCurrentAtFullExtentFromTarget(class AProMod_Parent_C* TargetPipeModule1, class AProMod_Parent_C* TargetPipeModule2, bool* IsAtFullExtent, float* PivotDistanceFromTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.IsCurrentAtFullExtentFromTarget");
		
		AProMod_Parent_C_IsCurrentAtFullExtentFromTarget_Params params {};
		params.TargetPipeModule1 = TargetPipeModule1;
		params.TargetPipeModule2 = TargetPipeModule2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsAtFullExtent != nullptr)
			*IsAtFullExtent = params.IsAtFullExtent;
		if (PivotDistanceFromTarget != nullptr)
			*PivotDistanceFromTarget = params.PivotDistanceFromTarget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.AddUniqueSMCAndActorToArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AProMod_Parent_C*                            TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStaticMeshComponent*                        StaticMeshComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USplineMeshComponent*                        SplineMeshComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProMod_Parent_C::AddUniqueSMCAndActorToArray(class AProMod_Parent_C* TargetActor, class UStaticMeshComponent* StaticMeshComponent, class USplineMeshComponent* SplineMeshComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.AddUniqueSMCAndActorToArray");
		
		AProMod_Parent_C_AddUniqueSMCAndActorToArray_Params params {};
		params.TargetActor = TargetActor;
		params.StaticMeshComponent = StaticMeshComponent;
		params.SplineMeshComponent = SplineMeshComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.RebuildTargets
	 * 		Flags  -> ()
	 */
	void AProMod_Parent_C::RebuildTargets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.RebuildTargets");
		
		AProMod_Parent_C_RebuildTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.GetAxisFromVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Vector                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AxisIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProMod_Parent_C::GetAxisFromVector(const struct FVector& Vector, int32_t* AxisIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.GetAxisFromVector");
		
		AProMod_Parent_C_GetAxisFromVector_Params params {};
		params.Vector = Vector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AxisIndex != nullptr)
			*AxisIndex = params.AxisIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.MakePipeConnection
	 * 		Flags  -> ()
	 */
	void AProMod_Parent_C::MakePipeConnection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.MakePipeConnection");
		
		AProMod_Parent_C_MakePipeConnection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.MoveAnchorGizmos
	 * 		Flags  -> ()
	 */
	void AProMod_Parent_C::MoveAnchorGizmos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.MoveAnchorGizmos");
		
		AProMod_Parent_C_MoveAnchorGizmos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.AssingDynMatData
	 * 		Flags  -> ()
	 */
	void AProMod_Parent_C::AssingDynMatData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.AssingDynMatData");
		
		AProMod_Parent_C_AssingDynMatData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.AssignLightChannel
	 * 		Flags  -> ()
	 */
	void AProMod_Parent_C::AssignLightChannel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.AssignLightChannel");
		
		AProMod_Parent_C_AssignLightChannel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.CreateStretchingMeshesComponents
	 * 		Flags  -> ()
	 */
	void AProMod_Parent_C::CreateStretchingMeshesComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.CreateStretchingMeshesComponents");
		
		AProMod_Parent_C_CreateStretchingMeshesComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.CreateLibraryMeshes
	 * 		Flags  -> ()
	 */
	void AProMod_Parent_C::CreateLibraryMeshes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.CreateLibraryMeshes");
		
		AProMod_Parent_C_CreateLibraryMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.ShuffleSpecialMeshesSeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UStaticMesh*>                         _Staticmeshes                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class UStaticMesh*>                         SuffledSM                                                  (Parm, OutParm)
	 */
	void AProMod_Parent_C::ShuffleSpecialMeshesSeed(TArray<class UStaticMesh*>* _Staticmeshes, TArray<class UStaticMesh*>* SuffledSM)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.ShuffleSpecialMeshesSeed");
		
		AProMod_Parent_C_ShuffleSpecialMeshesSeed_Params params {};
		
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
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.AssignPerLibMeshMaterialOverride
	 * 		Flags  -> ()
	 */
	void AProMod_Parent_C::AssignPerLibMeshMaterialOverride()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.AssignPerLibMeshMaterialOverride");
		
		AProMod_Parent_C_AssignPerLibMeshMaterialOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.ShuffleWithSeed
	 * 		Flags  -> ()
	 */
	void AProMod_Parent_C::ShuffleWithSeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.ShuffleWithSeed");
		
		AProMod_Parent_C_ShuffleWithSeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.GetStandardStaticmeshLibrary
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UStaticMesh*>                         _PossibleMeshLibrary                                       (Parm, OutParm)
	 */
	void AProMod_Parent_C::GetStandardStaticmeshLibrary(TArray<class UStaticMesh*>* _PossibleMeshLibrary)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.GetStandardStaticmeshLibrary");
		
		AProMod_Parent_C_GetStandardStaticmeshLibrary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (_PossibleMeshLibrary != nullptr)
			*_PossibleMeshLibrary = params._PossibleMeshLibrary;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.GetSpecialStaticmeshLibrary
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UStaticMesh*>                         _PossibleMeshLibrary                                       (Parm, OutParm)
	 */
	void AProMod_Parent_C::GetSpecialStaticmeshLibrary(TArray<class UStaticMesh*>* _PossibleMeshLibrary)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.GetSpecialStaticmeshLibrary");
		
		AProMod_Parent_C_GetSpecialStaticmeshLibrary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (_PossibleMeshLibrary != nullptr)
			*_PossibleMeshLibrary = params._PossibleMeshLibrary;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.ReassignStaticMeshFromLibrary
	 * 		Flags  -> ()
	 */
	void AProMod_Parent_C::ReassignStaticMeshFromLibrary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.ReassignStaticMeshFromLibrary");
		
		AProMod_Parent_C_ReassignStaticMeshFromLibrary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.SetStaticMeshComponent
	 * 		Flags  -> ()
	 */
	void AProMod_Parent_C::SetStaticMeshComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.SetStaticMeshComponent");
		
		AProMod_Parent_C_SetStaticMeshComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.GetScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELockAxis                                          Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CurrentModuleScale                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               UsingTiling                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Scale                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProMod_Parent_C::GetScale(ELockAxis Axis, float CurrentModuleScale, bool UsingTiling, float* Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.GetScale");
		
		AProMod_Parent_C_GetScale_Params params {};
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
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.GetOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELockAxis                                          Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CurrentModuleScale                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MaxDistance                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NumLoop                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isTiling                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Offset                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProMod_Parent_C::GetOffset(ELockAxis Axis, float CurrentModuleScale, int32_t MaxDistance, int32_t NumLoop, bool isTiling, float* Offset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.GetOffset");
		
		AProMod_Parent_C_GetOffset_Params params {};
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
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.SetIsTiling
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isTiling                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProMod_Parent_C::SetIsTiling(bool* isTiling)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.SetIsTiling");
		
		AProMod_Parent_C_SetIsTiling_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isTiling != nullptr)
			*isTiling = params.isTiling;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.GetFinalTranslation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Tiling                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              X                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Y                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Z                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProMod_Parent_C::GetFinalTranslation(bool Tiling, float* X, float* Y, float* Z)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.GetFinalTranslation");
		
		AProMod_Parent_C_GetFinalTranslation_Params params {};
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
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.SetMaterialsToTriPlanarMapping
	 * 		Flags  -> ()
	 */
	void AProMod_Parent_C::SetMaterialsToTriPlanarMapping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.SetMaterialsToTriPlanarMapping");
		
		AProMod_Parent_C_SetMaterialsToTriPlanarMapping_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.FixTilingForAxisUsage
	 * 		Flags  -> ()
	 */
	void AProMod_Parent_C::FixTilingForAxisUsage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.FixTilingForAxisUsage");
		
		AProMod_Parent_C_FixTilingForAxisUsage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.CheckForPreviousLockAxis
	 * 		Flags  -> ()
	 */
	void AProMod_Parent_C::CheckForPreviousLockAxis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.CheckForPreviousLockAxis");
		
		AProMod_Parent_C_CheckForPreviousLockAxis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.AddStaticMeshAtLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Relative_Transform_Scale_X                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Relative_Transform_Scale_Z                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Relative_Transform_Scale_Y                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Relative_Transform_Location_X                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Relative_Transform_Location_Y                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Relative_Transform_Location_Z                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProMod_Parent_C::AddStaticMeshAtLocation(float Relative_Transform_Scale_X, float Relative_Transform_Scale_Z, float Relative_Transform_Scale_Y, float Relative_Transform_Location_X, float Relative_Transform_Location_Y, float Relative_Transform_Location_Z)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.AddStaticMeshAtLocation");
		
		AProMod_Parent_C_AddStaticMeshAtLocation_Params params {};
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
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.CreateComponents
	 * 		Flags  -> ()
	 */
	void AProMod_Parent_C::CreateComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.CreateComponents");
		
		AProMod_Parent_C_CreateComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.LimitGizmo
	 * 		Flags  -> ()
	 */
	void AProMod_Parent_C::LimitGizmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.LimitGizmo");
		
		AProMod_Parent_C_LimitGizmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AProMod_Parent_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.UserConstructionScript");
		
		AProMod_Parent_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.OnEditorPostLoad
	 * 		Flags  -> ()
	 */
	void AProMod_Parent_C::OnEditorPostLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.OnEditorPostLoad");
		
		AProMod_Parent_C_OnEditorPostLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.OnPostActorsPasted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              pastedActors                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AProMod_Parent_C::OnPostActorsPasted(TArray<class AActor*> pastedActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.OnPostActorsPasted");
		
		AProMod_Parent_C_OnPostActorsPasted_Params params {};
		params.pastedActors = pastedActors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.PostDuplicated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      duplicationParent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProMod_Parent_C::PostDuplicated(class AActor* duplicationParent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.PostDuplicated");
		
		AProMod_Parent_C_PostDuplicated_Params params {};
		params.duplicationParent = duplicationParent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AProMod_Parent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.ReceiveBeginPlay");
		
		AProMod_Parent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.PostEditMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFinished                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProMod_Parent_C::PostEditMove(bool bFinished)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.PostEditMove");
		
		AProMod_Parent_C_PostEditMove_Params params {};
		params.bFinished = bFinished;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.PostAddedToLevel
	 * 		Flags  -> ()
	 */
	void AProMod_Parent_C::PostAddedToLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.PostAddedToLevel");
		
		AProMod_Parent_C_PostAddedToLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.TickSelected
	 * 		Flags  -> ()
	 */
	void AProMod_Parent_C::TickSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.TickSelected");
		
		AProMod_Parent_C_TickSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.PostEditChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        PropertyName                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProMod_Parent_C::PostEditChange(const class FName& PropertyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.PostEditChange");
		
		AProMod_Parent_C_PostEditChange_Params params {};
		params.PropertyName = PropertyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProMod_Parent.ProMod_Parent_C.ExecuteUbergraph_ProMod_Parent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProMod_Parent_C::ExecuteUbergraph_ProMod_Parent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProMod_Parent.ProMod_Parent_C.ExecuteUbergraph_ProMod_Parent");
		
		AProMod_Parent_C_ExecuteUbergraph_ProMod_Parent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProMod_Parent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProMod_Parent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProMod_Parent.ProMod_Parent_C");
		return ptr;
	}

}


