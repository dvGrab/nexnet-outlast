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
	 * 		Name   -> Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.SetupSplineFollowing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASplineFollowing_Base_BP_C*                  SplineFollower                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USplineComponent*                            SplineComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NetworkSyncInitialValue                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ENetworkSyncType                                   NetworkSyncType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOR_NunSplineAnchor__BP_C::SetupSplineFollowing(class ASplineFollowing_Base_BP_C* SplineFollower, class USplineComponent* SplineComponent, float NetworkSyncInitialValue, ENetworkSyncType NetworkSyncType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.SetupSplineFollowing");
		
		AOR_NunSplineAnchor__BP_C_SetupSplineFollowing_Params params {};
		params.SplineFollower = SplineFollower;
		params.SplineComponent = SplineComponent;
		params.NetworkSyncInitialValue = NetworkSyncInitialValue;
		params.NetworkSyncType = NetworkSyncType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.PlayAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimationAsset*                             NewAnimToPlay                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOR_NunSplineAnchor__BP_C::PlayAnimation(class UAnimationAsset* NewAnimToPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.PlayAnimation");
		
		AOR_NunSplineAnchor__BP_C_PlayAnimation_Params params {};
		params.NewAnimToPlay = NewAnimToPlay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.RevertMannequinAnimation
	 * 		Flags  -> ()
	 */
	void AOR_NunSplineAnchor__BP_C::RevertMannequinAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.RevertMannequinAnimation");
		
		AOR_NunSplineAnchor__BP_C_RevertMannequinAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AOR_NunSplineAnchor__BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.UserConstructionScript");
		
		AOR_NunSplineAnchor__BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.RotationTimeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AOR_NunSplineAnchor__BP_C::RotationTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.RotationTimeline__FinishedFunc");
		
		AOR_NunSplineAnchor__BP_C_RotationTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.RotationTimeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AOR_NunSplineAnchor__BP_C::RotationTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.RotationTimeline__UpdateFunc");
		
		AOR_NunSplineAnchor__BP_C_RotationTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.OnWorldFullyLoaded
	 * 		Flags  -> ()
	 */
	void AOR_NunSplineAnchor__BP_C::OnWorldFullyLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.OnWorldFullyLoaded");
		
		AOR_NunSplineAnchor__BP_C_OnWorldFullyLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.Event_OnTriggered
	 * 		Flags  -> ()
	 */
	void AOR_NunSplineAnchor__BP_C::Event_OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.Event_OnTriggered");
		
		AOR_NunSplineAnchor__BP_C_Event_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.Event_OnUntriggered
	 * 		Flags  -> ()
	 */
	void AOR_NunSplineAnchor__BP_C::Event_OnUntriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.Event_OnUntriggered");
		
		AOR_NunSplineAnchor__BP_C_Event_OnUntriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.Start Spline Following
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABase_SplineActor_BP_C*                      MannequinSplineActor                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Network_Sync_Initial_Value                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    Rotation_Offset                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ENetworkSyncType                                   Network_Sync_Type                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOR_NunSplineAnchor__BP_C::Start_Spline_Following(class ABase_SplineActor_BP_C* MannequinSplineActor, float Network_Sync_Initial_Value, const struct FRotator& Rotation_Offset, ENetworkSyncType Network_Sync_Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.Start Spline Following");
		
		AOR_NunSplineAnchor__BP_C_Start_Spline_Following_Params params {};
		params.MannequinSplineActor = MannequinSplineActor;
		params.Network_Sync_Initial_Value = Network_Sync_Initial_Value;
		params.Rotation_Offset = Rotation_Offset;
		params.Network_Sync_Type = Network_Sync_Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.UpdateSoundLoop
	 * 		Flags  -> ()
	 */
	void AOR_NunSplineAnchor__BP_C::UpdateSoundLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.UpdateSoundLoop");
		
		AOR_NunSplineAnchor__BP_C_UpdateSoundLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.Event_SnapToState
	 * 		Flags  -> ()
	 */
	void AOR_NunSplineAnchor__BP_C::Event_SnapToState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.Event_SnapToState");
		
		AOR_NunSplineAnchor__BP_C_Event_SnapToState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.OnWorldPopulateFinished
	 * 		Flags  -> ()
	 */
	void AOR_NunSplineAnchor__BP_C::OnWorldPopulateFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.OnWorldPopulateFinished");
		
		AOR_NunSplineAnchor__BP_C_OnWorldPopulateFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.BP_OnPingPongExtremityEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOR_NunSplineAnchor__BP_C::BP_OnPingPongExtremityEvent(float progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.BP_OnPingPongExtremityEvent");
		
		AOR_NunSplineAnchor__BP_C_BP_OnPingPongExtremityEvent_Params params {};
		params.progress = progress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AOR_NunSplineAnchor__BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.ReceiveBeginPlay");
		
		AOR_NunSplineAnchor__BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.BP_OnCurrentSplineCompChanged
	 * 		Flags  -> ()
	 */
	void AOR_NunSplineAnchor__BP_C::BP_OnCurrentSplineCompChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.BP_OnCurrentSplineCompChanged");
		
		AOR_NunSplineAnchor__BP_C_BP_OnCurrentSplineCompChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.ExecuteUbergraph_OR_NunSplineAnchor-01_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOR_NunSplineAnchor__BP_C::ExecuteUbergraph_OR_NunSplineAnchor__BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OR_NunSplineAnchor-01_BP.OR_NunSplineAnchor-01_BP_C.ExecuteUbergraph_OR_NunSplineAnchor-01_BP");
		
		AOR_NunSplineAnchor__BP_C_ExecuteUbergraph_OR_NunSplineAnchor__BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AOR_NunSplineAnchor__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOR_NunSplineAnchor__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OR_NunSplineAnchor_01_BP.OR_NunSplineAnchor-01_BP_C");
		return ptr;
	}

}


