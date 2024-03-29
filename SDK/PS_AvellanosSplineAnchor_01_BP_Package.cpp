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
	 * 		Name   -> Function PS_AvellanosSplineAnchor-01_BP.PS_AvellanosSplineAnchor-01_BP_C.SetupSplineFollowing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASplineFollowing_Base_BP_C*                  SplineFollower                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USplineComponent*                            SplineComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NetworkSyncInitialValue                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ENetworkSyncType                                   NetworkSyncType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APS_AvellanosSplineAnchor01_BP_C::SetupSplineFollowing(class ASplineFollowing_Base_BP_C* SplineFollower, class USplineComponent* SplineComponent, float NetworkSyncInitialValue, ENetworkSyncType NetworkSyncType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PS_AvellanosSplineAnchor-01_BP.PS_AvellanosSplineAnchor-01_BP_C.SetupSplineFollowing");
		
		APS_AvellanosSplineAnchor01_BP_C_SetupSplineFollowing_Params params {};
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
	 * 		Name   -> Function PS_AvellanosSplineAnchor-01_BP.PS_AvellanosSplineAnchor-01_BP_C.PlayAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimationAsset*                             NewAnimToPlay                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APS_AvellanosSplineAnchor01_BP_C::PlayAnimation(class UAnimationAsset* NewAnimToPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PS_AvellanosSplineAnchor-01_BP.PS_AvellanosSplineAnchor-01_BP_C.PlayAnimation");
		
		APS_AvellanosSplineAnchor01_BP_C_PlayAnimation_Params params {};
		params.NewAnimToPlay = NewAnimToPlay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PS_AvellanosSplineAnchor-01_BP.PS_AvellanosSplineAnchor-01_BP_C.RevertMannequinAnimation
	 * 		Flags  -> ()
	 */
	void APS_AvellanosSplineAnchor01_BP_C::RevertMannequinAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PS_AvellanosSplineAnchor-01_BP.PS_AvellanosSplineAnchor-01_BP_C.RevertMannequinAnimation");
		
		APS_AvellanosSplineAnchor01_BP_C_RevertMannequinAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PS_AvellanosSplineAnchor-01_BP.PS_AvellanosSplineAnchor-01_BP_C.OnWorldFullyLoaded
	 * 		Flags  -> ()
	 */
	void APS_AvellanosSplineAnchor01_BP_C::OnWorldFullyLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PS_AvellanosSplineAnchor-01_BP.PS_AvellanosSplineAnchor-01_BP_C.OnWorldFullyLoaded");
		
		APS_AvellanosSplineAnchor01_BP_C_OnWorldFullyLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PS_AvellanosSplineAnchor-01_BP.PS_AvellanosSplineAnchor-01_BP_C.OnWorldPopulateFinished
	 * 		Flags  -> ()
	 */
	void APS_AvellanosSplineAnchor01_BP_C::OnWorldPopulateFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PS_AvellanosSplineAnchor-01_BP.PS_AvellanosSplineAnchor-01_BP_C.OnWorldPopulateFinished");
		
		APS_AvellanosSplineAnchor01_BP_C_OnWorldPopulateFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PS_AvellanosSplineAnchor-01_BP.PS_AvellanosSplineAnchor-01_BP_C.Event_OnTriggered
	 * 		Flags  -> ()
	 */
	void APS_AvellanosSplineAnchor01_BP_C::Event_OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PS_AvellanosSplineAnchor-01_BP.PS_AvellanosSplineAnchor-01_BP_C.Event_OnTriggered");
		
		APS_AvellanosSplineAnchor01_BP_C_Event_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PS_AvellanosSplineAnchor-01_BP.PS_AvellanosSplineAnchor-01_BP_C.Event_OnUntriggered
	 * 		Flags  -> ()
	 */
	void APS_AvellanosSplineAnchor01_BP_C::Event_OnUntriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PS_AvellanosSplineAnchor-01_BP.PS_AvellanosSplineAnchor-01_BP_C.Event_OnUntriggered");
		
		APS_AvellanosSplineAnchor01_BP_C_Event_OnUntriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PS_AvellanosSplineAnchor-01_BP.PS_AvellanosSplineAnchor-01_BP_C.Start Spline Following
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AMannequinSplineActor01_BP_C*                MannequinSplineActor                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NetworkSyncInitialValue                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    RotationOffset                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ENetworkSyncType                                   NetworkSyncType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APS_AvellanosSplineAnchor01_BP_C::StartSplineFollowing(class AMannequinSplineActor01_BP_C* MannequinSplineActor, float NetworkSyncInitialValue, const struct FRotator& RotationOffset, ENetworkSyncType NetworkSyncType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PS_AvellanosSplineAnchor-01_BP.PS_AvellanosSplineAnchor-01_BP_C.Start Spline Following");
		
		APS_AvellanosSplineAnchor01_BP_C_StartSplineFollowing_Params params {};
		params.MannequinSplineActor = MannequinSplineActor;
		params.NetworkSyncInitialValue = NetworkSyncInitialValue;
		params.RotationOffset = RotationOffset;
		params.NetworkSyncType = NetworkSyncType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PS_AvellanosSplineAnchor-01_BP.PS_AvellanosSplineAnchor-01_BP_C.UpdateSoundLoop
	 * 		Flags  -> ()
	 */
	void APS_AvellanosSplineAnchor01_BP_C::UpdateSoundLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PS_AvellanosSplineAnchor-01_BP.PS_AvellanosSplineAnchor-01_BP_C.UpdateSoundLoop");
		
		APS_AvellanosSplineAnchor01_BP_C_UpdateSoundLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PS_AvellanosSplineAnchor-01_BP.PS_AvellanosSplineAnchor-01_BP_C.Event_SnapToState
	 * 		Flags  -> ()
	 */
	void APS_AvellanosSplineAnchor01_BP_C::Event_SnapToState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PS_AvellanosSplineAnchor-01_BP.PS_AvellanosSplineAnchor-01_BP_C.Event_SnapToState");
		
		APS_AvellanosSplineAnchor01_BP_C_Event_SnapToState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PS_AvellanosSplineAnchor-01_BP.PS_AvellanosSplineAnchor-01_BP_C.ExecuteUbergraph_PS_AvellanosSplineAnchor-01_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APS_AvellanosSplineAnchor01_BP_C::ExecuteUbergraph_PS_AvellanosSplineAnchor01_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PS_AvellanosSplineAnchor-01_BP.PS_AvellanosSplineAnchor-01_BP_C.ExecuteUbergraph_PS_AvellanosSplineAnchor-01_BP");
		
		APS_AvellanosSplineAnchor01_BP_C_ExecuteUbergraph_PS_AvellanosSplineAnchor01_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APS_AvellanosSplineAnchor01_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APS_AvellanosSplineAnchor01_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PS_AvellanosSplineAnchor_01_BP.PS_AvellanosSplineAnchor-01_BP_C");
		return ptr;
	}

}


