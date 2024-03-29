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
	 * 		Name   -> Function SASTube-02_BP.SASTube-02_BP_C.UpdatePostProcess
	 * 		Flags  -> ()
	 */
	void ASASTube__BP_C::UpdatePostProcess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-02_BP.SASTube-02_BP_C.UpdatePostProcess");
		
		ASASTube__BP_C_UpdatePostProcess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-02_BP.SASTube-02_BP_C.UpdateShadowVisual
	 * 		Flags  -> ()
	 */
	void ASASTube__BP_C::UpdateShadowVisual()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-02_BP.SASTube-02_BP_C.UpdateShadowVisual");
		
		ASASTube__BP_C_UpdateShadowVisual_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-02_BP.SASTube-02_BP_C.IsPlayingDoorSequence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bValue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASASTube__BP_C::IsPlayingDoorSequence(bool* bValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-02_BP.SASTube-02_BP_C.IsPlayingDoorSequence");
		
		ASASTube__BP_C_IsPlayingDoorSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bValue != nullptr)
			*bValue = params.bValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-02_BP.SASTube-02_BP_C.UpdateOpenedState
	 * 		Flags  -> ()
	 */
	void ASASTube__BP_C::UpdateOpenedState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-02_BP.SASTube-02_BP_C.UpdateOpenedState");
		
		ASASTube__BP_C_UpdateOpenedState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-02_BP.SASTube-02_BP_C.ForceLightDisabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Disabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASASTube__BP_C::ForceLightDisabled(bool Disabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-02_BP.SASTube-02_BP_C.ForceLightDisabled");
		
		ASASTube__BP_C_ForceLightDisabled_Params params {};
		params.Disabled = Disabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-02_BP.SASTube-02_BP_C.UpdateTubeLighting
	 * 		Flags  -> ()
	 */
	void ASASTube__BP_C::UpdateTubeLighting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-02_BP.SASTube-02_BP_C.UpdateTubeLighting");
		
		ASASTube__BP_C_UpdateTubeLighting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-02_BP.SASTube-02_BP_C.OnActivationChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               LightsEnabled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASASTube__BP_C::OnActivationChanged(bool LightsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-02_BP.SASTube-02_BP_C.OnActivationChanged");
		
		ASASTube__BP_C_OnActivationChanged_Params params {};
		params.LightsEnabled = LightsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-02_BP.SASTube-02_BP_C.SetFrontLightsEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASASTube__BP_C::SetFrontLightsEnabled(bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-02_BP.SASTube-02_BP_C.SetFrontLightsEnabled");
		
		ASASTube__BP_C_SetFrontLightsEnabled_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-02_BP.SASTube-02_BP_C.SetPlayerInTubeZone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASASTube__BP_C::SetPlayerInTubeZone(class ARBPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-02_BP.SASTube-02_BP_C.SetPlayerInTubeZone");
		
		ASASTube__BP_C_SetPlayerInTubeZone_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-02_BP.SASTube-02_BP_C.ApplyLightChannel
	 * 		Flags  -> ()
	 */
	void ASASTube__BP_C::ApplyLightChannel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-02_BP.SASTube-02_BP_C.ApplyLightChannel");
		
		ASASTube__BP_C_ApplyLightChannel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-02_BP.SASTube-02_BP_C.ShouldBeIgnoredForLots
	 * 		Flags  -> ()
	 */
	bool ASASTube__BP_C::ShouldBeIgnoredForLots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-02_BP.SASTube-02_BP_C.ShouldBeIgnoredForLots");
		
		ASASTube__BP_C_ShouldBeIgnoredForLots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-02_BP.SASTube-02_BP_C.IsStateA
	 * 		Flags  -> ()
	 */
	bool ASASTube__BP_C::IsStateA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-02_BP.SASTube-02_BP_C.IsStateA");
		
		ASASTube__BP_C_IsStateA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-02_BP.SASTube-02_BP_C.GetStateName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      stateA                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      stateB                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	bool ASASTube__BP_C::GetStateName(class FString* stateA, class FString* stateB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-02_BP.SASTube-02_BP_C.GetStateName");
		
		ASASTube__BP_C_GetStateName_Params params {};
		
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
	 * 		Name   -> Function SASTube-02_BP.SASTube-02_BP_C.ValidateTubeActivation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASASTube__BP_C::ValidateTubeActivation(bool* Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-02_BP.SASTube-02_BP_C.ValidateTubeActivation");
		
		ASASTube__BP_C_ValidateTubeActivation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Valid != nullptr)
			*Valid = params.Valid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-02_BP.SASTube-02_BP_C.UpdateColor
	 * 		Flags  -> ()
	 */
	void ASASTube__BP_C::UpdateColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-02_BP.SASTube-02_BP_C.UpdateColor");
		
		ASASTube__BP_C_UpdateColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-02_BP.SASTube-02_BP_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Owner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStaticMeshComponent*                        Red_Light                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStaticMeshComponent*                        Green_Light                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FogIntensity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASASTube__BP_C::Initialize(class AActor* Owner, class UStaticMeshComponent* Red_Light, class UStaticMeshComponent* Green_Light, float FogIntensity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-02_BP.SASTube-02_BP_C.Initialize");
		
		ASASTube__BP_C_Initialize_Params params {};
		params.Owner = Owner;
		params.Red_Light = Red_Light;
		params.Green_Light = Green_Light;
		params.FogIntensity = FogIntensity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-02_BP.SASTube-02_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ASASTube__BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-02_BP.SASTube-02_BP_C.UserConstructionScript");
		
		ASASTube__BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-02_BP.SASTube-02_BP_C.BackwardTimeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ASASTube__BP_C::BackwardTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-02_BP.SASTube-02_BP_C.BackwardTimeline__FinishedFunc");
		
		ASASTube__BP_C_BackwardTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-02_BP.SASTube-02_BP_C.BackwardTimeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ASASTube__BP_C::BackwardTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-02_BP.SASTube-02_BP_C.BackwardTimeline__UpdateFunc");
		
		ASASTube__BP_C_BackwardTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-02_BP.SASTube-02_BP_C.ForwardTimeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ASASTube__BP_C::ForwardTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-02_BP.SASTube-02_BP_C.ForwardTimeline__FinishedFunc");
		
		ASASTube__BP_C_ForwardTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-02_BP.SASTube-02_BP_C.ForwardTimeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ASASTube__BP_C::ForwardTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-02_BP.SASTube-02_BP_C.ForwardTimeline__UpdateFunc");
		
		ASASTube__BP_C_ForwardTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-02_BP.SASTube-02_BP_C.LightOff__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ASASTube__BP_C::LightOff__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-02_BP.SASTube-02_BP_C.LightOff__FinishedFunc");
		
		ASASTube__BP_C_LightOff__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-02_BP.SASTube-02_BP_C.LightOff__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ASASTube__BP_C::LightOff__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-02_BP.SASTube-02_BP_C.LightOff__UpdateFunc");
		
		ASASTube__BP_C_LightOff__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-02_BP.SASTube-02_BP_C.LightOn__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ASASTube__BP_C::LightOn__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-02_BP.SASTube-02_BP_C.LightOn__FinishedFunc");
		
		ASASTube__BP_C_LightOn__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-02_BP.SASTube-02_BP_C.LightOn__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ASASTube__BP_C::LightOn__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-02_BP.SASTube-02_BP_C.LightOn__UpdateFunc");
		
		ASASTube__BP_C_LightOn__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-02_BP.SASTube-02_BP_C.Event_OnDoorStateChanged
	 * 		Flags  -> ()
	 */
	void ASASTube__BP_C::Event_OnDoorStateChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-02_BP.SASTube-02_BP_C.Event_OnDoorStateChanged");
		
		ASASTube__BP_C_Event_OnDoorStateChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-02_BP.SASTube-02_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ASASTube__BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-02_BP.SASTube-02_BP_C.ReceiveBeginPlay");
		
		ASASTube__BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-02_BP.SASTube-02_BP_C.CloseBackwardDoor
	 * 		Flags  -> ()
	 */
	void ASASTube__BP_C::CloseBackwardDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-02_BP.SASTube-02_BP_C.CloseBackwardDoor");
		
		ASASTube__BP_C_CloseBackwardDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-02_BP.SASTube-02_BP_C.OpenBackwardDoor
	 * 		Flags  -> ()
	 */
	void ASASTube__BP_C::OpenBackwardDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-02_BP.SASTube-02_BP_C.OpenBackwardDoor");
		
		ASASTube__BP_C_OpenBackwardDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-02_BP.SASTube-02_BP_C.CloseForwardDoor
	 * 		Flags  -> ()
	 */
	void ASASTube__BP_C::CloseForwardDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-02_BP.SASTube-02_BP_C.CloseForwardDoor");
		
		ASASTube__BP_C_CloseForwardDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-02_BP.SASTube-02_BP_C.OpenForwardDoor
	 * 		Flags  -> ()
	 */
	void ASASTube__BP_C::OpenForwardDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-02_BP.SASTube-02_BP_C.OpenForwardDoor");
		
		ASASTube__BP_C_OpenForwardDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-02_BP.SASTube-02_BP_C.StartClosingSequence
	 * 		Flags  -> ()
	 */
	void ASASTube__BP_C::StartClosingSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-02_BP.SASTube-02_BP_C.StartClosingSequence");
		
		ASASTube__BP_C_StartClosingSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-02_BP.SASTube-02_BP_C.StartOpeningSequence
	 * 		Flags  -> ()
	 */
	void ASASTube__BP_C::StartOpeningSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-02_BP.SASTube-02_BP_C.StartOpeningSequence");
		
		ASASTube__BP_C_StartOpeningSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-02_BP.SASTube-02_BP_C.OnDoorSequenceFinished
	 * 		Flags  -> ()
	 */
	void ASASTube__BP_C::OnDoorSequenceFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-02_BP.SASTube-02_BP_C.OnDoorSequenceFinished");
		
		ASASTube__BP_C_OnDoorSequenceFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-02_BP.SASTube-02_BP_C.Event_OnTubeFacingForwardChanged
	 * 		Flags  -> ()
	 */
	void ASASTube__BP_C::Event_OnTubeFacingForwardChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-02_BP.SASTube-02_BP_C.Event_OnTubeFacingForwardChanged");
		
		ASASTube__BP_C_Event_OnTubeFacingForwardChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-02_BP.SASTube-02_BP_C.BndEvt__PlayerInSASTrigger_K2Node_ComponentBoundEvent_0_OnPlayerTriggerVolumeActorEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASASTube__BP_C::BndEvt__PlayerInSASTrigger_K2Node_ComponentBoundEvent_0_OnPlayerTriggerVolumeActorEvent__DelegateSignature(class ARBPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-02_BP.SASTube-02_BP_C.BndEvt__PlayerInSASTrigger_K2Node_ComponentBoundEvent_0_OnPlayerTriggerVolumeActorEvent__DelegateSignature");
		
		ASASTube__BP_C_BndEvt__PlayerInSASTrigger_K2Node_ComponentBoundEvent_0_OnPlayerTriggerVolumeActorEvent__DelegateSignature_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-02_BP.SASTube-02_BP_C.BndEvt__PlayerInSASTrigger_K2Node_ComponentBoundEvent_1_OnPlayerTriggerVolumeActorEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASASTube__BP_C::BndEvt__PlayerInSASTrigger_K2Node_ComponentBoundEvent_1_OnPlayerTriggerVolumeActorEvent__DelegateSignature(class ARBPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-02_BP.SASTube-02_BP_C.BndEvt__PlayerInSASTrigger_K2Node_ComponentBoundEvent_1_OnPlayerTriggerVolumeActorEvent__DelegateSignature");
		
		ASASTube__BP_C_BndEvt__PlayerInSASTrigger_K2Node_ComponentBoundEvent_1_OnPlayerTriggerVolumeActorEvent__DelegateSignature_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-02_BP.SASTube-02_BP_C.BP_OnClose
	 * 		Flags  -> ()
	 */
	void ASASTube__BP_C::BP_OnClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-02_BP.SASTube-02_BP_C.BP_OnClose");
		
		ASASTube__BP_C_BP_OnClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-02_BP.SASTube-02_BP_C.BP_OnOpen
	 * 		Flags  -> ()
	 */
	void ASASTube__BP_C::BP_OnOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-02_BP.SASTube-02_BP_C.BP_OnOpen");
		
		ASASTube__BP_C_BP_OnOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-02_BP.SASTube-02_BP_C.TurnOnLights
	 * 		Flags  -> ()
	 */
	void ASASTube__BP_C::TurnOnLights()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-02_BP.SASTube-02_BP_C.TurnOnLights");
		
		ASASTube__BP_C_TurnOnLights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-02_BP.SASTube-02_BP_C.TurnOffLights
	 * 		Flags  -> ()
	 */
	void ASASTube__BP_C::TurnOffLights()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-02_BP.SASTube-02_BP_C.TurnOffLights");
		
		ASASTube__BP_C_TurnOffLights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-02_BP.SASTube-02_BP_C.SetLight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              SpotLightIntensity                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PointLightIntensity                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FogLight                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MeshLight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASASTube__BP_C::SetLight(float SpotLightIntensity, float PointLightIntensity, float FogLight, float MeshLight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-02_BP.SASTube-02_BP_C.SetLight");
		
		ASASTube__BP_C_SetLight_Params params {};
		params.SpotLightIntensity = SpotLightIntensity;
		params.PointLightIntensity = PointLightIntensity;
		params.FogLight = FogLight;
		params.MeshLight = MeshLight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-02_BP.SASTube-02_BP_C.BP_OnPlayersInsideChanged
	 * 		Flags  -> ()
	 */
	void ASASTube__BP_C::BP_OnPlayersInsideChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-02_BP.SASTube-02_BP_C.BP_OnPlayersInsideChanged");
		
		ASASTube__BP_C_BP_OnPlayersInsideChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-02_BP.SASTube-02_BP_C.ExecuteUbergraph_SASTube-02_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASASTube__BP_C::ExecuteUbergraph_SASTube__BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-02_BP.SASTube-02_BP_C.ExecuteUbergraph_SASTube-02_BP");
		
		ASASTube__BP_C_ExecuteUbergraph_SASTube__BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-02_BP.SASTube-02_BP_C.OnOpenedStageChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASASTube__BP_C*                              SASTube                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASASTube__BP_C::OnOpenedStageChanged__DelegateSignature(class ASASTube__BP_C* SASTube)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-02_BP.SASTube-02_BP_C.OnOpenedStageChanged__DelegateSignature");
		
		ASASTube__BP_C_OnOpenedStageChanged__DelegateSignature_Params params {};
		params.SASTube = SASTube;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-02_BP.SASTube-02_BP_C.AnimationCompletedBackward__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ASASTube__BP_C::AnimationCompletedBackward__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-02_BP.SASTube-02_BP_C.AnimationCompletedBackward__DelegateSignature");
		
		ASASTube__BP_C_AnimationCompletedBackward__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASTube-02_BP.SASTube-02_BP_C.AnimationCompletedForward__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ASASTube__BP_C::AnimationCompletedForward__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SASTube-02_BP.SASTube-02_BP_C.AnimationCompletedForward__DelegateSignature");
		
		ASASTube__BP_C_AnimationCompletedForward__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASASTube__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASASTube__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SASTube_02_BP.SASTube-02_BP_C");
		return ptr;
	}

}


