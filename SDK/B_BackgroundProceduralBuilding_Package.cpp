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
	 * 		Name   -> Function B_BackgroundProceduralBuilding.B_BackgroundProceduralBuilding_C.ConvexConcave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PreviousPoint                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Point                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NextPoint                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AB_BackgroundProceduralBuilding_C::ConvexConcave(int32_t PreviousPoint, int32_t Point, int32_t NextPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function B_BackgroundProceduralBuilding.B_BackgroundProceduralBuilding_C.ConvexConcave");
		
		AB_BackgroundProceduralBuilding_C_ConvexConcave_Params params {};
		params.PreviousPoint = PreviousPoint;
		params.Point = Point;
		params.NextPoint = NextPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function B_BackgroundProceduralBuilding.B_BackgroundProceduralBuilding_C.Apply Presets Function
	 * 		Flags  -> ()
	 */
	void AB_BackgroundProceduralBuilding_C::Apply_Presets_Function()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function B_BackgroundProceduralBuilding.B_BackgroundProceduralBuilding_C.Apply Presets Function");
		
		AB_BackgroundProceduralBuilding_C_Apply_Presets_Function_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function B_BackgroundProceduralBuilding.B_BackgroundProceduralBuilding_C.MergeSectionByMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInstance*                           Material_Of_Section                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AB_BackgroundProceduralBuilding_C::MergeSectionByMaterial(class UMaterialInstance* Material_Of_Section)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function B_BackgroundProceduralBuilding.B_BackgroundProceduralBuilding_C.MergeSectionByMaterial");
		
		AB_BackgroundProceduralBuilding_C_MergeSectionByMaterial_Params params {};
		params.Material_Of_Section = Material_Of_Section;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function B_BackgroundProceduralBuilding.B_BackgroundProceduralBuilding_C.DebugArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FCoreUObject_FVector>                Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AB_BackgroundProceduralBuilding_C::DebugArray(TArray<struct FCoreUObject_FVector>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function B_BackgroundProceduralBuilding.B_BackgroundProceduralBuilding_C.DebugArray");
		
		AB_BackgroundProceduralBuilding_C_DebugArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function B_BackgroundProceduralBuilding.B_BackgroundProceduralBuilding_C.SectionFloor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInstance*                           Material_Section                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Height                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Height_Offset                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Vertices_for_Roof                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               No_Mesh_Generated                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Lateral_Offset_UV                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               UV_Strectched_Height                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UV_Border                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AB_BackgroundProceduralBuilding_C::SectionFloor(class UMaterialInstance* Material_Section, int32_t Height, int32_t Height_Offset, bool Vertices_for_Roof, bool No_Mesh_Generated, float Lateral_Offset_UV, bool UV_Strectched_Height, bool UV_Border)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function B_BackgroundProceduralBuilding.B_BackgroundProceduralBuilding_C.SectionFloor");
		
		AB_BackgroundProceduralBuilding_C_SectionFloor_Params params {};
		params.Material_Section = Material_Section;
		params.Height = Height;
		params.Height_Offset = Height_Offset;
		params.Vertices_for_Roof = Vertices_for_Roof;
		params.No_Mesh_Generated = No_Mesh_Generated;
		params.Lateral_Offset_UV = Lateral_Offset_UV;
		params.UV_Strectched_Height = UV_Strectched_Height;
		params.UV_Border = UV_Border;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function B_BackgroundProceduralBuilding.B_BackgroundProceduralBuilding_C.CreateFacadeCurve
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SectionIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            IndexPoint1                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            IndexPoint2                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Height                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Height_Offset                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               VerticesForRoof                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               NoMeshGenerated                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UV_Border                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UV_Stretched_Height                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Lateral_Offset_UV                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AB_BackgroundProceduralBuilding_C::CreateFacadeCurve(int32_t SectionIndex, int32_t IndexPoint1, int32_t IndexPoint2, int32_t Height, int32_t Height_Offset, bool VerticesForRoof, bool NoMeshGenerated, bool UV_Border, bool UV_Stretched_Height, float Lateral_Offset_UV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function B_BackgroundProceduralBuilding.B_BackgroundProceduralBuilding_C.CreateFacadeCurve");
		
		AB_BackgroundProceduralBuilding_C_CreateFacadeCurve_Params params {};
		params.SectionIndex = SectionIndex;
		params.IndexPoint1 = IndexPoint1;
		params.IndexPoint2 = IndexPoint2;
		params.Height = Height;
		params.Height_Offset = Height_Offset;
		params.VerticesForRoof = VerticesForRoof;
		params.NoMeshGenerated = NoMeshGenerated;
		params.UV_Border = UV_Border;
		params.UV_Stretched_Height = UV_Stretched_Height;
		params.Lateral_Offset_UV = Lateral_Offset_UV;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function B_BackgroundProceduralBuilding.B_BackgroundProceduralBuilding_C.CreateFacade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SectionIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Point1                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Point2                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Height                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Height_Offset                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Vertices_Roof                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               No_Mesh_Generated                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UV_Border                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UV_Stretched_Height                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Lateral_Offset_UV                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AB_BackgroundProceduralBuilding_C::CreateFacade(int32_t SectionIndex, int32_t Point1, int32_t Point2, int32_t Height, int32_t Height_Offset, bool Vertices_Roof, bool No_Mesh_Generated, bool UV_Border, bool UV_Stretched_Height, float Lateral_Offset_UV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function B_BackgroundProceduralBuilding.B_BackgroundProceduralBuilding_C.CreateFacade");
		
		AB_BackgroundProceduralBuilding_C_CreateFacade_Params params {};
		params.SectionIndex = SectionIndex;
		params.Point1 = Point1;
		params.Point2 = Point2;
		params.Height = Height;
		params.Height_Offset = Height_Offset;
		params.Vertices_Roof = Vertices_Roof;
		params.No_Mesh_Generated = No_Mesh_Generated;
		params.UV_Border = UV_Border;
		params.UV_Stretched_Height = UV_Stretched_Height;
		params.Lateral_Offset_UV = Lateral_Offset_UV;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function B_BackgroundProceduralBuilding.B_BackgroundProceduralBuilding_C.Search Material
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Types                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Variations                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UMaterialInstance*>                   Array_Material                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UMaterialInstance*                           FinalMaterial                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AB_BackgroundProceduralBuilding_C::Search_Material(int32_t Types, int32_t Variations, TArray<class UMaterialInstance*>* Array_Material, class UMaterialInstance** FinalMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function B_BackgroundProceduralBuilding.B_BackgroundProceduralBuilding_C.Search Material");
		
		AB_BackgroundProceduralBuilding_C_Search_Material_Params params {};
		params.Types = Types;
		params.Variations = Variations;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array_Material != nullptr)
			*Array_Material = params.Array_Material;
		if (FinalMaterial != nullptr)
			*FinalMaterial = params.FinalMaterial;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function B_BackgroundProceduralBuilding.B_BackgroundProceduralBuilding_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AB_BackgroundProceduralBuilding_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function B_BackgroundProceduralBuilding.B_BackgroundProceduralBuilding_C.UserConstructionScript");
		
		AB_BackgroundProceduralBuilding_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AB_BackgroundProceduralBuilding_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AB_BackgroundProceduralBuilding_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_BackgroundProceduralBuilding.B_BackgroundProceduralBuilding_C");
		return ptr;
	}

}


