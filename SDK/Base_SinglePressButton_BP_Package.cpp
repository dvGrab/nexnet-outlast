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
	 * 		Name   -> Function Base_SinglePressButton_BP.Base_SinglePressButton_BP_C.SetPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Pressed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABase_SinglePressButton_BP_C::SetPressed(bool Pressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_SinglePressButton_BP.Base_SinglePressButton_BP_C.SetPressed");
		
		ABase_SinglePressButton_BP_C_SetPressed_Params params {};
		params.Pressed = Pressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_SinglePressButton_BP.Base_SinglePressButton_BP_C.OnRep_IsPressed
	 * 		Flags  -> ()
	 */
	void ABase_SinglePressButton_BP_C::OnRep_IsPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_SinglePressButton_BP.Base_SinglePressButton_BP_C.OnRep_IsPressed");
		
		ABase_SinglePressButton_BP_C_OnRep_IsPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_SinglePressButton_BP.Base_SinglePressButton_BP_C.BndEvt__Base_SinglePressButton_BP_ButtonPressComponent_K2Node_ComponentBoundEvent_1_OnInteractionEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     interactor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class URBInteractibleComponent*                    Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_SinglePressButton_BP_C::BndEvt__Base_SinglePressButton_BP_ButtonPressComponent_K2Node_ComponentBoundEvent_1_OnInteractionEvent__DelegateSignature(class ARBPawn* interactor, class URBInteractibleComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_SinglePressButton_BP.Base_SinglePressButton_BP_C.BndEvt__Base_SinglePressButton_BP_ButtonPressComponent_K2Node_ComponentBoundEvent_1_OnInteractionEvent__DelegateSignature");
		
		ABase_SinglePressButton_BP_C_BndEvt__Base_SinglePressButton_BP_ButtonPressComponent_K2Node_ComponentBoundEvent_1_OnInteractionEvent__DelegateSignature_Params params {};
		params.interactor = interactor;
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_SinglePressButton_BP.Base_SinglePressButton_BP_C.BndEvt__Base_SinglePressButton_BP_ButtonPressComponent_K2Node_ComponentBoundEvent_2_OnInteractionEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     interactor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class URBInteractibleComponent*                    Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_SinglePressButton_BP_C::BndEvt__Base_SinglePressButton_BP_ButtonPressComponent_K2Node_ComponentBoundEvent_2_OnInteractionEvent__DelegateSignature(class ARBPawn* interactor, class URBInteractibleComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_SinglePressButton_BP.Base_SinglePressButton_BP_C.BndEvt__Base_SinglePressButton_BP_ButtonPressComponent_K2Node_ComponentBoundEvent_2_OnInteractionEvent__DelegateSignature");
		
		ABase_SinglePressButton_BP_C_BndEvt__Base_SinglePressButton_BP_ButtonPressComponent_K2Node_ComponentBoundEvent_2_OnInteractionEvent__DelegateSignature_Params params {};
		params.interactor = interactor;
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_SinglePressButton_BP.Base_SinglePressButton_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void ABase_SinglePressButton_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_SinglePressButton_BP.Base_SinglePressButton_BP_C.Event_OnResetStage");
		
		ABase_SinglePressButton_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_SinglePressButton_BP.Base_SinglePressButton_BP_C.ApplyColorDelayed
	 * 		Flags  -> ()
	 */
	void ABase_SinglePressButton_BP_C::ApplyColorDelayed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_SinglePressButton_BP.Base_SinglePressButton_BP_C.ApplyColorDelayed");
		
		ABase_SinglePressButton_BP_C_ApplyColorDelayed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_SinglePressButton_BP.Base_SinglePressButton_BP_C.DoButtonPressActions
	 * 		Flags  -> ()
	 */
	void ABase_SinglePressButton_BP_C::DoButtonPressActions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_SinglePressButton_BP.Base_SinglePressButton_BP_C.DoButtonPressActions");
		
		ABase_SinglePressButton_BP_C_DoButtonPressActions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_SinglePressButton_BP.Base_SinglePressButton_BP_C.ExecuteUbergraph_Base_SinglePressButton_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_SinglePressButton_BP_C::ExecuteUbergraph_Base_SinglePressButton_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_SinglePressButton_BP.Base_SinglePressButton_BP_C.ExecuteUbergraph_Base_SinglePressButton_BP");
		
		ABase_SinglePressButton_BP_C_ExecuteUbergraph_Base_SinglePressButton_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABase_SinglePressButton_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABase_SinglePressButton_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Base_SinglePressButton_BP.Base_SinglePressButton_BP_C");
		return ptr;
	}

}


