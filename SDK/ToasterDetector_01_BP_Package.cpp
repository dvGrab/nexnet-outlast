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
	 * 		Name   -> Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.UpdateRayDetectionDistance
	 * 		Flags  -> ()
	 */
	void AToasterDetector__BP_C::UpdateRayDetectionDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.UpdateRayDetectionDistance");
		
		AToasterDetector__BP_C_UpdateRayDetectionDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.CalculateTargetYaw
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     TrackedPosition                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AToasterDetector__BP_C::CalculateTargetYaw(const struct FVector& TrackedPosition, float* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.CalculateTargetYaw");
		
		AToasterDetector__BP_C_CalculateTargetYaw_Params params {};
		params.TrackedPosition = TrackedPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.CalculateTargetRoll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     TrackedPosition                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AToasterDetector__BP_C::CalculateTargetRoll(const struct FVector& TrackedPosition, float* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.CalculateTargetRoll");
		
		AToasterDetector__BP_C_CalculateTargetRoll_Params params {};
		params.TrackedPosition = TrackedPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.UpdateTrackedTarget
	 * 		Flags  -> ()
	 */
	void AToasterDetector__BP_C::UpdateTrackedTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.UpdateTrackedTarget");
		
		AToasterDetector__BP_C_UpdateTrackedTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.UpdateIdleAnimationTime
	 * 		Flags  -> ()
	 */
	void AToasterDetector__BP_C::UpdateIdleAnimationTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.UpdateIdleAnimationTime");
		
		AToasterDetector__BP_C_UpdateIdleAnimationTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.OnRep_IdleAnimationStartTime
	 * 		Flags  -> ()
	 */
	void AToasterDetector__BP_C::OnRep_IdleAnimationStartTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.OnRep_IdleAnimationStartTime");
		
		AToasterDetector__BP_C_OnRep_IdleAnimationStartTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.UpdateCameraRotations
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AToasterDetector__BP_C::UpdateCameraRotations(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.UpdateCameraRotations");
		
		AToasterDetector__BP_C_UpdateCameraRotations_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.UpdateDetectionLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldReset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AToasterDetector__BP_C::UpdateDetectionLevel(bool ShouldReset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.UpdateDetectionLevel");
		
		AToasterDetector__BP_C_UpdateDetectionLevel_Params params {};
		params.ShouldReset = ShouldReset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AToasterDetector__BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.UserConstructionScript");
		
		AToasterDetector__BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AToasterDetector__BP_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.Timeline_0__FinishedFunc");
		
		AToasterDetector__BP_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AToasterDetector__BP_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.Timeline_0__UpdateFunc");
		
		AToasterDetector__BP_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AToasterDetector__BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.ReceiveBeginPlay");
		
		AToasterDetector__BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AToasterDetector__BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.ReceiveTick");
		
		AToasterDetector__BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.PlayIdleAnimation
	 * 		Flags  -> ()
	 */
	void AToasterDetector__BP_C::PlayIdleAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.PlayIdleAnimation");
		
		AToasterDetector__BP_C_PlayIdleAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.StopIdleAnimation
	 * 		Flags  -> ()
	 */
	void AToasterDetector__BP_C::StopIdleAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.StopIdleAnimation");
		
		AToasterDetector__BP_C_StopIdleAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.SetIdleAnimationTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AToasterDetector__BP_C::SetIdleAnimationTime(float NewTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.SetIdleAnimationTime");
		
		AToasterDetector__BP_C_SetIdleAnimationTime_Params params {};
		params.NewTime = NewTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.OnDetectionStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPlayerComponentDetectionState                     oldState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EPlayerComponentDetectionState                     newState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AToasterDetector__BP_C::OnDetectionStateChanged(EPlayerComponentDetectionState oldState, EPlayerComponentDetectionState newState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.OnDetectionStateChanged");
		
		AToasterDetector__BP_C_OnDetectionStateChanged_Params params {};
		params.oldState = oldState;
		params.newState = newState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.Event_OnResetStage
	 * 		Flags  -> ()
	 */
	void AToasterDetector__BP_C::Event_OnResetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.Event_OnResetStage");
		
		AToasterDetector__BP_C_Event_OnResetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.BndEvt__ToasterDetector-01_BP_RBDamageable_K2Node_ComponentBoundEvent_2_OnNumberOfHitsChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBDamageableComponent*                      DamageableComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AToasterDetector__BP_C::BndEvt__ToasterDetector__BP_RBDamageable_K2Node_ComponentBoundEvent_2_OnNumberOfHitsChanged__DelegateSignature(class URBDamageableComponent* DamageableComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.BndEvt__ToasterDetector-01_BP_RBDamageable_K2Node_ComponentBoundEvent_2_OnNumberOfHitsChanged__DelegateSignature");
		
		AToasterDetector__BP_C_BndEvt__ToasterDetector__BP_RBDamageable_K2Node_ComponentBoundEvent_2_OnNumberOfHitsChanged__DelegateSignature_Params params {};
		params.DamageableComponent = DamageableComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.ExecuteUbergraph_ToasterDetector-01_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AToasterDetector__BP_C::ExecuteUbergraph_ToasterDetector__BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ToasterDetector-01_BP.ToasterDetector-01_BP_C.ExecuteUbergraph_ToasterDetector-01_BP");
		
		AToasterDetector__BP_C_ExecuteUbergraph_ToasterDetector__BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AToasterDetector__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AToasterDetector__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ToasterDetector_01_BP.ToasterDetector-01_BP_C");
		return ptr;
	}

}


