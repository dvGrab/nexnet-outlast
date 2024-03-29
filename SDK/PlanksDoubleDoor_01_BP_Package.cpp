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
	 * 		Name   -> Function PlanksDoubleDoor-01_BP.PlanksDoubleDoor-01_BP_C.BP_OverrideEditorCompTranform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        compName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bLocked                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FTransform                                  Transform                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	struct FTransform APlanksDoubleDoor__BP_C::BP_OverrideEditorCompTranform(const class FName& compName, bool bLocked, const struct FTransform& Transform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlanksDoubleDoor-01_BP.PlanksDoubleDoor-01_BP_C.BP_OverrideEditorCompTranform");
		
		APlanksDoubleDoor__BP_C_BP_OverrideEditorCompTranform_Params params {};
		params.compName = compName;
		params.bLocked = bLocked;
		params.Transform = Transform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlanksDoubleDoor-01_BP.PlanksDoubleDoor-01_BP_C.OnSetup
	 * 		Flags  -> ()
	 */
	void APlanksDoubleDoor__BP_C::OnSetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlanksDoubleDoor-01_BP.PlanksDoubleDoor-01_BP_C.OnSetup");
		
		APlanksDoubleDoor__BP_C_OnSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlanksDoubleDoor-01_BP.PlanksDoubleDoor-01_BP_C.BP_PostDoorInitialization
	 * 		Flags  -> ()
	 */
	void APlanksDoubleDoor__BP_C::BP_PostDoorInitialization()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlanksDoubleDoor-01_BP.PlanksDoubleDoor-01_BP_C.BP_PostDoorInitialization");
		
		APlanksDoubleDoor__BP_C_BP_PostDoorInitialization_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlanksDoubleDoor-01_BP.PlanksDoubleDoor-01_BP_C.BndEvt__RBDamageable_K2Node_ComponentBoundEvent_0_OnDamageableDestroyed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBDamageableComponent*                      DamageableComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlanksDoubleDoor__BP_C::BndEvt__RBDamageable_K2Node_ComponentBoundEvent_0_OnDamageableDestroyed__DelegateSignature(class URBDamageableComponent* DamageableComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlanksDoubleDoor-01_BP.PlanksDoubleDoor-01_BP_C.BndEvt__RBDamageable_K2Node_ComponentBoundEvent_0_OnDamageableDestroyed__DelegateSignature");
		
		APlanksDoubleDoor__BP_C_BndEvt__RBDamageable_K2Node_ComponentBoundEvent_0_OnDamageableDestroyed__DelegateSignature_Params params {};
		params.DamageableComponent = DamageableComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlanksDoubleDoor-01_BP.PlanksDoubleDoor-01_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void APlanksDoubleDoor__BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlanksDoubleDoor-01_BP.PlanksDoubleDoor-01_BP_C.ReceiveBeginPlay");
		
		APlanksDoubleDoor__BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlanksDoubleDoor-01_BP.PlanksDoubleDoor-01_BP_C.BP_OnUnlock
	 * 		Flags  -> ()
	 */
	void APlanksDoubleDoor__BP_C::BP_OnUnlock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlanksDoubleDoor-01_BP.PlanksDoubleDoor-01_BP_C.BP_OnUnlock");
		
		APlanksDoubleDoor__BP_C_BP_OnUnlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlanksDoubleDoor-01_BP.PlanksDoubleDoor-01_BP_C.ExecuteUbergraph_PlanksDoubleDoor-01_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlanksDoubleDoor__BP_C::ExecuteUbergraph_PlanksDoubleDoor__BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlanksDoubleDoor-01_BP.PlanksDoubleDoor-01_BP_C.ExecuteUbergraph_PlanksDoubleDoor-01_BP");
		
		APlanksDoubleDoor__BP_C_ExecuteUbergraph_PlanksDoubleDoor__BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APlanksDoubleDoor__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APlanksDoubleDoor__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlanksDoubleDoor_01_BP.PlanksDoubleDoor-01_BP_C");
		return ptr;
	}

}


