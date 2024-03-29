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
	 * 		Name   -> Function W_ScoreboardFill.W_ScoreboardFill_C.GetTeamScoresVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_ScoreboardFill_C::GetTeamScoresVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ScoreboardFill.W_ScoreboardFill_C.GetTeamScoresVisibility");
		
		UW_ScoreboardFill_C_GetTeamScoresVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ScoreboardFill.W_ScoreboardFill_C.Get_Timelimit_Visibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_ScoreboardFill_C::Get_Timelimit_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ScoreboardFill.W_ScoreboardFill_C.Get_Timelimit_Visibility_1");
		
		UW_ScoreboardFill_C_Get_Timelimit_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ScoreboardFill.W_ScoreboardFill_C.Get_Timelimit_Text_1
	 * 		Flags  -> ()
	 */
	class FText UW_ScoreboardFill_C::Get_Timelimit_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ScoreboardFill.W_ScoreboardFill_C.Get_Timelimit_Text_1");
		
		UW_ScoreboardFill_C_Get_Timelimit_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ScoreboardFill.W_ScoreboardFill_C.Get_Status_Visibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_ScoreboardFill_C::Get_Status_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ScoreboardFill.W_ScoreboardFill_C.Get_Status_Visibility_1");
		
		UW_ScoreboardFill_C_Get_Status_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ScoreboardFill.W_ScoreboardFill_C.UsesScoring
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_ScoreboardFill_C::UsesScoring()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ScoreboardFill.W_ScoreboardFill_C.UsesScoring");
		
		UW_ScoreboardFill_C_UsesScoring_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ScoreboardFill.W_ScoreboardFill_C.HasReinforcements
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_ScoreboardFill_C::HasReinforcements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ScoreboardFill.W_ScoreboardFill_C.HasReinforcements");
		
		UW_ScoreboardFill_C_HasReinforcements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ScoreboardFill.W_ScoreboardFill_C.IsVIP
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_ScoreboardFill_C::IsVIP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ScoreboardFill.W_ScoreboardFill_C.IsVIP");
		
		UW_ScoreboardFill_C_IsVIP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ScoreboardFill.W_ScoreboardFill_C.GetVisibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_ScoreboardFill_C::GetVisibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ScoreboardFill.W_ScoreboardFill_C.GetVisibility_1");
		
		UW_ScoreboardFill_C_GetVisibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ScoreboardFill.W_ScoreboardFill_C.GetBlueTeamScoreText
	 * 		Flags  -> ()
	 */
	class FText UW_ScoreboardFill_C::GetBlueTeamScoreText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ScoreboardFill.W_ScoreboardFill_C.GetBlueTeamScoreText");
		
		UW_ScoreboardFill_C_GetBlueTeamScoreText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ScoreboardFill.W_ScoreboardFill_C.GetRedTeamScoreText
	 * 		Flags  -> ()
	 */
	class FText UW_ScoreboardFill_C::GetRedTeamScoreText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ScoreboardFill.W_ScoreboardFill_C.GetRedTeamScoreText");
		
		UW_ScoreboardFill_C_GetRedTeamScoreText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ScoreboardFill.W_ScoreboardFill_C.Get_ReinforcementTimeRemaining_Text_1
	 * 		Flags  -> ()
	 */
	class FText UW_ScoreboardFill_C::Get_ReinforcementTimeRemaining_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ScoreboardFill.W_ScoreboardFill_C.Get_ReinforcementTimeRemaining_Text_1");
		
		UW_ScoreboardFill_C_Get_ReinforcementTimeRemaining_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ScoreboardFill.W_ScoreboardFill_C.Get_HoldVIPTimeRemaining_Text_1
	 * 		Flags  -> ()
	 */
	class FText UW_ScoreboardFill_C::Get_HoldVIPTimeRemaining_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ScoreboardFill.W_ScoreboardFill_C.Get_HoldVIPTimeRemaining_Text_1");
		
		UW_ScoreboardFill_C_Get_HoldVIPTimeRemaining_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ScoreboardFill.W_ScoreboardFill_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_ScoreboardFill_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ScoreboardFill.W_ScoreboardFill_C.Construct");
		
		UW_ScoreboardFill_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ScoreboardFill.W_ScoreboardFill_C.RefreshScoreboard
	 * 		Flags  -> ()
	 */
	void UW_ScoreboardFill_C::RefreshScoreboard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ScoreboardFill.W_ScoreboardFill_C.RefreshScoreboard");
		
		UW_ScoreboardFill_C_RefreshScoreboard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ScoreboardFill.W_ScoreboardFill_C.Destruct
	 * 		Flags  -> ()
	 */
	void UW_ScoreboardFill_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ScoreboardFill.W_ScoreboardFill_C.Destruct");
		
		UW_ScoreboardFill_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ScoreboardFill.W_ScoreboardFill_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ScoreboardFill_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ScoreboardFill.W_ScoreboardFill_C.PreConstruct");
		
		UW_ScoreboardFill_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ScoreboardFill.W_ScoreboardFill_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ScoreboardFill_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ScoreboardFill.W_ScoreboardFill_C.Tick");
		
		UW_ScoreboardFill_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ScoreboardFill.W_ScoreboardFill_C.ExecuteUbergraph_W_ScoreboardFill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ScoreboardFill_C::ExecuteUbergraph_W_ScoreboardFill(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ScoreboardFill.W_ScoreboardFill_C.ExecuteUbergraph_W_ScoreboardFill");
		
		UW_ScoreboardFill_C_ExecuteUbergraph_W_ScoreboardFill_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_ScoreboardFill_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_ScoreboardFill_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_ScoreboardFill.W_ScoreboardFill_C");
		return ptr;
	}

}


