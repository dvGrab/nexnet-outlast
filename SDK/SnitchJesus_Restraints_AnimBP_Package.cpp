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
	 * 		Name   -> Function SnitchJesus_Restraints_AnimBP.SnitchJesus_Restraints_AnimBP_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void USnitchJesus_Restraints_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SnitchJesus_Restraints_AnimBP.SnitchJesus_Restraints_AnimBP_C.AnimGraph");
		
		USnitchJesus_Restraints_AnimBP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SnitchJesus_Restraints_AnimBP.SnitchJesus_Restraints_AnimBP_C.UpdateProgressRatio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              progressRatio                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USnitchJesus_Restraints_AnimBP_C::UpdateProgressRatio(float progressRatio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SnitchJesus_Restraints_AnimBP.SnitchJesus_Restraints_AnimBP_C.UpdateProgressRatio");
		
		USnitchJesus_Restraints_AnimBP_C_UpdateProgressRatio_Params params {};
		params.progressRatio = progressRatio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SnitchJesus_Restraints_AnimBP.SnitchJesus_Restraints_AnimBP_C.ExecuteUbergraph_SnitchJesus_Restraints_AnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USnitchJesus_Restraints_AnimBP_C::ExecuteUbergraph_SnitchJesus_Restraints_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SnitchJesus_Restraints_AnimBP.SnitchJesus_Restraints_AnimBP_C.ExecuteUbergraph_SnitchJesus_Restraints_AnimBP");
		
		USnitchJesus_Restraints_AnimBP_C_ExecuteUbergraph_SnitchJesus_Restraints_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USnitchJesus_Restraints_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USnitchJesus_Restraints_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass SnitchJesus_Restraints_AnimBP.SnitchJesus_Restraints_AnimBP_C");
		return ptr;
	}

}


