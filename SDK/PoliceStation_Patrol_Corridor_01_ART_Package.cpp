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
	 * 		Name   -> Function PoliceStation_Patrol_Corridor-01_ART.PoliceStation_Patrol_Corridor-01_ART_C.CheatOpenCage
	 * 		Flags  -> ()
	 */
	void APoliceStation_Patrol_Corridor01_ART_C::CheatOpenCage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_Patrol_Corridor-01_ART.PoliceStation_Patrol_Corridor-01_ART_C.CheatOpenCage");
		
		APoliceStation_Patrol_Corridor01_ART_C_CheatOpenCage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_Patrol_Corridor-01_ART.PoliceStation_Patrol_Corridor-01_ART_C.CageBlast
	 * 		Flags  -> ()
	 */
	void APoliceStation_Patrol_Corridor01_ART_C::CageBlast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_Patrol_Corridor-01_ART.PoliceStation_Patrol_Corridor-01_ART_C.CageBlast");
		
		APoliceStation_Patrol_Corridor01_ART_C_CageBlast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_Patrol_Corridor-01_ART.PoliceStation_Patrol_Corridor-01_ART_C.ExecuteUbergraph_PoliceStation_Patrol_Corridor-01_ART
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APoliceStation_Patrol_Corridor01_ART_C::ExecuteUbergraph_PoliceStation_Patrol_Corridor01_ART(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_Patrol_Corridor-01_ART.PoliceStation_Patrol_Corridor-01_ART_C.ExecuteUbergraph_PoliceStation_Patrol_Corridor-01_ART");
		
		APoliceStation_Patrol_Corridor01_ART_C_ExecuteUbergraph_PoliceStation_Patrol_Corridor01_ART_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APoliceStation_Patrol_Corridor01_ART_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APoliceStation_Patrol_Corridor01_ART_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PoliceStation_Patrol_Corridor_01_ART.PoliceStation_Patrol_Corridor-01_ART_C");
		return ptr;
	}

}


