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
	 * 		Name   -> Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.SequenceEvent__ENTRYPOINTW_MissionEnd_Rating_Progress_1
	 * 		Flags  -> ()
	 */
	void UW_MissionEnd_Rating_Progress_C::SequenceEvent__ENTRYPOINTW_MissionEnd_Rating_Progress_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.SequenceEvent__ENTRYPOINTW_MissionEnd_Rating_Progress_1");
		
		UW_MissionEnd_Rating_Progress_C_SequenceEvent__ENTRYPOINTW_MissionEnd_Rating_Progress_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.UpdateSound
	 * 		Flags  -> ()
	 */
	void UW_MissionEnd_Rating_Progress_C::UpdateSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.UpdateSound");
		
		UW_MissionEnd_Rating_Progress_C_UpdateSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.SetDebug
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        DebugText1                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        DebugText2                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        DebugText3                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_MissionEnd_Rating_Progress_C::SetDebug(const class FText& DebugText1, const class FText& DebugText2, const class FText& DebugText3)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.SetDebug");
		
		UW_MissionEnd_Rating_Progress_C_SetDebug_Params params {};
		params.DebugText1 = DebugText1;
		params.DebugText2 = DebugText2;
		params.DebugText3 = DebugText3;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.AddToScore
	 * 		Flags  -> ()
	 */
	void UW_MissionEnd_Rating_Progress_C::AddToScore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.AddToScore");
		
		UW_MissionEnd_Rating_Progress_C_AddToScore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.UpdateProgressMeter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CurrentScore                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_MissionEnd_Rating_Progress_C::UpdateProgressMeter(int32_t CurrentScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.UpdateProgressMeter");
		
		UW_MissionEnd_Rating_Progress_C_UpdateProgressMeter_Params params {};
		params.CurrentScore = CurrentScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.gradeSound
	 * 		Flags  -> ()
	 */
	void UW_MissionEnd_Rating_Progress_C::gradeSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.gradeSound");
		
		UW_MissionEnd_Rating_Progress_C_gradeSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_MissionEnd_Rating_Progress_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.PreConstruct");
		
		UW_MissionEnd_Rating_Progress_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_MissionEnd_Rating_Progress_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.Construct");
		
		UW_MissionEnd_Rating_Progress_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_MissionEnd_Rating_Progress_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.Tick");
		
		UW_MissionEnd_Rating_Progress_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.UpdateScore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FScoreGroup                                 ScoreData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 */
	void UW_MissionEnd_Rating_Progress_C::UpdateScore(const struct FScoreGroup& ScoreData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.UpdateScore");
		
		UW_MissionEnd_Rating_Progress_C_UpdateScore_Params params {};
		params.ScoreData = ScoreData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.UpdatePenalty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FScorePenaltyData                           PenaltyData                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_MissionEnd_Rating_Progress_C::UpdatePenalty(const struct FScorePenaltyData& PenaltyData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.UpdatePenalty");
		
		UW_MissionEnd_Rating_Progress_C_UpdatePenalty_Params params {};
		params.PenaltyData = PenaltyData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.RevealGrade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Grade                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UW_MissionEnd_Rating_Progress_C::RevealGrade(const class FString& Grade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.RevealGrade");
		
		UW_MissionEnd_Rating_Progress_C_RevealGrade_Params params {};
		params.Grade = Grade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.Destruct
	 * 		Flags  -> ()
	 */
	void UW_MissionEnd_Rating_Progress_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.Destruct");
		
		UW_MissionEnd_Rating_Progress_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.ExecuteUbergraph_W_MissionEnd_Rating_Progress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_MissionEnd_Rating_Progress_C::ExecuteUbergraph_W_MissionEnd_Rating_Progress(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.ExecuteUbergraph_W_MissionEnd_Rating_Progress");
		
		UW_MissionEnd_Rating_Progress_C_ExecuteUbergraph_W_MissionEnd_Rating_Progress_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_MissionEnd_Rating_Progress_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_MissionEnd_Rating_Progress_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C");
		return ptr;
	}

}


