/**
 * Name: READYORNOT
 * Version: 0.0.1
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
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.GetJoystickDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EJoystickTypes                                     Stick                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCoreUObject_FVector2D                      StickInput                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_UI_TestController_C::GetJoystickDirection(EJoystickTypes Stick, struct FCoreUObject_FVector2D* StickInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_TestController.BP_UI_TestController_C.GetJoystickDirection");
		
		ABP_UI_TestController_C_GetJoystickDirection_Params params {};
		params.Stick = Stick;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StickInput != nullptr)
			*StickInput = params.StickInput;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.HideEscapeMenu
	 * 		Flags  -> ()
	 */
	void ABP_UI_TestController_C::HideEscapeMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_TestController.BP_UI_TestController_C.HideEscapeMenu");
		
		ABP_UI_TestController_C_HideEscapeMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.InpActEvt_Equals_K2Node_InputKeyEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_UI_TestController_C::InpActEvt_Equals_K2Node_InputKeyEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_TestController.BP_UI_TestController_C.InpActEvt_Equals_K2Node_InputKeyEvent_4");
		
		ABP_UI_TestController_C_InpActEvt_Equals_K2Node_InputKeyEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.InpActEvt_Slash_K2Node_InputKeyEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_UI_TestController_C::InpActEvt_Slash_K2Node_InputKeyEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_TestController.BP_UI_TestController_C.InpActEvt_Slash_K2Node_InputKeyEvent_3");
		
		ABP_UI_TestController_C_InpActEvt_Slash_K2Node_InputKeyEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.InpActEvt_VoteYes_K2Node_InputActionEvent_5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_UI_TestController_C::InpActEvt_VoteYes_K2Node_InputActionEvent_5(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_TestController.BP_UI_TestController_C.InpActEvt_VoteYes_K2Node_InputActionEvent_5");
		
		ABP_UI_TestController_C_InpActEvt_VoteYes_K2Node_InputActionEvent_5_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.InpActEvt_VoteNo_K2Node_InputActionEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_UI_TestController_C::InpActEvt_VoteNo_K2Node_InputActionEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_TestController.BP_UI_TestController_C.InpActEvt_VoteNo_K2Node_InputActionEvent_4");
		
		ABP_UI_TestController_C_InpActEvt_VoteNo_K2Node_InputActionEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.OnFailure_396BB7CB46A59B1613A2548E31963ABF
	 * 		Flags  -> ()
	 */
	void ABP_UI_TestController_C::OnFailure_396BB7CB46A59B1613A2548E31963ABF()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_TestController.BP_UI_TestController_C.OnFailure_396BB7CB46A59B1613A2548E31963ABF");
		
		ABP_UI_TestController_C_OnFailure_396BB7CB46A59B1613A2548E31963ABF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.OnSuccess_396BB7CB46A59B1613A2548E31963ABF
	 * 		Flags  -> ()
	 */
	void ABP_UI_TestController_C::OnSuccess_396BB7CB46A59B1613A2548E31963ABF()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_TestController.BP_UI_TestController_C.OnSuccess_396BB7CB46A59B1613A2548E31963ABF");
		
		ABP_UI_TestController_C_OnSuccess_396BB7CB46A59B1613A2548E31963ABF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.InpActEvt_ViewScoreboard_K2Node_InputActionEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_UI_TestController_C::InpActEvt_ViewScoreboard_K2Node_InputActionEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_TestController.BP_UI_TestController_C.InpActEvt_ViewScoreboard_K2Node_InputActionEvent_3");
		
		ABP_UI_TestController_C_InpActEvt_ViewScoreboard_K2Node_InputActionEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.InpActEvt_ViewScoreboard_K2Node_InputActionEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_UI_TestController_C::InpActEvt_ViewScoreboard_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_TestController.BP_UI_TestController_C.InpActEvt_ViewScoreboard_K2Node_InputActionEvent_2");
		
		ABP_UI_TestController_C_InpActEvt_ViewScoreboard_K2Node_InputActionEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.InpActEvt_End_K2Node_InputKeyEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_UI_TestController_C::InpActEvt_End_K2Node_InputKeyEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_TestController.BP_UI_TestController_C.InpActEvt_End_K2Node_InputKeyEvent_2");
		
		ABP_UI_TestController_C_InpActEvt_End_K2Node_InputKeyEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.InpActEvt_End_K2Node_InputKeyEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_UI_TestController_C::InpActEvt_End_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_TestController.BP_UI_TestController_C.InpActEvt_End_K2Node_InputKeyEvent_1");
		
		ABP_UI_TestController_C_InpActEvt_End_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.InpActEvt_Chat_K2Node_InputActionEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_UI_TestController_C::InpActEvt_Chat_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_TestController.BP_UI_TestController_C.InpActEvt_Chat_K2Node_InputActionEvent_1");
		
		ABP_UI_TestController_C_InpActEvt_Chat_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.ServerPossesPawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_UI_TestController_C::ServerPossesPawn(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_TestController.BP_UI_TestController_C.ServerPossesPawn");
		
		ABP_UI_TestController_C_ServerPossesPawn_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.CloseDeployMenu
	 * 		Flags  -> ()
	 */
	void ABP_UI_TestController_C::CloseDeployMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_TestController.BP_UI_TestController_C.CloseDeployMenu");
		
		ABP_UI_TestController_C_CloseDeployMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.Server_FreeCamera
	 * 		Flags  -> ()
	 */
	void ABP_UI_TestController_C::Server_FreeCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_TestController.BP_UI_TestController_C.Server_FreeCamera");
		
		ABP_UI_TestController_C_Server_FreeCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.SpawnEscapeMenu
	 * 		Flags  -> ()
	 */
	void ABP_UI_TestController_C::SpawnEscapeMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_TestController.BP_UI_TestController_C.SpawnEscapeMenu");
		
		ABP_UI_TestController_C_SpawnEscapeMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.ShowCoopScoreChangeWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ScoreChangeValue                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_UI_TestController_C::ShowCoopScoreChangeWidget(float ScoreChangeValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_TestController.BP_UI_TestController_C.ShowCoopScoreChangeWidget");
		
		ABP_UI_TestController_C_ShowCoopScoreChangeWidget_Params params {};
		params.ScoreChangeValue = ScoreChangeValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.RequestVoteInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoteData                                   CurrentVoteData                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ABP_UI_TestController_C::RequestVoteInput(const struct FVoteData& CurrentVoteData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_TestController.BP_UI_TestController_C.RequestVoteInput");
		
		ABP_UI_TestController_C_RequestVoteInput_Params params {};
		params.CurrentVoteData = CurrentVoteData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.SetUpVoteWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_VotePopUp_C*                              Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_UI_TestController_C::SetUpVoteWidget(class UW_VotePopUp_C* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_TestController.BP_UI_TestController_C.SetUpVoteWidget");
		
		ABP_UI_TestController_C_SetUpVoteWidget_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.StopVoteInput
	 * 		Flags  -> ()
	 */
	void ABP_UI_TestController_C::StopVoteInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_TestController.BP_UI_TestController_C.StopVoteInput");
		
		ABP_UI_TestController_C_StopVoteInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.ShowLoadoutUI
	 * 		Flags  -> ()
	 */
	void ABP_UI_TestController_C::ShowLoadoutUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_TestController.BP_UI_TestController_C.ShowLoadoutUI");
		
		ABP_UI_TestController_C_ShowLoadoutUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.BP_ClientWasKicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        KickReason                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_UI_TestController_C::BP_ClientWasKicked(const class FText& KickReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_TestController.BP_UI_TestController_C.BP_ClientWasKicked");
		
		ABP_UI_TestController_C_BP_ClientWasKicked_Params params {};
		params.KickReason = KickReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.CloseLoadoutUI
	 * 		Flags  -> ()
	 */
	void ABP_UI_TestController_C::CloseLoadoutUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_TestController.BP_UI_TestController_C.CloseLoadoutUI");
		
		ABP_UI_TestController_C_CloseLoadoutUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.ToggleCredits
	 * 		Flags  -> ()
	 */
	void ABP_UI_TestController_C::ToggleCredits()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_TestController.BP_UI_TestController_C.ToggleCredits");
		
		ABP_UI_TestController_C_ToggleCredits_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.TogglePreMissionTablet
	 * 		Flags  -> ()
	 */
	void ABP_UI_TestController_C::TogglePreMissionTablet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_TestController.BP_UI_TestController_C.TogglePreMissionTablet");
		
		ABP_UI_TestController_C_TogglePreMissionTablet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.ExecuteUbergraph_BP_UI_TestController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_UI_TestController_C::ExecuteUbergraph_BP_UI_TestController(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_TestController.BP_UI_TestController_C.ExecuteUbergraph_BP_UI_TestController");
		
		ABP_UI_TestController_C_ExecuteUbergraph_BP_UI_TestController_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_UI_TestController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_UI_TestController_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_UI_TestController.BP_UI_TestController_C");
		return ptr;
	}

}


