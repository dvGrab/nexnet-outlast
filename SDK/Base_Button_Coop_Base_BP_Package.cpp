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
	 * 		Name   -> Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.GetStateName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      stateA                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      stateB                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	bool ABase_ButtonCoop_Base_BP_C::GetStateName(class FString* stateA, class FString* stateB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.GetStateName");
		
		ABase_ButtonCoop_Base_BP_C_GetStateName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (stateA != nullptr)
			*stateA = params.stateA;
		if (stateB != nullptr)
			*stateB = params.stateB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.IsStateA
	 * 		Flags  -> ()
	 */
	bool ABase_ButtonCoop_Base_BP_C::IsStateA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.IsStateA");
		
		ABase_ButtonCoop_Base_BP_C_IsStateA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.ShouldBeIgnoredForLots
	 * 		Flags  -> ()
	 */
	bool ABase_ButtonCoop_Base_BP_C::ShouldBeIgnoredForLots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.ShouldBeIgnoredForLots");
		
		ABase_ButtonCoop_Base_BP_C_ShouldBeIgnoredForLots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.FixUp
	 * 		Flags  -> ()
	 */
	bool ABase_ButtonCoop_Base_BP_C::FixUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.FixUp");
		
		ABase_ButtonCoop_Base_BP_C_FixUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.GetProgressionRatio
	 * 		Flags  -> ()
	 */
	float ABase_ButtonCoop_Base_BP_C::GetProgressionRatio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.GetProgressionRatio");
		
		ABase_ButtonCoop_Base_BP_C_GetProgressionRatio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.GetTriggerActionBehavior
	 * 		Flags  -> ()
	 */
	ETriggerableActionBehavior ABase_ButtonCoop_Base_BP_C::GetTriggerActionBehavior()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.GetTriggerActionBehavior");
		
		ABase_ButtonCoop_Base_BP_C_GetTriggerActionBehavior_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABase_ButtonCoop_Base_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.UserConstructionScript");
		
		ABase_ButtonCoop_Base_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.ButtonTimeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABase_ButtonCoop_Base_BP_C::ButtonTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.ButtonTimeline__FinishedFunc");
		
		ABase_ButtonCoop_Base_BP_C_ButtonTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.ButtonTimeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABase_ButtonCoop_Base_BP_C::ButtonTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.ButtonTimeline__UpdateFunc");
		
		ABase_ButtonCoop_Base_BP_C_ButtonTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.PrepareState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bStateA                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      randomOwner                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_ButtonCoop_Base_BP_C::PrepareState(bool bStateA, class AActor* randomOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.PrepareState");
		
		ABase_ButtonCoop_Base_BP_C_PrepareState_Params params {};
		params.bStateA = bStateA;
		params.randomOwner = randomOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.OnEditorPostLoad
	 * 		Flags  -> ()
	 */
	void ABase_ButtonCoop_Base_BP_C::OnEditorPostLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.OnEditorPostLoad");
		
		ABase_ButtonCoop_Base_BP_C_OnEditorPostLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.OnPostActorsPasted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              pastedActors                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABase_ButtonCoop_Base_BP_C::OnPostActorsPasted(TArray<class AActor*> pastedActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.OnPostActorsPasted");
		
		ABase_ButtonCoop_Base_BP_C_OnPostActorsPasted_Params params {};
		params.pastedActors = pastedActors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.PostAddedToLevel
	 * 		Flags  -> ()
	 */
	void ABase_ButtonCoop_Base_BP_C::PostAddedToLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.PostAddedToLevel");
		
		ABase_ButtonCoop_Base_BP_C_PostAddedToLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.PostDuplicated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      duplicationParent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_ButtonCoop_Base_BP_C::PostDuplicated(class AActor* duplicationParent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.PostDuplicated");
		
		ABase_ButtonCoop_Base_BP_C_PostDuplicated_Params params {};
		params.duplicationParent = duplicationParent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.PostEditChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        PropertyName                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_ButtonCoop_Base_BP_C::PostEditChange(const class FName& PropertyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.PostEditChange");
		
		ABase_ButtonCoop_Base_BP_C_PostEditChange_Params params {};
		params.PropertyName = PropertyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.PostEditMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFinished                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABase_ButtonCoop_Base_BP_C::PostEditMove(bool bFinished)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.PostEditMove");
		
		ABase_ButtonCoop_Base_BP_C_PostEditMove_Params params {};
		params.bFinished = bFinished;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.TickSelected
	 * 		Flags  -> ()
	 */
	void ABase_ButtonCoop_Base_BP_C::TickSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.TickSelected");
		
		ABase_ButtonCoop_Base_BP_C_TickSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.OnTriggerableActivated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBTriggerable*                              triggerable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_ButtonCoop_Base_BP_C::OnTriggerableActivated(class ARBTriggerable* triggerable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.OnTriggerableActivated");
		
		ABase_ButtonCoop_Base_BP_C_OnTriggerableActivated_Params params {};
		params.triggerable = triggerable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.OnTriggerableDeactivated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBTriggerable*                              triggerable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_ButtonCoop_Base_BP_C::OnTriggerableDeactivated(class ARBTriggerable* triggerable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.OnTriggerableDeactivated");
		
		ABase_ButtonCoop_Base_BP_C_OnTriggerableDeactivated_Params params {};
		params.triggerable = triggerable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.BndEvt__Base_Button-Coop_Base_BP_OperatableComponent_K2Node_ComponentBoundEvent_1_OnCoopOperatableEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBCoopOperatableComponent*                  Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_ButtonCoop_Base_BP_C::BndEvt__Base_ButtonCoop_Base_BP_OperatableComponent_K2Node_ComponentBoundEvent_1_OnCoopOperatableEvent__DelegateSignature(class URBCoopOperatableComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.BndEvt__Base_Button-Coop_Base_BP_OperatableComponent_K2Node_ComponentBoundEvent_1_OnCoopOperatableEvent__DelegateSignature");
		
		ABase_ButtonCoop_Base_BP_C_BndEvt__Base_ButtonCoop_Base_BP_OperatableComponent_K2Node_ComponentBoundEvent_1_OnCoopOperatableEvent__DelegateSignature_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.BndEvt__Base_Button-Coop_Base_BP_OperatableComponent_K2Node_ComponentBoundEvent_0_OnEnabledChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractionZoneComponent*                 Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_ButtonCoop_Base_BP_C::BndEvt__Base_ButtonCoop_Base_BP_OperatableComponent_K2Node_ComponentBoundEvent_0_OnEnabledChanged__DelegateSignature(class URBInteractionZoneComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.BndEvt__Base_Button-Coop_Base_BP_OperatableComponent_K2Node_ComponentBoundEvent_0_OnEnabledChanged__DelegateSignature");
		
		ABase_ButtonCoop_Base_BP_C_BndEvt__Base_ButtonCoop_Base_BP_OperatableComponent_K2Node_ComponentBoundEvent_0_OnEnabledChanged__DelegateSignature_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.ChangeButtonState
	 * 		Flags  -> ()
	 */
	void ABase_ButtonCoop_Base_BP_C::ChangeButtonState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.ChangeButtonState");
		
		ABase_ButtonCoop_Base_BP_C_ChangeButtonState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.SetState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bStateA                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABase_ButtonCoop_Base_BP_C::SetState(bool bStateA)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.SetState");
		
		ABase_ButtonCoop_Base_BP_C_SetState_Params params {};
		params.bStateA = bStateA;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.SetShouldBeIgnoredForLots
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABase_ButtonCoop_Base_BP_C::SetShouldBeIgnoredForLots(bool bValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.SetShouldBeIgnoredForLots");
		
		ABase_ButtonCoop_Base_BP_C_SetShouldBeIgnoredForLots_Params params {};
		params.bValue = bValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.ExecuteUbergraph_Base_Button-Coop_Base_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_ButtonCoop_Base_BP_C::ExecuteUbergraph_Base_ButtonCoop_Base_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Button-Coop_Base_BP.Base_Button-Coop_Base_BP_C.ExecuteUbergraph_Base_Button-Coop_Base_BP");
		
		ABase_ButtonCoop_Base_BP_C_ExecuteUbergraph_Base_ButtonCoop_Base_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABase_ButtonCoop_Base_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABase_ButtonCoop_Base_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Base_Button_Coop_Base_BP.Base_Button-Coop_Base_BP_C");
		return ptr;
	}

}


