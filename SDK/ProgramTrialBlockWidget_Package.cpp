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
	 * 		Name   -> Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.SetFocused
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFocused                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UProgramTrialBlockWidget_C::SetFocused(bool bFocused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.SetFocused");
		
		UProgramTrialBlockWidget_C_SetFocused_Params params {};
		params.bFocused = bFocused;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.SetHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bHovered                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UProgramTrialBlockWidget_C::SetHovered(bool bHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.SetHovered");
		
		UProgramTrialBlockWidget_C_SetHovered_Params params {};
		params.bHovered = bHovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.UpdateSelectedTrialArrow
	 * 		Flags  -> ()
	 */
	void UProgramTrialBlockWidget_C::UpdateSelectedTrialArrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.UpdateSelectedTrialArrow");
		
		UProgramTrialBlockWidget_C_UpdateSelectedTrialArrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.SetSelectedTrial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        TrialId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProgramTrialBlockWidget_C::SetSelectedTrial(const class FName& TrialId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.SetSelectedTrial");
		
		UProgramTrialBlockWidget_C_SetSelectedTrial_Params params {};
		params.TrialId = TrialId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.OnTrialSelectedInternal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        TrialId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProgramTrialBlockWidget_C::OnTrialSelectedInternal(const class FName& TrialId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.OnTrialSelectedInternal");
		
		UProgramTrialBlockWidget_C_OnTrialSelectedInternal_Params params {};
		params.TrialId = TrialId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.AddTrial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRBTrialInfoRow                             trialInfo                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            blockNumber                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bLocked                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bCompleted                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              bestScore                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSelected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UProgramTrialBlockWidget_C::AddTrial(const struct FRBTrialInfoRow& trialInfo, int32_t blockNumber, bool bLocked, bool bCompleted, float bestScore, bool bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.AddTrial");
		
		UProgramTrialBlockWidget_C_AddTrial_Params params {};
		params.trialInfo = trialInfo;
		params.blockNumber = blockNumber;
		params.bLocked = bLocked;
		params.bCompleted = bCompleted;
		params.bestScore = bestScore;
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.SetIsMatchOwner
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsMatchOwner                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UProgramTrialBlockWidget_C::SetIsMatchOwner(bool bIsMatchOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.SetIsMatchOwner");
		
		UProgramTrialBlockWidget_C_SetIsMatchOwner_Params params {};
		params.bIsMatchOwner = bIsMatchOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.Setup
	 * 		Flags  -> ()
	 */
	void UProgramTrialBlockWidget_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.Setup");
		
		UProgramTrialBlockWidget_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsMatchOwner                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UProgramTrialBlockWidget_C::Init(bool bIsMatchOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.Init");
		
		UProgramTrialBlockWidget_C_Init_Params params {};
		params.bIsMatchOwner = bIsMatchOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UProgramTrialBlockWidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.PreConstruct");
		
		UProgramTrialBlockWidget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UProgramTrialBlockWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.Construct");
		
		UProgramTrialBlockWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProgramTrialBlockWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.Tick");
		
		UProgramTrialBlockWidget_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.BndEvt__ProgramTrialBlockWidget_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UProgramTrialBlockWidget_C::BndEvt__ProgramTrialBlockWidget_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.BndEvt__ProgramTrialBlockWidget_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UProgramTrialBlockWidget_C_BndEvt__ProgramTrialBlockWidget_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.BndEvt__ProgramTrialBlockWidget_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UProgramTrialBlockWidget_C::BndEvt__ProgramTrialBlockWidget_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.BndEvt__ProgramTrialBlockWidget_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UProgramTrialBlockWidget_C_BndEvt__ProgramTrialBlockWidget_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.ExecuteUbergraph_ProgramTrialBlockWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProgramTrialBlockWidget_C::ExecuteUbergraph_ProgramTrialBlockWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.ExecuteUbergraph_ProgramTrialBlockWidget");
		
		UProgramTrialBlockWidget_C_ExecuteUbergraph_ProgramTrialBlockWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.OnTrialSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        TrialId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProgramTrialBlockWidget_C::OnTrialSelected__DelegateSignature(const class FName& TrialId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.OnTrialSelected__DelegateSignature");
		
		UProgramTrialBlockWidget_C_OnTrialSelected__DelegateSignature_Params params {};
		params.TrialId = TrialId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProgramTrialBlockWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProgramTrialBlockWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ProgramTrialBlockWidget.ProgramTrialBlockWidget_C");
		return ptr;
	}

}


