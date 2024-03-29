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
	 * 		Name   -> Function PoliceStation_T02_B06.PoliceStation_T02_B06_C.BndEvt__PoliceStation_T02_B06_PoliceStation_Trial2_ElectrocutionCoord_BP_2_K2Node_ActorBoundEvent_0_OnObjectiveCoordinatorStarted__DelegateSignature
	 * 		Flags  -> ()
	 */
	void APoliceStation_T02_B06_C::BndEvt__PoliceStation_T02_B06_PoliceStation_Trial2_ElectrocutionCoord_BP_2_K2Node_ActorBoundEvent_0_OnObjectiveCoordinatorStarted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B06.PoliceStation_T02_B06_C.BndEvt__PoliceStation_T02_B06_PoliceStation_Trial2_ElectrocutionCoord_BP_2_K2Node_ActorBoundEvent_0_OnObjectiveCoordinatorStarted__DelegateSignature");
		
		APoliceStation_T02_B06_C_BndEvt__PoliceStation_T02_B06_PoliceStation_Trial2_ElectrocutionCoord_BP_2_K2Node_ActorBoundEvent_0_OnObjectiveCoordinatorStarted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B06.PoliceStation_T02_B06_C.BndEvt__PoliceStation_T02_B06_PS_T02_B06_ElectrocutionCoord_BP_K2Node_ActorBoundEvent_1_OnObjectiveCoordinatorCompleted__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsJIP                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APoliceStation_T02_B06_C::BndEvt__PoliceStation_T02_B06_PS_T02_B06_ElectrocutionCoord_BP_K2Node_ActorBoundEvent_1_OnObjectiveCoordinatorCompleted__DelegateSignature(bool bIsJIP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B06.PoliceStation_T02_B06_C.BndEvt__PoliceStation_T02_B06_PS_T02_B06_ElectrocutionCoord_BP_K2Node_ActorBoundEvent_1_OnObjectiveCoordinatorCompleted__DelegateSignature");
		
		APoliceStation_T02_B06_C_BndEvt__PoliceStation_T02_B06_PS_T02_B06_ElectrocutionCoord_BP_K2Node_ActorBoundEvent_1_OnObjectiveCoordinatorCompleted__DelegateSignature_Params params {};
		params.bIsJIP = bIsJIP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B06.PoliceStation_T02_B06_C.PST02B06_ManageExecution_TV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TVState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APoliceStation_T02_B06_C::PST02B06_ManageExecution_TV(bool TVState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B06.PoliceStation_T02_B06_C.PST02B06_ManageExecution_TV");
		
		APoliceStation_T02_B06_C_PST02B06_ManageExecution_TV_Params params {};
		params.TVState = TVState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PoliceStation_T02_B06.PoliceStation_T02_B06_C.ExecuteUbergraph_PoliceStation_T02_B06
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APoliceStation_T02_B06_C::ExecuteUbergraph_PoliceStation_T02_B06(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PoliceStation_T02_B06.PoliceStation_T02_B06_C.ExecuteUbergraph_PoliceStation_T02_B06");
		
		APoliceStation_T02_B06_C_ExecuteUbergraph_PoliceStation_T02_B06_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APoliceStation_T02_B06_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APoliceStation_T02_B06_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PoliceStation_T02_B06.PoliceStation_T02_B06_C");
		return ptr;
	}

}


