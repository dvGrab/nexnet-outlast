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
	 * 		Name   -> Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.UpdateGroupLeaderDisclaimerVisibility
	 * 		Flags  -> ()
	 */
	void UProgramPosterCarrouselEntry_C::UpdateGroupLeaderDisclaimerVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.UpdateGroupLeaderDisclaimerVisibility");
		
		UProgramPosterCarrouselEntry_C_UpdateGroupLeaderDisclaimerVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.UpdateTooltip
	 * 		Flags  -> ()
	 */
	void UProgramPosterCarrouselEntry_C::UpdateTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.UpdateTooltip");
		
		UProgramPosterCarrouselEntry_C_UpdateTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.GetToolTipWidget
	 * 		Flags  -> ()
	 */
	class UWidget* UProgramPosterCarrouselEntry_C::GetToolTipWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.GetToolTipWidget");
		
		UProgramPosterCarrouselEntry_C_GetToolTipWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.SetSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSelected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UProgramPosterCarrouselEntry_C::SetSelected(bool bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.SetSelected");
		
		UProgramPosterCarrouselEntry_C_SetSelected_Params params {};
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.Refresh
	 * 		Flags  -> ()
	 */
	void UProgramPosterCarrouselEntry_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.Refresh");
		
		UProgramPosterCarrouselEntry_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.GamepadNav_MenuConfirm_Release
	 * 		Flags  -> ()
	 */
	void UProgramPosterCarrouselEntry_C::GamepadNav_MenuConfirm_Release()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.GamepadNav_MenuConfirm_Release");
		
		UProgramPosterCarrouselEntry_C_GamepadNav_MenuConfirm_Release_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.OnFocusLost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UProgramPosterCarrouselEntry_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.OnFocusLost");
		
		UProgramPosterCarrouselEntry_C_OnFocusLost_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.OnFocusReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UProgramPosterCarrouselEntry_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.OnFocusReceived");
		
		UProgramPosterCarrouselEntry_C_OnFocusReceived_Params params {};
		params.MyGeometry = MyGeometry;
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRBProgramInfoRow                           programInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               bLocked                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UProgramPosterCarrouselEntry_C::Setup(const struct FRBProgramInfoRow& programInfo, bool bLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.Setup");
		
		UProgramPosterCarrouselEntry_C_Setup_Params params {};
		params.programInfo = programInfo;
		params.bLocked = bLocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.BndEvt__TrialPosterCarrouselEntry_V2_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UProgramPosterCarrouselEntry_C::BndEvt__TrialPosterCarrouselEntry_V2_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.BndEvt__TrialPosterCarrouselEntry_V2_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UProgramPosterCarrouselEntry_C_BndEvt__TrialPosterCarrouselEntry_V2_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.BndEvt__TrialPosterCarrouselEntry_V2_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UProgramPosterCarrouselEntry_C::BndEvt__TrialPosterCarrouselEntry_V2_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.BndEvt__TrialPosterCarrouselEntry_V2_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UProgramPosterCarrouselEntry_C_BndEvt__TrialPosterCarrouselEntry_V2_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.BndEvt__TrialPosterCarrouselEntry_V2_HoveringDetector_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UProgramPosterCarrouselEntry_C::BndEvt__TrialPosterCarrouselEntry_V2_HoveringDetector_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.BndEvt__TrialPosterCarrouselEntry_V2_HoveringDetector_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UProgramPosterCarrouselEntry_C_BndEvt__TrialPosterCarrouselEntry_V2_HoveringDetector_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.On Hovered
	 * 		Flags  -> ()
	 */
	void UProgramPosterCarrouselEntry_C::On_Hovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.On Hovered");
		
		UProgramPosterCarrouselEntry_C_On_Hovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.On Unhovered
	 * 		Flags  -> ()
	 */
	void UProgramPosterCarrouselEntry_C::On_Unhovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.On Unhovered");
		
		UProgramPosterCarrouselEntry_C_On_Unhovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.On Clicked
	 * 		Flags  -> ()
	 */
	void UProgramPosterCarrouselEntry_C::On_Clicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.On Clicked");
		
		UProgramPosterCarrouselEntry_C_On_Clicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UProgramPosterCarrouselEntry_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.PreConstruct");
		
		UProgramPosterCarrouselEntry_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.ExecuteUbergraph_ProgramPosterCarrouselEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProgramPosterCarrouselEntry_C::ExecuteUbergraph_ProgramPosterCarrouselEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.ExecuteUbergraph_ProgramPosterCarrouselEntry");
		
		UProgramPosterCarrouselEntry_C_ExecuteUbergraph_ProgramPosterCarrouselEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.OnProgramUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        TrialId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProgramPosterCarrouselEntry_C::OnProgramUnhovered__DelegateSignature(const class FName& TrialId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.OnProgramUnhovered__DelegateSignature");
		
		UProgramPosterCarrouselEntry_C_OnProgramUnhovered__DelegateSignature_Params params {};
		params.TrialId = TrialId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.OnProgramHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        TrialId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProgramPosterCarrouselEntry_C::OnProgramHovered__DelegateSignature(const class FName& TrialId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.OnProgramHovered__DelegateSignature");
		
		UProgramPosterCarrouselEntry_C_OnProgramHovered__DelegateSignature_Params params {};
		params.TrialId = TrialId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.OnProgramClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        TrialId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProgramPosterCarrouselEntry_C::OnProgramClicked__DelegateSignature(const class FName& TrialId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C.OnProgramClicked__DelegateSignature");
		
		UProgramPosterCarrouselEntry_C_OnProgramClicked__DelegateSignature_Params params {};
		params.TrialId = TrialId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProgramPosterCarrouselEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProgramPosterCarrouselEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ProgramPosterCarrouselEntry.ProgramPosterCarrouselEntry_C");
		return ptr;
	}

}


