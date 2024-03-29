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
	 * 		Name   -> Function NightVision_Goggle_AnimBP.NightVision_Goggle_AnimBP_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UNightVision_Goggle_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NightVision_Goggle_AnimBP.NightVision_Goggle_AnimBP_C.AnimGraph");
		
		UNightVision_Goggle_AnimBP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NightVision_Goggle_AnimBP.NightVision_Goggle_AnimBP_C.CachePlayer
	 * 		Flags  -> ()
	 */
	void UNightVision_Goggle_AnimBP_C::CachePlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NightVision_Goggle_AnimBP.NightVision_Goggle_AnimBP_C.CachePlayer");
		
		UNightVision_Goggle_AnimBP_C_CachePlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NightVision_Goggle_AnimBP.NightVision_Goggle_AnimBP_C.BlueprintBeginPlay
	 * 		Flags  -> ()
	 */
	void UNightVision_Goggle_AnimBP_C::BlueprintBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NightVision_Goggle_AnimBP.NightVision_Goggle_AnimBP_C.BlueprintBeginPlay");
		
		UNightVision_Goggle_AnimBP_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NightVision_Goggle_AnimBP.NightVision_Goggle_AnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNightVision_Goggle_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NightVision_Goggle_AnimBP.NightVision_Goggle_AnimBP_C.BlueprintUpdateAnimation");
		
		UNightVision_Goggle_AnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NightVision_Goggle_AnimBP.NightVision_Goggle_AnimBP_C.ExecuteUbergraph_NightVision_Goggle_AnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNightVision_Goggle_AnimBP_C::ExecuteUbergraph_NightVision_Goggle_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NightVision_Goggle_AnimBP.NightVision_Goggle_AnimBP_C.ExecuteUbergraph_NightVision_Goggle_AnimBP");
		
		UNightVision_Goggle_AnimBP_C_ExecuteUbergraph_NightVision_Goggle_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNightVision_Goggle_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNightVision_Goggle_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass NightVision_Goggle_AnimBP.NightVision_Goggle_AnimBP_C");
		return ptr;
	}

}


