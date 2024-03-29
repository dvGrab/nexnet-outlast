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
	 * 		Name   -> Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.ForceHealthRefresh
	 * 		Flags  -> ()
	 */
	void UGroupStatusEntryWidget_C::ForceHealthRefresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.ForceHealthRefresh");
		
		UGroupStatusEntryWidget_C_ForceHealthRefresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.UpdateHealthVisibility
	 * 		Flags  -> ()
	 */
	void UGroupStatusEntryWidget_C::UpdateHealthVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.UpdateHealthVisibility");
		
		UGroupStatusEntryWidget_C_UpdateHealthVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.UpdateStatusVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   NewVisibility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGroupStatusEntryWidget_C::UpdateStatusVisibility(ESlateVisibility NewVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.UpdateStatusVisibility");
		
		UGroupStatusEntryWidget_C_UpdateStatusVisibility_Params params {};
		params.NewVisibility = NewVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.SetupMaterial
	 * 		Flags  -> ()
	 */
	void UGroupStatusEntryWidget_C::SetupMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.SetupMaterial");
		
		UGroupStatusEntryWidget_C_SetupMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.SetupStatus
	 * 		Flags  -> ()
	 */
	void UGroupStatusEntryWidget_C::SetupStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.SetupStatus");
		
		UGroupStatusEntryWidget_C_SetupStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.SetupCharacterClass
	 * 		Flags  -> ()
	 */
	void UGroupStatusEntryWidget_C::SetupCharacterClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.SetupCharacterClass");
		
		UGroupStatusEntryWidget_C_SetupCharacterClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.Event_Refresh
	 * 		Flags  -> ()
	 */
	void UGroupStatusEntryWidget_C::Event_Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.Event_Refresh");
		
		UGroupStatusEntryWidget_C_Event_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.Event_MaxDisplayNameLengthUpdated
	 * 		Flags  -> ()
	 */
	void UGroupStatusEntryWidget_C::Event_MaxDisplayNameLengthUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.Event_MaxDisplayNameLengthUpdated");
		
		UGroupStatusEntryWidget_C_Event_MaxDisplayNameLengthUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UGroupStatusEntryWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.Construct");
		
		UGroupStatusEntryWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.Event_PlayerStatusUpdated
	 * 		Flags  -> ()
	 */
	void UGroupStatusEntryWidget_C::Event_PlayerStatusUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.Event_PlayerStatusUpdated");
		
		UGroupStatusEntryWidget_C_Event_PlayerStatusUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGroupStatusEntryWidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.PreConstruct");
		
		UGroupStatusEntryWidget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.Event_Refresh_Audio
	 * 		Flags  -> ()
	 */
	void UGroupStatusEntryWidget_C::Event_Refresh_Audio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.Event_Refresh_Audio");
		
		UGroupStatusEntryWidget_C_Event_Refresh_Audio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.Event_Refresh_Health
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              newHealth                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               skipAnim                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGroupStatusEntryWidget_C::Event_Refresh_Health(float newHealth, bool skipAnim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.Event_Refresh_Health");
		
		UGroupStatusEntryWidget_C_Event_Refresh_Health_Params params {};
		params.newHealth = newHealth;
		params.skipAnim = skipAnim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.Event_Refresh_ObjectiveItemsCount
	 * 		Flags  -> ()
	 */
	void UGroupStatusEntryWidget_C::Event_Refresh_ObjectiveItemsCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.Event_Refresh_ObjectiveItemsCount");
		
		UGroupStatusEntryWidget_C_Event_Refresh_ObjectiveItemsCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.Event_Refresh_MaxHealth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              newMaxHealth                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGroupStatusEntryWidget_C::Event_Refresh_MaxHealth(float newMaxHealth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.Event_Refresh_MaxHealth");
		
		UGroupStatusEntryWidget_C_Event_Refresh_MaxHealth_Params params {};
		params.newMaxHealth = newMaxHealth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.ExecuteUbergraph_GroupStatusEntryWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGroupStatusEntryWidget_C::ExecuteUbergraph_GroupStatusEntryWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.ExecuteUbergraph_GroupStatusEntryWidget");
		
		UGroupStatusEntryWidget_C_ExecuteUbergraph_GroupStatusEntryWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGroupStatusEntryWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGroupStatusEntryWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GroupStatusEntryWidget.GroupStatusEntryWidget_C");
		return ptr;
	}

}


