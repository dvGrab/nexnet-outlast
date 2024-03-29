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
	 * 		Name   -> Function Generator_ZoneTimingPanelComponent_BP.Generator_ZoneTimingPanelComponent_BP_C.StartInteraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     interactorPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UGenerator_ZoneTimingPanelComponent_BP_C::StartInteraction(class ARBPawn* interactorPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Generator_ZoneTimingPanelComponent_BP.Generator_ZoneTimingPanelComponent_BP_C.StartInteraction");
		
		UGenerator_ZoneTimingPanelComponent_BP_C_StartInteraction_Params params {};
		params.interactorPawn = interactorPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Generator_ZoneTimingPanelComponent_BP.Generator_ZoneTimingPanelComponent_BP_C.GetGeneratorOwner
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APrototype_GeneratorObjective_BP_C*          GeneratorOwner                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGenerator_ZoneTimingPanelComponent_BP_C::GetGeneratorOwner(class APrototype_GeneratorObjective_BP_C** GeneratorOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Generator_ZoneTimingPanelComponent_BP.Generator_ZoneTimingPanelComponent_BP_C.GetGeneratorOwner");
		
		UGenerator_ZoneTimingPanelComponent_BP_C_GetGeneratorOwner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GeneratorOwner != nullptr)
			*GeneratorOwner = params.GeneratorOwner;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Generator_ZoneTimingPanelComponent_BP.Generator_ZoneTimingPanelComponent_BP_C.GetZoneTimingCustomInteractionText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   Player                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        out_CustomInteractionText                                  (Parm, OutParm)
	 * 		bool                                               out_bInteractionFail                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UGenerator_ZoneTimingPanelComponent_BP_C::GetZoneTimingCustomInteractionText(class ARBPlayer* Player, class FText* out_CustomInteractionText, bool* out_bInteractionFail)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Generator_ZoneTimingPanelComponent_BP.Generator_ZoneTimingPanelComponent_BP_C.GetZoneTimingCustomInteractionText");
		
		UGenerator_ZoneTimingPanelComponent_BP_C_GetZoneTimingCustomInteractionText_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (out_CustomInteractionText != nullptr)
			*out_CustomInteractionText = params.out_CustomInteractionText;
		if (out_bInteractionFail != nullptr)
			*out_bInteractionFail = params.out_bInteractionFail;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Generator_ZoneTimingPanelComponent_BP.Generator_ZoneTimingPanelComponent_BP_C.GetInteractionPawnLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESpecialMove                                       specialMove                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     outDirection                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UGenerator_ZoneTimingPanelComponent_BP_C::GetInteractionPawnLocation(class ARBPawn* Pawn, ESpecialMove specialMove, struct FVector* OutLocation, struct FVector* outDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Generator_ZoneTimingPanelComponent_BP.Generator_ZoneTimingPanelComponent_BP_C.GetInteractionPawnLocation");
		
		UGenerator_ZoneTimingPanelComponent_BP_C_GetInteractionPawnLocation_Params params {};
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
	 * 		Name   -> PredefinedFunction UGenerator_ZoneTimingPanelComponent_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGenerator_ZoneTimingPanelComponent_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Generator_ZoneTimingPanelComponent_BP.Generator_ZoneTimingPanelComponent_BP_C");
		return ptr;
	}

}


