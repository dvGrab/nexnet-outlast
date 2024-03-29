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
	 * 		Name   -> Function Base_PropagandaPoster_InteractionComponent_BP.Base_PropagandaPoster_InteractionComponent_BP_C.GetInteractionPawnLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESpecialMove                                       specialMove                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     outDirection                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBase_PropagandaPoster_InteractionComponent_BP_C::GetInteractionPawnLocation(class ARBPawn* Pawn, ESpecialMove specialMove, struct FVector* OutLocation, struct FVector* outDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_PropagandaPoster_InteractionComponent_BP.Base_PropagandaPoster_InteractionComponent_BP_C.GetInteractionPawnLocation");
		
		UBase_PropagandaPoster_InteractionComponent_BP_C_GetInteractionPawnLocation_Params params {};
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
	 * 		Name   -> Function Base_PropagandaPoster_InteractionComponent_BP.Base_PropagandaPoster_InteractionComponent_BP_C.SnapToState
	 * 		Flags  -> ()
	 */
	void UBase_PropagandaPoster_InteractionComponent_BP_C::SnapToState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_PropagandaPoster_InteractionComponent_BP.Base_PropagandaPoster_InteractionComponent_BP_C.SnapToState");
		
		UBase_PropagandaPoster_InteractionComponent_BP_C_SnapToState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_PropagandaPoster_InteractionComponent_BP.Base_PropagandaPoster_InteractionComponent_BP_C.ExecuteUbergraph_Base_PropagandaPoster_InteractionComponent_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBase_PropagandaPoster_InteractionComponent_BP_C::ExecuteUbergraph_Base_PropagandaPoster_InteractionComponent_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_PropagandaPoster_InteractionComponent_BP.Base_PropagandaPoster_InteractionComponent_BP_C.ExecuteUbergraph_Base_PropagandaPoster_InteractionComponent_BP");
		
		UBase_PropagandaPoster_InteractionComponent_BP_C_ExecuteUbergraph_Base_PropagandaPoster_InteractionComponent_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBase_PropagandaPoster_InteractionComponent_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBase_PropagandaPoster_InteractionComponent_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Base_PropagandaPoster_InteractionComponent_BP.Base_PropagandaPoster_InteractionComponent_BP_C");
		return ptr;
	}

}


