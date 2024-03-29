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
	 * 		Name   -> Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.OnRep_isOff
	 * 		Flags  -> ()
	 */
	void ASimpleDestructibleProps_BP_C::OnRep_isOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.OnRep_isOff");
		
		ASimpleDestructibleProps_BP_C_OnRep_isOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.UpdateHittable
	 * 		Flags  -> ()
	 */
	void ASimpleDestructibleProps_BP_C::UpdateHittable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.UpdateHittable");
		
		ASimpleDestructibleProps_BP_C_UpdateHittable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.UpdateLastHitterInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      LastHitter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASimpleDestructibleProps_BP_C::UpdateLastHitterInfo(class AActor* LastHitter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.UpdateLastHitterInfo");
		
		ASimpleDestructibleProps_BP_C_UpdateLastHitterInfo_Params params {};
		params.LastHitter = LastHitter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.SetCurrentSounds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSimpleDestructibleSound_Stuc>       Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void ASimpleDestructibleProps_BP_C::SetCurrentSounds(TArray<struct FSimpleDestructibleSound_Stuc>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.SetCurrentSounds");
		
		ASimpleDestructibleProps_BP_C_SetCurrentSounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.SetCurrentLights
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSimpleDestructibleLights_Stuc>      Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void ASimpleDestructibleProps_BP_C::SetCurrentLights(TArray<struct FSimpleDestructibleLights_Stuc>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.SetCurrentLights");
		
		ASimpleDestructibleProps_BP_C_SetCurrentLights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.SetCurrentParticles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSimpleDestructibleParticles_Stuc>   Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void ASimpleDestructibleProps_BP_C::SetCurrentParticles(TArray<struct FSimpleDestructibleParticles_Stuc>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.SetCurrentParticles");
		
		ASimpleDestructibleProps_BP_C_SetCurrentParticles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.SetCurrentPhysicalMeshes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSimpleDestructiblePhysicalMesh_Stuc> Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		bool                                               ApplyImpulse                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASimpleDestructibleProps_BP_C::SetCurrentPhysicalMeshes(TArray<struct FSimpleDestructiblePhysicalMesh_Stuc>* Array, bool ApplyImpulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.SetCurrentPhysicalMeshes");
		
		ASimpleDestructibleProps_BP_C_SetCurrentPhysicalMeshes_Params params {};
		params.ApplyImpulse = ApplyImpulse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.SetCurrentMeshes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSimpleDestructibleMeshes_Stuc>      Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void ASimpleDestructibleProps_BP_C::SetCurrentMeshes(TArray<struct FSimpleDestructibleMeshes_Stuc>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.SetCurrentMeshes");
		
		ASimpleDestructibleProps_BP_C_SetCurrentMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.CleanLastState
	 * 		Flags  -> ()
	 */
	void ASimpleDestructibleProps_BP_C::CleanLastState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.CleanLastState");
		
		ASimpleDestructibleProps_BP_C_CleanLastState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.UpdateBroken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Toggle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASimpleDestructibleProps_BP_C::UpdateBroken(bool Toggle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.UpdateBroken");
		
		ASimpleDestructibleProps_BP_C_UpdateBroken_Params params {};
		params.Toggle = Toggle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.OnCurrentStageChanged
	 * 		Flags  -> ()
	 */
	void ASimpleDestructibleProps_BP_C::OnCurrentStageChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.OnCurrentStageChanged");
		
		ASimpleDestructibleProps_BP_C_OnCurrentStageChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.OnRep_CurrentStage
	 * 		Flags  -> ()
	 */
	void ASimpleDestructibleProps_BP_C::OnRep_CurrentStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.OnRep_CurrentStage");
		
		ASimpleDestructibleProps_BP_C_OnRep_CurrentStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.SetOn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isOff                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASimpleDestructibleProps_BP_C::SetOn(bool isOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.SetOn");
		
		ASimpleDestructibleProps_BP_C_SetOn_Params params {};
		params.isOff = isOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ASimpleDestructibleProps_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.UserConstructionScript");
		
		ASimpleDestructibleProps_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ASimpleDestructibleProps_BP_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.Timeline_0__FinishedFunc");
		
		ASimpleDestructibleProps_BP_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ASimpleDestructibleProps_BP_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.Timeline_0__UpdateFunc");
		
		ASimpleDestructibleProps_BP_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ASimpleDestructibleProps_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.ReceiveBeginPlay");
		
		ASimpleDestructibleProps_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.Event_OnTriggered
	 * 		Flags  -> ()
	 */
	void ASimpleDestructibleProps_BP_C::Event_OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.Event_OnTriggered");
		
		ASimpleDestructibleProps_BP_C_Event_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.Event_OnUntriggered
	 * 		Flags  -> ()
	 */
	void ASimpleDestructibleProps_BP_C::Event_OnUntriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.Event_OnUntriggered");
		
		ASimpleDestructibleProps_BP_C_Event_OnUntriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.BlastLight
	 * 		Flags  -> ()
	 */
	void ASimpleDestructibleProps_BP_C::BlastLight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.BlastLight");
		
		ASimpleDestructibleProps_BP_C_BlastLight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.Event_SnapToState
	 * 		Flags  -> ()
	 */
	void ASimpleDestructibleProps_BP_C::Event_SnapToState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.Event_SnapToState");
		
		ASimpleDestructibleProps_BP_C_Event_SnapToState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.BndEvt__DamageableComponent_K2Node_ComponentBoundEvent_2_OnDamageableDamaged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBDamageableComponent*                      DamageableComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsDestroyed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASimpleDestructibleProps_BP_C::BndEvt__DamageableComponent_K2Node_ComponentBoundEvent_2_OnDamageableDamaged__DelegateSignature(class URBDamageableComponent* DamageableComponent, bool IsDestroyed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.BndEvt__DamageableComponent_K2Node_ComponentBoundEvent_2_OnDamageableDamaged__DelegateSignature");
		
		ASimpleDestructibleProps_BP_C_BndEvt__DamageableComponent_K2Node_ComponentBoundEvent_2_OnDamageableDamaged__DelegateSignature_Params params {};
		params.DamageableComponent = DamageableComponent;
		params.IsDestroyed = IsDestroyed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.ExecuteUbergraph_SimpleDestructibleProps_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASimpleDestructibleProps_BP_C::ExecuteUbergraph_SimpleDestructibleProps_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.ExecuteUbergraph_SimpleDestructibleProps_BP");
		
		ASimpleDestructibleProps_BP_C_ExecuteUbergraph_SimpleDestructibleProps_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.OnBrokenChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ASimpleDestructibleProps_BP_C::OnBrokenChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C.OnBrokenChanged__DelegateSignature");
		
		ASimpleDestructibleProps_BP_C_OnBrokenChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASimpleDestructibleProps_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASimpleDestructibleProps_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SimpleDestructibleProps_BP.SimpleDestructibleProps_BP_C");
		return ptr;
	}

}


