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
	 * 		Name   -> Function MenuCharacter_AnimBP.MenuCharacter_AnimBP_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UMenuCharacter_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter_AnimBP.MenuCharacter_AnimBP_C.AnimGraph");
		
		UMenuCharacter_AnimBP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter_AnimBP.MenuCharacter_AnimBP_C.BlueprintBeginPlay
	 * 		Flags  -> ()
	 */
	void UMenuCharacter_AnimBP_C::BlueprintBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter_AnimBP.MenuCharacter_AnimBP_C.BlueprintBeginPlay");
		
		UMenuCharacter_AnimBP_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter_AnimBP.MenuCharacter_AnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMenuCharacter_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter_AnimBP.MenuCharacter_AnimBP_C.BlueprintUpdateAnimation");
		
		UMenuCharacter_AnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter_AnimBP.MenuCharacter_AnimBP_C.AnimNotify_ImOut
	 * 		Flags  -> ()
	 */
	void UMenuCharacter_AnimBP_C::AnimNotify_ImOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter_AnimBP.MenuCharacter_AnimBP_C.AnimNotify_ImOut");
		
		UMenuCharacter_AnimBP_C_AnimNotify_ImOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter_AnimBP.MenuCharacter_AnimBP_C.AnimNotify_GoingToNeutral
	 * 		Flags  -> ()
	 */
	void UMenuCharacter_AnimBP_C::AnimNotify_GoingToNeutral()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter_AnimBP.MenuCharacter_AnimBP_C.AnimNotify_GoingToNeutral");
		
		UMenuCharacter_AnimBP_C_AnimNotify_GoingToNeutral_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter_AnimBP.MenuCharacter_AnimBP_C.ExecuteUbergraph_MenuCharacter_AnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMenuCharacter_AnimBP_C::ExecuteUbergraph_MenuCharacter_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter_AnimBP.MenuCharacter_AnimBP_C.ExecuteUbergraph_MenuCharacter_AnimBP");
		
		UMenuCharacter_AnimBP_C_ExecuteUbergraph_MenuCharacter_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter_AnimBP.MenuCharacter_AnimBP_C.ReachedMainPosition__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMenuCharacter_AnimBP_C::ReachedMainPosition__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter_AnimBP.MenuCharacter_AnimBP_C.ReachedMainPosition__DelegateSignature");
		
		UMenuCharacter_AnimBP_C_ReachedMainPosition__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuCharacter_AnimBP.MenuCharacter_AnimBP_C.ToMainPosition__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMenuCharacter_AnimBP_C::ToMainPosition__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuCharacter_AnimBP.MenuCharacter_AnimBP_C.ToMainPosition__DelegateSignature");
		
		UMenuCharacter_AnimBP_C_ToMainPosition__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMenuCharacter_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMenuCharacter_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass MenuCharacter_AnimBP.MenuCharacter_AnimBP_C");
		return ptr;
	}

}


