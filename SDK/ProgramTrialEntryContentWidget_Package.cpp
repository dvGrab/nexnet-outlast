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
	 * 		Name   -> Function ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C.SetFocused
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInFocused                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UProgramTrialEntryContentWidget_C::SetFocused(bool bInFocused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C.SetFocused");
		
		UProgramTrialEntryContentWidget_C_SetFocused_Params params {};
		params.bInFocused = bInFocused;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C.SetHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInHovered                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UProgramTrialEntryContentWidget_C::SetHovered(bool bInHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C.SetHovered");
		
		UProgramTrialEntryContentWidget_C_SetHovered_Params params {};
		params.bInHovered = bInHovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C.SetSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UProgramTrialEntryContentWidget_C::SetSelected(bool bInSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C.SetSelected");
		
		UProgramTrialEntryContentWidget_C_SetSelected_Params params {};
		params.bInSelected = bInSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C.SetIsMatchOwner
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsMatchOwner                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UProgramTrialEntryContentWidget_C::SetIsMatchOwner(bool bIsMatchOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C.SetIsMatchOwner");
		
		UProgramTrialEntryContentWidget_C_SetIsMatchOwner_Params params {};
		params.bIsMatchOwner = bIsMatchOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UProgramTrialBlockWidget_C*                  parentBlock                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRBTrialInfoRow                             trialInfo                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               bLocked                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bCompleted                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              bestScore                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSelected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsMatchOwner                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UProgramTrialEntryContentWidget_C::Init(class UProgramTrialBlockWidget_C* parentBlock, const struct FRBTrialInfoRow& trialInfo, bool bLocked, bool bCompleted, float bestScore, bool bSelected, bool bIsMatchOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C.Init");
		
		UProgramTrialEntryContentWidget_C_Init_Params params {};
		params.parentBlock = parentBlock;
		params.trialInfo = trialInfo;
		params.bLocked = bLocked;
		params.bCompleted = bCompleted;
		params.bestScore = bestScore;
		params.bSelected = bSelected;
		params.bIsMatchOwner = bIsMatchOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C.Setup
	 * 		Flags  -> ()
	 */
	void UProgramTrialEntryContentWidget_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C.Setup");
		
		UProgramTrialEntryContentWidget_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UProgramTrialEntryContentWidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C.PreConstruct");
		
		UProgramTrialEntryContentWidget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C.BndEvt__ProgramTrialEntryContentWidget_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UProgramTrialEntryContentWidget_C::BndEvt__ProgramTrialEntryContentWidget_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C.BndEvt__ProgramTrialEntryContentWidget_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UProgramTrialEntryContentWidget_C_BndEvt__ProgramTrialEntryContentWidget_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C.BndEvt__ProgramTrialEntryContentWidget_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UProgramTrialEntryContentWidget_C::BndEvt__ProgramTrialEntryContentWidget_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C.BndEvt__ProgramTrialEntryContentWidget_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UProgramTrialEntryContentWidget_C_BndEvt__ProgramTrialEntryContentWidget_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C.BndEvt__ProgramTrialEntryContentWidget_Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UProgramTrialEntryContentWidget_C::BndEvt__ProgramTrialEntryContentWidget_Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C.BndEvt__ProgramTrialEntryContentWidget_Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UProgramTrialEntryContentWidget_C_BndEvt__ProgramTrialEntryContentWidget_Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C.ExecuteUbergraph_ProgramTrialEntryContentWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProgramTrialEntryContentWidget_C::ExecuteUbergraph_ProgramTrialEntryContentWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C.ExecuteUbergraph_ProgramTrialEntryContentWidget");
		
		UProgramTrialEntryContentWidget_C_ExecuteUbergraph_ProgramTrialEntryContentWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C.OnTrialSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        TrialId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProgramTrialEntryContentWidget_C::OnTrialSelected__DelegateSignature(const class FName& TrialId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C.OnTrialSelected__DelegateSignature");
		
		UProgramTrialEntryContentWidget_C_OnTrialSelected__DelegateSignature_Params params {};
		params.TrialId = TrialId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProgramTrialEntryContentWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProgramTrialEntryContentWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C");
		return ptr;
	}

}


