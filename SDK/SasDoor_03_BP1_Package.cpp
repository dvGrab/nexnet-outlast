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
	 * 		Name   -> Function SasDoor-03_BP1.SasDoor-03_BP1_C.HasPlayersInside
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASasDoor__BP1_C::HasPlayersInside(bool* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor-03_BP1.SasDoor-03_BP1_C.HasPlayersInside");
		
		ASasDoor__BP1_C_HasPlayersInside_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor-03_BP1.SasDoor-03_BP1_C.OnSASTubeDoorStateChanged
	 * 		Flags  -> ()
	 */
	void ASasDoor__BP1_C::OnSASTubeDoorStateChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor-03_BP1.SasDoor-03_BP1_C.OnSASTubeDoorStateChanged");
		
		ASasDoor__BP1_C_OnSASTubeDoorStateChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor-03_BP1.SasDoor-03_BP1_C.IsStageExit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASasDoor__BP1_C::IsStageExit(bool* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor-03_BP1.SasDoor-03_BP1_C.IsStageExit");
		
		ASasDoor__BP1_C_IsStageExit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor-03_BP1.SasDoor-03_BP1_C.SetAutoCloseWhenPlayerInside
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               AutoClose                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASasDoor__BP1_C::SetAutoCloseWhenPlayerInside(bool AutoClose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor-03_BP1.SasDoor-03_BP1_C.SetAutoCloseWhenPlayerInside");
		
		ASasDoor__BP1_C_SetAutoCloseWhenPlayerInside_Params params {};
		params.AutoClose = AutoClose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor-03_BP1.SasDoor-03_BP1_C.SetAutoOpenWhenPlayerInside
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               AutoOpen                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASasDoor__BP1_C::SetAutoOpenWhenPlayerInside(bool AutoOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor-03_BP1.SasDoor-03_BP1_C.SetAutoOpenWhenPlayerInside");
		
		ASasDoor__BP1_C_SetAutoOpenWhenPlayerInside_Params params {};
		params.AutoOpen = AutoOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor-03_BP1.SasDoor-03_BP1_C.ForceLightDisabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Disabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASasDoor__BP1_C::ForceLightDisabled(bool Disabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor-03_BP1.SasDoor-03_BP1_C.ForceLightDisabled");
		
		ASasDoor__BP1_C_ForceLightDisabled_Params params {};
		params.Disabled = Disabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor-03_BP1.SasDoor-03_BP1_C.HasOpenedTube
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASasDoor__BP1_C::HasOpenedTube(bool* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor-03_BP1.SasDoor-03_BP1_C.HasOpenedTube");
		
		ASasDoor__BP1_C_HasOpenedTube_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor-03_BP1.SasDoor-03_BP1_C.SpawnTubes
	 * 		Flags  -> ()
	 */
	void ASasDoor__BP1_C::SpawnTubes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor-03_BP1.SasDoor-03_BP1_C.SpawnTubes");
		
		ASasDoor__BP1_C_SpawnTubes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor-03_BP1.SasDoor-03_BP1_C.UpdateArmoredDoors
	 * 		Flags  -> ()
	 */
	void ASasDoor__BP1_C::UpdateArmoredDoors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor-03_BP1.SasDoor-03_BP1_C.UpdateArmoredDoors");
		
		ASasDoor__BP1_C_UpdateArmoredDoors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor-03_BP1.SasDoor-03_BP1_C.SetCurrentText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ASasDoor__BP1_C::SetCurrentText(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor-03_BP1.SasDoor-03_BP1_C.SetCurrentText");
		
		ASasDoor__BP1_C_SetCurrentText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor-03_BP1.SasDoor-03_BP1_C.OnRep_CurrentText
	 * 		Flags  -> ()
	 */
	void ASasDoor__BP1_C::OnRep_CurrentText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor-03_BP1.SasDoor-03_BP1_C.OnRep_CurrentText");
		
		ASasDoor__BP1_C_OnRep_CurrentText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor-03_BP1.SasDoor-03_BP1_C.GetCurrentStageText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void ASasDoor__BP1_C::GetCurrentStageText(class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor-03_BP1.SasDoor-03_BP1_C.GetCurrentStageText");
		
		ASasDoor__BP1_C_GetCurrentStageText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor-03_BP1.SasDoor-03_BP1_C.OnActivationChanged
	 * 		Flags  -> ()
	 */
	void ASasDoor__BP1_C::OnActivationChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor-03_BP1.SasDoor-03_BP1_C.OnActivationChanged");
		
		ASasDoor__BP1_C_OnActivationChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor-03_BP1.SasDoor-03_BP1_C.InitializeTubes
	 * 		Flags  -> ()
	 */
	void ASasDoor__BP1_C::InitializeTubes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor-03_BP1.SasDoor-03_BP1_C.InitializeTubes");
		
		ASasDoor__BP1_C_InitializeTubes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor-03_BP1.SasDoor-03_BP1_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ASasDoor__BP1_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor-03_BP1.SasDoor-03_BP1_C.UserConstructionScript");
		
		ASasDoor__BP1_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor-03_BP1.SasDoor-03_BP1_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ASasDoor__BP1_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor-03_BP1.SasDoor-03_BP1_C.Timeline_0__FinishedFunc");
		
		ASasDoor__BP1_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor-03_BP1.SasDoor-03_BP1_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ASasDoor__BP1_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor-03_BP1.SasDoor-03_BP1_C.Timeline_0__UpdateFunc");
		
		ASasDoor__BP1_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor-03_BP1.SasDoor-03_BP1_C.Timeline_1__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ASasDoor__BP1_C::Timeline_1__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor-03_BP1.SasDoor-03_BP1_C.Timeline_1__FinishedFunc");
		
		ASasDoor__BP1_C_Timeline_1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor-03_BP1.SasDoor-03_BP1_C.Timeline_1__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ASasDoor__BP1_C::Timeline_1__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor-03_BP1.SasDoor-03_BP1_C.Timeline_1__UpdateFunc");
		
		ASasDoor__BP1_C_Timeline_1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor-03_BP1.SasDoor-03_BP1_C.BP_OnActivate
	 * 		Flags  -> ()
	 */
	void ASasDoor__BP1_C::BP_OnActivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor-03_BP1.SasDoor-03_BP1_C.BP_OnActivate");
		
		ASasDoor__BP1_C_BP_OnActivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor-03_BP1.SasDoor-03_BP1_C.BP_OnDeactivate
	 * 		Flags  -> ()
	 */
	void ASasDoor__BP1_C::BP_OnDeactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor-03_BP1.SasDoor-03_BP1_C.BP_OnDeactivate");
		
		ASasDoor__BP1_C_BP_OnDeactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor-03_BP1.SasDoor-03_BP1_C.OpenArmoredDoors
	 * 		Flags  -> ()
	 */
	void ASasDoor__BP1_C::OpenArmoredDoors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor-03_BP1.SasDoor-03_BP1_C.OpenArmoredDoors");
		
		ASasDoor__BP1_C_OpenArmoredDoors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor-03_BP1.SasDoor-03_BP1_C.CloseArmoredDoors
	 * 		Flags  -> ()
	 */
	void ASasDoor__BP1_C::CloseArmoredDoors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor-03_BP1.SasDoor-03_BP1_C.CloseArmoredDoors");
		
		ASasDoor__BP1_C_CloseArmoredDoors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor-03_BP1.SasDoor-03_BP1_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ASasDoor__BP1_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor-03_BP1.SasDoor-03_BP1_C.ReceiveBeginPlay");
		
		ASasDoor__BP1_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor-03_BP1.SasDoor-03_BP1_C.CanvasRenderUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCanvas*                                     Canvas                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Width                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Height                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASasDoor__BP1_C::CanvasRenderUpdate(class UCanvas* Canvas, int32_t Width, int32_t Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor-03_BP1.SasDoor-03_BP1_C.CanvasRenderUpdate");
		
		ASasDoor__BP1_C_CanvasRenderUpdate_Params params {};
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
	 * 		Name   -> Function SasDoor-03_BP1.SasDoor-03_BP1_C.UpdateTextCanvas
	 * 		Flags  -> ()
	 */
	void ASasDoor__BP1_C::UpdateTextCanvas()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor-03_BP1.SasDoor-03_BP1_C.UpdateTextCanvas");
		
		ASasDoor__BP1_C_UpdateTextCanvas_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor-03_BP1.SasDoor-03_BP1_C.Event_OnCurrentDirectionChanged
	 * 		Flags  -> ()
	 */
	void ASasDoor__BP1_C::Event_OnCurrentDirectionChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor-03_BP1.SasDoor-03_BP1_C.Event_OnCurrentDirectionChanged");
		
		ASasDoor__BP1_C_Event_OnCurrentDirectionChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor-03_BP1.SasDoor-03_BP1_C.BindEventsOnTube
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASASTube__BP_C*                              tube                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASasDoor__BP1_C::BindEventsOnTube(class ASASTube__BP_C* tube)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor-03_BP1.SasDoor-03_BP1_C.BindEventsOnTube");
		
		ASasDoor__BP1_C_BindEventsOnTube_Params params {};
		params.tube = tube;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor-03_BP1.SasDoor-03_BP1_C.OnOpenedStageChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASASTube__BP_C*                              SASTube                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASasDoor__BP1_C::OnOpenedStageChanged(class ASASTube__BP_C* SASTube)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor-03_BP1.SasDoor-03_BP1_C.OnOpenedStageChanged");
		
		ASasDoor__BP1_C_OnOpenedStageChanged_Params params {};
		params.SASTube = SASTube;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor-03_BP1.SasDoor-03_BP1_C.Event_OnTubesChanged
	 * 		Flags  -> ()
	 */
	void ASasDoor__BP1_C::Event_OnTubesChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor-03_BP1.SasDoor-03_BP1_C.Event_OnTubesChanged");
		
		ASasDoor__BP1_C_Event_OnTubesChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor-03_BP1.SasDoor-03_BP1_C.OnPlayersInsideChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBSASTube*                                  tube                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASasDoor__BP1_C::OnPlayersInsideChanged(class ARBSASTube* tube)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor-03_BP1.SasDoor-03_BP1_C.OnPlayersInsideChanged");
		
		ASasDoor__BP1_C_OnPlayersInsideChanged_Params params {};
		params.tube = tube;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SasDoor-03_BP1.SasDoor-03_BP1_C.ExecuteUbergraph_SasDoor-03_BP1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASasDoor__BP1_C::ExecuteUbergraph_SasDoor__BP1(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SasDoor-03_BP1.SasDoor-03_BP1_C.ExecuteUbergraph_SasDoor-03_BP1");
		
		ASasDoor__BP1_C_ExecuteUbergraph_SasDoor__BP1_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASasDoor__BP1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASasDoor__BP1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SasDoor_03_BP1.SasDoor-03_BP1_C");
		return ptr;
	}

}


