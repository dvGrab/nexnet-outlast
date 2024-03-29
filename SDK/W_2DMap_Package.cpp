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
	 * 		Name   -> Function W_2DMap.W_2DMap_C.GetDynMat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    MapDynMat                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_2DMap_C::GetDynMat(class UMaterialInstanceDynamic** MapDynMat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_2DMap.W_2DMap_C.GetDynMat");
		
		UW_2DMap_C_GetDynMat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MapDynMat != nullptr)
			*MapDynMat = params.MapDynMat;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_2DMap.W_2DMap_C.SetDynMat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInstance*                           Material                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    MapDynMat                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_2DMap_C::SetDynMat(class UMaterialInstance* Material, class UMaterialInstanceDynamic** MapDynMat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_2DMap.W_2DMap_C.SetDynMat");
		
		UW_2DMap_C_SetDynMat_Params params {};
		params.Material = Material;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MapDynMat != nullptr)
			*MapDynMat = params.MapDynMat;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_2DMap.W_2DMap_C.SetFloorTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInstance*                           MapMaterialInstance                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  LayoutTexture                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_2DMap_C::SetFloorTexture(class UMaterialInstance* MapMaterialInstance, class UTexture2D* LayoutTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_2DMap.W_2DMap_C.SetFloorTexture");
		
		UW_2DMap_C_SetFloorTexture_Params params {};
		params.MapMaterialInstance = MapMaterialInstance;
		params.LayoutTexture = LayoutTexture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_2DMap.W_2DMap_C.ExecuteUbergraph_W_2DMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_2DMap_C::ExecuteUbergraph_W_2DMap(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_2DMap.W_2DMap_C.ExecuteUbergraph_W_2DMap");
		
		UW_2DMap_C_ExecuteUbergraph_W_2DMap_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_2DMap_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_2DMap_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_2DMap.W_2DMap_C");
		return ptr;
	}

}


