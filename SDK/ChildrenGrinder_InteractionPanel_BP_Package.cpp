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
	 * 		Name   -> Function ChildrenGrinder_InteractionPanel_BP.ChildrenGrinder_InteractionPanel_BP_C.IsInteractionPossible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     interactorPawn                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UChildrenGrinder_InteractionPanel_BP_C::IsInteractionPossible(class ARBPawn* interactorPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChildrenGrinder_InteractionPanel_BP.ChildrenGrinder_InteractionPanel_BP_C.IsInteractionPossible");
		
		UChildrenGrinder_InteractionPanel_BP_C_IsInteractionPossible_Params params {};
		params.interactorPawn = interactorPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChildrenGrinder_InteractionPanel_BP.ChildrenGrinder_InteractionPanel_BP_C.GetLargeObjectRef
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBLargePickup*                              pickup                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class USceneComponent* UChildrenGrinder_InteractionPanel_BP_C::GetLargeObjectRef(class ARBLargePickup* pickup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChildrenGrinder_InteractionPanel_BP.ChildrenGrinder_InteractionPanel_BP_C.GetLargeObjectRef");
		
		UChildrenGrinder_InteractionPanel_BP_C_GetLargeObjectRef_Params params {};
		params.pickup = pickup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChildrenGrinder_InteractionPanel_BP.ChildrenGrinder_InteractionPanel_BP_C.GetSpecialMoveAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsFirstPerson                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class UAnimSequence* UChildrenGrinder_InteractionPanel_BP_C::GetSpecialMoveAnimation(class ARBPawn* Pawn, bool bIsFirstPerson)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChildrenGrinder_InteractionPanel_BP.ChildrenGrinder_InteractionPanel_BP_C.GetSpecialMoveAnimation");
		
		UChildrenGrinder_InteractionPanel_BP_C_GetSpecialMoveAnimation_Params params {};
		params.Pawn = Pawn;
		params.bIsFirstPerson = bIsFirstPerson;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChildrenGrinder_InteractionPanel_BP.ChildrenGrinder_InteractionPanel_BP_C.GetInteractionPawnLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESpecialMove                                       specialMove                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     outDirection                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UChildrenGrinder_InteractionPanel_BP_C::GetInteractionPawnLocation(class ARBPawn* Pawn, ESpecialMove specialMove, struct FVector* OutLocation, struct FVector* outDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChildrenGrinder_InteractionPanel_BP.ChildrenGrinder_InteractionPanel_BP_C.GetInteractionPawnLocation");
		
		UChildrenGrinder_InteractionPanel_BP_C_GetInteractionPawnLocation_Params params {};
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
	 * 		Name   -> Function ChildrenGrinder_InteractionPanel_BP.ChildrenGrinder_InteractionPanel_BP_C.Event_OnLargeObjectDoAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBLargePickup*                              largeObject                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPawn*                                     interactor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChildrenGrinder_InteractionPanel_BP_C::Event_OnLargeObjectDoAction(class ARBLargePickup* largeObject, class ARBPawn* interactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChildrenGrinder_InteractionPanel_BP.ChildrenGrinder_InteractionPanel_BP_C.Event_OnLargeObjectDoAction");
		
		UChildrenGrinder_InteractionPanel_BP_C_Event_OnLargeObjectDoAction_Params params {};
		params.largeObject = largeObject;
		params.interactor = interactor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChildrenGrinder_InteractionPanel_BP.ChildrenGrinder_InteractionPanel_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void UChildrenGrinder_InteractionPanel_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChildrenGrinder_InteractionPanel_BP.ChildrenGrinder_InteractionPanel_BP_C.Event_OnResetStage");
		
		UChildrenGrinder_InteractionPanel_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChildrenGrinder_InteractionPanel_BP.ChildrenGrinder_InteractionPanel_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UChildrenGrinder_InteractionPanel_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChildrenGrinder_InteractionPanel_BP.ChildrenGrinder_InteractionPanel_BP_C.ReceiveBeginPlay");
		
		UChildrenGrinder_InteractionPanel_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChildrenGrinder_InteractionPanel_BP.ChildrenGrinder_InteractionPanel_BP_C.Event_OnTossIntoFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBLargePickup*                              largeObject                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChildrenGrinder_InteractionPanel_BP_C::Event_OnTossIntoFinished(class ARBLargePickup* largeObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChildrenGrinder_InteractionPanel_BP.ChildrenGrinder_InteractionPanel_BP_C.Event_OnTossIntoFinished");
		
		UChildrenGrinder_InteractionPanel_BP_C_Event_OnTossIntoFinished_Params params {};
		params.largeObject = largeObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChildrenGrinder_InteractionPanel_BP.ChildrenGrinder_InteractionPanel_BP_C.ExecuteUbergraph_ChildrenGrinder_InteractionPanel_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChildrenGrinder_InteractionPanel_BP_C::ExecuteUbergraph_ChildrenGrinder_InteractionPanel_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChildrenGrinder_InteractionPanel_BP.ChildrenGrinder_InteractionPanel_BP_C.ExecuteUbergraph_ChildrenGrinder_InteractionPanel_BP");
		
		UChildrenGrinder_InteractionPanel_BP_C_ExecuteUbergraph_ChildrenGrinder_InteractionPanel_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChildrenGrinder_InteractionPanel_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChildrenGrinder_InteractionPanel_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ChildrenGrinder_InteractionPanel_BP.ChildrenGrinder_InteractionPanel_BP_C");
		return ptr;
	}

}


