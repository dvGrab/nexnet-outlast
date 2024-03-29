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
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.FixUp
	 * 		Flags  -> ()
	 */
	bool APrototype_GeneratorObjective_BP_C::FixUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.FixUp");
		
		APrototype_GeneratorObjective_BP_C_FixUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.UpdatePanelStatusOnCrank
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APrototype_GeneratorObjective_BP_C::UpdatePanelStatusOnCrank(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.UpdatePanelStatusOnCrank");
		
		APrototype_GeneratorObjective_BP_C_UpdatePanelStatusOnCrank_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.GetStatusPanelColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bCompleted                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APrototype_GeneratorObjective_BP_C::GetStatusPanelColor(bool bCompleted, struct FLinearColor* Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.GetStatusPanelColor");
		
		APrototype_GeneratorObjective_BP_C_GetStatusPanelColor_Params params {};
		params.bCompleted = bCompleted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Color != nullptr)
			*Color = params.Color;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.Construct_EditorClearanceComponent
	 * 		Flags  -> ()
	 */
	void APrototype_GeneratorObjective_BP_C::Construct_EditorClearanceComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.Construct_EditorClearanceComponent");
		
		APrototype_GeneratorObjective_BP_C_Construct_EditorClearanceComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.GetLinkedLights
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ARBLight_BP_C*>                       LinkedLights                                               (Parm, OutParm)
	 */
	void APrototype_GeneratorObjective_BP_C::GetLinkedLights(TArray<class ARBLight_BP_C*>* LinkedLights)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.GetLinkedLights");
		
		APrototype_GeneratorObjective_BP_C_GetLinkedLights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LinkedLights != nullptr)
			*LinkedLights = params.LinkedLights;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.GetLinkedWaypoints
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ARBWaypoint*>                         LinkedWaypoints                                            (Parm, OutParm)
	 */
	void APrototype_GeneratorObjective_BP_C::GetLinkedWaypoints(TArray<class ARBWaypoint*>* LinkedWaypoints)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.GetLinkedWaypoints");
		
		APrototype_GeneratorObjective_BP_C_GetLinkedWaypoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LinkedWaypoints != nullptr)
			*LinkedWaypoints = params.LinkedWaypoints;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.GetDiodeColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bActive                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APrototype_GeneratorObjective_BP_C::GetDiodeColor(bool bActive, struct FLinearColor* Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.GetDiodeColor");
		
		APrototype_GeneratorObjective_BP_C_GetDiodeColor_Params params {};
		params.bActive = bActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Color != nullptr)
			*Color = params.Color;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void APrototype_GeneratorObjective_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.UserConstructionScript");
		
		APrototype_GeneratorObjective_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.LeftMainSwitch__FinishedFunc
	 * 		Flags  -> ()
	 */
	void APrototype_GeneratorObjective_BP_C::LeftMainSwitch__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.LeftMainSwitch__FinishedFunc");
		
		APrototype_GeneratorObjective_BP_C_LeftMainSwitch__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.LeftMainSwitch__UpdateFunc
	 * 		Flags  -> ()
	 */
	void APrototype_GeneratorObjective_BP_C::LeftMainSwitch__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.LeftMainSwitch__UpdateFunc");
		
		APrototype_GeneratorObjective_BP_C_LeftMainSwitch__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.LeftMainSwitch__Activate Electricity__EventFunc
	 * 		Flags  -> ()
	 */
	void APrototype_GeneratorObjective_BP_C::LeftMainSwitch__ActivateElectricity__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.LeftMainSwitch__Activate Electricity__EventFunc");
		
		APrototype_GeneratorObjective_BP_C_LeftMainSwitch__ActivateElectricity__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.RightMainSwitch__FinishedFunc
	 * 		Flags  -> ()
	 */
	void APrototype_GeneratorObjective_BP_C::RightMainSwitch__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.RightMainSwitch__FinishedFunc");
		
		APrototype_GeneratorObjective_BP_C_RightMainSwitch__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.RightMainSwitch__UpdateFunc
	 * 		Flags  -> ()
	 */
	void APrototype_GeneratorObjective_BP_C::RightMainSwitch__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.RightMainSwitch__UpdateFunc");
		
		APrototype_GeneratorObjective_BP_C_RightMainSwitch__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.RightMainSwitch__Activate Electricity__EventFunc
	 * 		Flags  -> ()
	 */
	void APrototype_GeneratorObjective_BP_C::RightMainSwitch__ActivateElectricity__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.RightMainSwitch__Activate Electricity__EventFunc");
		
		APrototype_GeneratorObjective_BP_C_RightMainSwitch__ActivateElectricity__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.Timeline_1__FinishedFunc
	 * 		Flags  -> ()
	 */
	void APrototype_GeneratorObjective_BP_C::Timeline_1__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.Timeline_1__FinishedFunc");
		
		APrototype_GeneratorObjective_BP_C_Timeline_1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.Timeline_1__UpdateFunc
	 * 		Flags  -> ()
	 */
	void APrototype_GeneratorObjective_BP_C::Timeline_1__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.Timeline_1__UpdateFunc");
		
		APrototype_GeneratorObjective_BP_C_Timeline_1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.Timeline_1__NewTrack_2__EventFunc
	 * 		Flags  -> ()
	 */
	void APrototype_GeneratorObjective_BP_C::Timeline_1__NewTrack_2__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.Timeline_1__NewTrack_2__EventFunc");
		
		APrototype_GeneratorObjective_BP_C_Timeline_1__NewTrack_2__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void APrototype_GeneratorObjective_BP_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.Timeline_0__FinishedFunc");
		
		APrototype_GeneratorObjective_BP_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void APrototype_GeneratorObjective_BP_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.Timeline_0__UpdateFunc");
		
		APrototype_GeneratorObjective_BP_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.OnEditorPostLoad
	 * 		Flags  -> ()
	 */
	void APrototype_GeneratorObjective_BP_C::OnEditorPostLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.OnEditorPostLoad");
		
		APrototype_GeneratorObjective_BP_C_OnEditorPostLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.OnPostActorsPasted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              pastedActors                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void APrototype_GeneratorObjective_BP_C::OnPostActorsPasted(TArray<class AActor*> pastedActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.OnPostActorsPasted");
		
		APrototype_GeneratorObjective_BP_C_OnPostActorsPasted_Params params {};
		params.pastedActors = pastedActors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.PostAddedToLevel
	 * 		Flags  -> ()
	 */
	void APrototype_GeneratorObjective_BP_C::PostAddedToLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.PostAddedToLevel");
		
		APrototype_GeneratorObjective_BP_C_PostAddedToLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.PostDuplicated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      duplicationParent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APrototype_GeneratorObjective_BP_C::PostDuplicated(class AActor* duplicationParent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.PostDuplicated");
		
		APrototype_GeneratorObjective_BP_C_PostDuplicated_Params params {};
		params.duplicationParent = duplicationParent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.PostEditChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        PropertyName                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APrototype_GeneratorObjective_BP_C::PostEditChange(const class FName& PropertyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.PostEditChange");
		
		APrototype_GeneratorObjective_BP_C_PostEditChange_Params params {};
		params.PropertyName = PropertyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.PostEditMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFinished                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APrototype_GeneratorObjective_BP_C::PostEditMove(bool bFinished)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.PostEditMove");
		
		APrototype_GeneratorObjective_BP_C_PostEditMove_Params params {};
		params.bFinished = bFinished;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.TickSelected
	 * 		Flags  -> ()
	 */
	void APrototype_GeneratorObjective_BP_C::TickSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.TickSelected");
		
		APrototype_GeneratorObjective_BP_C_TickSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void APrototype_GeneratorObjective_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.Event_OnResetStage");
		
		APrototype_GeneratorObjective_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void APrototype_GeneratorObjective_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.ReceiveBeginPlay");
		
		APrototype_GeneratorObjective_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.RefreshLeftSwitchPanelState
	 * 		Flags  -> ()
	 */
	void APrototype_GeneratorObjective_BP_C::RefreshLeftSwitchPanelState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.RefreshLeftSwitchPanelState");
		
		APrototype_GeneratorObjective_BP_C_RefreshLeftSwitchPanelState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.RefreshRightSwitchPanelState
	 * 		Flags  -> ()
	 */
	void APrototype_GeneratorObjective_BP_C::RefreshRightSwitchPanelState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.RefreshRightSwitchPanelState");
		
		APrototype_GeneratorObjective_BP_C_RefreshRightSwitchPanelState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.BndEvt__Prototype_GeneratorObjective_BP_GasContainer_InteractionPanel_BP_K2Node_ComponentBoundEvent_2_OnPanelEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractiblePanelComponent*               panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     pawnInteracting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APrototype_GeneratorObjective_BP_C::BndEvt__Prototype_GeneratorObjective_BP_GasContainer_InteractionPanel_BP_K2Node_ComponentBoundEvent_2_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.BndEvt__Prototype_GeneratorObjective_BP_GasContainer_InteractionPanel_BP_K2Node_ComponentBoundEvent_2_OnPanelEvent__DelegateSignature");
		
		APrototype_GeneratorObjective_BP_C_BndEvt__Prototype_GeneratorObjective_BP_GasContainer_InteractionPanel_BP_K2Node_ComponentBoundEvent_2_OnPanelEvent__DelegateSignature_Params params {};
		params.panel = panel;
		params.pawnInteracting = pawnInteracting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.RefreshGasReservoirPanelState
	 * 		Flags  -> ()
	 */
	void APrototype_GeneratorObjective_BP_C::RefreshGasReservoirPanelState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.RefreshGasReservoirPanelState");
		
		APrototype_GeneratorObjective_BP_C_RefreshGasReservoirPanelState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.BndEvt__Prototype_GeneratorObjective_BP_Generator_ZoneTimingPanelComponent_BP_K2Node_ComponentBoundEvent_3_OnPanelEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractiblePanelComponent*               panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     pawnInteracting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APrototype_GeneratorObjective_BP_C::BndEvt__Prototype_GeneratorObjective_BP_Generator_ZoneTimingPanelComponent_BP_K2Node_ComponentBoundEvent_3_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.BndEvt__Prototype_GeneratorObjective_BP_Generator_ZoneTimingPanelComponent_BP_K2Node_ComponentBoundEvent_3_OnPanelEvent__DelegateSignature");
		
		APrototype_GeneratorObjective_BP_C_BndEvt__Prototype_GeneratorObjective_BP_Generator_ZoneTimingPanelComponent_BP_K2Node_ComponentBoundEvent_3_OnPanelEvent__DelegateSignature_Params params {};
		params.panel = panel;
		params.pawnInteracting = pawnInteracting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.RefreshCrankPanelState
	 * 		Flags  -> ()
	 */
	void APrototype_GeneratorObjective_BP_C::RefreshCrankPanelState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.RefreshCrankPanelState");
		
		APrototype_GeneratorObjective_BP_C_RefreshCrankPanelState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.BndEvt__Prototype_GeneratorObjective_BP_Generator_ZoneTimingPanelComponent_BP_K2Node_ComponentBoundEvent_4_OnTimingPanelInputEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBZoneTimingPanelComponent*                 panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPlayer*                                   Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            targetIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Timestamp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETimingInputResultType                             Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APrototype_GeneratorObjective_BP_C::BndEvt__Prototype_GeneratorObjective_BP_Generator_ZoneTimingPanelComponent_BP_K2Node_ComponentBoundEvent_4_OnTimingPanelInputEvent__DelegateSignature(class URBZoneTimingPanelComponent* panel, class ARBPlayer* Player, int32_t targetIndex, float Timestamp, ETimingInputResultType Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.BndEvt__Prototype_GeneratorObjective_BP_Generator_ZoneTimingPanelComponent_BP_K2Node_ComponentBoundEvent_4_OnTimingPanelInputEvent__DelegateSignature");
		
		APrototype_GeneratorObjective_BP_C_BndEvt__Prototype_GeneratorObjective_BP_Generator_ZoneTimingPanelComponent_BP_K2Node_ComponentBoundEvent_4_OnTimingPanelInputEvent__DelegateSignature_Params params {};
		params.panel = panel;
		params.Player = Player;
		params.targetIndex = targetIndex;
		params.Timestamp = Timestamp;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.Event_OnCompletionStateChanged
	 * 		Flags  -> ()
	 */
	void APrototype_GeneratorObjective_BP_C::Event_OnCompletionStateChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.Event_OnCompletionStateChanged");
		
		APrototype_GeneratorObjective_BP_C_Event_OnCompletionStateChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.BndEvt__Prototype_GeneratorObjective_BP_LeftSwitchesMatchPanel_K2Node_ComponentBoundEvent_5_OnPanelEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractiblePanelComponent*               panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     pawnInteracting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APrototype_GeneratorObjective_BP_C::BndEvt__Prototype_GeneratorObjective_BP_LeftSwitchesMatchPanel_K2Node_ComponentBoundEvent_5_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.BndEvt__Prototype_GeneratorObjective_BP_LeftSwitchesMatchPanel_K2Node_ComponentBoundEvent_5_OnPanelEvent__DelegateSignature");
		
		APrototype_GeneratorObjective_BP_C_BndEvt__Prototype_GeneratorObjective_BP_LeftSwitchesMatchPanel_K2Node_ComponentBoundEvent_5_OnPanelEvent__DelegateSignature_Params params {};
		params.panel = panel;
		params.pawnInteracting = pawnInteracting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.BndEvt__Prototype_GeneratorObjective_BP_RightSwitchesMatchPanel_K2Node_ComponentBoundEvent_6_OnPanelEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractiblePanelComponent*               panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     pawnInteracting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APrototype_GeneratorObjective_BP_C::BndEvt__Prototype_GeneratorObjective_BP_RightSwitchesMatchPanel_K2Node_ComponentBoundEvent_6_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.BndEvt__Prototype_GeneratorObjective_BP_RightSwitchesMatchPanel_K2Node_ComponentBoundEvent_6_OnPanelEvent__DelegateSignature");
		
		APrototype_GeneratorObjective_BP_C_BndEvt__Prototype_GeneratorObjective_BP_RightSwitchesMatchPanel_K2Node_ComponentBoundEvent_6_OnPanelEvent__DelegateSignature_Params params {};
		params.panel = panel;
		params.pawnInteracting = pawnInteracting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.Event_OnInteractibleStateChanged
	 * 		Flags  -> ()
	 */
	void APrototype_GeneratorObjective_BP_C::Event_OnInteractibleStateChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.Event_OnInteractibleStateChanged");
		
		APrototype_GeneratorObjective_BP_C_Event_OnInteractibleStateChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.PostToggled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bToggleEnabled                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APrototype_GeneratorObjective_BP_C::PostToggled(bool bToggleEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.PostToggled");
		
		APrototype_GeneratorObjective_BP_C_PostToggled_Params params {};
		params.bToggleEnabled = bToggleEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.BndEvt__Prototype_GeneratorObjective_BP_Generator_ZoneTimingPanelComponent_BP_K2Node_ComponentBoundEvent_0_OnEnabledChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractionZoneComponent*                 Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APrototype_GeneratorObjective_BP_C::BndEvt__Prototype_GeneratorObjective_BP_Generator_ZoneTimingPanelComponent_BP_K2Node_ComponentBoundEvent_0_OnEnabledChanged__DelegateSignature(class URBInteractionZoneComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.BndEvt__Prototype_GeneratorObjective_BP_Generator_ZoneTimingPanelComponent_BP_K2Node_ComponentBoundEvent_0_OnEnabledChanged__DelegateSignature");
		
		APrototype_GeneratorObjective_BP_C_BndEvt__Prototype_GeneratorObjective_BP_Generator_ZoneTimingPanelComponent_BP_K2Node_ComponentBoundEvent_0_OnEnabledChanged__DelegateSignature_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.RefreshGeneratorState
	 * 		Flags  -> ()
	 */
	void APrototype_GeneratorObjective_BP_C::RefreshGeneratorState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.RefreshGeneratorState");
		
		APrototype_GeneratorObjective_BP_C_RefreshGeneratorState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.ToggleActivationLights
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               LightState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APrototype_GeneratorObjective_BP_C::ToggleActivationLights(bool LightState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.ToggleActivationLights");
		
		APrototype_GeneratorObjective_BP_C_ToggleActivationLights_Params params {};
		params.LightState = LightState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.Cheat_ToggleGeneratorsState
	 * 		Flags  -> ()
	 */
	void APrototype_GeneratorObjective_BP_C::Cheat_ToggleGeneratorsState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.Cheat_ToggleGeneratorsState");
		
		APrototype_GeneratorObjective_BP_C_Cheat_ToggleGeneratorsState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APrototype_GeneratorObjective_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.ReceiveTick");
		
		APrototype_GeneratorObjective_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.CrankStatusLightFlashingStarted
	 * 		Flags  -> ()
	 */
	void APrototype_GeneratorObjective_BP_C::CrankStatusLightFlashingStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.CrankStatusLightFlashingStarted");
		
		APrototype_GeneratorObjective_BP_C_CrankStatusLightFlashingStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.CrankStatusLightFlashingStopped
	 * 		Flags  -> ()
	 */
	void APrototype_GeneratorObjective_BP_C::CrankStatusLightFlashingStopped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.CrankStatusLightFlashingStopped");
		
		APrototype_GeneratorObjective_BP_C_CrankStatusLightFlashingStopped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.Event_OnBreak
	 * 		Flags  -> ()
	 */
	void APrototype_GeneratorObjective_BP_C::Event_OnBreak()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.Event_OnBreak");
		
		APrototype_GeneratorObjective_BP_C_Event_OnBreak_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.BndEvt__Prototype_GeneratorObjective_BP_GasContainer_InteractionPanel_BP_K2Node_ComponentBoundEvent_1_UpdateGaugeNeedle__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              needleRatio                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APrototype_GeneratorObjective_BP_C::BndEvt__Prototype_GeneratorObjective_BP_GasContainer_InteractionPanel_BP_K2Node_ComponentBoundEvent_1_UpdateGaugeNeedle__DelegateSignature(float needleRatio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.BndEvt__Prototype_GeneratorObjective_BP_GasContainer_InteractionPanel_BP_K2Node_ComponentBoundEvent_1_UpdateGaugeNeedle__DelegateSignature");
		
		APrototype_GeneratorObjective_BP_C_BndEvt__Prototype_GeneratorObjective_BP_GasContainer_InteractionPanel_BP_K2Node_ComponentBoundEvent_1_UpdateGaugeNeedle__DelegateSignature_Params params {};
		params.needleRatio = needleRatio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.BndEvt__Prototype_GeneratorObjective_BP_GasContainer_InteractionPanel_BP_K2Node_ComponentBoundEvent_7_UpdateGasLight__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bLightOn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APrototype_GeneratorObjective_BP_C::BndEvt__Prototype_GeneratorObjective_BP_GasContainer_InteractionPanel_BP_K2Node_ComponentBoundEvent_7_UpdateGasLight__DelegateSignature(bool bLightOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.BndEvt__Prototype_GeneratorObjective_BP_GasContainer_InteractionPanel_BP_K2Node_ComponentBoundEvent_7_UpdateGasLight__DelegateSignature");
		
		APrototype_GeneratorObjective_BP_C_BndEvt__Prototype_GeneratorObjective_BP_GasContainer_InteractionPanel_BP_K2Node_ComponentBoundEvent_7_UpdateGasLight__DelegateSignature_Params params {};
		params.bLightOn = bLightOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.Overload
	 * 		Flags  -> ()
	 */
	void APrototype_GeneratorObjective_BP_C::Overload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.Overload");
		
		APrototype_GeneratorObjective_BP_C_Overload_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.lightCrank
	 * 		Flags  -> ()
	 */
	void APrototype_GeneratorObjective_BP_C::lightCrank()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.lightCrank");
		
		APrototype_GeneratorObjective_BP_C_lightCrank_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.lightFadeIn
	 * 		Flags  -> ()
	 */
	void APrototype_GeneratorObjective_BP_C::lightFadeIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.lightFadeIn");
		
		APrototype_GeneratorObjective_BP_C_lightFadeIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.Event_OnPreFueledStateChanged
	 * 		Flags  -> ()
	 */
	void APrototype_GeneratorObjective_BP_C::Event_OnPreFueledStateChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.Event_OnPreFueledStateChanged");
		
		APrototype_GeneratorObjective_BP_C_Event_OnPreFueledStateChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.BndEvt__Prototype_GeneratorObjective_BP_GasContainer_InteractionPanel_BP_K2Node_ComponentBoundEvent_8_OnPanelEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractiblePanelComponent*               panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     pawnInteracting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APrototype_GeneratorObjective_BP_C::BndEvt__Prototype_GeneratorObjective_BP_GasContainer_InteractionPanel_BP_K2Node_ComponentBoundEvent_8_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* panel, class ARBPawn* pawnInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.BndEvt__Prototype_GeneratorObjective_BP_GasContainer_InteractionPanel_BP_K2Node_ComponentBoundEvent_8_OnPanelEvent__DelegateSignature");
		
		APrototype_GeneratorObjective_BP_C_BndEvt__Prototype_GeneratorObjective_BP_GasContainer_InteractionPanel_BP_K2Node_ComponentBoundEvent_8_OnPanelEvent__DelegateSignature_Params params {};
		params.panel = panel;
		params.pawnInteracting = pawnInteracting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.ExecuteUbergraph_Prototype_GeneratorObjective_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APrototype_GeneratorObjective_BP_C::ExecuteUbergraph_Prototype_GeneratorObjective_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C.ExecuteUbergraph_Prototype_GeneratorObjective_BP");
		
		APrototype_GeneratorObjective_BP_C_ExecuteUbergraph_Prototype_GeneratorObjective_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APrototype_GeneratorObjective_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrototype_GeneratorObjective_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Prototype_GeneratorObjective_BP.Prototype_GeneratorObjective_BP_C");
		return ptr;
	}

}


