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
	 * 		Name   -> Function CreditsMenu.CreditsMenu_C.Finished_0560D27B4148CBD98B8758ADF411BFC7
	 * 		Flags  -> ()
	 */
	void UCreditsMenu_C::Finished_0560D27B4148CBD98B8758ADF411BFC7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CreditsMenu.CreditsMenu_C.Finished_0560D27B4148CBD98B8758ADF411BFC7");
		
		UCreditsMenu_C_Finished_0560D27B4148CBD98B8758ADF411BFC7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CreditsMenu.CreditsMenu_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCreditsMenu_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CreditsMenu.CreditsMenu_C.PreConstruct");
		
		UCreditsMenu_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CreditsMenu.CreditsMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UCreditsMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CreditsMenu.CreditsMenu_C.Construct");
		
		UCreditsMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CreditsMenu.CreditsMenu_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCreditsMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CreditsMenu.CreditsMenu_C.Tick");
		
		UCreditsMenu_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CreditsMenu.CreditsMenu_C.Event_OnPop
	 * 		Flags  -> ()
	 */
	void UCreditsMenu_C::Event_OnPop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CreditsMenu.CreditsMenu_C.Event_OnPop");
		
		UCreditsMenu_C_Event_OnPop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CreditsMenu.CreditsMenu_C.Event_OnFocusMenu
	 * 		Flags  -> ()
	 */
	void UCreditsMenu_C::Event_OnFocusMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CreditsMenu.CreditsMenu_C.Event_OnFocusMenu");
		
		UCreditsMenu_C_Event_OnFocusMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CreditsMenu.CreditsMenu_C.CustomEvent_1
	 * 		Flags  -> ()
	 */
	void UCreditsMenu_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CreditsMenu.CreditsMenu_C.CustomEvent_1");
		
		UCreditsMenu_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CreditsMenu.CreditsMenu_C.CustomEvent_2
	 * 		Flags  -> ()
	 */
	void UCreditsMenu_C::CustomEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CreditsMenu.CreditsMenu_C.CustomEvent_2");
		
		UCreditsMenu_C_CustomEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CreditsMenu.CreditsMenu_C.Event_EndCutsceneRequested
	 * 		Flags  -> ()
	 */
	void UCreditsMenu_C::Event_EndCutsceneRequested()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CreditsMenu.CreditsMenu_C.Event_EndCutsceneRequested");
		
		UCreditsMenu_C_Event_EndCutsceneRequested_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CreditsMenu.CreditsMenu_C.HideSkipPrompt
	 * 		Flags  -> ()
	 */
	void UCreditsMenu_C::HideSkipPrompt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CreditsMenu.CreditsMenu_C.HideSkipPrompt");
		
		UCreditsMenu_C_HideSkipPrompt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CreditsMenu.CreditsMenu_C.Event_ShowSkipPrompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShouldStartHideTimer                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCreditsMenu_C::Event_ShowSkipPrompt(bool bShouldStartHideTimer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CreditsMenu.CreditsMenu_C.Event_ShowSkipPrompt");
		
		UCreditsMenu_C_Event_ShowSkipPrompt_Params params {};
		params.bShouldStartHideTimer = bShouldStartHideTimer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CreditsMenu.CreditsMenu_C.BndEvt__CreditsMenu_PromptsBox_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCreditsMenu_C::BndEvt__CreditsMenu_PromptsBox_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CreditsMenu.CreditsMenu_C.BndEvt__CreditsMenu_PromptsBox_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UCreditsMenu_C_BndEvt__CreditsMenu_PromptsBox_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CreditsMenu.CreditsMenu_C.BndEvt__CreditsMenu_PromptsBox_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCreditsMenu_C::BndEvt__CreditsMenu_PromptsBox_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CreditsMenu.CreditsMenu_C.BndEvt__CreditsMenu_PromptsBox_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UCreditsMenu_C_BndEvt__CreditsMenu_PromptsBox_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CreditsMenu.CreditsMenu_C.ExecuteUbergraph_CreditsMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCreditsMenu_C::ExecuteUbergraph_CreditsMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CreditsMenu.CreditsMenu_C.ExecuteUbergraph_CreditsMenu");
		
		UCreditsMenu_C_ExecuteUbergraph_CreditsMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCreditsMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCreditsMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CreditsMenu.CreditsMenu_C");
		return ptr;
	}

}


