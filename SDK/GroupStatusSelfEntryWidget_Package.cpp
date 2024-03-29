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
	 * 		Name   -> Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.SetupStatus
	 * 		Flags  -> ()
	 */
	void UGroupStatusSelfEntryWidget_C::SetupStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.SetupStatus");
		
		UGroupStatusSelfEntryWidget_C_SetupStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.SetupCharacterClass
	 * 		Flags  -> ()
	 */
	void UGroupStatusSelfEntryWidget_C::SetupCharacterClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.SetupCharacterClass");
		
		UGroupStatusSelfEntryWidget_C_SetupCharacterClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.Event_Refresh
	 * 		Flags  -> ()
	 */
	void UGroupStatusSelfEntryWidget_C::Event_Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.Event_Refresh");
		
		UGroupStatusSelfEntryWidget_C_Event_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGroupStatusSelfEntryWidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.PreConstruct");
		
		UGroupStatusSelfEntryWidget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.Event_OnPlayerSASChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayerState*                              RBPlayerState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBSAS*                                      currentSAS                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGroupStatusSelfEntryWidget_C::Event_OnPlayerSASChanged(class ARBPlayerState* RBPlayerState, class ARBSAS* currentSAS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.Event_OnPlayerSASChanged");
		
		UGroupStatusSelfEntryWidget_C_Event_OnPlayerSASChanged_Params params {};
		params.RBPlayerState = RBPlayerState;
		params.currentSAS = currentSAS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.Event_Refresh_Audio
	 * 		Flags  -> ()
	 */
	void UGroupStatusSelfEntryWidget_C::Event_Refresh_Audio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.Event_Refresh_Audio");
		
		UGroupStatusSelfEntryWidget_C_Event_Refresh_Audio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.ExecuteUbergraph_GroupStatusSelfEntryWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGroupStatusSelfEntryWidget_C::ExecuteUbergraph_GroupStatusSelfEntryWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.ExecuteUbergraph_GroupStatusSelfEntryWidget");
		
		UGroupStatusSelfEntryWidget_C_ExecuteUbergraph_GroupStatusSelfEntryWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGroupStatusSelfEntryWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGroupStatusSelfEntryWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C");
		return ptr;
	}

}


