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
	 * 		Name   -> Function CoopButton_OperatableComponent_BP.CoopButton_OperatableComponent_BP_C.GetProgressionRatio
	 * 		Flags  -> ()
	 */
	float UCoopButton_OperatableComponent_BP_C::GetProgressionRatio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoopButton_OperatableComponent_BP.CoopButton_OperatableComponent_BP_C.GetProgressionRatio");
		
		UCoopButton_OperatableComponent_BP_C_GetProgressionRatio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoopButton_OperatableComponent_BP.CoopButton_OperatableComponent_BP_C.OnRep_OperatedActive
	 * 		Flags  -> ()
	 */
	void UCoopButton_OperatableComponent_BP_C::OnRep_OperatedActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoopButton_OperatableComponent_BP.CoopButton_OperatableComponent_BP_C.OnRep_OperatedActive");
		
		UCoopButton_OperatableComponent_BP_C_OnRep_OperatedActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoopButton_OperatableComponent_BP.CoopButton_OperatableComponent_BP_C.GetOperatorStopAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFirstPerson                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class UAnimSequence* UCoopButton_OperatableComponent_BP_C::GetOperatorStopAnimation(class ARBPawn* Pawn, bool bFirstPerson)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoopButton_OperatableComponent_BP.CoopButton_OperatableComponent_BP_C.GetOperatorStopAnimation");
		
		UCoopButton_OperatableComponent_BP_C_GetOperatorStopAnimation_Params params {};
		params.Pawn = Pawn;
		params.bFirstPerson = bFirstPerson;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoopButton_OperatableComponent_BP.CoopButton_OperatableComponent_BP_C.GetOperatorLoopAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFirstPerson                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class UAnimSequence* UCoopButton_OperatableComponent_BP_C::GetOperatorLoopAnimation(class ARBPawn* Pawn, bool bFirstPerson)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoopButton_OperatableComponent_BP.CoopButton_OperatableComponent_BP_C.GetOperatorLoopAnimation");
		
		UCoopButton_OperatableComponent_BP_C_GetOperatorLoopAnimation_Params params {};
		params.Pawn = Pawn;
		params.bFirstPerson = bFirstPerson;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoopButton_OperatableComponent_BP.CoopButton_OperatableComponent_BP_C.GetOperatorStartAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFirstPerson                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class UAnimSequence* UCoopButton_OperatableComponent_BP_C::GetOperatorStartAnimation(class ARBPawn* Pawn, bool bFirstPerson)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoopButton_OperatableComponent_BP.CoopButton_OperatableComponent_BP_C.GetOperatorStartAnimation");
		
		UCoopButton_OperatableComponent_BP_C_GetOperatorStartAnimation_Params params {};
		params.Pawn = Pawn;
		params.bFirstPerson = bFirstPerson;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoopButton_OperatableComponent_BP.CoopButton_OperatableComponent_BP_C.OnTriggerableActivated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBTriggerable*                              triggerable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCoopButton_OperatableComponent_BP_C::OnTriggerableActivated(class ARBTriggerable* triggerable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoopButton_OperatableComponent_BP.CoopButton_OperatableComponent_BP_C.OnTriggerableActivated");
		
		UCoopButton_OperatableComponent_BP_C_OnTriggerableActivated_Params params {};
		params.triggerable = triggerable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoopButton_OperatableComponent_BP.CoopButton_OperatableComponent_BP_C.OnPawnDoSpecialMoveAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESpecialMove                                       specialMove                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCoopButton_OperatableComponent_BP_C::OnPawnDoSpecialMoveAction(class ARBPawn* Pawn, ESpecialMove specialMove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoopButton_OperatableComponent_BP.CoopButton_OperatableComponent_BP_C.OnPawnDoSpecialMoveAction");
		
		UCoopButton_OperatableComponent_BP_C_OnPawnDoSpecialMoveAction_Params params {};
		params.Pawn = Pawn;
		params.specialMove = specialMove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoopButton_OperatableComponent_BP.CoopButton_OperatableComponent_BP_C.Event_OnEnabledChanged
	 * 		Flags  -> ()
	 */
	void UCoopButton_OperatableComponent_BP_C::Event_OnEnabledChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoopButton_OperatableComponent_BP.CoopButton_OperatableComponent_BP_C.Event_OnEnabledChanged");
		
		UCoopButton_OperatableComponent_BP_C_Event_OnEnabledChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoopButton_OperatableComponent_BP.CoopButton_OperatableComponent_BP_C.Event_DelayedReleaseButtonServerTimestampChanged
	 * 		Flags  -> ()
	 */
	void UCoopButton_OperatableComponent_BP_C::Event_DelayedReleaseButtonServerTimestampChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoopButton_OperatableComponent_BP.CoopButton_OperatableComponent_BP_C.Event_DelayedReleaseButtonServerTimestampChanged");
		
		UCoopButton_OperatableComponent_BP_C_Event_DelayedReleaseButtonServerTimestampChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoopButton_OperatableComponent_BP.CoopButton_OperatableComponent_BP_C.ExecuteUbergraph_CoopButton_OperatableComponent_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCoopButton_OperatableComponent_BP_C::ExecuteUbergraph_CoopButton_OperatableComponent_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoopButton_OperatableComponent_BP.CoopButton_OperatableComponent_BP_C.ExecuteUbergraph_CoopButton_OperatableComponent_BP");
		
		UCoopButton_OperatableComponent_BP_C_ExecuteUbergraph_CoopButton_OperatableComponent_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoopButton_OperatableComponent_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoopButton_OperatableComponent_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CoopButton_OperatableComponent_BP.CoopButton_OperatableComponent_BP_C");
		return ptr;
	}

}


