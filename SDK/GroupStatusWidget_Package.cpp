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
	 * 		Name   -> Function GroupStatusWidget.GroupStatusWidget_C.ShouldShow
	 * 		Flags  -> ()
	 */
	bool UGroupStatusWidget_C::ShouldShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GroupStatusWidget.GroupStatusWidget_C.ShouldShow");
		
		UGroupStatusWidget_C_ShouldShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GroupStatusWidget.GroupStatusWidget_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGroupStatusWidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GroupStatusWidget.GroupStatusWidget_C.PreConstruct");
		
		UGroupStatusWidget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GroupStatusWidget.GroupStatusWidget_C.Event_Refresh
	 * 		Flags  -> ()
	 */
	void UGroupStatusWidget_C::Event_Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GroupStatusWidget.GroupStatusWidget_C.Event_Refresh");
		
		UGroupStatusWidget_C_Event_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GroupStatusWidget.GroupStatusWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UGroupStatusWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GroupStatusWidget.GroupStatusWidget_C.Construct");
		
		UGroupStatusWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GroupStatusWidget.GroupStatusWidget_C.Event_OnWatchedPlayerChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   oldPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPlayer*                                   NewPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGroupStatusWidget_C::Event_OnWatchedPlayerChanged(class ARBPlayer* oldPlayer, class ARBPlayer* NewPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GroupStatusWidget.GroupStatusWidget_C.Event_OnWatchedPlayerChanged");
		
		UGroupStatusWidget_C_Event_OnWatchedPlayerChanged_Params params {};
		params.oldPlayer = oldPlayer;
		params.NewPlayer = NewPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GroupStatusWidget.GroupStatusWidget_C.OnPlayerPartyStateUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayerState*                              RBPlayerState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGroupStatusWidget_C::OnPlayerPartyStateUpdated(class ARBPlayerState* RBPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GroupStatusWidget.GroupStatusWidget_C.OnPlayerPartyStateUpdated");
		
		UGroupStatusWidget_C_OnPlayerPartyStateUpdated_Params params {};
		params.RBPlayerState = RBPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GroupStatusWidget.GroupStatusWidget_C.Event_Show
	 * 		Flags  -> ()
	 */
	void UGroupStatusWidget_C::Event_Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GroupStatusWidget.GroupStatusWidget_C.Event_Show");
		
		UGroupStatusWidget_C_Event_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GroupStatusWidget.GroupStatusWidget_C.Event_Hide
	 * 		Flags  -> ()
	 */
	void UGroupStatusWidget_C::Event_Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GroupStatusWidget.GroupStatusWidget_C.Event_Hide");
		
		UGroupStatusWidget_C_Event_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GroupStatusWidget.GroupStatusWidget_C.Destruct
	 * 		Flags  -> ()
	 */
	void UGroupStatusWidget_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GroupStatusWidget.GroupStatusWidget_C.Destruct");
		
		UGroupStatusWidget_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GroupStatusWidget.GroupStatusWidget_C.OnMenuExited
	 * 		Flags  -> ()
	 */
	void UGroupStatusWidget_C::OnMenuExited()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GroupStatusWidget.GroupStatusWidget_C.OnMenuExited");
		
		UGroupStatusWidget_C_OnMenuExited_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GroupStatusWidget.GroupStatusWidget_C.ExecuteUbergraph_GroupStatusWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGroupStatusWidget_C::ExecuteUbergraph_GroupStatusWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GroupStatusWidget.GroupStatusWidget_C.ExecuteUbergraph_GroupStatusWidget");
		
		UGroupStatusWidget_C_ExecuteUbergraph_GroupStatusWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGroupStatusWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGroupStatusWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GroupStatusWidget.GroupStatusWidget_C");
		return ptr;
	}

}


