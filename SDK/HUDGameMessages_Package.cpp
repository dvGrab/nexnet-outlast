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
	 * 		Name   -> Function HUDGameMessages.HUDGameMessages_C.InitializeMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		EGameMessageCategory                               messageCategory                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EGameObjectiveType                                 ObjectiveType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameMessageAudioParams                     audioParams                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UHUDGameMessages_C::InitializeMessage(const class FText& Message, EGameMessageCategory messageCategory, EGameObjectiveType ObjectiveType, const struct FGameMessageAudioParams& audioParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDGameMessages.HUDGameMessages_C.InitializeMessage");
		
		UHUDGameMessages_C_InitializeMessage_Params params {};
		params.Message = Message;
		params.messageCategory = messageCategory;
		params.ObjectiveType = ObjectiveType;
		params.audioParams = audioParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDGameMessages.HUDGameMessages_C.ShouldShow
	 * 		Flags  -> ()
	 */
	bool UHUDGameMessages_C::ShouldShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDGameMessages.HUDGameMessages_C.ShouldShow");
		
		UHUDGameMessages_C_ShouldShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDGameMessages.HUDGameMessages_C.Finished_1D4430144A0F9FAAAB764FB894A8E54F
	 * 		Flags  -> ()
	 */
	void UHUDGameMessages_C::Finished_1D4430144A0F9FAAAB764FB894A8E54F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDGameMessages.HUDGameMessages_C.Finished_1D4430144A0F9FAAAB764FB894A8E54F");
		
		UHUDGameMessages_C_Finished_1D4430144A0F9FAAAB764FB894A8E54F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDGameMessages.HUDGameMessages_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUDGameMessages_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDGameMessages.HUDGameMessages_C.Construct");
		
		UHUDGameMessages_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDGameMessages.HUDGameMessages_C.OnShowGameMessage_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        gameMessage                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		EGameMessageCategory                               messageCategory                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EGameObjectiveType                                 gameObjectiveType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameMessageAudioParams                     audioParams                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UHUDGameMessages_C::OnShowGameMessage_Event_1(const class FText& gameMessage, EGameMessageCategory messageCategory, EGameObjectiveType gameObjectiveType, const struct FGameMessageAudioParams& audioParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDGameMessages.HUDGameMessages_C.OnShowGameMessage_Event_1");
		
		UHUDGameMessages_C_OnShowGameMessage_Event_1_Params params {};
		params.gameMessage = gameMessage;
		params.messageCategory = messageCategory;
		params.gameObjectiveType = gameObjectiveType;
		params.audioParams = audioParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDGameMessages.HUDGameMessages_C.OnStageEnded_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRBStageID                                  StageID                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FRBMissionID                                MissionID                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               isFail                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUDGameMessages_C::OnStageEnded_Event_1(const struct FRBStageID& StageID, const struct FRBMissionID& MissionID, bool isFail)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDGameMessages.HUDGameMessages_C.OnStageEnded_Event_1");
		
		UHUDGameMessages_C_OnStageEnded_Event_1_Params params {};
		params.StageID = StageID;
		params.MissionID = MissionID;
		params.isFail = isFail;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDGameMessages.HUDGameMessages_C.Event_Show
	 * 		Flags  -> ()
	 */
	void UHUDGameMessages_C::Event_Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDGameMessages.HUDGameMessages_C.Event_Show");
		
		UHUDGameMessages_C_Event_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDGameMessages.HUDGameMessages_C.ShowMessage
	 * 		Flags  -> ()
	 */
	void UHUDGameMessages_C::ShowMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDGameMessages.HUDGameMessages_C.ShowMessage");
		
		UHUDGameMessages_C_ShowMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDGameMessages.HUDGameMessages_C.Event_OnHudModeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHudMode                                           newHudMode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDGameMessages_C::Event_OnHudModeChanged(EHudMode newHudMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDGameMessages.HUDGameMessages_C.Event_OnHudModeChanged");
		
		UHUDGameMessages_C_Event_OnHudModeChanged_Params params {};
		params.newHudMode = newHudMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDGameMessages.HUDGameMessages_C.Event_Hide
	 * 		Flags  -> ()
	 */
	void UHUDGameMessages_C::Event_Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDGameMessages.HUDGameMessages_C.Event_Hide");
		
		UHUDGameMessages_C_Event_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDGameMessages.HUDGameMessages_C.ExecuteUbergraph_HUDGameMessages
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDGameMessages_C::ExecuteUbergraph_HUDGameMessages(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDGameMessages.HUDGameMessages_C.ExecuteUbergraph_HUDGameMessages");
		
		UHUDGameMessages_C_ExecuteUbergraph_HUDGameMessages_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUDGameMessages_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUDGameMessages_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUDGameMessages.HUDGameMessages_C");
		return ptr;
	}

}


