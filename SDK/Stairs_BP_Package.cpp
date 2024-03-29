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
	 * 		Name   -> Function Stairs_BP.Stairs_BP_C.ClearStairsMarkers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UChildActorComponent*                        BottomMarker                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UChildActorComponent*                        TopMarker                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStairs_BP_C::ClearStairsMarkers(class UChildActorComponent* BottomMarker, class UChildActorComponent* TopMarker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stairs_BP.Stairs_BP_C.ClearStairsMarkers");
		
		AStairs_BP_C_ClearStairsMarkers_Params params {};
		params.BottomMarker = BottomMarker;
		params.TopMarker = TopMarker;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Stairs_BP.Stairs_BP_C.UpdateStairsMarkers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UChildActorComponent*                        BottomMarker                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UChildActorComponent*                        TopMarker                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              StairsFlatDistance                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStairs_BP_C::UpdateStairsMarkers(class UChildActorComponent* BottomMarker, class UChildActorComponent* TopMarker, float StairsFlatDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stairs_BP.Stairs_BP_C.UpdateStairsMarkers");
		
		AStairs_BP_C_UpdateStairsMarkers_Params params {};
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
	 * 		Name   -> Function Stairs_BP.Stairs_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AStairs_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stairs_BP.Stairs_BP_C.UserConstructionScript");
		
		AStairs_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStairs_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStairs_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Stairs_BP.Stairs_BP_C");
		return ptr;
	}

}


