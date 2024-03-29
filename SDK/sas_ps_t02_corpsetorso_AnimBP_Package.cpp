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
	 * 		Name   -> Function sas_ps_t02_corpsetorso_AnimBP.sas_ps_t02_corpsetorso_AnimBP_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void Usas_ps_t02_corpsetorso_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sas_ps_t02_corpsetorso_AnimBP.sas_ps_t02_corpsetorso_AnimBP_C.AnimGraph");
		
		Usas_ps_t02_corpsetorso_AnimBP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function sas_ps_t02_corpsetorso_AnimBP.sas_ps_t02_corpsetorso_AnimBP_C.ExecuteUbergraph_sas_ps_t02_corpsetorso_AnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void Usas_ps_t02_corpsetorso_AnimBP_C::ExecuteUbergraph_sas_ps_t02_corpsetorso_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sas_ps_t02_corpsetorso_AnimBP.sas_ps_t02_corpsetorso_AnimBP_C.ExecuteUbergraph_sas_ps_t02_corpsetorso_AnimBP");
		
		Usas_ps_t02_corpsetorso_AnimBP_C_ExecuteUbergraph_sas_ps_t02_corpsetorso_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction Usas_ps_t02_corpsetorso_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Usas_ps_t02_corpsetorso_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass sas_ps_t02_corpsetorso_AnimBP.sas_ps_t02_corpsetorso_AnimBP_C");
		return ptr;
	}

}


