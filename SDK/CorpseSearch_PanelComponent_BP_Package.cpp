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
	 * 		Name   -> Function CorpseSearch_PanelComponent_BP.CorpseSearch_PanelComponent_BP_C.ShouldBPTick
	 * 		Flags  -> ()
	 */
	bool UCorpseSearch_PanelComponent_BP_C::ShouldBPTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_PanelComponent_BP.CorpseSearch_PanelComponent_BP_C.ShouldBPTick");
		
		UCorpseSearch_PanelComponent_BP_C_ShouldBPTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_PanelComponent_BP.CorpseSearch_PanelComponent_BP_C.GetInteractionPawnLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESpecialMove                                       specialMove                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     outDirection                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UCorpseSearch_PanelComponent_BP_C::GetInteractionPawnLocation(class ARBPawn* Pawn, ESpecialMove specialMove, struct FVector* OutLocation, struct FVector* outDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_PanelComponent_BP.CorpseSearch_PanelComponent_BP_C.GetInteractionPawnLocation");
		
		UCorpseSearch_PanelComponent_BP_C_GetInteractionPawnLocation_Params params {};
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
	 * 		Name   -> Function CorpseSearch_PanelComponent_BP.CorpseSearch_PanelComponent_BP_C.BP_OnPawnInteractingChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     newPawnInteracting                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCorpseSearch_PanelComponent_BP_C::BP_OnPawnInteractingChanged(class ARBPawn* newPawnInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_PanelComponent_BP.CorpseSearch_PanelComponent_BP_C.BP_OnPawnInteractingChanged");
		
		UCorpseSearch_PanelComponent_BP_C_BP_OnPawnInteractingChanged_Params params {};
		params.newPawnInteracting = newPawnInteracting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_PanelComponent_BP.CorpseSearch_PanelComponent_BP_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCorpseSearch_PanelComponent_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_PanelComponent_BP.CorpseSearch_PanelComponent_BP_C.ReceiveTick");
		
		UCorpseSearch_PanelComponent_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_PanelComponent_BP.CorpseSearch_PanelComponent_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void UCorpseSearch_PanelComponent_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_PanelComponent_BP.CorpseSearch_PanelComponent_BP_C.Event_OnResetStage");
		
		UCorpseSearch_PanelComponent_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CorpseSearch_PanelComponent_BP.CorpseSearch_PanelComponent_BP_C.ExecuteUbergraph_CorpseSearch_PanelComponent_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCorpseSearch_PanelComponent_BP_C::ExecuteUbergraph_CorpseSearch_PanelComponent_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CorpseSearch_PanelComponent_BP.CorpseSearch_PanelComponent_BP_C.ExecuteUbergraph_CorpseSearch_PanelComponent_BP");
		
		UCorpseSearch_PanelComponent_BP_C_ExecuteUbergraph_CorpseSearch_PanelComponent_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCorpseSearch_PanelComponent_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCorpseSearch_PanelComponent_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CorpseSearch_PanelComponent_BP.CorpseSearch_PanelComponent_BP_C");
		return ptr;
	}

}


