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
	 * 		Name   -> Function Wall-01_BP.Wall-01_BP_C.AddAutomaticBoxCollisionExcludedStaticMeshes
	 * 		Flags  -> ()
	 */
	void AWall__BP_C::AddAutomaticBoxCollisionExcludedStaticMeshes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wall-01_BP.Wall-01_BP_C.AddAutomaticBoxCollisionExcludedStaticMeshes");
		
		AWall__BP_C_AddAutomaticBoxCollisionExcludedStaticMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Wall-01_BP.Wall-01_BP_C.InvertYminus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     LastLocation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWall__BP_C::InvertYminus(const struct FVector& LastLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wall-01_BP.Wall-01_BP_C.InvertYminus");
		
		AWall__BP_C_InvertYminus_Params params {};
		params.LastLocation = LastLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Wall-01_BP.Wall-01_BP_C.InvertXminus
	 * 		Flags  -> ()
	 */
	void AWall__BP_C::InvertXminus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wall-01_BP.Wall-01_BP_C.InvertXminus");
		
		AWall__BP_C_InvertXminus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Wall-01_BP.Wall-01_BP_C.SetInbetween
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FStaticmeshArray_Stuc>               NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void AWall__BP_C::SetInbetween(TArray<struct FStaticmeshArray_Stuc>* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wall-01_BP.Wall-01_BP_C.SetInbetween");
		
		AWall__BP_C_SetInbetween_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Wall-01_BP.Wall-01_BP_C.Add Inbetween Row
	 * 		Flags  -> ()
	 */
	void AWall__BP_C::Add_Inbetween_Row()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wall-01_BP.Wall-01_BP_C.Add Inbetween Row");
		
		AWall__BP_C_Add_Inbetween_Row_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Wall-01_BP.Wall-01_BP_C.AddGap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FStaticmeshArray_Stuc>               NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void AWall__BP_C::AddGap(TArray<struct FStaticmeshArray_Stuc>* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wall-01_BP.Wall-01_BP_C.AddGap");
		
		AWall__BP_C_AddGap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Wall-01_BP.Wall-01_BP_C.SetGap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FModuleMeshData>                     WallMeshes02A                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		EMeshPopulateDirection                             Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NumberOfInbetween                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TotalInbetweenSize                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     GapTotal                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWall__BP_C::SetGap(TArray<struct FModuleMeshData>* WallMeshes02A, EMeshPopulateDirection Direction, int32_t* NumberOfInbetween, float* TotalInbetweenSize, struct FVector* GapTotal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wall-01_BP.Wall-01_BP_C.SetGap");
		
		AWall__BP_C_SetGap_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WallMeshes02A != nullptr)
			*WallMeshes02A = params.WallMeshes02A;
		if (NumberOfInbetween != nullptr)
			*NumberOfInbetween = params.NumberOfInbetween;
		if (TotalInbetweenSize != nullptr)
			*TotalInbetweenSize = params.TotalInbetweenSize;
		if (GapTotal != nullptr)
			*GapTotal = params.GapTotal;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Wall-01_BP.Wall-01_BP_C.PushEndWallMeshes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  WallEndMeshesTransform                                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		class UStaticMesh*                                 EndMesh                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     SizeLeft                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               UseZScale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UseExtreme                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ExtremeZ                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               UseOverwriteMaterial                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UseOverwriteLightmap                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsInbetweenMesh                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWall__BP_C::PushEndWallMeshes(const struct FTransform& WallEndMeshesTransform, class UStaticMesh* EndMesh, const struct FVector& SizeLeft, bool UseZScale, bool UseExtreme, float ExtremeZ, bool UseOverwriteMaterial, bool UseOverwriteLightmap, bool IsInbetweenMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wall-01_BP.Wall-01_BP_C.PushEndWallMeshes");
		
		AWall__BP_C_PushEndWallMeshes_Params params {};
		params.WallEndMeshesTransform = WallEndMeshesTransform;
		params.EndMesh = EndMesh;
		params.SizeLeft = SizeLeft;
		params.UseZScale = UseZScale;
		params.UseExtreme = UseExtreme;
		params.ExtremeZ = ExtremeZ;
		params.UseOverwriteMaterial = UseOverwriteMaterial;
		params.UseOverwriteLightmap = UseOverwriteLightmap;
		params.IsInbetweenMesh = IsInbetweenMesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Wall-01_BP.Wall-01_BP_C.GetStateName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      stateA                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      stateB                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	bool AWall__BP_C::GetStateName(class FString* stateA, class FString* stateB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wall-01_BP.Wall-01_BP_C.GetStateName");
		
		AWall__BP_C_GetStateName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (stateA != nullptr)
			*stateA = params.stateA;
		if (stateB != nullptr)
			*stateB = params.stateB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Wall-01_BP.Wall-01_BP_C.IsStateA
	 * 		Flags  -> ()
	 */
	bool AWall__BP_C::IsStateA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wall-01_BP.Wall-01_BP_C.IsStateA");
		
		AWall__BP_C_IsStateA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Wall-01_BP.Wall-01_BP_C.WallEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Relative_Transform_Location                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NewSize                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWall__BP_C::WallEnd(const struct FVector& Relative_Transform_Location, const struct FVector& NewSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wall-01_BP.Wall-01_BP_C.WallEnd");
		
		AWall__BP_C_WallEnd_Params params {};
		params.Relative_Transform_Location = Relative_Transform_Location;
		params.NewSize = NewSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Wall-01_BP.Wall-01_BP_C.setVariable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewSize                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWall__BP_C::setVariable(struct FVector* NewSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wall-01_BP.Wall-01_BP_C.setVariable");
		
		AWall__BP_C_setVariable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewSize != nullptr)
			*NewSize = params.NewSize;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Wall-01_BP.Wall-01_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AWall__BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wall-01_BP.Wall-01_BP_C.UserConstructionScript");
		
		AWall__BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWall__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWall__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Wall_01_BP.Wall-01_BP_C");
		return ptr;
	}

}


