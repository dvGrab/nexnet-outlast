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
	 * 		Name   -> Function ANIMBP_Preview_Char_Head.ANIMBP_Preview_Char_Head_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UANIMBP_Preview_Char_Head_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_Preview_Char_Head.ANIMBP_Preview_Char_Head_C.AnimGraph");
		
		UANIMBP_Preview_Char_Head_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_Preview_Char_Head.ANIMBP_Preview_Char_Head_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UANIMBP_Preview_Char_Head_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_Preview_Char_Head.ANIMBP_Preview_Char_Head_C.BlueprintUpdateAnimation");
		
		UANIMBP_Preview_Char_Head_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_Preview_Char_Head.ANIMBP_Preview_Char_Head_C.ExecuteUbergraph_ANIMBP_Preview_Char_Head
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UANIMBP_Preview_Char_Head_C::ExecuteUbergraph_ANIMBP_Preview_Char_Head(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_Preview_Char_Head.ANIMBP_Preview_Char_Head_C.ExecuteUbergraph_ANIMBP_Preview_Char_Head");
		
		UANIMBP_Preview_Char_Head_C_ExecuteUbergraph_ANIMBP_Preview_Char_Head_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UANIMBP_Preview_Char_Head_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UANIMBP_Preview_Char_Head_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ANIMBP_Preview_Char_Head.ANIMBP_Preview_Char_Head_C");
		return ptr;
	}

}


