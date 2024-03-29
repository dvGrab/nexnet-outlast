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
	 * 		Name   -> Function W_Briefing_Objectives_List.W_Briefing_Objectives_List_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_Briefing_Objectives_List_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Objectives_List.W_Briefing_Objectives_List_C.PreConstruct");
		
		UW_Briefing_Objectives_List_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Objectives_List.W_Briefing_Objectives_List_C.InitObjectives
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AObjective*>                          Objectives                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_Briefing_Objectives_List_C::InitObjectives(TArray<class AObjective*> Objectives)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Objectives_List.W_Briefing_Objectives_List_C.InitObjectives");
		
		UW_Briefing_Objectives_List_C_InitObjectives_Params params {};
		params.Objectives = Objectives;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Objectives_List.W_Briefing_Objectives_List_C.InitChallenges
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FST_SubObjective_Entry>              Challenges                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_Briefing_Objectives_List_C::InitChallenges(TArray<struct FST_SubObjective_Entry> Challenges)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Objectives_List.W_Briefing_Objectives_List_C.InitChallenges");
		
		UW_Briefing_Objectives_List_C_InitChallenges_Params params {};
		params.Challenges = Challenges;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Objectives_List.W_Briefing_Objectives_List_C.ExecuteUbergraph_W_Briefing_Objectives_List
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Briefing_Objectives_List_C::ExecuteUbergraph_W_Briefing_Objectives_List(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_Objectives_List.W_Briefing_Objectives_List_C.ExecuteUbergraph_W_Briefing_Objectives_List");
		
		UW_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_Briefing_Objectives_List_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_Briefing_Objectives_List_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Briefing_Objectives_List.W_Briefing_Objectives_List_C");
		return ptr;
	}

}


