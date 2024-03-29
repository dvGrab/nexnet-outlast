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
	 * 		Name   -> Function PoliceStation_T02_B05.PoliceStation_T02_B05_C.BndEvt__PoliceStation_T02_B05_PS_T02_B05_ObjCoord_QuestItem_GateKeys_K2Node_ActorBoundEvent_2_OnObjectiveCoordinatorCompleted__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsJIP                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APoliceStation_T02_B05_C::BndEvt__PoliceStation_T02_B05_PS_T02_B05_ObjCoord_QuestItem_GateKeys_K2Node_ActorBoundEvent_2_OnObjectiveCoordinatorCompleted__DelegateSignature(bool bIsJIP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B05.PoliceStation_T02_B05_C.BndEvt__PoliceStation_T02_B05_PS_T02_B05_ObjCoord_QuestItem_GateKeys_K2Node_ActorBoundEvent_2_OnObjectiveCoordinatorCompleted__DelegateSignature");
		
		APoliceStation_T02_B05_C_BndEvt__PoliceStation_T02_B05_PS_T02_B05_ObjCoord_QuestItem_GateKeys_K2Node_ActorBoundEvent_2_OnObjectiveCoordinatorCompleted__DelegateSignature_Params params {};
		params.bIsJIP = bIsJIP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B05.PoliceStation_T02_B05_C.OnLastGateOpened
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ARBTriggerable*                              triggerable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APoliceStation_T02_B05_C::OnLastGateOpened(bool IsOn, class ARBTriggerable* triggerable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B05.PoliceStation_T02_B05_C.OnLastGateOpened");
		
		APoliceStation_T02_B05_C_OnLastGateOpened_Params params {};
		params.IsOn = IsOn;
		params.triggerable = triggerable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B05.PoliceStation_T02_B05_C.BndEvt__PoliceStation_T02_B05_PS_T02_B05_ObjCoord_QuestItem_FirstGateKeys_K2Node_ActorBoundEvent_3_OnObjectiveCoordinatorStarted__DelegateSignature
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_B05_C::BndEvt__PoliceStation_T02_B05_PS_T02_B05_ObjCoord_QuestItem_FirstGateKeys_K2Node_ActorBoundEvent_3_OnObjectiveCoordinatorStarted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B05.PoliceStation_T02_B05_C.BndEvt__PoliceStation_T02_B05_PS_T02_B05_ObjCoord_QuestItem_FirstGateKeys_K2Node_ActorBoundEvent_3_OnObjectiveCoordinatorStarted__DelegateSignature");
		
		APoliceStation_T02_B05_C_BndEvt__PoliceStation_T02_B05_PS_T02_B05_ObjCoord_QuestItem_FirstGateKeys_K2Node_ActorBoundEvent_3_OnObjectiveCoordinatorStarted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B05.PoliceStation_T02_B05_C.BndEvt__PoliceStation_T02_B05_PS_T02_B05_ObjCoord_QuestItem_AllGateKeys_K2Node_ActorBoundEvent_4_OnObjectiveCoordinatorStarted__DelegateSignature
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_B05_C::BndEvt__PoliceStation_T02_B05_PS_T02_B05_ObjCoord_QuestItem_AllGateKeys_K2Node_ActorBoundEvent_4_OnObjectiveCoordinatorStarted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B05.PoliceStation_T02_B05_C.BndEvt__PoliceStation_T02_B05_PS_T02_B05_ObjCoord_QuestItem_AllGateKeys_K2Node_ActorBoundEvent_4_OnObjectiveCoordinatorStarted__DelegateSignature");
		
		APoliceStation_T02_B05_C_BndEvt__PoliceStation_T02_B05_PS_T02_B05_ObjCoord_QuestItem_AllGateKeys_K2Node_ActorBoundEvent_4_OnObjectiveCoordinatorStarted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B05.PoliceStation_T02_B05_C.Cheat_OpenLockedGates
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_B05_C::Cheat_OpenLockedGates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B05.PoliceStation_T02_B05_C.Cheat_OpenLockedGates");
		
		APoliceStation_T02_B05_C_Cheat_OpenLockedGates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B05.PoliceStation_T02_B05_C.OnSecondGateOpened
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ARBTriggerable*                              triggerable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APoliceStation_T02_B05_C::OnSecondGateOpened(bool IsOn, class ARBTriggerable* triggerable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B05.PoliceStation_T02_B05_C.OnSecondGateOpened");
		
		APoliceStation_T02_B05_C_OnSecondGateOpened_Params params {};
		params.IsOn = IsOn;
		params.triggerable = triggerable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B05.PoliceStation_T02_B05_C.B05_FirstGateInvestigationDone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBPlayerInvestigationZoneComponent*         Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APoliceStation_T02_B05_C::B05_FirstGateInvestigationDone(class URBPlayerInvestigationZoneComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B05.PoliceStation_T02_B05_C.B05_FirstGateInvestigationDone");
		
		APoliceStation_T02_B05_C_B05_FirstGateInvestigationDone_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B05.PoliceStation_T02_B05_C.B05_ActivateFirstGateTrigger
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_B05_C::B05_ActivateFirstGateTrigger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B05.PoliceStation_T02_B05_C.B05_ActivateFirstGateTrigger");
		
		APoliceStation_T02_B05_C_B05_ActivateFirstGateTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B05.PoliceStation_T02_B05_C.OnThirdGateOpened
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ARBTriggerable*                              triggerable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APoliceStation_T02_B05_C::OnThirdGateOpened(bool IsOn, class ARBTriggerable* triggerable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B05.PoliceStation_T02_B05_C.OnThirdGateOpened");
		
		APoliceStation_T02_B05_C_OnThirdGateOpened_Params params {};
		params.IsOn = IsOn;
		params.triggerable = triggerable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B05.PoliceStation_T02_B05_C.ExecuteUbergraph_PoliceStation_T02_B05
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APoliceStation_T02_B05_C::ExecuteUbergraph_PoliceStation_T02_B05(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B05.PoliceStation_T02_B05_C.ExecuteUbergraph_PoliceStation_T02_B05");
		
		APoliceStation_T02_B05_C_ExecuteUbergraph_PoliceStation_T02_B05_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APoliceStation_T02_B05_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APoliceStation_T02_B05_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PoliceStation_T02_B05.PoliceStation_T02_B05_C");
		return ptr;
	}

}


