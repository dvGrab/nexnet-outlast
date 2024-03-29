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
	 * 		Name   -> Function Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C.IsInteractionPossible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     interactorPawn                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABase_HeadEvidence_LargePickup_BP_C::IsInteractionPossible(class ARBPawn* interactorPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C.IsInteractionPossible");
		
		ABase_HeadEvidence_LargePickup_BP_C_IsInteractionPossible_Params params {};
		params.interactorPawn = interactorPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C.SetLockingTriggerable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBTriggerable*                              triggerable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_HeadEvidence_LargePickup_BP_C::SetLockingTriggerable(class ARBTriggerable* triggerable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C.SetLockingTriggerable");
		
		ABase_HeadEvidence_LargePickup_BP_C_SetLockingTriggerable_Params params {};
		params.triggerable = triggerable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C.OnRep_bDissolved
	 * 		Flags  -> ()
	 */
	void ABase_HeadEvidence_LargePickup_BP_C::OnRep_bDissolved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C.OnRep_bDissolved");
		
		ABase_HeadEvidence_LargePickup_BP_C_OnRep_bDissolved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C.SetWaterLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_HeadEvidence_LargePickup_BP_C::SetWaterLevel(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C.SetWaterLevel");
		
		ABase_HeadEvidence_LargePickup_BP_C_SetWaterLevel_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C.Set Dissolve
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_HeadEvidence_LargePickup_BP_C::Set_Dissolve(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C.Set Dissolve");
		
		ABase_HeadEvidence_LargePickup_BP_C_Set_Dissolve_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C.GetAllActiveHeads
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ABase_HeadEvidence_LargePickup_BP_C*> OutActors                                                  (Parm, OutParm)
	 */
	void ABase_HeadEvidence_LargePickup_BP_C::GetAllActiveHeads(TArray<class ABase_HeadEvidence_LargePickup_BP_C*>* OutActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C.GetAllActiveHeads");
		
		ABase_HeadEvidence_LargePickup_BP_C_GetAllActiveHeads_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutActors != nullptr)
			*OutActors = params.OutActors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C.DressUp (Server)
	 * 		Flags  -> ()
	 */
	void ABase_HeadEvidence_LargePickup_BP_C::DressUp_Server()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C.DressUp (Server)");
		
		ABase_HeadEvidence_LargePickup_BP_C_DressUp_Server_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C.OnRep_MeshIndex
	 * 		Flags  -> ()
	 */
	void ABase_HeadEvidence_LargePickup_BP_C::OnRep_MeshIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C.OnRep_MeshIndex");
		
		ABase_HeadEvidence_LargePickup_BP_C_OnRep_MeshIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C.DissolveTL__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABase_HeadEvidence_LargePickup_BP_C::DissolveTL__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C.DissolveTL__FinishedFunc");
		
		ABase_HeadEvidence_LargePickup_BP_C_DissolveTL__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C.DissolveTL__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABase_HeadEvidence_LargePickup_BP_C::DissolveTL__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C.DissolveTL__UpdateFunc");
		
		ABase_HeadEvidence_LargePickup_BP_C_DissolveTL__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void ABase_HeadEvidence_LargePickup_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C.Event_OnResetStage");
		
		ABase_HeadEvidence_LargePickup_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C.OnWorldPopulateFinished
	 * 		Flags  -> ()
	 */
	void ABase_HeadEvidence_LargePickup_BP_C::OnWorldPopulateFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C.OnWorldPopulateFinished");
		
		ABase_HeadEvidence_LargePickup_BP_C_OnWorldPopulateFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C.Dissolve
	 * 		Flags  -> ()
	 */
	void ABase_HeadEvidence_LargePickup_BP_C::Dissolve()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C.Dissolve");
		
		ABase_HeadEvidence_LargePickup_BP_C_Dissolve_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABase_HeadEvidence_LargePickup_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C.ReceiveBeginPlay");
		
		ABase_HeadEvidence_LargePickup_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C.OnDissolve
	 * 		Flags  -> ()
	 */
	void ABase_HeadEvidence_LargePickup_BP_C::OnDissolve()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C.OnDissolve");
		
		ABase_HeadEvidence_LargePickup_BP_C_OnDissolve_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C.ExecuteUbergraph_Base_HeadEvidence_LargePickup_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_HeadEvidence_LargePickup_BP_C::ExecuteUbergraph_Base_HeadEvidence_LargePickup_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C.ExecuteUbergraph_Base_HeadEvidence_LargePickup_BP");
		
		ABase_HeadEvidence_LargePickup_BP_C_ExecuteUbergraph_Base_HeadEvidence_LargePickup_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABase_HeadEvidence_LargePickup_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABase_HeadEvidence_LargePickup_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Base_HeadEvidence_LargePickup_BP.Base_HeadEvidence_LargePickup_BP_C");
		return ptr;
	}

}


