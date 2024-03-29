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
	 * 		Name   -> Function Cont-Health-Medkit_BP.Cont-Health-Medkit_BP_C.GetLookAtLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     outLookAtLocation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACont_Health_Medkit_BP_C::GetLookAtLocation(struct FVector* outLookAtLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cont-Health-Medkit_BP.Cont-Health-Medkit_BP_C.GetLookAtLocation");
		
		ACont_Health_Medkit_BP_C_GetLookAtLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outLookAtLocation != nullptr)
			*outLookAtLocation = params.outLookAtLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Cont-Health-Medkit_BP.Cont-Health-Medkit_BP_C.GetInteractionPawnLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESpecialMove                                       specialMove                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     outDirection                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ACont_Health_Medkit_BP_C::GetInteractionPawnLocation(class ARBPawn* Pawn, ESpecialMove specialMove, struct FVector* OutLocation, struct FVector* outDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cont-Health-Medkit_BP.Cont-Health-Medkit_BP_C.GetInteractionPawnLocation");
		
		ACont_Health_Medkit_BP_C_GetInteractionPawnLocation_Params params {};
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
	 * 		Name   -> Function Cont-Health-Medkit_BP.Cont-Health-Medkit_BP_C.PlaySpecialMoveAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     interactorPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESpecialMove                                       specialMove                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ACont_Health_Medkit_BP_C::PlaySpecialMoveAnimation(class ARBPawn* interactorPawn, ESpecialMove specialMove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cont-Health-Medkit_BP.Cont-Health-Medkit_BP_C.PlaySpecialMoveAnimation");
		
		ACont_Health_Medkit_BP_C_PlaySpecialMoveAnimation_Params params {};
		params.interactorPawn = interactorPawn;
		params.specialMove = specialMove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Cont-Health-Medkit_BP.Cont-Health-Medkit_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ACont_Health_Medkit_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cont-Health-Medkit_BP.Cont-Health-Medkit_BP_C.UserConstructionScript");
		
		ACont_Health_Medkit_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Cont-Health-Medkit_BP.Cont-Health-Medkit_BP_C.Event_SnapToState
	 * 		Flags  -> ()
	 */
	void ACont_Health_Medkit_BP_C::Event_SnapToState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cont-Health-Medkit_BP.Cont-Health-Medkit_BP_C.Event_SnapToState");
		
		ACont_Health_Medkit_BP_C_Event_SnapToState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Cont-Health-Medkit_BP.Cont-Health-Medkit_BP_C.Event_OnIsOpenedChanged
	 * 		Flags  -> ()
	 */
	void ACont_Health_Medkit_BP_C::Event_OnIsOpenedChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cont-Health-Medkit_BP.Cont-Health-Medkit_BP_C.Event_OnIsOpenedChanged");
		
		ACont_Health_Medkit_BP_C_Event_OnIsOpenedChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Cont-Health-Medkit_BP.Cont-Health-Medkit_BP_C.OnPawnPlaySpecialMoveAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESpecialMove                                       specialMove                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACont_Health_Medkit_BP_C::OnPawnPlaySpecialMoveAnimation(class ARBPawn* Pawn, ESpecialMove specialMove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cont-Health-Medkit_BP.Cont-Health-Medkit_BP_C.OnPawnPlaySpecialMoveAnimation");
		
		ACont_Health_Medkit_BP_C_OnPawnPlaySpecialMoveAnimation_Params params {};
		params.Pawn = Pawn;
		params.specialMove = specialMove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Cont-Health-Medkit_BP.Cont-Health-Medkit_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void ACont_Health_Medkit_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cont-Health-Medkit_BP.Cont-Health-Medkit_BP_C.Event_OnResetStage");
		
		ACont_Health_Medkit_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Cont-Health-Medkit_BP.Cont-Health-Medkit_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ACont_Health_Medkit_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cont-Health-Medkit_BP.Cont-Health-Medkit_BP_C.ReceiveBeginPlay");
		
		ACont_Health_Medkit_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Cont-Health-Medkit_BP.Cont-Health-Medkit_BP_C.ExecuteUbergraph_Cont-Health-Medkit_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACont_Health_Medkit_BP_C::ExecuteUbergraph_Cont_Health_Medkit_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cont-Health-Medkit_BP.Cont-Health-Medkit_BP_C.ExecuteUbergraph_Cont-Health-Medkit_BP");
		
		ACont_Health_Medkit_BP_C_ExecuteUbergraph_Cont_Health_Medkit_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACont_Health_Medkit_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACont_Health_Medkit_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Cont_Health_Medkit_BP.Cont-Health-Medkit_BP_C");
		return ptr;
	}

}


