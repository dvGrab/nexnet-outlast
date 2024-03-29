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
	 * 		Name   -> Function OrientedDecalActor.OrientedDecalActor_C.GetStateName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      stateA                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      stateB                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	bool AOrientedDecalActor_C::GetStateName(class FString* stateA, class FString* stateB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrientedDecalActor.OrientedDecalActor_C.GetStateName");
		
		AOrientedDecalActor_C_GetStateName_Params params {};
		
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
	 * 		Name   -> Function OrientedDecalActor.OrientedDecalActor_C.IsStateA
	 * 		Flags  -> ()
	 */
	bool AOrientedDecalActor_C::IsStateA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrientedDecalActor.OrientedDecalActor_C.IsStateA");
		
		AOrientedDecalActor_C_IsStateA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OrientedDecalActor.OrientedDecalActor_C.ShouldBeIgnoredForLots
	 * 		Flags  -> ()
	 */
	bool AOrientedDecalActor_C::ShouldBeIgnoredForLots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrientedDecalActor.OrientedDecalActor_C.ShouldBeIgnoredForLots");
		
		AOrientedDecalActor_C_ShouldBeIgnoredForLots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OrientedDecalActor.OrientedDecalActor_C.CreateDynamicOrientedMaterial
	 * 		Flags  -> ()
	 */
	void AOrientedDecalActor_C::CreateDynamicOrientedMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrientedDecalActor.OrientedDecalActor_C.CreateDynamicOrientedMaterial");
		
		AOrientedDecalActor_C_CreateDynamicOrientedMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OrientedDecalActor.OrientedDecalActor_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AOrientedDecalActor_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrientedDecalActor.OrientedDecalActor_C.UserConstructionScript");
		
		AOrientedDecalActor_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OrientedDecalActor.OrientedDecalActor_C.PrepareState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bStateA                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      randomOwner                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOrientedDecalActor_C::PrepareState(bool bStateA, class AActor* randomOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrientedDecalActor.OrientedDecalActor_C.PrepareState");
		
		AOrientedDecalActor_C_PrepareState_Params params {};
		params.bStateA = bStateA;
		params.randomOwner = randomOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OrientedDecalActor.OrientedDecalActor_C.SetShouldBeIgnoredForLots
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOrientedDecalActor_C::SetShouldBeIgnoredForLots(bool bValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrientedDecalActor.OrientedDecalActor_C.SetShouldBeIgnoredForLots");
		
		AOrientedDecalActor_C_SetShouldBeIgnoredForLots_Params params {};
		params.bValue = bValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OrientedDecalActor.OrientedDecalActor_C.SetState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bStateA                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOrientedDecalActor_C::SetState(bool bStateA)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrientedDecalActor.OrientedDecalActor_C.SetState");
		
		AOrientedDecalActor_C_SetState_Params params {};
		params.bStateA = bStateA;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OrientedDecalActor.OrientedDecalActor_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AOrientedDecalActor_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrientedDecalActor.OrientedDecalActor_C.ReceiveBeginPlay");
		
		AOrientedDecalActor_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OrientedDecalActor.OrientedDecalActor_C.ExecuteUbergraph_OrientedDecalActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOrientedDecalActor_C::ExecuteUbergraph_OrientedDecalActor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrientedDecalActor.OrientedDecalActor_C.ExecuteUbergraph_OrientedDecalActor");
		
		AOrientedDecalActor_C_ExecuteUbergraph_OrientedDecalActor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AOrientedDecalActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOrientedDecalActor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OrientedDecalActor.OrientedDecalActor_C");
		return ptr;
	}

}


