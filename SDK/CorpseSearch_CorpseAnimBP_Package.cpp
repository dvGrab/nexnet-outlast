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
	 * 		Name   -> Function CorpseSearch_CorpseAnimBP.CorpseSearch_CorpseAnimBP_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UCorpseSearch_CorpseAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_CorpseAnimBP.CorpseSearch_CorpseAnimBP_C.AnimGraph");
		
		UCorpseSearch_CorpseAnimBP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_CorpseAnimBP.CorpseSearch_CorpseAnimBP_C.Play Enter Animation
	 * 		Flags  -> ()
	 */
	void UCorpseSearch_CorpseAnimBP_C::PlayEnterAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_CorpseAnimBP.CorpseSearch_CorpseAnimBP_C.Play Enter Animation");
		
		UCorpseSearch_CorpseAnimBP_C_PlayEnterAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_CorpseAnimBP.CorpseSearch_CorpseAnimBP_C.BlueprintBeginPlay
	 * 		Flags  -> ()
	 */
	void UCorpseSearch_CorpseAnimBP_C::BlueprintBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_CorpseAnimBP.CorpseSearch_CorpseAnimBP_C.BlueprintBeginPlay");
		
		UCorpseSearch_CorpseAnimBP_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_CorpseAnimBP.CorpseSearch_CorpseAnimBP_C.Stop Animation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSuccess                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCorpseSearch_CorpseAnimBP_C::StopAnimation(bool IsSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_CorpseAnimBP.CorpseSearch_CorpseAnimBP_C.Stop Animation");
		
		UCorpseSearch_CorpseAnimBP_C_StopAnimation_Params params {};
		params.IsSuccess = IsSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_CorpseAnimBP.CorpseSearch_CorpseAnimBP_C.Reset Animation State
	 * 		Flags  -> ()
	 */
	void UCorpseSearch_CorpseAnimBP_C::ResetAnimationState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_CorpseAnimBP.CorpseSearch_CorpseAnimBP_C.Reset Animation State");
		
		UCorpseSearch_CorpseAnimBP_C_ResetAnimationState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_CorpseAnimBP.CorpseSearch_CorpseAnimBP_C.ExecuteUbergraph_CorpseSearch_CorpseAnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCorpseSearch_CorpseAnimBP_C::ExecuteUbergraph_CorpseSearch_CorpseAnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_CorpseAnimBP.CorpseSearch_CorpseAnimBP_C.ExecuteUbergraph_CorpseSearch_CorpseAnimBP");
		
		UCorpseSearch_CorpseAnimBP_C_ExecuteUbergraph_CorpseSearch_CorpseAnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCorpseSearch_CorpseAnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCorpseSearch_CorpseAnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass CorpseSearch_CorpseAnimBP.CorpseSearch_CorpseAnimBP_C");
		return ptr;
	}

}


