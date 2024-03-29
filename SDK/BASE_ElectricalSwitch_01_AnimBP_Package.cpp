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
	 * 		Name   -> Function BASE_ElectricalSwitch-01_AnimBP.BASE_ElectricalSwitch-01_AnimBP_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UBASE_ElectricalSwitch__AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BASE_ElectricalSwitch-01_AnimBP.BASE_ElectricalSwitch-01_AnimBP_C.AnimGraph");
		
		UBASE_ElectricalSwitch__AnimBP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BASE_ElectricalSwitch-01_AnimBP.BASE_ElectricalSwitch-01_AnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBASE_ElectricalSwitch__AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BASE_ElectricalSwitch-01_AnimBP.BASE_ElectricalSwitch-01_AnimBP_C.BlueprintUpdateAnimation");
		
		UBASE_ElectricalSwitch__AnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BASE_ElectricalSwitch-01_AnimBP.BASE_ElectricalSwitch-01_AnimBP_C.BlueprintBeginPlay
	 * 		Flags  -> ()
	 */
	void UBASE_ElectricalSwitch__AnimBP_C::BlueprintBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BASE_ElectricalSwitch-01_AnimBP.BASE_ElectricalSwitch-01_AnimBP_C.BlueprintBeginPlay");
		
		UBASE_ElectricalSwitch__AnimBP_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BASE_ElectricalSwitch-01_AnimBP.BASE_ElectricalSwitch-01_AnimBP_C.ExecuteUbergraph_BASE_ElectricalSwitch-01_AnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBASE_ElectricalSwitch__AnimBP_C::ExecuteUbergraph_BASE_ElectricalSwitch__AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BASE_ElectricalSwitch-01_AnimBP.BASE_ElectricalSwitch-01_AnimBP_C.ExecuteUbergraph_BASE_ElectricalSwitch-01_AnimBP");
		
		UBASE_ElectricalSwitch__AnimBP_C_ExecuteUbergraph_BASE_ElectricalSwitch__AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBASE_ElectricalSwitch__AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBASE_ElectricalSwitch__AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BASE_ElectricalSwitch_01_AnimBP.BASE_ElectricalSwitch-01_AnimBP_C");
		return ptr;
	}

}


