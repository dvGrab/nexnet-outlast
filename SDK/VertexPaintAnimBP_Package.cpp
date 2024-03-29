/**
 * Name: OUTLAST
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
	 * 		Name   -> Function VertexPaintAnimBP.VertexPaintAnimBP_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UVertexPaintAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VertexPaintAnimBP.VertexPaintAnimBP_C.AnimGraph");
		
		UVertexPaintAnimBP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VertexPaintAnimBP.VertexPaintAnimBP_C.AnimNotify_Step
	 * 		Flags  -> ()
	 */
	void UVertexPaintAnimBP_C::AnimNotify_Step()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VertexPaintAnimBP.VertexPaintAnimBP_C.AnimNotify_Step");
		
		UVertexPaintAnimBP_C_AnimNotify_Step_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VertexPaintAnimBP.VertexPaintAnimBP_C.AnimNotify_RightStep
	 * 		Flags  -> ()
	 */
	void UVertexPaintAnimBP_C::AnimNotify_RightStep()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VertexPaintAnimBP.VertexPaintAnimBP_C.AnimNotify_RightStep");
		
		UVertexPaintAnimBP_C_AnimNotify_RightStep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VertexPaintAnimBP.VertexPaintAnimBP_C.ExecuteUbergraph_VertexPaintAnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVertexPaintAnimBP_C::ExecuteUbergraph_VertexPaintAnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VertexPaintAnimBP.VertexPaintAnimBP_C.ExecuteUbergraph_VertexPaintAnimBP");
		
		UVertexPaintAnimBP_C_ExecuteUbergraph_VertexPaintAnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VertexPaintAnimBP.VertexPaintAnimBP_C.RightFootDecal__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UVertexPaintAnimBP_C::RightFootDecal__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VertexPaintAnimBP.VertexPaintAnimBP_C.RightFootDecal__DelegateSignature");
		
		UVertexPaintAnimBP_C_RightFootDecal__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VertexPaintAnimBP.VertexPaintAnimBP_C.Decal__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UVertexPaintAnimBP_C::Decal__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VertexPaintAnimBP.VertexPaintAnimBP_C.Decal__DelegateSignature");
		
		UVertexPaintAnimBP_C_Decal__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVertexPaintAnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVertexPaintAnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass VertexPaintAnimBP.VertexPaintAnimBP_C");
		return ptr;
	}

}


