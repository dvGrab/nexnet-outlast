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
	 * 		Name   -> Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.OnRep_IsHandOut
	 * 		Flags  -> ()
	 */
	void AMansionTheatre_SE_BP_C::OnRep_IsHandOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.OnRep_IsHandOut");
		
		AMansionTheatre_SE_BP_C_OnRep_IsHandOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.IsInteractionPossible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     interactorPawn                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool AMansionTheatre_SE_BP_C::IsInteractionPossible(class ARBPawn* interactorPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.IsInteractionPossible");
		
		AMansionTheatre_SE_BP_C_IsInteractionPossible_Params params {};
		params.interactorPawn = interactorPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.GetInteractionPawnLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESpecialMove                                       specialMove                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     outDirection                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool AMansionTheatre_SE_BP_C::GetInteractionPawnLocation(class ARBPawn* Pawn, ESpecialMove specialMove, struct FVector* OutLocation, struct FVector* outDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.GetInteractionPawnLocation");
		
		AMansionTheatre_SE_BP_C_GetInteractionPawnLocation_Params params {};
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
	 * 		Name   -> Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AMansionTheatre_SE_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.UserConstructionScript");
		
		AMansionTheatre_SE_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.OnPawnPlaySpecialMoveAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESpecialMove                                       specialMove                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMansionTheatre_SE_BP_C::OnPawnPlaySpecialMoveAnimation(class ARBPawn* Pawn, ESpecialMove specialMove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.OnPawnPlaySpecialMoveAnimation");
		
		AMansionTheatre_SE_BP_C_OnPawnPlaySpecialMoveAnimation_Params params {};
		params.Pawn = Pawn;
		params.specialMove = specialMove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.appleme
	 * 		Flags  -> ()
	 */
	void AMansionTheatre_SE_BP_C::appleme()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.appleme");
		
		AMansionTheatre_SE_BP_C_appleme_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void AMansionTheatre_SE_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.Event_OnResetStage");
		
		AMansionTheatre_SE_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AMansionTheatre_SE_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.ReceiveBeginPlay");
		
		AMansionTheatre_SE_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.DelayedSetInteractible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInteractible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMansionTheatre_SE_BP_C::DelayedSetInteractible(bool bInteractible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.DelayedSetInteractible");
		
		AMansionTheatre_SE_BP_C_DelayedSetInteractible_Params params {};
		params.bInteractible = bInteractible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.UpdateLookAt
	 * 		Flags  -> ()
	 */
	void AMansionTheatre_SE_BP_C::UpdateLookAt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.UpdateLookAt");
		
		AMansionTheatre_SE_BP_C_UpdateLookAt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.HandOut
	 * 		Flags  -> ()
	 */
	void AMansionTheatre_SE_BP_C::HandOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.HandOut");
		
		AMansionTheatre_SE_BP_C_HandOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.BndEvt__HailingZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AMansionTheatre_SE_BP_C::BndEvt__HailingZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.BndEvt__HailingZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		AMansionTheatre_SE_BP_C_BndEvt__HailingZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.ExecuteUbergraph_MansionTheatre_SE_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMansionTheatre_SE_BP_C::ExecuteUbergraph_MansionTheatre_SE_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MansionTheatre_SE_BP.MansionTheatre_SE_BP_C.ExecuteUbergraph_MansionTheatre_SE_BP");
		
		AMansionTheatre_SE_BP_C_ExecuteUbergraph_MansionTheatre_SE_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMansionTheatre_SE_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMansionTheatre_SE_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MansionTheatre_SE_BP.MansionTheatre_SE_BP_C");
		return ptr;
	}

}


