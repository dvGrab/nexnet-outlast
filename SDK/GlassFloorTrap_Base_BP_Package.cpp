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
	 * 		Name   -> Function GlassFloorTrap_Base_BP.GlassFloorTrap_Base_BP_C.GetStateName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      stateA                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      stateB                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	bool AGlassFloorTrap_Base_BP_C::GetStateName(class FString* stateA, class FString* stateB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlassFloorTrap_Base_BP.GlassFloorTrap_Base_BP_C.GetStateName");
		
		AGlassFloorTrap_Base_BP_C_GetStateName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (stateA != nullptr)
			*stateA = params.stateA;
		if (stateB != nullptr)
			*stateB = params.stateB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GlassFloorTrap_Base_BP.GlassFloorTrap_Base_BP_C.IsStateA
	 * 		Flags  -> ()
	 */
	bool AGlassFloorTrap_Base_BP_C::IsStateA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlassFloorTrap_Base_BP.GlassFloorTrap_Base_BP_C.IsStateA");
		
		AGlassFloorTrap_Base_BP_C_IsStateA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GlassFloorTrap_Base_BP.GlassFloorTrap_Base_BP_C.ShouldBeIgnoredForLots
	 * 		Flags  -> ()
	 */
	bool AGlassFloorTrap_Base_BP_C::ShouldBeIgnoredForLots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlassFloorTrap_Base_BP.GlassFloorTrap_Base_BP_C.ShouldBeIgnoredForLots");
		
		AGlassFloorTrap_Base_BP_C_ShouldBeIgnoredForLots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GlassFloorTrap_Base_BP.GlassFloorTrap_Base_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AGlassFloorTrap_Base_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlassFloorTrap_Base_BP.GlassFloorTrap_Base_BP_C.UserConstructionScript");
		
		AGlassFloorTrap_Base_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GlassFloorTrap_Base_BP.GlassFloorTrap_Base_BP_C.PrepareState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bStateA                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      randomOwner                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGlassFloorTrap_Base_BP_C::PrepareState(bool bStateA, class AActor* randomOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlassFloorTrap_Base_BP.GlassFloorTrap_Base_BP_C.PrepareState");
		
		AGlassFloorTrap_Base_BP_C_PrepareState_Params params {};
		params.bStateA = bStateA;
		params.randomOwner = randomOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GlassFloorTrap_Base_BP.GlassFloorTrap_Base_BP_C.SetState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bStateA                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGlassFloorTrap_Base_BP_C::SetState(bool bStateA)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlassFloorTrap_Base_BP.GlassFloorTrap_Base_BP_C.SetState");
		
		AGlassFloorTrap_Base_BP_C_SetState_Params params {};
		params.bStateA = bStateA;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GlassFloorTrap_Base_BP.GlassFloorTrap_Base_BP_C.SetShouldBeIgnoredForLots
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGlassFloorTrap_Base_BP_C::SetShouldBeIgnoredForLots(bool bValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlassFloorTrap_Base_BP.GlassFloorTrap_Base_BP_C.SetShouldBeIgnoredForLots");
		
		AGlassFloorTrap_Base_BP_C_SetShouldBeIgnoredForLots_Params params {};
		params.bValue = bValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GlassFloorTrap_Base_BP.GlassFloorTrap_Base_BP_C.ExecuteUbergraph_GlassFloorTrap_Base_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGlassFloorTrap_Base_BP_C::ExecuteUbergraph_GlassFloorTrap_Base_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlassFloorTrap_Base_BP.GlassFloorTrap_Base_BP_C.ExecuteUbergraph_GlassFloorTrap_Base_BP");
		
		AGlassFloorTrap_Base_BP_C_ExecuteUbergraph_GlassFloorTrap_Base_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGlassFloorTrap_Base_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGlassFloorTrap_Base_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GlassFloorTrap_Base_BP.GlassFloorTrap_Base_BP_C");
		return ptr;
	}

}


