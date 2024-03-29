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
	 * 		Name   -> Function Parent_DestructibleDoorWindow_BP.Parent_DestructibleDoorWindow_BP_C.OnRep_ToggledOff
	 * 		Flags  -> ()
	 */
	void AParent_DestructibleDoorWindow_BP_C::OnRep_ToggledOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Parent_DestructibleDoorWindow_BP.Parent_DestructibleDoorWindow_BP_C.OnRep_ToggledOff");
		
		AParent_DestructibleDoorWindow_BP_C_OnRep_ToggledOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Parent_DestructibleDoorWindow_BP.Parent_DestructibleDoorWindow_BP_C.Update Broken Window
	 * 		Flags  -> ()
	 */
	void AParent_DestructibleDoorWindow_BP_C::Update_Broken_Window()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Parent_DestructibleDoorWindow_BP.Parent_DestructibleDoorWindow_BP_C.Update Broken Window");
		
		AParent_DestructibleDoorWindow_BP_C_Update_Broken_Window_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Parent_DestructibleDoorWindow_BP.Parent_DestructibleDoorWindow_BP_C.BndEvt__DamageableComponent_K2Node_ComponentBoundEvent_0_OnDamageableDamaged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBDamageableComponent*                      DamageableComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsDestroyed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AParent_DestructibleDoorWindow_BP_C::BndEvt__DamageableComponent_K2Node_ComponentBoundEvent_0_OnDamageableDamaged__DelegateSignature(class URBDamageableComponent* DamageableComponent, bool IsDestroyed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Parent_DestructibleDoorWindow_BP.Parent_DestructibleDoorWindow_BP_C.BndEvt__DamageableComponent_K2Node_ComponentBoundEvent_0_OnDamageableDamaged__DelegateSignature");
		
		AParent_DestructibleDoorWindow_BP_C_BndEvt__DamageableComponent_K2Node_ComponentBoundEvent_0_OnDamageableDamaged__DelegateSignature_Params params {};
		params.DamageableComponent = DamageableComponent;
		params.IsDestroyed = IsDestroyed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Parent_DestructibleDoorWindow_BP.Parent_DestructibleDoorWindow_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void AParent_DestructibleDoorWindow_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Parent_DestructibleDoorWindow_BP.Parent_DestructibleDoorWindow_BP_C.Event_OnResetStage");
		
		AParent_DestructibleDoorWindow_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Parent_DestructibleDoorWindow_BP.Parent_DestructibleDoorWindow_BP_C.Event_SnapToState
	 * 		Flags  -> ()
	 */
	void AParent_DestructibleDoorWindow_BP_C::Event_SnapToState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Parent_DestructibleDoorWindow_BP.Parent_DestructibleDoorWindow_BP_C.Event_SnapToState");
		
		AParent_DestructibleDoorWindow_BP_C_Event_SnapToState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Parent_DestructibleDoorWindow_BP.Parent_DestructibleDoorWindow_BP_C.BndEvt__DamageableComponent_K2Node_ComponentBoundEvent_1_OnDamageableReset__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBDamageableComponent*                      DamageableComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AParent_DestructibleDoorWindow_BP_C::BndEvt__DamageableComponent_K2Node_ComponentBoundEvent_1_OnDamageableReset__DelegateSignature(class URBDamageableComponent* DamageableComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Parent_DestructibleDoorWindow_BP.Parent_DestructibleDoorWindow_BP_C.BndEvt__DamageableComponent_K2Node_ComponentBoundEvent_1_OnDamageableReset__DelegateSignature");
		
		AParent_DestructibleDoorWindow_BP_C_BndEvt__DamageableComponent_K2Node_ComponentBoundEvent_1_OnDamageableReset__DelegateSignature_Params params {};
		params.DamageableComponent = DamageableComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Parent_DestructibleDoorWindow_BP.Parent_DestructibleDoorWindow_BP_C.PostToggled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bToggleEnabled                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AParent_DestructibleDoorWindow_BP_C::PostToggled(bool bToggleEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Parent_DestructibleDoorWindow_BP.Parent_DestructibleDoorWindow_BP_C.PostToggled");
		
		AParent_DestructibleDoorWindow_BP_C_PostToggled_Params params {};
		params.bToggleEnabled = bToggleEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Parent_DestructibleDoorWindow_BP.Parent_DestructibleDoorWindow_BP_C.BndEvt__Parent_DestructibleDoorWindow_BP_DamageableComponent_K2Node_ComponentBoundEvent_2_OnDamageableEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBDamageableComponent*                      DamageableComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AParent_DestructibleDoorWindow_BP_C::BndEvt__Parent_DestructibleDoorWindow_BP_DamageableComponent_K2Node_ComponentBoundEvent_2_OnDamageableEvent__DelegateSignature(class URBDamageableComponent* DamageableComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Parent_DestructibleDoorWindow_BP.Parent_DestructibleDoorWindow_BP_C.BndEvt__Parent_DestructibleDoorWindow_BP_DamageableComponent_K2Node_ComponentBoundEvent_2_OnDamageableEvent__DelegateSignature");
		
		AParent_DestructibleDoorWindow_BP_C_BndEvt__Parent_DestructibleDoorWindow_BP_DamageableComponent_K2Node_ComponentBoundEvent_2_OnDamageableEvent__DelegateSignature_Params params {};
		params.DamageableComponent = DamageableComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Parent_DestructibleDoorWindow_BP.Parent_DestructibleDoorWindow_BP_C.ExecuteUbergraph_Parent_DestructibleDoorWindow_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AParent_DestructibleDoorWindow_BP_C::ExecuteUbergraph_Parent_DestructibleDoorWindow_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Parent_DestructibleDoorWindow_BP.Parent_DestructibleDoorWindow_BP_C.ExecuteUbergraph_Parent_DestructibleDoorWindow_BP");
		
		AParent_DestructibleDoorWindow_BP_C_ExecuteUbergraph_Parent_DestructibleDoorWindow_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AParent_DestructibleDoorWindow_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AParent_DestructibleDoorWindow_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Parent_DestructibleDoorWindow_BP.Parent_DestructibleDoorWindow_BP_C");
		return ptr;
	}

}


