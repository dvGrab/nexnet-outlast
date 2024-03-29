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
	 * 		Name   -> Function ReviveSyringeStationBreak_GhostAnimBP.ReviveSyringeStationBreak_GhostAnimBP_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UReviveSyringeStationBreak_GhostAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReviveSyringeStationBreak_GhostAnimBP.ReviveSyringeStationBreak_GhostAnimBP_C.AnimGraph");
		
		UReviveSyringeStationBreak_GhostAnimBP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReviveSyringeStationBreak_GhostAnimBP.ReviveSyringeStationBreak_GhostAnimBP_C.AnimNotify_Done
	 * 		Flags  -> ()
	 */
	void UReviveSyringeStationBreak_GhostAnimBP_C::AnimNotify_Done()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReviveSyringeStationBreak_GhostAnimBP.ReviveSyringeStationBreak_GhostAnimBP_C.AnimNotify_Done");
		
		UReviveSyringeStationBreak_GhostAnimBP_C_AnimNotify_Done_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReviveSyringeStationBreak_GhostAnimBP.ReviveSyringeStationBreak_GhostAnimBP_C.ExecuteUbergraph_ReviveSyringeStationBreak_GhostAnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UReviveSyringeStationBreak_GhostAnimBP_C::ExecuteUbergraph_ReviveSyringeStationBreak_GhostAnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReviveSyringeStationBreak_GhostAnimBP.ReviveSyringeStationBreak_GhostAnimBP_C.ExecuteUbergraph_ReviveSyringeStationBreak_GhostAnimBP");
		
		UReviveSyringeStationBreak_GhostAnimBP_C_ExecuteUbergraph_ReviveSyringeStationBreak_GhostAnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReviveSyringeStationBreak_GhostAnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReviveSyringeStationBreak_GhostAnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ReviveSyringeStationBreak_GhostAnimBP.ReviveSyringeStationBreak_GhostAnimBP_C");
		return ptr;
	}

}


