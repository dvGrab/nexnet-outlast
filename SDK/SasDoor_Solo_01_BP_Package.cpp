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
	 * 		Name   -> Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.HasPlayersInside
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASasDoor_Solo__BP_C::HasPlayersInside(bool* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.HasPlayersInside");
		
		ASasDoor_Solo__BP_C_HasPlayersInside_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.OnSASTubeDoorStateChanged
	 * 		Flags  -> ()
	 */
	void ASasDoor_Solo__BP_C::OnSASTubeDoorStateChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.OnSASTubeDoorStateChanged");
		
		ASasDoor_Solo__BP_C_OnSASTubeDoorStateChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.IsStageExit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASasDoor_Solo__BP_C::IsStageExit(bool* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.IsStageExit");
		
		ASasDoor_Solo__BP_C_IsStageExit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.SetAutoCloseWhenPlayerInside
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               AutoClose                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASasDoor_Solo__BP_C::SetAutoCloseWhenPlayerInside(bool AutoClose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.SetAutoCloseWhenPlayerInside");
		
		ASasDoor_Solo__BP_C_SetAutoCloseWhenPlayerInside_Params params {};
		params.AutoClose = AutoClose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.SetAutoOpenWhenPlayerInside
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               AutoOpen                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASasDoor_Solo__BP_C::SetAutoOpenWhenPlayerInside(bool AutoOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.SetAutoOpenWhenPlayerInside");
		
		ASasDoor_Solo__BP_C_SetAutoOpenWhenPlayerInside_Params params {};
		params.AutoOpen = AutoOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.ForceLightDisabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Disabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASasDoor_Solo__BP_C::ForceLightDisabled(bool Disabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.ForceLightDisabled");
		
		ASasDoor_Solo__BP_C_ForceLightDisabled_Params params {};
		params.Disabled = Disabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.HasOpenedTube
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASasDoor_Solo__BP_C::HasOpenedTube(bool* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.HasOpenedTube");
		
		ASasDoor_Solo__BP_C_HasOpenedTube_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.SpawnTubes
	 * 		Flags  -> ()
	 */
	void ASasDoor_Solo__BP_C::SpawnTubes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.SpawnTubes");
		
		ASasDoor_Solo__BP_C_SpawnTubes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.UpdateArmoredDoors
	 * 		Flags  -> ()
	 */
	void ASasDoor_Solo__BP_C::UpdateArmoredDoors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.UpdateArmoredDoors");
		
		ASasDoor_Solo__BP_C_UpdateArmoredDoors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.SetCurrentText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ASasDoor_Solo__BP_C::SetCurrentText(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.SetCurrentText");
		
		ASasDoor_Solo__BP_C_SetCurrentText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.OnRep_CurrentText
	 * 		Flags  -> ()
	 */
	void ASasDoor_Solo__BP_C::OnRep_CurrentText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.OnRep_CurrentText");
		
		ASasDoor_Solo__BP_C_OnRep_CurrentText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.GetCurrentStageText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void ASasDoor_Solo__BP_C::GetCurrentStageText(class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.GetCurrentStageText");
		
		ASasDoor_Solo__BP_C_GetCurrentStageText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.OnActivationChanged
	 * 		Flags  -> ()
	 */
	void ASasDoor_Solo__BP_C::OnActivationChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.OnActivationChanged");
		
		ASasDoor_Solo__BP_C_OnActivationChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.InitializeTubes
	 * 		Flags  -> ()
	 */
	void ASasDoor_Solo__BP_C::InitializeTubes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.InitializeTubes");
		
		ASasDoor_Solo__BP_C_InitializeTubes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ASasDoor_Solo__BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.UserConstructionScript");
		
		ASasDoor_Solo__BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ASasDoor_Solo__BP_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.Timeline_0__FinishedFunc");
		
		ASasDoor_Solo__BP_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ASasDoor_Solo__BP_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.Timeline_0__UpdateFunc");
		
		ASasDoor_Solo__BP_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.Timeline_1__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ASasDoor_Solo__BP_C::Timeline_1__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.Timeline_1__FinishedFunc");
		
		ASasDoor_Solo__BP_C_Timeline_1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.Timeline_1__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ASasDoor_Solo__BP_C::Timeline_1__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.Timeline_1__UpdateFunc");
		
		ASasDoor_Solo__BP_C_Timeline_1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.BP_OnActivate
	 * 		Flags  -> ()
	 */
	void ASasDoor_Solo__BP_C::BP_OnActivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.BP_OnActivate");
		
		ASasDoor_Solo__BP_C_BP_OnActivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.BP_OnDeactivate
	 * 		Flags  -> ()
	 */
	void ASasDoor_Solo__BP_C::BP_OnDeactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.BP_OnDeactivate");
		
		ASasDoor_Solo__BP_C_BP_OnDeactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.OpenArmoredDoors
	 * 		Flags  -> ()
	 */
	void ASasDoor_Solo__BP_C::OpenArmoredDoors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.OpenArmoredDoors");
		
		ASasDoor_Solo__BP_C_OpenArmoredDoors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.CloseArmoredDoors
	 * 		Flags  -> ()
	 */
	void ASasDoor_Solo__BP_C::CloseArmoredDoors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.CloseArmoredDoors");
		
		ASasDoor_Solo__BP_C_CloseArmoredDoors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ASasDoor_Solo__BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.ReceiveBeginPlay");
		
		ASasDoor_Solo__BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.CanvasRenderUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCanvas*                                     Canvas                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Width                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Height                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASasDoor_Solo__BP_C::CanvasRenderUpdate(class UCanvas* Canvas, int32_t Width, int32_t Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.CanvasRenderUpdate");
		
		ASasDoor_Solo__BP_C_CanvasRenderUpdate_Params params {};
		params.Canvas = Canvas;
		params.Width = Width;
		params.Height = Height;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.UpdateTextCanvas
	 * 		Flags  -> ()
	 */
	void ASasDoor_Solo__BP_C::UpdateTextCanvas()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.UpdateTextCanvas");
		
		ASasDoor_Solo__BP_C_UpdateTextCanvas_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.Event_OnCurrentDirectionChanged
	 * 		Flags  -> ()
	 */
	void ASasDoor_Solo__BP_C::Event_OnCurrentDirectionChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.Event_OnCurrentDirectionChanged");
		
		ASasDoor_Solo__BP_C_Event_OnCurrentDirectionChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.BindEventsOnTube
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASASTube__BP_C*                              tube                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASasDoor_Solo__BP_C::BindEventsOnTube(class ASASTube__BP_C* tube)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.BindEventsOnTube");
		
		ASasDoor_Solo__BP_C_BindEventsOnTube_Params params {};
		params.tube = tube;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.OnOpenedStageChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASASTube__BP_C*                              SASTube                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASasDoor_Solo__BP_C::OnOpenedStageChanged(class ASASTube__BP_C* SASTube)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.OnOpenedStageChanged");
		
		ASasDoor_Solo__BP_C_OnOpenedStageChanged_Params params {};
		params.SASTube = SASTube;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.Event_OnTubesChanged
	 * 		Flags  -> ()
	 */
	void ASasDoor_Solo__BP_C::Event_OnTubesChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.Event_OnTubesChanged");
		
		ASasDoor_Solo__BP_C_Event_OnTubesChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.OnPlayersInsideChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBSASTube*                                  tube                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASasDoor_Solo__BP_C::OnPlayersInsideChanged(class ARBSASTube* tube)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.OnPlayersInsideChanged");
		
		ASasDoor_Solo__BP_C_OnPlayersInsideChanged_Params params {};
		params.tube = tube;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.ExecuteUbergraph_SasDoor_Solo-01_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASasDoor_Solo__BP_C::ExecuteUbergraph_SasDoor_Solo__BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor_Solo-01_BP.SasDoor_Solo-01_BP_C.ExecuteUbergraph_SasDoor_Solo-01_BP");
		
		ASasDoor_Solo__BP_C_ExecuteUbergraph_SasDoor_Solo__BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASasDoor_Solo__BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASasDoor_Solo__BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SasDoor_Solo_01_BP.SasDoor_Solo-01_BP_C");
		return ptr;
	}

}


