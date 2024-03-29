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
	 * 		Name   -> Function W_MissionEnd_Rating_ScorePanel.W_MissionEnd_Rating_ScorePanel_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_MissionEnd_Rating_ScorePanel_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MissionEnd_Rating_ScorePanel.W_MissionEnd_Rating_ScorePanel_C.PreConstruct");
		
		UW_MissionEnd_Rating_ScorePanel_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_Rating_ScorePanel.W_MissionEnd_Rating_ScorePanel_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_MissionEnd_Rating_ScorePanel_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MissionEnd_Rating_ScorePanel.W_MissionEnd_Rating_ScorePanel_C.Construct");
		
		UW_MissionEnd_Rating_ScorePanel_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_Rating_ScorePanel.W_MissionEnd_Rating_ScorePanel_C.AddScores
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FScoreGroup>                         Scores                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void UW_MissionEnd_Rating_ScorePanel_C::AddScores(TArray<struct FScoreGroup> Scores)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MissionEnd_Rating_ScorePanel.W_MissionEnd_Rating_ScorePanel_C.AddScores");
		
		UW_MissionEnd_Rating_ScorePanel_C_AddScores_Params params {};
		params.Scores = Scores;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_Rating_ScorePanel.W_MissionEnd_Rating_ScorePanel_C.NextScore
	 * 		Flags  -> ()
	 */
	void UW_MissionEnd_Rating_ScorePanel_C::NextScore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MissionEnd_Rating_ScorePanel.W_MissionEnd_Rating_ScorePanel_C.NextScore");
		
		UW_MissionEnd_Rating_ScorePanel_C_NextScore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_Rating_ScorePanel.W_MissionEnd_Rating_ScorePanel_C.AddToProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_MissionEnd_RatingScoreEntry_C*            EntryWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Score                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_MissionEnd_Rating_ScorePanel_C::AddToProgress(class UW_MissionEnd_RatingScoreEntry_C* EntryWidget, int32_t Score)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MissionEnd_Rating_ScorePanel.W_MissionEnd_Rating_ScorePanel_C.AddToProgress");
		
		UW_MissionEnd_Rating_ScorePanel_C_AddToProgress_Params params {};
		params.EntryWidget = EntryWidget;
		params.Score = Score;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_Rating_ScorePanel.W_MissionEnd_Rating_ScorePanel_C.AddPenalties
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FScorePenaltyData>                   Scores                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_MissionEnd_Rating_ScorePanel_C::AddPenalties(TArray<struct FScorePenaltyData> Scores)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MissionEnd_Rating_ScorePanel.W_MissionEnd_Rating_ScorePanel_C.AddPenalties");
		
		UW_MissionEnd_Rating_ScorePanel_C_AddPenalties_Params params {};
		params.Scores = Scores;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_Rating_ScorePanel.W_MissionEnd_Rating_ScorePanel_C.NextPenalty
	 * 		Flags  -> ()
	 */
	void UW_MissionEnd_Rating_ScorePanel_C::NextPenalty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MissionEnd_Rating_ScorePanel.W_MissionEnd_Rating_ScorePanel_C.NextPenalty");
		
		UW_MissionEnd_Rating_ScorePanel_C_NextPenalty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_Rating_ScorePanel.W_MissionEnd_Rating_ScorePanel_C.PenalizeProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_MissionEnd_RatingScoreEntry_C*            EntryWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Score                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_MissionEnd_Rating_ScorePanel_C::PenalizeProgress(class UW_MissionEnd_RatingScoreEntry_C* EntryWidget, int32_t Score)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MissionEnd_Rating_ScorePanel.W_MissionEnd_Rating_ScorePanel_C.PenalizeProgress");
		
		UW_MissionEnd_Rating_ScorePanel_C_PenalizeProgress_Params params {};
		params.EntryWidget = EntryWidget;
		params.Score = Score;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_Rating_ScorePanel.W_MissionEnd_Rating_ScorePanel_C.ExecuteUbergraph_W_MissionEnd_Rating_ScorePanel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_MissionEnd_Rating_ScorePanel_C::ExecuteUbergraph_W_MissionEnd_Rating_ScorePanel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MissionEnd_Rating_ScorePanel.W_MissionEnd_Rating_ScorePanel_C.ExecuteUbergraph_W_MissionEnd_Rating_ScorePanel");
		
		UW_MissionEnd_Rating_ScorePanel_C_ExecuteUbergraph_W_MissionEnd_Rating_ScorePanel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_Rating_ScorePanel.W_MissionEnd_Rating_ScorePanel_C.AllPenaltiesAdded__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_MissionEnd_Rating_ScorePanel_C::AllPenaltiesAdded__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MissionEnd_Rating_ScorePanel.W_MissionEnd_Rating_ScorePanel_C.AllPenaltiesAdded__DelegateSignature");
		
		UW_MissionEnd_Rating_ScorePanel_C_AllPenaltiesAdded__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_Rating_ScorePanel.W_MissionEnd_Rating_ScorePanel_C.AllScoresAdded__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_MissionEnd_Rating_ScorePanel_C::AllScoresAdded__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MissionEnd_Rating_ScorePanel.W_MissionEnd_Rating_ScorePanel_C.AllScoresAdded__DelegateSignature");
		
		UW_MissionEnd_Rating_ScorePanel_C_AllScoresAdded__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_MissionEnd_Rating_ScorePanel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_MissionEnd_Rating_ScorePanel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_MissionEnd_Rating_ScorePanel.W_MissionEnd_Rating_ScorePanel_C");
		return ptr;
	}

}


