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
	 * 		Name   -> Function MeshPopulate_Parent.MeshPopulate_Parent_C.BP_MapCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMapCheckType                                      checkType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      outErrorMsg                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	bool AMeshPopulate_Parent_C::BP_MapCheck(EMapCheckType checkType, class FString* outErrorMsg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshPopulate_Parent.MeshPopulate_Parent_C.BP_MapCheck");
		
		AMeshPopulate_Parent_C_BP_MapCheck_Params params {};
		params.checkType = checkType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outErrorMsg != nullptr)
			*outErrorMsg = params.outErrorMsg;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshPopulate_Parent.MeshPopulate_Parent_C.FixUp
	 * 		Flags  -> ()
	 */
	bool AMeshPopulate_Parent_C::FixUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshPopulate_Parent.MeshPopulate_Parent_C.FixUp");
		
		AMeshPopulate_Parent_C_FixUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshPopulate_Parent.MeshPopulate_Parent_C.SetBoxCollisionSettings
	 * 		Flags  -> ()
	 */
	void AMeshPopulate_Parent_C::SetBoxCollisionSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshPopulate_Parent.MeshPopulate_Parent_C.SetBoxCollisionSettings");
		
		AMeshPopulate_Parent_C_SetBoxCollisionSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshPopulate_Parent.MeshPopulate_Parent_C.PrintAllUsedMeshes
	 * 		Flags  -> ()
	 */
	void AMeshPopulate_Parent_C::PrintAllUsedMeshes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshPopulate_Parent.MeshPopulate_Parent_C.PrintAllUsedMeshes");
		
		AMeshPopulate_Parent_C_PrintAllUsedMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshPopulate_Parent.MeshPopulate_Parent_C.ApplyPhysicalMaterialToBoxComponent
	 * 		Flags  -> ()
	 */
	void AMeshPopulate_Parent_C::ApplyPhysicalMaterialToBoxComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshPopulate_Parent.MeshPopulate_Parent_C.ApplyPhysicalMaterialToBoxComponent");
		
		AMeshPopulate_Parent_C_ApplyPhysicalMaterialToBoxComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshPopulate_Parent.MeshPopulate_Parent_C.SetExcludedStaticMeshComponents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UStaticMesh*>                         StaticmeshComponents                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AMeshPopulate_Parent_C::SetExcludedStaticMeshComponents(TArray<class UStaticMesh*>* StaticmeshComponents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshPopulate_Parent.MeshPopulate_Parent_C.SetExcludedStaticMeshComponents");
		
		AMeshPopulate_Parent_C_SetExcludedStaticMeshComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StaticmeshComponents != nullptr)
			*StaticmeshComponents = params.StaticmeshComponents;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshPopulate_Parent.MeshPopulate_Parent_C.SetLoadedOnServerAndCollisions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         PrimitiveComponent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMeshPopulate_Parent_C::SetLoadedOnServerAndCollisions(class UPrimitiveComponent* PrimitiveComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshPopulate_Parent.MeshPopulate_Parent_C.SetLoadedOnServerAndCollisions");
		
		AMeshPopulate_Parent_C_SetLoadedOnServerAndCollisions_Params params {};
		params.PrimitiveComponent = PrimitiveComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshPopulate_Parent.MeshPopulate_Parent_C.CreateBoxCollisionForBounds
	 * 		Flags  -> ()
	 */
	void AMeshPopulate_Parent_C::CreateBoxCollisionForBounds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshPopulate_Parent.MeshPopulate_Parent_C.CreateBoxCollisionForBounds");
		
		AMeshPopulate_Parent_C_CreateBoxCollisionForBounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshPopulate_Parent.MeshPopulate_Parent_C.GetHypothenuse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMeshPopulateDirection                             Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Hypotenuse                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMeshPopulate_Parent_C::GetHypothenuse(EMeshPopulateDirection Direction, float* Hypotenuse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshPopulate_Parent.MeshPopulate_Parent_C.GetHypothenuse");
		
		AMeshPopulate_Parent_C_GetHypothenuse_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hypotenuse != nullptr)
			*Hypotenuse = params.Hypotenuse;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshPopulate_Parent.MeshPopulate_Parent_C.PushRandomSeed
	 * 		Flags  -> ()
	 */
	void AMeshPopulate_Parent_C::PushRandomSeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshPopulate_Parent.MeshPopulate_Parent_C.PushRandomSeed");
		
		AMeshPopulate_Parent_C_PushRandomSeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshPopulate_Parent.MeshPopulate_Parent_C.Warning
	 * 		Flags  -> ()
	 */
	void AMeshPopulate_Parent_C::Warning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshPopulate_Parent.MeshPopulate_Parent_C.Warning");
		
		AMeshPopulate_Parent_C_Warning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshPopulate_Parent.MeshPopulate_Parent_C.SetSeed
	 * 		Flags  -> ()
	 */
	void AMeshPopulate_Parent_C::SetSeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshPopulate_Parent.MeshPopulate_Parent_C.SetSeed");
		
		AMeshPopulate_Parent_C_SetSeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshPopulate_Parent.MeshPopulate_Parent_C.SnapGizmosOnGrid
	 * 		Flags  -> ()
	 */
	void AMeshPopulate_Parent_C::SnapGizmosOnGrid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshPopulate_Parent.MeshPopulate_Parent_C.SnapGizmosOnGrid");
		
		AMeshPopulate_Parent_C_SnapGizmosOnGrid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshPopulate_Parent.MeshPopulate_Parent_C.CheckSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     SizeLeft                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMeshPopulateDirection                             Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SizeIsvalid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMeshPopulate_Parent_C::CheckSize(const struct FVector& SizeLeft, EMeshPopulateDirection Direction, float Size, bool* SizeIsvalid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshPopulate_Parent.MeshPopulate_Parent_C.CheckSize");
		
		AMeshPopulate_Parent_C_CheckSize_Params params {};
		params.SizeLeft = SizeLeft;
		params.Direction = Direction;
		params.Size = Size;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SizeIsvalid != nullptr)
			*SizeIsvalid = params.SizeIsvalid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshPopulate_Parent.MeshPopulate_Parent_C.Get Next Group
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FModuleMeshData>                     Aray                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		float                                              SizeLeft                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewSizeLeft                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              GroupSize                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMeshPopulate_Parent_C::Get_Next_Group(TArray<struct FModuleMeshData>* Aray, float SizeLeft, int32_t* Index, float* NewSizeLeft, float* GroupSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshPopulate_Parent.MeshPopulate_Parent_C.Get Next Group");
		
		AMeshPopulate_Parent_C_Get_Next_Group_Params params {};
		params.SizeLeft = SizeLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Aray != nullptr)
			*Aray = params.Aray;
		if (Index != nullptr)
			*Index = params.Index;
		if (NewSizeLeft != nullptr)
			*NewSizeLeft = params.NewSizeLeft;
		if (GroupSize != nullptr)
			*GroupSize = params.GroupSize;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshPopulate_Parent.MeshPopulate_Parent_C.MinGroupSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FModuleMeshData>                     Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		float                                              SmallerGroupSize                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              BiggestGroupSize                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMeshPopulate_Parent_C::MinGroupSize(TArray<struct FModuleMeshData>* Array, float* SmallerGroupSize, float* BiggestGroupSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshPopulate_Parent.MeshPopulate_Parent_C.MinGroupSize");
		
		AMeshPopulate_Parent_C_MinGroupSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
		if (SmallerGroupSize != nullptr)
			*SmallerGroupSize = params.SmallerGroupSize;
		if (BiggestGroupSize != nullptr)
			*BiggestGroupSize = params.BiggestGroupSize;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshPopulate_Parent.MeshPopulate_Parent_C.Get Next Mesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FModuleMeshData>                     Aray                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		float                                              SizeLeft                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewSizeLeft                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MeshSize                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMeshPopulate_Parent_C::Get_Next_Mesh(TArray<struct FModuleMeshData>* Aray, float SizeLeft, int32_t* Index, float* NewSizeLeft, float* MeshSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshPopulate_Parent.MeshPopulate_Parent_C.Get Next Mesh");
		
		AMeshPopulate_Parent_C_Get_Next_Mesh_Params params {};
		params.SizeLeft = SizeLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Aray != nullptr)
			*Aray = params.Aray;
		if (Index != nullptr)
			*Index = params.Index;
		if (NewSizeLeft != nullptr)
			*NewSizeLeft = params.NewSizeLeft;
		if (MeshSize != nullptr)
			*MeshSize = params.MeshSize;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshPopulate_Parent.MeshPopulate_Parent_C.PushStaticMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMeshPopulateDirection                             Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FModuleMeshData                             Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		bool                                               Inverted                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UseOverwriteMaterial                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UseOverwriteLightmap                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UStaticMeshComponent*                        StaticMeshComponant                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMeshPopulate_Parent_C::PushStaticMesh(EMeshPopulateDirection Direction, float Location, const struct FModuleMeshData& Mesh, bool Inverted, bool UseOverwriteMaterial, bool UseOverwriteLightmap, class UStaticMeshComponent** StaticMeshComponant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshPopulate_Parent.MeshPopulate_Parent_C.PushStaticMesh");
		
		AMeshPopulate_Parent_C_PushStaticMesh_Params params {};
		params.Direction = Direction;
		params.Location = Location;
		params.Mesh = Mesh;
		params.Inverted = Inverted;
		params.UseOverwriteMaterial = UseOverwriteMaterial;
		params.UseOverwriteLightmap = UseOverwriteLightmap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StaticMeshComponant != nullptr)
			*StaticMeshComponant = params.StaticMeshComponant;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshPopulate_Parent.MeshPopulate_Parent_C.MinMeshSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FModuleMeshData>                     Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		float                                              SmallerMeshSize                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMeshPopulate_Parent_C::MinMeshSize(TArray<struct FModuleMeshData>* Array, float* SmallerMeshSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshPopulate_Parent.MeshPopulate_Parent_C.MinMeshSize");
		
		AMeshPopulate_Parent_C_MinMeshSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
		if (SmallerMeshSize != nullptr)
			*SmallerMeshSize = params.SmallerMeshSize;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshPopulate_Parent.MeshPopulate_Parent_C.FindClosestMeshSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FModuleMeshData>                     Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		float                                              SizeLeft                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMeshPopulate_Parent_C::FindClosestMeshSize(TArray<struct FModuleMeshData>* Array, float SizeLeft, int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshPopulate_Parent.MeshPopulate_Parent_C.FindClosestMeshSize");
		
		AMeshPopulate_Parent_C_FindClosestMeshSize_Params params {};
		params.SizeLeft = SizeLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshPopulate_Parent.MeshPopulate_Parent_C.CheckMeshSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FModuleMeshData>                     Meshes                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		EMeshPopulateDirection                             Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMeshPopulate_Parent_C::CheckMeshSize(TArray<struct FModuleMeshData>* Meshes, EMeshPopulateDirection Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshPopulate_Parent.MeshPopulate_Parent_C.CheckMeshSize");
		
		AMeshPopulate_Parent_C_CheckMeshSize_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Meshes != nullptr)
			*Meshes = params.Meshes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshPopulate_Parent.MeshPopulate_Parent_C.PresetMaterials
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UMaterialInterface*>                  TargetArray                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		EGrayBoxMat_ENU                                    Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMeshPopulate_Parent_C::PresetMaterials(TArray<class UMaterialInterface*> TargetArray, EGrayBoxMat_ENU Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshPopulate_Parent.MeshPopulate_Parent_C.PresetMaterials");
		
		AMeshPopulate_Parent_C_PresetMaterials_Params params {};
		params.TargetArray = TargetArray;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshPopulate_Parent.MeshPopulate_Parent_C.SelectRandomMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FModuleAlternativeMeshData>          ArrayMeshAlternatif                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UStaticMesh*                                 _Mesh1                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStaticMesh*                                 Mesh                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   MeshOffset                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMeshPopulate_Parent_C::SelectRandomMesh(TArray<struct FModuleAlternativeMeshData>* ArrayMeshAlternatif, class UStaticMesh* _Mesh1, class UStaticMesh** Mesh, struct FVector2D* MeshOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshPopulate_Parent.MeshPopulate_Parent_C.SelectRandomMesh");
		
		AMeshPopulate_Parent_C_SelectRandomMesh_Params params {};
		params._Mesh1 = _Mesh1;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ArrayMeshAlternatif != nullptr)
			*ArrayMeshAlternatif = params.ArrayMeshAlternatif;
		if (Mesh != nullptr)
			*Mesh = params.Mesh;
		if (MeshOffset != nullptr)
			*MeshOffset = params.MeshOffset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshPopulate_Parent.MeshPopulate_Parent_C.SetStaticMeshSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStaticMeshComponent*                        Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStaticMesh*                                 NewMesh                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               UseOverwriteMaterial                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UseOverwriteLightmap                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DrawDistance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMeshPopulate_Parent_C::SetStaticMeshSet(class UStaticMeshComponent* Target, class UStaticMesh* NewMesh, bool UseOverwriteMaterial, bool UseOverwriteLightmap, float DrawDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshPopulate_Parent.MeshPopulate_Parent_C.SetStaticMeshSet");
		
		AMeshPopulate_Parent_C_SetStaticMeshSet_Params params {};
		params.Target = Target;
		params.NewMesh = NewMesh;
		params.UseOverwriteMaterial = UseOverwriteMaterial;
		params.UseOverwriteLightmap = UseOverwriteLightmap;
		params.DrawDistance = DrawDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshPopulate_Parent.MeshPopulate_Parent_C.PrintError
	 * 		Flags  -> ()
	 */
	void AMeshPopulate_Parent_C::PrintError()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshPopulate_Parent.MeshPopulate_Parent_C.PrintError");
		
		AMeshPopulate_Parent_C_PrintError_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshPopulate_Parent.MeshPopulate_Parent_C.UseShadowMask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     ShadowMeshScale                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMeshPopulateDirection                             XY                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ShadowMeshLocation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMeshPopulate_Parent_C::UseShadowMask(const struct FVector& ShadowMeshScale, EMeshPopulateDirection XY, const struct FVector& ShadowMeshLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshPopulate_Parent.MeshPopulate_Parent_C.UseShadowMask");
		
		AMeshPopulate_Parent_C_UseShadowMask_Params params {};
		params.ShadowMeshScale = ShadowMeshScale;
		params.XY = XY;
		params.ShadowMeshLocation = ShadowMeshLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshPopulate_Parent.MeshPopulate_Parent_C.SetMaterials
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMeshPopulate_Parent_C::SetMaterials(class UPrimitiveComponent* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshPopulate_Parent.MeshPopulate_Parent_C.SetMaterials");
		
		AMeshPopulate_Parent_C_SetMaterials_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshPopulate_Parent.MeshPopulate_Parent_C.SetGizmoLimit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMeshPopulateDirection                             Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMeshPopulate_Parent_C::SetGizmoLimit(EMeshPopulateDirection Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshPopulate_Parent.MeshPopulate_Parent_C.SetGizmoLimit");
		
		AMeshPopulate_Parent_C_SetGizmoLimit_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshPopulate_Parent.MeshPopulate_Parent_C.SetGizmo
	 * 		Flags  -> ()
	 */
	void AMeshPopulate_Parent_C::SetGizmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshPopulate_Parent.MeshPopulate_Parent_C.SetGizmo");
		
		AMeshPopulate_Parent_C_SetGizmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshPopulate_Parent.MeshPopulate_Parent_C.SetScaleGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Scale                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NewSize                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMeshPopulate_Parent_C::SetScaleGroup(struct FVector* Scale, struct FVector* NewSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshPopulate_Parent.MeshPopulate_Parent_C.SetScaleGroup");
		
		AMeshPopulate_Parent_C_SetScaleGroup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Scale != nullptr)
			*Scale = params.Scale;
		if (NewSize != nullptr)
			*NewSize = params.NewSize;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshPopulate_Parent.MeshPopulate_Parent_C.MaximumGroupHeight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FModuleMeshData>                     GroupArray                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		EMeshPopulateDirection                             Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AlphaMin                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AlphaMax                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              BetaMin                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              BetaMax                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Size                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMeshPopulate_Parent_C::MaximumGroupHeight(TArray<struct FModuleMeshData>* GroupArray, EMeshPopulateDirection Direction, float* AlphaMin, float* AlphaMax, float* BetaMin, float* BetaMax, struct FVector* Size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshPopulate_Parent.MeshPopulate_Parent_C.MaximumGroupHeight");
		
		AMeshPopulate_Parent_C_MaximumGroupHeight_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GroupArray != nullptr)
			*GroupArray = params.GroupArray;
		if (AlphaMin != nullptr)
			*AlphaMin = params.AlphaMin;
		if (AlphaMax != nullptr)
			*AlphaMax = params.AlphaMax;
		if (BetaMin != nullptr)
			*BetaMin = params.BetaMin;
		if (BetaMax != nullptr)
			*BetaMax = params.BetaMax;
		if (Size != nullptr)
			*Size = params.Size;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshPopulate_Parent.MeshPopulate_Parent_C.PopulateSurface
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FModuleMeshData>                     MeshesArray                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               UseMeshSecondSizeAdd                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              GapBetweenRow                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMeshPopulateDirection                             Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     SizeLeft                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Offset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    OffsetRotation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               UseXScale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UseYScale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UseZScale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Inverted                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ZInverted                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ResetAlphaLocation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ResetBetaLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               SwitchMeshOrientation                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UseOverwriteMaterial                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UseOverwriteLightmap                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            MaxNumberOfRow                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OverwriteBetaScale                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     LastLocation                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxSecondSize                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SecondScale                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FStaticmeshArray_Stuc>               AllStactimeshes                                            (Parm, OutParm, ContainsInstancedReference)
	 * 		int32_t                                            RowCount                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LastAlphaMeshSize                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AlphaScale                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMeshPopulate_Parent_C::PopulateSurface(TArray<struct FModuleMeshData>* MeshesArray, bool UseMeshSecondSizeAdd, float GapBetweenRow, EMeshPopulateDirection Direction, const struct FVector& SizeLeft, const struct FVector& Offset, const struct FRotator& OffsetRotation, const struct FVector& Scale, bool UseXScale, bool UseYScale, bool UseZScale, bool Inverted, bool ZInverted, bool ResetAlphaLocation, bool ResetBetaLocation, bool SwitchMeshOrientation, bool UseOverwriteMaterial, bool UseOverwriteLightmap, int32_t MaxNumberOfRow, float OverwriteBetaScale, struct FVector* LastLocation, float* MaxSecondSize, float* SecondScale, TArray<struct FStaticmeshArray_Stuc>* AllStactimeshes, int32_t* RowCount, float* LastAlphaMeshSize, float* AlphaScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshPopulate_Parent.MeshPopulate_Parent_C.PopulateSurface");
		
		AMeshPopulate_Parent_C_PopulateSurface_Params params {};
		params.UseMeshSecondSizeAdd = UseMeshSecondSizeAdd;
		params.GapBetweenRow = GapBetweenRow;
		params.Direction = Direction;
		params.SizeLeft = SizeLeft;
		params.Offset = Offset;
		params.OffsetRotation = OffsetRotation;
		params.Scale = Scale;
		params.UseXScale = UseXScale;
		params.UseYScale = UseYScale;
		params.UseZScale = UseZScale;
		params.Inverted = Inverted;
		params.ZInverted = ZInverted;
		params.ResetAlphaLocation = ResetAlphaLocation;
		params.ResetBetaLocation = ResetBetaLocation;
		params.SwitchMeshOrientation = SwitchMeshOrientation;
		params.UseOverwriteMaterial = UseOverwriteMaterial;
		params.UseOverwriteLightmap = UseOverwriteLightmap;
		params.MaxNumberOfRow = MaxNumberOfRow;
		params.OverwriteBetaScale = OverwriteBetaScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MeshesArray != nullptr)
			*MeshesArray = params.MeshesArray;
		if (LastLocation != nullptr)
			*LastLocation = params.LastLocation;
		if (MaxSecondSize != nullptr)
			*MaxSecondSize = params.MaxSecondSize;
		if (SecondScale != nullptr)
			*SecondScale = params.SecondScale;
		if (AllStactimeshes != nullptr)
			*AllStactimeshes = params.AllStactimeshes;
		if (RowCount != nullptr)
			*RowCount = params.RowCount;
		if (LastAlphaMeshSize != nullptr)
			*LastAlphaMeshSize = params.LastAlphaMeshSize;
		if (AlphaScale != nullptr)
			*AlphaScale = params.AlphaScale;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshPopulate_Parent.MeshPopulate_Parent_C.MaximumHeight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FModuleMeshData>                     Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		float                                              _MaxHeight1                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              BiggestMeshSize                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SmallerMeshSize                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMeshPopulate_Parent_C::MaximumHeight(TArray<struct FModuleMeshData>* Array, float _MaxHeight1, float* Height, float* BiggestMeshSize, float* SmallerMeshSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshPopulate_Parent.MeshPopulate_Parent_C.MaximumHeight");
		
		AMeshPopulate_Parent_C_MaximumHeight_Params params {};
		params._MaxHeight1 = _MaxHeight1;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
		if (Height != nullptr)
			*Height = params.Height;
		if (BiggestMeshSize != nullptr)
			*BiggestMeshSize = params.BiggestMeshSize;
		if (SmallerMeshSize != nullptr)
			*SmallerMeshSize = params.SmallerMeshSize;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshPopulate_Parent.MeshPopulate_Parent_C.PopulateRow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMeshPopulateDirection                             Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FModuleMeshData>                     meshArray                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		float                                              AlphaSizeLeft                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Offset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Inverted                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ZInverted                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UseXScale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UseYScale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UseZScale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ResetAlphaLocation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    OffsetRotation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               SwitchMeshOrientation                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UseOverwriteMaterial                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UseOverwriteLightmap                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UseScale                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              BetaScale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     LastLocation                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UStaticMeshComponent*>                StaticmeshComponents1                                      (Parm, OutParm, ContainsInstancedReference)
	 * 		float                                              LastAlphaMeshSize                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AlphaScale                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMeshPopulate_Parent_C::PopulateRow(EMeshPopulateDirection Selection, TArray<struct FModuleMeshData>* meshArray, float AlphaSizeLeft, const struct FVector& Offset, const struct FVector& Scale, bool Inverted, bool ZInverted, bool UseXScale, bool UseYScale, bool UseZScale, bool ResetAlphaLocation, const struct FRotator& OffsetRotation, bool SwitchMeshOrientation, bool UseOverwriteMaterial, bool UseOverwriteLightmap, bool UseScale, float BetaScale, struct FVector* LastLocation, TArray<class UStaticMeshComponent*>* StaticmeshComponents1, float* LastAlphaMeshSize, float* AlphaScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshPopulate_Parent.MeshPopulate_Parent_C.PopulateRow");
		
		AMeshPopulate_Parent_C_PopulateRow_Params params {};
		params.Selection = Selection;
		params.AlphaSizeLeft = AlphaSizeLeft;
		params.Offset = Offset;
		params.Scale = Scale;
		params.Inverted = Inverted;
		params.ZInverted = ZInverted;
		params.UseXScale = UseXScale;
		params.UseYScale = UseYScale;
		params.UseZScale = UseZScale;
		params.ResetAlphaLocation = ResetAlphaLocation;
		params.OffsetRotation = OffsetRotation;
		params.SwitchMeshOrientation = SwitchMeshOrientation;
		params.UseOverwriteMaterial = UseOverwriteMaterial;
		params.UseOverwriteLightmap = UseOverwriteLightmap;
		params.UseScale = UseScale;
		params.BetaScale = BetaScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (meshArray != nullptr)
			*meshArray = params.meshArray;
		if (LastLocation != nullptr)
			*LastLocation = params.LastLocation;
		if (StaticmeshComponents1 != nullptr)
			*StaticmeshComponents1 = params.StaticmeshComponents1;
		if (LastAlphaMeshSize != nullptr)
			*LastAlphaMeshSize = params.LastAlphaMeshSize;
		if (AlphaScale != nullptr)
			*AlphaScale = params.AlphaScale;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshPopulate_Parent.MeshPopulate_Parent_C.NumOfMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MeshSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SizeLeft                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Num                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewSizeLeft                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMeshPopulate_Parent_C::NumOfMesh(float MeshSize, float SizeLeft, int32_t* Num, float* NewSizeLeft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshPopulate_Parent.MeshPopulate_Parent_C.NumOfMesh");
		
		AMeshPopulate_Parent_C_NumOfMesh_Params params {};
		params.MeshSize = MeshSize;
		params.SizeLeft = SizeLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Num != nullptr)
			*Num = params.Num;
		if (NewSizeLeft != nullptr)
			*NewSizeLeft = params.NewSizeLeft;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshPopulate_Parent.MeshPopulate_Parent_C.PopulateStaticMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMeshPopulateDirection                             Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FModuleMeshData                             Mesh01                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		struct FRotator                                    OffsetRotation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Inverted                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               SwitchMeshOrientation                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UseOverwriteMaterial                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UseOverwriteLightmap                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStaticMeshComponent*                        OutputPin                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMeshPopulate_Parent_C::PopulateStaticMesh(EMeshPopulateDirection Direction, const struct FModuleMeshData& Mesh01, const struct FRotator& OffsetRotation, bool Inverted, bool SwitchMeshOrientation, bool UseOverwriteMaterial, bool UseOverwriteLightmap, float Location, class UStaticMeshComponent** OutputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshPopulate_Parent.MeshPopulate_Parent_C.PopulateStaticMesh");
		
		AMeshPopulate_Parent_C_PopulateStaticMesh_Params params {};
		params.Direction = Direction;
		params.Mesh01 = Mesh01;
		params.OffsetRotation = OffsetRotation;
		params.Inverted = Inverted;
		params.SwitchMeshOrientation = SwitchMeshOrientation;
		params.UseOverwriteMaterial = UseOverwriteMaterial;
		params.UseOverwriteLightmap = UseOverwriteLightmap;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutputPin != nullptr)
			*OutputPin = params.OutputPin;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshPopulate_Parent.MeshPopulate_Parent_C.SetScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FModuleMeshData>                     meshArray                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		EMeshPopulateDirection                             Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              HeightDelete                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMeshPopulate_Parent_C::SetScale(TArray<struct FModuleMeshData>* meshArray, EMeshPopulateDirection Selection, const struct FVector& Size, float HeightDelete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshPopulate_Parent.MeshPopulate_Parent_C.SetScale");
		
		AMeshPopulate_Parent_C_SetScale_Params params {};
		params.Selection = Selection;
		params.Size = Size;
		params.HeightDelete = HeightDelete;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (meshArray != nullptr)
			*meshArray = params.meshArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshPopulate_Parent.MeshPopulate_Parent_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AMeshPopulate_Parent_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshPopulate_Parent.MeshPopulate_Parent_C.UserConstructionScript");
		
		AMeshPopulate_Parent_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshPopulate_Parent.MeshPopulate_Parent_C.BP_PrepareMapCheck
	 * 		Flags  -> ()
	 */
	void AMeshPopulate_Parent_C::BP_PrepareMapCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshPopulate_Parent.MeshPopulate_Parent_C.BP_PrepareMapCheck");
		
		AMeshPopulate_Parent_C_BP_PrepareMapCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshPopulate_Parent.MeshPopulate_Parent_C.OnPostActorsPasted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              pastedActors                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AMeshPopulate_Parent_C::OnPostActorsPasted(TArray<class AActor*> pastedActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshPopulate_Parent.MeshPopulate_Parent_C.OnPostActorsPasted");
		
		AMeshPopulate_Parent_C_OnPostActorsPasted_Params params {};
		params.pastedActors = pastedActors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshPopulate_Parent.MeshPopulate_Parent_C.PostAddedToLevel
	 * 		Flags  -> ()
	 */
	void AMeshPopulate_Parent_C::PostAddedToLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshPopulate_Parent.MeshPopulate_Parent_C.PostAddedToLevel");
		
		AMeshPopulate_Parent_C_PostAddedToLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshPopulate_Parent.MeshPopulate_Parent_C.PostDuplicated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      duplicationParent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMeshPopulate_Parent_C::PostDuplicated(class AActor* duplicationParent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshPopulate_Parent.MeshPopulate_Parent_C.PostDuplicated");
		
		AMeshPopulate_Parent_C_PostDuplicated_Params params {};
		params.duplicationParent = duplicationParent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshPopulate_Parent.MeshPopulate_Parent_C.PostEditMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFinished                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMeshPopulate_Parent_C::PostEditMove(bool bFinished)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshPopulate_Parent.MeshPopulate_Parent_C.PostEditMove");
		
		AMeshPopulate_Parent_C_PostEditMove_Params params {};
		params.bFinished = bFinished;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshPopulate_Parent.MeshPopulate_Parent_C.TickSelected
	 * 		Flags  -> ()
	 */
	void AMeshPopulate_Parent_C::TickSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshPopulate_Parent.MeshPopulate_Parent_C.TickSelected");
		
		AMeshPopulate_Parent_C_TickSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshPopulate_Parent.MeshPopulate_Parent_C.PostEditChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        PropertyName                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMeshPopulate_Parent_C::PostEditChange(const class FName& PropertyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshPopulate_Parent.MeshPopulate_Parent_C.PostEditChange");
		
		AMeshPopulate_Parent_C_PostEditChange_Params params {};
		params.PropertyName = PropertyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshPopulate_Parent.MeshPopulate_Parent_C.OnEditorPostLoad
	 * 		Flags  -> ()
	 */
	void AMeshPopulate_Parent_C::OnEditorPostLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshPopulate_Parent.MeshPopulate_Parent_C.OnEditorPostLoad");
		
		AMeshPopulate_Parent_C_OnEditorPostLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeshPopulate_Parent.MeshPopulate_Parent_C.ExecuteUbergraph_MeshPopulate_Parent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMeshPopulate_Parent_C::ExecuteUbergraph_MeshPopulate_Parent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshPopulate_Parent.MeshPopulate_Parent_C.ExecuteUbergraph_MeshPopulate_Parent");
		
		AMeshPopulate_Parent_C_ExecuteUbergraph_MeshPopulate_Parent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMeshPopulate_Parent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMeshPopulate_Parent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MeshPopulate_Parent.MeshPopulate_Parent_C");
		return ptr;
	}

}


