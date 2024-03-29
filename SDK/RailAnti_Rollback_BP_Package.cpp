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
	 * 		Name   -> Function RailAnti-Rollback_BP.RailAnti-Rollback_BP_C.UpdateBlockingCollision
	 * 		Flags  -> ()
	 */
	void ARailAntiRollback_BP_C::UpdateBlockingCollision()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RailAnti-Rollback_BP.RailAnti-Rollback_BP_C.UpdateBlockingCollision");
		
		ARailAntiRollback_BP_C_UpdateBlockingCollision_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RailAnti-Rollback_BP.RailAnti-Rollback_BP_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ARailAntiRollback_BP_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RailAnti-Rollback_BP.RailAnti-Rollback_BP_C.Timeline_0__FinishedFunc");
		
		ARailAntiRollback_BP_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RailAnti-Rollback_BP.RailAnti-Rollback_BP_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ARailAntiRollback_BP_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RailAnti-Rollback_BP.RailAnti-Rollback_BP_C.Timeline_0__UpdateFunc");
		
		ARailAntiRollback_BP_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RailAnti-Rollback_BP.RailAnti-Rollback_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ARailAntiRollback_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RailAnti-Rollback_BP.RailAnti-Rollback_BP_C.ReceiveBeginPlay");
		
		ARailAntiRollback_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RailAnti-Rollback_BP.RailAnti-Rollback_BP_C.Event_SnapToState
	 * 		Flags  -> ()
	 */
	void ARailAntiRollback_BP_C::Event_SnapToState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RailAnti-Rollback_BP.RailAnti-Rollback_BP_C.Event_SnapToState");
		
		ARailAntiRollback_BP_C_Event_SnapToState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RailAnti-Rollback_BP.RailAnti-Rollback_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void ARailAntiRollback_BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RailAnti-Rollback_BP.RailAnti-Rollback_BP_C.Event_OnResetStage");
		
		ARailAntiRollback_BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RailAnti-Rollback_BP.RailAnti-Rollback_BP_C.Event_OnTriggerSequenceStarted
	 * 		Flags  -> ()
	 */
	void ARailAntiRollback_BP_C::Event_OnTriggerSequenceStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RailAnti-Rollback_BP.RailAnti-Rollback_BP_C.Event_OnTriggerSequenceStarted");
		
		ARailAntiRollback_BP_C_Event_OnTriggerSequenceStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RailAnti-Rollback_BP.RailAnti-Rollback_BP_C.BndEvt__RailAnti-Rollback_BP_CartDetection_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ARailAntiRollback_BP_C::BndEvt__RailAntiRollback_BP_CartDetection_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RailAnti-Rollback_BP.RailAnti-Rollback_BP_C.BndEvt__RailAnti-Rollback_BP_CartDetection_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		ARailAntiRollback_BP_C_BndEvt__RailAntiRollback_BP_CartDetection_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RailAnti-Rollback_BP.RailAnti-Rollback_BP_C.ExecuteUbergraph_RailAnti-Rollback_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARailAntiRollback_BP_C::ExecuteUbergraph_RailAntiRollback_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RailAnti-Rollback_BP.RailAnti-Rollback_BP_C.ExecuteUbergraph_RailAnti-Rollback_BP");
		
		ARailAntiRollback_BP_C_ExecuteUbergraph_RailAntiRollback_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARailAntiRollback_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARailAntiRollback_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RailAnti_Rollback_BP.RailAnti-Rollback_BP_C");
		return ptr;
	}

}


