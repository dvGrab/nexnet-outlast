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
	 * 		Name   -> Function PartyInviteHudWidget.PartyInviteHudWidget_C.Finished_1B7ED78D47D24A29ECB5FF94734C6C40
	 * 		Flags  -> ()
	 */
	void UPartyInviteHudWidget_C::Finished_1B7ED78D47D24A29ECB5FF94734C6C40()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyInviteHudWidget.PartyInviteHudWidget_C.Finished_1B7ED78D47D24A29ECB5FF94734C6C40");
		
		UPartyInviteHudWidget_C_Finished_1B7ED78D47D24A29ECB5FF94734C6C40_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyInviteHudWidget.PartyInviteHudWidget_C.Event_Show
	 * 		Flags  -> ()
	 */
	void UPartyInviteHudWidget_C::Event_Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyInviteHudWidget.PartyInviteHudWidget_C.Event_Show");
		
		UPartyInviteHudWidget_C_Event_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyInviteHudWidget.PartyInviteHudWidget_C.Event_UpdateDisplayTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DisplayTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              totalDisplayTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPartyInviteHudWidget_C::Event_UpdateDisplayTime(float DisplayTime, float totalDisplayTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyInviteHudWidget.PartyInviteHudWidget_C.Event_UpdateDisplayTime");
		
		UPartyInviteHudWidget_C_Event_UpdateDisplayTime_Params params {};
		params.DisplayTime = DisplayTime;
		params.totalDisplayTime = totalDisplayTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyInviteHudWidget.PartyInviteHudWidget_C.Event_Hide
	 * 		Flags  -> ()
	 */
	void UPartyInviteHudWidget_C::Event_Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyInviteHudWidget.PartyInviteHudWidget_C.Event_Hide");
		
		UPartyInviteHudWidget_C_Event_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyInviteHudWidget.PartyInviteHudWidget_C.Event_Accepted
	 * 		Flags  -> ()
	 */
	void UPartyInviteHudWidget_C::Event_Accepted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyInviteHudWidget.PartyInviteHudWidget_C.Event_Accepted");
		
		UPartyInviteHudWidget_C_Event_Accepted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyInviteHudWidget.PartyInviteHudWidget_C.Event_Refused
	 * 		Flags  -> ()
	 */
	void UPartyInviteHudWidget_C::Event_Refused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyInviteHudWidget.PartyInviteHudWidget_C.Event_Refused");
		
		UPartyInviteHudWidget_C_Event_Refused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyInviteHudWidget.PartyInviteHudWidget_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPartyInviteHudWidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyInviteHudWidget.PartyInviteHudWidget_C.PreConstruct");
		
		UPartyInviteHudWidget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyInviteHudWidget.PartyInviteHudWidget_C.Event_InputSourceChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsGamepad                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPartyInviteHudWidget_C::Event_InputSourceChanged(bool bIsGamepad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyInviteHudWidget.PartyInviteHudWidget_C.Event_InputSourceChanged");
		
		UPartyInviteHudWidget_C_Event_InputSourceChanged_Params params {};
		params.bIsGamepad = bIsGamepad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyInviteHudWidget.PartyInviteHudWidget_C.BndEvt__PartyInviteHudWidget_CommonNotificationWidget_K2Node_ComponentBoundEvent_0_OnAcceptedButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPartyInviteHudWidget_C::BndEvt__PartyInviteHudWidget_CommonNotificationWidget_K2Node_ComponentBoundEvent_0_OnAcceptedButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyInviteHudWidget.PartyInviteHudWidget_C.BndEvt__PartyInviteHudWidget_CommonNotificationWidget_K2Node_ComponentBoundEvent_0_OnAcceptedButtonClicked__DelegateSignature");
		
		UPartyInviteHudWidget_C_BndEvt__PartyInviteHudWidget_CommonNotificationWidget_K2Node_ComponentBoundEvent_0_OnAcceptedButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyInviteHudWidget.PartyInviteHudWidget_C.BndEvt__PartyInviteHudWidget_CommonNotificationWidget_K2Node_ComponentBoundEvent_1_OnDeclinedButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPartyInviteHudWidget_C::BndEvt__PartyInviteHudWidget_CommonNotificationWidget_K2Node_ComponentBoundEvent_1_OnDeclinedButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyInviteHudWidget.PartyInviteHudWidget_C.BndEvt__PartyInviteHudWidget_CommonNotificationWidget_K2Node_ComponentBoundEvent_1_OnDeclinedButtonClicked__DelegateSignature");
		
		UPartyInviteHudWidget_C_BndEvt__PartyInviteHudWidget_CommonNotificationWidget_K2Node_ComponentBoundEvent_1_OnDeclinedButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyInviteHudWidget.PartyInviteHudWidget_C.Event_Blocked
	 * 		Flags  -> ()
	 */
	void UPartyInviteHudWidget_C::Event_Blocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyInviteHudWidget.PartyInviteHudWidget_C.Event_Blocked");
		
		UPartyInviteHudWidget_C_Event_Blocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyInviteHudWidget.PartyInviteHudWidget_C.BndEvt__PartyInviteHudWidget_CommonNotificationWidget_K2Node_ComponentBoundEvent_2_OnBlockButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPartyInviteHudWidget_C::BndEvt__PartyInviteHudWidget_CommonNotificationWidget_K2Node_ComponentBoundEvent_2_OnBlockButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyInviteHudWidget.PartyInviteHudWidget_C.BndEvt__PartyInviteHudWidget_CommonNotificationWidget_K2Node_ComponentBoundEvent_2_OnBlockButtonClicked__DelegateSignature");
		
		UPartyInviteHudWidget_C_BndEvt__PartyInviteHudWidget_CommonNotificationWidget_K2Node_ComponentBoundEvent_2_OnBlockButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyInviteHudWidget.PartyInviteHudWidget_C.ExecuteUbergraph_PartyInviteHudWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPartyInviteHudWidget_C::ExecuteUbergraph_PartyInviteHudWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyInviteHudWidget.PartyInviteHudWidget_C.ExecuteUbergraph_PartyInviteHudWidget");
		
		UPartyInviteHudWidget_C_ExecuteUbergraph_PartyInviteHudWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPartyInviteHudWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPartyInviteHudWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PartyInviteHudWidget.PartyInviteHudWidget_C");
		return ptr;
	}

}


