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
	 * 		Name   -> Function HUDObjectives.HUDObjectives_C.RefreshObjectivesTexts
	 * 		Flags  -> ()
	 */
	void UHUDObjectives_C::RefreshObjectivesTexts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDObjectives.HUDObjectives_C.RefreshObjectivesTexts");
		
		UHUDObjectives_C_RefreshObjectivesTexts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDObjectives.HUDObjectives_C.OnObjectiveEnded
	 * 		Flags  -> ()
	 */
	void UHUDObjectives_C::OnObjectiveEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDObjectives.HUDObjectives_C.OnObjectiveEnded");
		
		UHUDObjectives_C_OnObjectiveEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDObjectives.HUDObjectives_C.ShouldShow
	 * 		Flags  -> ()
	 */
	bool UHUDObjectives_C::ShouldShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDObjectives.HUDObjectives_C.ShouldShow");
		
		UHUDObjectives_C_ShouldShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDObjectives.HUDObjectives_C.CanDisplayObjective
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBBaseObjectiveCoordinator*                 coordinator                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               canDisplay                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUDObjectives_C::CanDisplayObjective(class ARBBaseObjectiveCoordinator* coordinator, bool* canDisplay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDObjectives.HUDObjectives_C.CanDisplayObjective");
		
		UHUDObjectives_C_CanDisplayObjective_Params params {};
		params.coordinator = coordinator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canDisplay != nullptr)
			*canDisplay = params.canDisplay;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDObjectives.HUDObjectives_C.OnObjectiveStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBBaseObjectiveCoordinator*                 coordinator                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDObjectives_C::OnObjectiveStarted(class ARBBaseObjectiveCoordinator* coordinator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDObjectives.HUDObjectives_C.OnObjectiveStarted");
		
		UHUDObjectives_C_OnObjectiveStarted_Params params {};
		params.coordinator = coordinator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDObjectives.HUDObjectives_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUDObjectives_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDObjectives.HUDObjectives_C.Construct");
		
		UHUDObjectives_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDObjectives.HUDObjectives_C.StateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBBaseObjectiveCoordinator*                 coordinator                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EObjectiveCoordinatorState                         State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDObjectives_C::StateChanged(class ARBBaseObjectiveCoordinator* coordinator, EObjectiveCoordinatorState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDObjectives.HUDObjectives_C.StateChanged");
		
		UHUDObjectives_C_StateChanged_Params params {};
		params.coordinator = coordinator;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDObjectives.HUDObjectives_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUDObjectives_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDObjectives.HUDObjectives_C.PreConstruct");
		
		UHUDObjectives_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDObjectives.HUDObjectives_C.OnRequestDisplayObjectiveHUD
	 * 		Flags  -> ()
	 */
	void UHUDObjectives_C::OnRequestDisplayObjectiveHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDObjectives.HUDObjectives_C.OnRequestDisplayObjectiveHUD");
		
		UHUDObjectives_C_OnRequestDisplayObjectiveHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDObjectives.HUDObjectives_C.OnCompletionInProgressChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isProgressionInProgress                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isCompletedByLocalPlayer                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUDObjectives_C::OnCompletionInProgressChanged(bool isProgressionInProgress, bool isCompletedByLocalPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDObjectives.HUDObjectives_C.OnCompletionInProgressChanged");
		
		UHUDObjectives_C_OnCompletionInProgressChanged_Params params {};
		params.isProgressionInProgress = isProgressionInProgress;
		params.isCompletedByLocalPlayer = isCompletedByLocalPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDObjectives.HUDObjectives_C.OnProgressChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              progressRatio                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isPositiveProgress                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        objectiveText                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UHUDObjectives_C::OnProgressChanged(float progressRatio, bool isPositiveProgress, const class FText& objectiveText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDObjectives.HUDObjectives_C.OnProgressChanged");
		
		UHUDObjectives_C_OnProgressChanged_Params params {};
		params.progressRatio = progressRatio;
		params.isPositiveProgress = isPositiveProgress;
		params.objectiveText = objectiveText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDObjectives.HUDObjectives_C.OnSingleObjectiveCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBBaseObjectiveCoordinator*                 coordinator                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      objective                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDObjectives_C::OnSingleObjectiveCompleted(class ARBBaseObjectiveCoordinator* coordinator, class AActor* Player, class AActor* objective)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDObjectives.HUDObjectives_C.OnSingleObjectiveCompleted");
		
		UHUDObjectives_C_OnSingleObjectiveCompleted_Params params {};
		params.coordinator = coordinator;
		params.Player = Player;
		params.objective = objective;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDObjectives.HUDObjectives_C.OnSingleCompletedObjectiveReverted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBBaseObjectiveCoordinator*                 coordinator                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      objective                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDObjectives_C::OnSingleCompletedObjectiveReverted(class ARBBaseObjectiveCoordinator* coordinator, class AActor* objective)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDObjectives.HUDObjectives_C.OnSingleCompletedObjectiveReverted");
		
		UHUDObjectives_C_OnSingleCompletedObjectiveReverted_Params params {};
		params.coordinator = coordinator;
		params.objective = objective;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDObjectives.HUDObjectives_C.Event_Show
	 * 		Flags  -> ()
	 */
	void UHUDObjectives_C::Event_Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDObjectives.HUDObjectives_C.Event_Show");
		
		UHUDObjectives_C_Event_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDObjectives.HUDObjectives_C.Event_Hide
	 * 		Flags  -> ()
	 */
	void UHUDObjectives_C::Event_Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDObjectives.HUDObjectives_C.Event_Hide");
		
		UHUDObjectives_C_Event_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDObjectives.HUDObjectives_C.ExecuteUbergraph_HUDObjectives
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDObjectives_C::ExecuteUbergraph_HUDObjectives(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDObjectives.HUDObjectives_C.ExecuteUbergraph_HUDObjectives");
		
		UHUDObjectives_C_ExecuteUbergraph_HUDObjectives_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUDObjectives_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUDObjectives_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUDObjectives.HUDObjectives_C");
		return ptr;
	}

}


