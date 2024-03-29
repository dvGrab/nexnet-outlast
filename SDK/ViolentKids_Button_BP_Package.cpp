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
	 * 		Name   -> Function ViolentKids_Button_BP.ViolentKids_Button_BP_C.GetStateName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      stateA                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      stateB                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	bool AViolentKids_Button_BP_C::GetStateName(class FString* stateA, class FString* stateB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Button_BP.ViolentKids_Button_BP_C.GetStateName");
		
		AViolentKids_Button_BP_C_GetStateName_Params params {};
		
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
	 * 		Name   -> Function ViolentKids_Button_BP.ViolentKids_Button_BP_C.IsStateA
	 * 		Flags  -> ()
	 */
	bool AViolentKids_Button_BP_C::IsStateA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Button_BP.ViolentKids_Button_BP_C.IsStateA");
		
		AViolentKids_Button_BP_C_IsStateA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Button_BP.ViolentKids_Button_BP_C.ShouldBeIgnoredForLots
	 * 		Flags  -> ()
	 */
	bool AViolentKids_Button_BP_C::ShouldBeIgnoredForLots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Button_BP.ViolentKids_Button_BP_C.ShouldBeIgnoredForLots");
		
		AViolentKids_Button_BP_C_ShouldBeIgnoredForLots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Button_BP.ViolentKids_Button_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AViolentKids_Button_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Button_BP.ViolentKids_Button_BP_C.UserConstructionScript");
		
		AViolentKids_Button_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Button_BP.ViolentKids_Button_BP_C.OnWorldPopulateFinished
	 * 		Flags  -> ()
	 */
	void AViolentKids_Button_BP_C::OnWorldPopulateFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Button_BP.ViolentKids_Button_BP_C.OnWorldPopulateFinished");
		
		AViolentKids_Button_BP_C_OnWorldPopulateFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Button_BP.ViolentKids_Button_BP_C.PrepareState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bStateA                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      randomOwner                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AViolentKids_Button_BP_C::PrepareState(bool bStateA, class AActor* randomOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Button_BP.ViolentKids_Button_BP_C.PrepareState");
		
		AViolentKids_Button_BP_C_PrepareState_Params params {};
		params.bStateA = bStateA;
		params.randomOwner = randomOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Button_BP.ViolentKids_Button_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AViolentKids_Button_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Button_BP.ViolentKids_Button_BP_C.ReceiveBeginPlay");
		
		AViolentKids_Button_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Button_BP.ViolentKids_Button_BP_C.SetState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bStateA                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AViolentKids_Button_BP_C::SetState(bool bStateA)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Button_BP.ViolentKids_Button_BP_C.SetState");
		
		AViolentKids_Button_BP_C_SetState_Params params {};
		params.bStateA = bStateA;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Button_BP.ViolentKids_Button_BP_C.SetShouldBeIgnoredForLots
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AViolentKids_Button_BP_C::SetShouldBeIgnoredForLots(bool bValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Button_BP.ViolentKids_Button_BP_C.SetShouldBeIgnoredForLots");
		
		AViolentKids_Button_BP_C_SetShouldBeIgnoredForLots_Params params {};
		params.bValue = bValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Button_BP.ViolentKids_Button_BP_C.BndEvt__ChildMannequin_Button_BP_ButtonPressComponent_K2Node_ComponentBoundEvent_1_OnEnabledChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBInteractionZoneComponent*                 Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AViolentKids_Button_BP_C::BndEvt__ChildMannequin_Button_BP_ButtonPressComponent_K2Node_ComponentBoundEvent_1_OnEnabledChanged__DelegateSignature(class URBInteractionZoneComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Button_BP.ViolentKids_Button_BP_C.BndEvt__ChildMannequin_Button_BP_ButtonPressComponent_K2Node_ComponentBoundEvent_1_OnEnabledChanged__DelegateSignature");
		
		AViolentKids_Button_BP_C_BndEvt__ChildMannequin_Button_BP_ButtonPressComponent_K2Node_ComponentBoundEvent_1_OnEnabledChanged__DelegateSignature_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Button_BP.ViolentKids_Button_BP_C.OnWorldFullyLoaded
	 * 		Flags  -> ()
	 */
	void AViolentKids_Button_BP_C::OnWorldFullyLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Button_BP.ViolentKids_Button_BP_C.OnWorldFullyLoaded");
		
		AViolentKids_Button_BP_C_OnWorldFullyLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Button_BP.ViolentKids_Button_BP_C.ExecuteUbergraph_ViolentKids_Button_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AViolentKids_Button_BP_C::ExecuteUbergraph_ViolentKids_Button_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Button_BP.ViolentKids_Button_BP_C.ExecuteUbergraph_ViolentKids_Button_BP");
		
		AViolentKids_Button_BP_C_ExecuteUbergraph_ViolentKids_Button_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AViolentKids_Button_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AViolentKids_Button_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ViolentKids_Button_BP.ViolentKids_Button_BP_C");
		return ptr;
	}

}


