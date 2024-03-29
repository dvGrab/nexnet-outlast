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
	 * 		Name   -> Function SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C.TurnOnFlipSwitches
	 * 		Flags  -> ()
	 */
	void USwitchesMatchPanelComponent_BP_C::TurnOnFlipSwitches()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C.TurnOnFlipSwitches");
		
		USwitchesMatchPanelComponent_BP_C_TurnOnFlipSwitches_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C.TurnOffFlipSwitches
	 * 		Flags  -> ()
	 */
	void USwitchesMatchPanelComponent_BP_C::TurnOffFlipSwitches()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C.TurnOffFlipSwitches");
		
		USwitchesMatchPanelComponent_BP_C_TurnOffFlipSwitches_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C.ShouldBPTick
	 * 		Flags  -> ()
	 */
	bool USwitchesMatchPanelComponent_BP_C::ShouldBPTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C.ShouldBPTick");
		
		USwitchesMatchPanelComponent_BP_C_ShouldBPTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C.GetInteractionDiodeColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            DiodeIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                DiodeColor                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USwitchesMatchPanelComponent_BP_C::GetInteractionDiodeColor(int32_t DiodeIndex, struct FLinearColor* DiodeColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C.GetInteractionDiodeColor");
		
		USwitchesMatchPanelComponent_BP_C_GetInteractionDiodeColor_Params params {};
		params.DiodeIndex = DiodeIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DiodeColor != nullptr)
			*DiodeColor = params.DiodeColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C.RefreshInteractionDiodesState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bForceColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                ForcedColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USwitchesMatchPanelComponent_BP_C::RefreshInteractionDiodesState(bool bForceColor, const struct FLinearColor& ForcedColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C.RefreshInteractionDiodesState");
		
		USwitchesMatchPanelComponent_BP_C_RefreshInteractionDiodesState_Params params {};
		params.bForceColor = bForceColor;
		params.ForcedColor = ForcedColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C.AppendInteractionCountDiode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USwitchesMatchPanelComponent_BP_C::AppendInteractionCountDiode(const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C.AppendInteractionCountDiode");
		
		USwitchesMatchPanelComponent_BP_C_AppendInteractionCountDiode_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C.OnGeneratorInteractibleStateChange
	 * 		Flags  -> ()
	 */
	void USwitchesMatchPanelComponent_BP_C::OnGeneratorInteractibleStateChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C.OnGeneratorInteractibleStateChange");
		
		USwitchesMatchPanelComponent_BP_C_OnGeneratorInteractibleStateChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C.GetInteractionPawnLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESpecialMove                                       specialMove                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     outDirection                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool USwitchesMatchPanelComponent_BP_C::GetInteractionPawnLocation(class ARBPawn* Pawn, ESpecialMove specialMove, struct FVector* OutLocation, struct FVector* outDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C.GetInteractionPawnLocation");
		
		USwitchesMatchPanelComponent_BP_C_GetInteractionPawnLocation_Params params {};
		params.Pawn = Pawn;
		params.specialMove = specialMove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLocation != nullptr)
			*OutLocation = params.OutLocation;
		if (outDirection != nullptr)
			*outDirection = params.outDirection;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C.Event_OnPanelSuccessStateChanged
	 * 		Flags  -> ()
	 */
	void USwitchesMatchPanelComponent_BP_C::Event_OnPanelSuccessStateChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C.Event_OnPanelSuccessStateChanged");
		
		USwitchesMatchPanelComponent_BP_C_Event_OnPanelSuccessStateChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void USwitchesMatchPanelComponent_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C.ReceiveBeginPlay");
		
		USwitchesMatchPanelComponent_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C.Event_OnNumbersOfInteractionChanged
	 * 		Flags  -> ()
	 */
	void USwitchesMatchPanelComponent_BP_C::Event_OnNumbersOfInteractionChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C.Event_OnNumbersOfInteractionChanged");
		
		USwitchesMatchPanelComponent_BP_C_Event_OnNumbersOfInteractionChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C.Event_OnCurrentPuzzleChanged
	 * 		Flags  -> ()
	 */
	void USwitchesMatchPanelComponent_BP_C::Event_OnCurrentPuzzleChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C.Event_OnCurrentPuzzleChanged");
		
		USwitchesMatchPanelComponent_BP_C_Event_OnCurrentPuzzleChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USwitchesMatchPanelComponent_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C.ReceiveTick");
		
		USwitchesMatchPanelComponent_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void USwitchesMatchPanelComponent_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C.Event_OnResetStage");
		
		USwitchesMatchPanelComponent_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C.Event_OnCurrentPuzzleReset
	 * 		Flags  -> ()
	 */
	void USwitchesMatchPanelComponent_BP_C::Event_OnCurrentPuzzleReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C.Event_OnCurrentPuzzleReset");
		
		USwitchesMatchPanelComponent_BP_C_Event_OnCurrentPuzzleReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C.ExecuteUbergraph_SwitchesMatchPanelComponent_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USwitchesMatchPanelComponent_BP_C::ExecuteUbergraph_SwitchesMatchPanelComponent_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C.ExecuteUbergraph_SwitchesMatchPanelComponent_BP");
		
		USwitchesMatchPanelComponent_BP_C_ExecuteUbergraph_SwitchesMatchPanelComponent_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USwitchesMatchPanelComponent_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USwitchesMatchPanelComponent_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SwitchesMatchPanelComponent_BP.SwitchesMatchPanelComponent_BP_C");
		return ptr;
	}

}


