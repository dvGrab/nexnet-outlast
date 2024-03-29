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
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.GetLight
	 * 		Flags  -> ()
	 */
	void ATestGateWagon__C::GetLight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.GetLight");
		
		ATestGateWagon__C_GetLight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.SetDestinationSignsText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ATestGateWagon__C::SetDestinationSignsText(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.SetDestinationSignsText");
		
		ATestGateWagon__C_SetDestinationSignsText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.SetAllTVsWithInteractibleUI
	 * 		Flags  -> ()
	 */
	void ATestGateWagon__C::SetAllTVsWithInteractibleUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.SetAllTVsWithInteractibleUI");
		
		ATestGateWagon__C_SetAllTVsWithInteractibleUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.ForceAllTvUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ForceUP                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATestGateWagon__C::ForceAllTvUp(bool ForceUP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.ForceAllTvUp");
		
		ATestGateWagon__C_ForceAllTvUp_Params params {};
		params.ForceUP = ForceUP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.CanPlayIntroAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATestGateWagon__C::CanPlayIntroAnim(bool* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.CanPlayIntroAnim");
		
		ATestGateWagon__C_CanPlayIntroAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.SetAllTVsON
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATestGateWagon__C::SetAllTVsON(bool IsOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.SetAllTVsON");
		
		ATestGateWagon__C_SetAllTVsON_Params params {};
		params.IsOn = IsOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.PlayAnimationOnAllTVs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNarrativeScreenAnimationData               animData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void ATestGateWagon__C::PlayAnimationOnAllTVs(const struct FNarrativeScreenAnimationData& animData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.PlayAnimationOnAllTVs");
		
		ATestGateWagon__C_PlayAnimationOnAllTVs_Params params {};
		params.animData = animData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.GetLocalPlayerChairPanel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBSASChairPanelComponent*                   Chair                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATestGateWagon__C::GetLocalPlayerChairPanel(class URBSASChairPanelComponent** Chair)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.GetLocalPlayerChairPanel");
		
		ATestGateWagon__C_GetLocalPlayerChairPanel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Chair != nullptr)
			*Chair = params.Chair;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.ForcePlayersOutOfChairs
	 * 		Flags  -> ()
	 */
	void ATestGateWagon__C::ForcePlayersOutOfChairs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.ForcePlayersOutOfChairs");
		
		ATestGateWagon__C_ForcePlayersOutOfChairs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.UpdateSASDoorText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRBStageID                                  StageID                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class ASasDoor__BP1_C*                             door                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATestGateWagon__C::UpdateSASDoorText(const struct FRBStageID& StageID, class ASasDoor__BP1_C* door)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.UpdateSASDoorText");
		
		ATestGateWagon__C_UpdateSASDoorText_Params params {};
		params.StageID = StageID;
		params.door = door;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.StopTimeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ATestGateWagon__C::StopTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.StopTimeline__FinishedFunc");
		
		ATestGateWagon__C_StopTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.StopTimeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ATestGateWagon__C::StopTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.StopTimeline__UpdateFunc");
		
		ATestGateWagon__C_StopTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.FlickeringTimeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ATestGateWagon__C::FlickeringTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.FlickeringTimeline__FinishedFunc");
		
		ATestGateWagon__C_FlickeringTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.FlickeringTimeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ATestGateWagon__C::FlickeringTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.FlickeringTimeline__UpdateFunc");
		
		ATestGateWagon__C_FlickeringTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ATestGateWagon__C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.Timeline_0__FinishedFunc");
		
		ATestGateWagon__C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ATestGateWagon__C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.Timeline_0__UpdateFunc");
		
		ATestGateWagon__C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.ShakingCablesTimeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ATestGateWagon__C::ShakingCablesTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.ShakingCablesTimeline__FinishedFunc");
		
		ATestGateWagon__C_ShakingCablesTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.ShakingCablesTimeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ATestGateWagon__C::ShakingCablesTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.ShakingCablesTimeline__UpdateFunc");
		
		ATestGateWagon__C_ShakingCablesTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.Timeline_1__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ATestGateWagon__C::Timeline_1__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.Timeline_1__FinishedFunc");
		
		ATestGateWagon__C_Timeline_1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.Timeline_1__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ATestGateWagon__C::Timeline_1__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.Timeline_1__UpdateFunc");
		
		ATestGateWagon__C_Timeline_1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.Timeline_2__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ATestGateWagon__C::Timeline_2__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.Timeline_2__FinishedFunc");
		
		ATestGateWagon__C_Timeline_2__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.Timeline_2__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ATestGateWagon__C::Timeline_2__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.Timeline_2__UpdateFunc");
		
		ATestGateWagon__C_Timeline_2__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.Timeline_3__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ATestGateWagon__C::Timeline_3__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.Timeline_3__FinishedFunc");
		
		ATestGateWagon__C_Timeline_3__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.Timeline_3__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ATestGateWagon__C::Timeline_3__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.Timeline_3__UpdateFunc");
		
		ATestGateWagon__C_Timeline_3__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.bpiBlurEntity
	 * 		Flags  -> ()
	 */
	void ATestGateWagon__C::bpiBlurEntity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.bpiBlurEntity");
		
		ATestGateWagon__C_bpiBlurEntity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.UpdateSASTexts
	 * 		Flags  -> ()
	 */
	void ATestGateWagon__C::UpdateSASTexts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.UpdateSASTexts");
		
		ATestGateWagon__C_UpdateSASTexts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.StartTrain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ToLobby                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATestGateWagon__C::StartTrain(bool ToLobby)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.StartTrain");
		
		ATestGateWagon__C_StartTrain_Params params {};
		params.ToLobby = ToLobby;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.StopTrain
	 * 		Flags  -> ()
	 */
	void ATestGateWagon__C::StopTrain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.StopTrain");
		
		ATestGateWagon__C_StopTrain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ATestGateWagon__C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.ReceiveBeginPlay");
		
		ATestGateWagon__C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.StartTrainNoDelay
	 * 		Flags  -> ()
	 */
	void ATestGateWagon__C::StartTrainNoDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.StartTrainNoDelay");
		
		ATestGateWagon__C_StartTrainNoDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.CameraShakeTrainRideContinuous
	 * 		Flags  -> ()
	 */
	void ATestGateWagon__C::CameraShakeTrainRideContinuous()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.CameraShakeTrainRideContinuous");
		
		ATestGateWagon__C_CameraShakeTrainRideContinuous_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.StartFlickeringLights
	 * 		Flags  -> ()
	 */
	void ATestGateWagon__C::StartFlickeringLights()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.StartFlickeringLights");
		
		ATestGateWagon__C_StartFlickeringLights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.BrakingFlickeringLights
	 * 		Flags  -> ()
	 */
	void ATestGateWagon__C::BrakingFlickeringLights()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.BrakingFlickeringLights");
		
		ATestGateWagon__C_BrakingFlickeringLights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.SetCableShakeFadeIn
	 * 		Flags  -> ()
	 */
	void ATestGateWagon__C::SetCableShakeFadeIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.SetCableShakeFadeIn");
		
		ATestGateWagon__C_SetCableShakeFadeIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.SetCableShakeFadeOut
	 * 		Flags  -> ()
	 */
	void ATestGateWagon__C::SetCableShakeFadeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.SetCableShakeFadeOut");
		
		ATestGateWagon__C_SetCableShakeFadeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.MoveAwayFromLobby
	 * 		Flags  -> ()
	 */
	void ATestGateWagon__C::MoveAwayFromLobby()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.MoveAwayFromLobby");
		
		ATestGateWagon__C_MoveAwayFromLobby_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.ArriveToLobby
	 * 		Flags  -> ()
	 */
	void ATestGateWagon__C::ArriveToLobby()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.ArriveToLobby");
		
		ATestGateWagon__C_ArriveToLobby_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.MoveAwayFromMission
	 * 		Flags  -> ()
	 */
	void ATestGateWagon__C::MoveAwayFromMission()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.MoveAwayFromMission");
		
		ATestGateWagon__C_MoveAwayFromMission_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.ArriveToMission
	 * 		Flags  -> ()
	 */
	void ATestGateWagon__C::ArriveToMission()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.ArriveToMission");
		
		ATestGateWagon__C_ArriveToMission_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.EnableLight
	 * 		Flags  -> ()
	 */
	void ATestGateWagon__C::EnableLight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.EnableLight");
		
		ATestGateWagon__C_EnableLight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.OnGamePhaseUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGamePhase                                         gamePhase                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATestGateWagon__C::OnGamePhaseUpdated(EGamePhase gamePhase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.OnGamePhaseUpdated");
		
		ATestGateWagon__C_OnGamePhaseUpdated_Params params {};
		params.gamePhase = gamePhase;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.OnGameStageInfoChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRBGameStageInfo                            gameStageInfo                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ATestGateWagon__C::OnGameStageInfoChanged(const struct FRBGameStageInfo& gameStageInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.OnGameStageInfoChanged");
		
		ATestGateWagon__C_OnGameStageInfoChanged_Params params {};
		params.gameStageInfo = gameStageInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.TryStopTrain
	 * 		Flags  -> ()
	 */
	void ATestGateWagon__C::TryStopTrain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.TryStopTrain");
		
		ATestGateWagon__C_TryStopTrain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.StartIntroSequence
	 * 		Flags  -> ()
	 */
	void ATestGateWagon__C::StartIntroSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.StartIntroSequence");
		
		ATestGateWagon__C_StartIntroSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.ForceTvUp
	 * 		Flags  -> ()
	 */
	void ATestGateWagon__C::ForceTvUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.ForceTvUp");
		
		ATestGateWagon__C_ForceTvUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.DisableLight
	 * 		Flags  -> ()
	 */
	void ATestGateWagon__C::DisableLight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.DisableLight");
		
		ATestGateWagon__C_DisableLight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATestGateWagon__C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.ReceiveEndPlay");
		
		ATestGateWagon__C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.Start Narrative Fail Music
	 * 		Flags  -> ()
	 */
	void ATestGateWagon__C::Start_Narrative_Fail_Music()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.Start Narrative Fail Music");
		
		ATestGateWagon__C_Start_Narrative_Fail_Music_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.OnIntroAnimationFinished
	 * 		Flags  -> ()
	 */
	void ATestGateWagon__C::OnIntroAnimationFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.OnIntroAnimationFinished");
		
		ATestGateWagon__C_OnIntroAnimationFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.StopDrugSpray
	 * 		Flags  -> ()
	 */
	void ATestGateWagon__C::StopDrugSpray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.StopDrugSpray");
		
		ATestGateWagon__C_StopDrugSpray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.StartDrugSpray
	 * 		Flags  -> ()
	 */
	void ATestGateWagon__C::StartDrugSpray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.StartDrugSpray");
		
		ATestGateWagon__C_StartDrugSpray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.PrintMovieDebug
	 * 		Flags  -> ()
	 */
	void ATestGateWagon__C::PrintMovieDebug()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.PrintMovieDebug");
		
		ATestGateWagon__C_PrintMovieDebug_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.UpdateSAS
	 * 		Flags  -> ()
	 */
	void ATestGateWagon__C::UpdateSAS()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.UpdateSAS");
		
		ATestGateWagon__C_UpdateSAS_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.OnCurrentSasChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBSAS*                                      oldSAS                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBSAS*                                      currentSAS                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATestGateWagon__C::OnCurrentSasChanged(class ARBSAS* oldSAS, class ARBSAS* currentSAS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.OnCurrentSasChanged");
		
		ATestGateWagon__C_OnCurrentSasChanged_Params params {};
		params.oldSAS = oldSAS;
		params.currentSAS = currentSAS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.OnSASStateChnagedCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESASState                                          State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATestGateWagon__C::OnSASStateChnagedCallback(ESASState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.OnSASStateChnagedCallback");
		
		ATestGateWagon__C_OnSASStateChnagedCallback_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.CloseLight
	 * 		Flags  -> ()
	 */
	void ATestGateWagon__C::CloseLight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.CloseLight");
		
		ATestGateWagon__C_CloseLight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.OnTutorialIntroFinished
	 * 		Flags  -> ()
	 */
	void ATestGateWagon__C::OnTutorialIntroFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.OnTutorialIntroFinished");
		
		ATestGateWagon__C_OnTutorialIntroFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TestGateWagon-01.TestGateWagon-01_C.ExecuteUbergraph_TestGateWagon-01
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATestGateWagon__C::ExecuteUbergraph_TestGateWagon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGateWagon-01.TestGateWagon-01_C.ExecuteUbergraph_TestGateWagon-01");
		
		ATestGateWagon__C_ExecuteUbergraph_TestGateWagon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATestGateWagon__C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATestGateWagon__C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TestGateWagon_01.TestGateWagon-01_C");
		return ptr;
	}

}


