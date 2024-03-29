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
	 * 		Name   -> Function BP_UI_PlanningMap_Marker.BP_UI_PlanningMap_Marker_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBP_UI_PlanningMap_Marker_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_PlanningMap_Marker.BP_UI_PlanningMap_Marker_C.ReceiveBeginPlay");
		
		UBP_UI_PlanningMap_Marker_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_PlanningMap_Marker.BP_UI_PlanningMap_Marker_C.ExecuteUbergraph_BP_UI_PlanningMap_Marker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UI_PlanningMap_Marker_C::ExecuteUbergraph_BP_UI_PlanningMap_Marker(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_PlanningMap_Marker.BP_UI_PlanningMap_Marker_C.ExecuteUbergraph_BP_UI_PlanningMap_Marker");
		
		UBP_UI_PlanningMap_Marker_C_ExecuteUbergraph_BP_UI_PlanningMap_Marker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_UI_PlanningMap_Marker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_UI_PlanningMap_Marker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_UI_PlanningMap_Marker.BP_UI_PlanningMap_Marker_C");
		return ptr;
	}

}


