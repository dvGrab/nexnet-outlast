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
	 * 		Name   -> Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.TriggerHoverEvent
	 * 		Flags  -> ()
	 */
	void UProgramTrialVariatorWidget_C::TriggerHoverEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.TriggerHoverEvent");
		
		UProgramTrialVariatorWidget_C_TriggerHoverEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.SetDetailsDisplayed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bDetailsDisplayed                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UProgramTrialVariatorWidget_C::SetDetailsDisplayed(bool bDetailsDisplayed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.SetDetailsDisplayed");
		
		UProgramTrialVariatorWidget_C_SetDetailsDisplayed_Params params {};
		params.bDetailsDisplayed = bDetailsDisplayed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.SetFocused
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFocused                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UProgramTrialVariatorWidget_C::SetFocused(bool bFocused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.SetFocused");
		
		UProgramTrialVariatorWidget_C_SetFocused_Params params {};
		params.bFocused = bFocused;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.SetHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bHovered                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UProgramTrialVariatorWidget_C::SetHovered(bool bHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.SetHovered");
		
		UProgramTrialVariatorWidget_C_SetHovered_Params params {};
		params.bHovered = bHovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.InitFromVariatorInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBVariatorInfo*                             variatorInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProgramTrialVariatorWidget_C::InitFromVariatorInfo(class URBVariatorInfo* variatorInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.InitFromVariatorInfo");
		
		UProgramTrialVariatorWidget_C_InitFromVariatorInfo_Params params {};
		params.variatorInfo = variatorInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.InitFromDifficulty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGameDifficulty                                    Difficulty                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProgramTrialVariatorWidget_C::InitFromDifficulty(EGameDifficulty Difficulty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.InitFromDifficulty");
		
		UProgramTrialVariatorWidget_C_InitFromDifficulty_Params params {};
		params.Difficulty = Difficulty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.Refresh
	 * 		Flags  -> ()
	 */
	void UProgramTrialVariatorWidget_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.Refresh");
		
		UProgramTrialVariatorWidget_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UProgramTrialVariatorWidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.PreConstruct");
		
		UProgramTrialVariatorWidget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.BndEvt__ProgramTrialVariatorWidget_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UProgramTrialVariatorWidget_C::BndEvt__ProgramTrialVariatorWidget_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.BndEvt__ProgramTrialVariatorWidget_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UProgramTrialVariatorWidget_C_BndEvt__ProgramTrialVariatorWidget_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.BndEvt__ProgramTrialVariatorWidget_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UProgramTrialVariatorWidget_C::BndEvt__ProgramTrialVariatorWidget_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.BndEvt__ProgramTrialVariatorWidget_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UProgramTrialVariatorWidget_C_BndEvt__ProgramTrialVariatorWidget_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.ExecuteUbergraph_ProgramTrialVariatorWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProgramTrialVariatorWidget_C::ExecuteUbergraph_ProgramTrialVariatorWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.ExecuteUbergraph_ProgramTrialVariatorWidget");
		
		UProgramTrialVariatorWidget_C_ExecuteUbergraph_ProgramTrialVariatorWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.OnUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UProgramTrialVariatorWidget_C*               Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProgramTrialVariatorWidget_C::OnUnhovered__DelegateSignature(class UProgramTrialVariatorWidget_C* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.OnUnhovered__DelegateSignature");
		
		UProgramTrialVariatorWidget_C_OnUnhovered__DelegateSignature_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UProgramTrialVariatorWidget_C*               Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProgramTrialVariatorWidget_C::OnHovered__DelegateSignature(class UProgramTrialVariatorWidget_C* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.OnHovered__DelegateSignature");
		
		UProgramTrialVariatorWidget_C_OnHovered__DelegateSignature_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProgramTrialVariatorWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProgramTrialVariatorWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C");
		return ptr;
	}

}


