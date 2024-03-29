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
	 * 		Name   -> Function ElectrocutionSitchPanelComponent_BP.ElectrocutionSitchPanelComponent_BP_C.ShouldBPTick
	 * 		Flags  -> ()
	 */
	bool UElectrocutionSitchPanelComponent_BP_C::ShouldBPTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionSitchPanelComponent_BP.ElectrocutionSitchPanelComponent_BP_C.ShouldBPTick");
		
		UElectrocutionSitchPanelComponent_BP_C_ShouldBPTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionSitchPanelComponent_BP.ElectrocutionSitchPanelComponent_BP_C.TestPhysicsClearance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     interactorPawn                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UElectrocutionSitchPanelComponent_BP_C::TestPhysicsClearance(class ARBPawn* interactorPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionSitchPanelComponent_BP.ElectrocutionSitchPanelComponent_BP_C.TestPhysicsClearance");
		
		UElectrocutionSitchPanelComponent_BP_C_TestPhysicsClearance_Params params {};
		params.interactorPawn = interactorPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElectrocutionSitchPanelComponent_BP.ElectrocutionSitchPanelComponent_BP_C.GetInteractionPawnLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESpecialMove                                       specialMove                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     outDirection                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UElectrocutionSitchPanelComponent_BP_C::GetInteractionPawnLocation(class ARBPawn* Pawn, ESpecialMove specialMove, struct FVector* OutLocation, struct FVector* outDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectrocutionSitchPanelComponent_BP.ElectrocutionSitchPanelComponent_BP_C.GetInteractionPawnLocation");
		
		UElectrocutionSitchPanelComponent_BP_C_GetInteractionPawnLocation_Params params {};
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
	 * 		Name   -> PredefinedFunction UElectrocutionSitchPanelComponent_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UElectrocutionSitchPanelComponent_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ElectrocutionSitchPanelComponent_BP.ElectrocutionSitchPanelComponent_BP_C");
		return ptr;
	}

}


