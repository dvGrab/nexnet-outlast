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
	 * 		Name   -> Function QuestItem_KeyBox_AnimBP.QuestItem_KeyBox_AnimBP_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UQuestItem_KeyBox_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestItem_KeyBox_AnimBP.QuestItem_KeyBox_AnimBP_C.AnimGraph");
		
		UQuestItem_KeyBox_AnimBP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestItem_KeyBox_AnimBP.QuestItem_KeyBox_AnimBP_C.BlueprintInitializeAnimation
	 * 		Flags  -> ()
	 */
	void UQuestItem_KeyBox_AnimBP_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestItem_KeyBox_AnimBP.QuestItem_KeyBox_AnimBP_C.BlueprintInitializeAnimation");
		
		UQuestItem_KeyBox_AnimBP_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestItem_KeyBox_AnimBP.QuestItem_KeyBox_AnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestItem_KeyBox_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestItem_KeyBox_AnimBP.QuestItem_KeyBox_AnimBP_C.BlueprintUpdateAnimation");
		
		UQuestItem_KeyBox_AnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestItem_KeyBox_AnimBP.QuestItem_KeyBox_AnimBP_C.Reset
	 * 		Flags  -> ()
	 */
	void UQuestItem_KeyBox_AnimBP_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestItem_KeyBox_AnimBP.QuestItem_KeyBox_AnimBP_C.Reset");
		
		UQuestItem_KeyBox_AnimBP_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestItem_KeyBox_AnimBP.QuestItem_KeyBox_AnimBP_C.ExecuteUbergraph_QuestItem_KeyBox_AnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestItem_KeyBox_AnimBP_C::ExecuteUbergraph_QuestItem_KeyBox_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestItem_KeyBox_AnimBP.QuestItem_KeyBox_AnimBP_C.ExecuteUbergraph_QuestItem_KeyBox_AnimBP");
		
		UQuestItem_KeyBox_AnimBP_C_ExecuteUbergraph_QuestItem_KeyBox_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuestItem_KeyBox_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuestItem_KeyBox_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass QuestItem_KeyBox_AnimBP.QuestItem_KeyBox_AnimBP_C");
		return ptr;
	}

}


