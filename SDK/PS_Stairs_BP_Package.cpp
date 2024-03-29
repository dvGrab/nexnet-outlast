/**
 * Name: OUTLAST
 * Version: 0.0.2_fixed
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
	 * 		Name   -> Function PS_Stairs_BP.PS_Stairs_BP_C.ClearStairsMarkers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UChildActorComponent*                        BottomMarker                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UChildActorComponent*                        TopMarker                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APS_Stairs_BP_C::ClearStairsMarkers(class UChildActorComponent* BottomMarker, class UChildActorComponent* TopMarker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PS_Stairs_BP.PS_Stairs_BP_C.ClearStairsMarkers");
		
		APS_Stairs_BP_C_ClearStairsMarkers_Params params {};
		params.BottomMarker = BottomMarker;
		params.TopMarker = TopMarker;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PS_Stairs_BP.PS_Stairs_BP_C.UpdateStairsMarkers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UChildActorComponent*                        BottomMarker                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UChildActorComponent*                        TopMarker                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              StairsFlatDistance                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APS_Stairs_BP_C::UpdateStairsMarkers(class UChildActorComponent* BottomMarker, class UChildActorComponent* TopMarker, float StairsFlatDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PS_Stairs_BP.PS_Stairs_BP_C.UpdateStairsMarkers");
		
		APS_Stairs_BP_C_UpdateStairsMarkers_Params params {};
		params.BottomMarker = BottomMarker;
		params.TopMarker = TopMarker;
		params.StairsFlatDistance = StairsFlatDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PS_Stairs_BP.PS_Stairs_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void APS_Stairs_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PS_Stairs_BP.PS_Stairs_BP_C.UserConstructionScript");
		
		APS_Stairs_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APS_Stairs_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APS_Stairs_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PS_Stairs_BP.PS_Stairs_BP_C");
		return ptr;
	}

}


