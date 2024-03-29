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
	 * 		Name   -> Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.ResetLigthingSettings
	 * 		Flags  -> ()
	 */
	void ADestructibleWallBase_BP_C::ResetLigthingSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.ResetLigthingSettings");
		
		ADestructibleWallBase_BP_C_ResetLigthingSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ADestructibleWallBase_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.UserConstructionScript");
		
		ADestructibleWallBase_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ADestructibleWallBase_BP_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.Timeline_0__FinishedFunc");
		
		ADestructibleWallBase_BP_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ADestructibleWallBase_BP_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.Timeline_0__UpdateFunc");
		
		ADestructibleWallBase_BP_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.Shake
	 * 		Flags  -> ()
	 */
	void ADestructibleWallBase_BP_C::Shake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.Shake");
		
		ADestructibleWallBase_BP_C_Shake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.FirsHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Vector                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADestructibleWallBase_BP_C::FirsHit(const struct FVector& Vector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.FirsHit");
		
		ADestructibleWallBase_BP_C_FirsHit_Params params {};
		params.Vector = Vector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.SecondHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Vector                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADestructibleWallBase_BP_C::SecondHit(const struct FVector& Vector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.SecondHit");
		
		ADestructibleWallBase_BP_C_SecondHit_Params params {};
		params.Vector = Vector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.ThirdHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Vector                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADestructibleWallBase_BP_C::ThirdHit(const struct FVector& Vector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.ThirdHit");
		
		ADestructibleWallBase_BP_C_ThirdHit_Params params {};
		params.Vector = Vector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.FourthHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Vector                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADestructibleWallBase_BP_C::FourthHit(const struct FVector& Vector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.FourthHit");
		
		ADestructibleWallBase_BP_C_FourthHit_Params params {};
		params.Vector = Vector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.forceBreak
	 * 		Flags  -> ()
	 */
	void ADestructibleWallBase_BP_C::forceBreak()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.forceBreak");
		
		ADestructibleWallBase_BP_C_forceBreak_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.BndEvt__DamageableComponent_K2Node_ComponentBoundEvent_3_OnDamageableDamaged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBDamageableComponent*                      DamageableComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsDestroyed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADestructibleWallBase_BP_C::BndEvt__DamageableComponent_K2Node_ComponentBoundEvent_3_OnDamageableDamaged__DelegateSignature(class URBDamageableComponent* DamageableComponent, bool IsDestroyed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.BndEvt__DamageableComponent_K2Node_ComponentBoundEvent_3_OnDamageableDamaged__DelegateSignature");
		
		ADestructibleWallBase_BP_C_BndEvt__DamageableComponent_K2Node_ComponentBoundEvent_3_OnDamageableDamaged__DelegateSignature_Params params {};
		params.DamageableComponent = DamageableComponent;
		params.IsDestroyed = IsDestroyed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.Event_SnapToState
	 * 		Flags  -> ()
	 */
	void ADestructibleWallBase_BP_C::Event_SnapToState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.Event_SnapToState");
		
		ADestructibleWallBase_BP_C_Event_SnapToState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.UpdateDuratility
	 * 		Flags  -> ()
	 */
	void ADestructibleWallBase_BP_C::UpdateDuratility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.UpdateDuratility");
		
		ADestructibleWallBase_BP_C_UpdateDuratility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void ADestructibleWallBase_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.Event_OnResetStage");
		
		ADestructibleWallBase_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.Event_OnBreakObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      SourceActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADestructibleWallBase_BP_C::Event_OnBreakObject(class AActor* SourceActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.Event_OnBreakObject");
		
		ADestructibleWallBase_BP_C_Event_OnBreakObject_Params params {};
		params.SourceActor = SourceActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ADestructibleWallBase_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.ReceiveBeginPlay");
		
		ADestructibleWallBase_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.plankHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                PlankToMove                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class FName>                                PlanksToBreak                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FVector                                     A                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADestructibleWallBase_BP_C::plankHit(TArray<class FName> PlankToMove, TArray<class FName> PlanksToBreak, const struct FVector& A)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.plankHit");
		
		ADestructibleWallBase_BP_C_plankHit_Params params {};
		params.PlankToMove = PlankToMove;
		params.PlanksToBreak = PlanksToBreak;
		params.A = A;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.ExecuteUbergraph_DestructibleWallBase_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADestructibleWallBase_BP_C::ExecuteUbergraph_DestructibleWallBase_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.ExecuteUbergraph_DestructibleWallBase_BP");
		
		ADestructibleWallBase_BP_C_ExecuteUbergraph_DestructibleWallBase_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.Broken__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ADestructibleWallBase_BP_C::Broken__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DestructibleWallBase_BP.DestructibleWallBase_BP_C.Broken__DelegateSignature");
		
		ADestructibleWallBase_BP_C_Broken__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADestructibleWallBase_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADestructibleWallBase_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DestructibleWallBase_BP.DestructibleWallBase_BP_C");
		return ptr;
	}

}


