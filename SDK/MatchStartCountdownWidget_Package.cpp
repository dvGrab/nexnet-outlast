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
	 * 		Name   -> Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.GetFindPartySearchingText
	 * 		Flags  -> ()
	 */
	class FText UMatchStartCountdownWidget_C::GetFindPartySearchingText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.GetFindPartySearchingText");
		
		UMatchStartCountdownWidget_C_GetFindPartySearchingText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.UpdateCountdownText
	 * 		Flags  -> ()
	 */
	void UMatchStartCountdownWidget_C::UpdateCountdownText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.UpdateCountdownText");
		
		UMatchStartCountdownWidget_C_UpdateCountdownText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.OnFindPartyTicketStateUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFindPartyTicketState                              findPartyTicketState                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMatchStartCountdownWidget_C::OnFindPartyTicketStateUpdated(EFindPartyTicketState findPartyTicketState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.OnFindPartyTicketStateUpdated");
		
		UMatchStartCountdownWidget_C_OnFindPartyTicketStateUpdated_Params params {};
		params.findPartyTicketState = findPartyTicketState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.OnFindPartyStateUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFindPartyState                             FindPartyState                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UMatchStartCountdownWidget_C::OnFindPartyStateUpdated(const struct FFindPartyState& FindPartyState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.OnFindPartyStateUpdated");
		
		UMatchStartCountdownWidget_C_OnFindPartyStateUpdated_Params params {};
		params.FindPartyState = FindPartyState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.UpdateText
	 * 		Flags  -> ()
	 */
	void UMatchStartCountdownWidget_C::UpdateText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.UpdateText");
		
		UMatchStartCountdownWidget_C_UpdateText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.OnMatchStateUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMatchState                                 MatchState                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UMatchStartCountdownWidget_C::OnMatchStateUpdated(const struct FMatchState& MatchState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.OnMatchStateUpdated");
		
		UMatchStartCountdownWidget_C_OnMatchStateUpdated_Params params {};
		params.MatchState = MatchState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.SetIsRightAligned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isRightAligned                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMatchStartCountdownWidget_C::SetIsRightAligned(bool isRightAligned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.SetIsRightAligned");
		
		UMatchStartCountdownWidget_C_SetIsRightAligned_Params params {};
		params.isRightAligned = isRightAligned;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.ShouldShow
	 * 		Flags  -> ()
	 */
	bool UMatchStartCountdownWidget_C::ShouldShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.ShouldShow");
		
		UMatchStartCountdownWidget_C_ShouldShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.CancelMatchCountdown
	 * 		Flags  -> ()
	 */
	void UMatchStartCountdownWidget_C::CancelMatchCountdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.CancelMatchCountdown");
		
		UMatchStartCountdownWidget_C_CancelMatchCountdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.StartMatchCountdown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MatchCancelationGracePeriodServerTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MatchStartServerTime                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bReadyToTravelToMatch                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMatchStartCountdownWidget_C::StartMatchCountdown(float MatchCancelationGracePeriodServerTime, float MatchStartServerTime, bool bReadyToTravelToMatch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.StartMatchCountdown");
		
		UMatchStartCountdownWidget_C_StartMatchCountdown_Params params {};
		params.MatchCancelationGracePeriodServerTime = MatchCancelationGracePeriodServerTime;
		params.MatchStartServerTime = MatchStartServerTime;
		params.bReadyToTravelToMatch = bReadyToTravelToMatch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UMatchStartCountdownWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.Construct");
		
		UMatchStartCountdownWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMatchStartCountdownWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.Tick");
		
		UMatchStartCountdownWidget_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.Destruct
	 * 		Flags  -> ()
	 */
	void UMatchStartCountdownWidget_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.Destruct");
		
		UMatchStartCountdownWidget_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.OnMatchStateUpdatedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBLobbyPlayerState*                         RBLobbyPlayerState                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FMatchState                                 MatchState                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UMatchStartCountdownWidget_C::OnMatchStateUpdatedEvent(class ARBLobbyPlayerState* RBLobbyPlayerState, const struct FMatchState& MatchState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.OnMatchStateUpdatedEvent");
		
		UMatchStartCountdownWidget_C_OnMatchStateUpdatedEvent_Params params {};
		params.RBLobbyPlayerState = RBLobbyPlayerState;
		params.MatchState = MatchState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.OnFindPartyStateUpdatedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBLobbyPlayerState*                         RBLobbyPlayerState                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FFindPartyState                             FindPartyState                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UMatchStartCountdownWidget_C::OnFindPartyStateUpdatedEvent(class ARBLobbyPlayerState* RBLobbyPlayerState, const struct FFindPartyState& FindPartyState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.OnFindPartyStateUpdatedEvent");
		
		UMatchStartCountdownWidget_C_OnFindPartyStateUpdatedEvent_Params params {};
		params.RBLobbyPlayerState = RBLobbyPlayerState;
		params.FindPartyState = FindPartyState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.OnFindPartyTicketStateUpdatedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFindPartyTicketState                              findPartyTicketState                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMatchStartCountdownWidget_C::OnFindPartyTicketStateUpdatedEvent(EFindPartyTicketState findPartyTicketState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.OnFindPartyTicketStateUpdatedEvent");
		
		UMatchStartCountdownWidget_C_OnFindPartyTicketStateUpdatedEvent_Params params {};
		params.findPartyTicketState = findPartyTicketState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.ExecuteUbergraph_MatchStartCountdownWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMatchStartCountdownWidget_C::ExecuteUbergraph_MatchStartCountdownWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.ExecuteUbergraph_MatchStartCountdownWidget");
		
		UMatchStartCountdownWidget_C_ExecuteUbergraph_MatchStartCountdownWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMatchStartCountdownWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMatchStartCountdownWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MatchStartCountdownWidget.MatchStartCountdownWidget_C");
		return ptr;
	}

}


