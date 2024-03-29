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
	 * 		Name   -> Function PlayerHud.PlayerHud_C.SequenceEvent__ENTRYPOINTPlayerHud_2
	 * 		Flags  -> ()
	 */
	void UPlayerHud_C::SequenceEvent__ENTRYPOINTPlayerHud_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHud.PlayerHud_C.SequenceEvent__ENTRYPOINTPlayerHud_2");
		
		UPlayerHud_C_SequenceEvent__ENTRYPOINTPlayerHud_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHud.PlayerHud_C.SequenceEvent__ENTRYPOINTPlayerHud_1
	 * 		Flags  -> ()
	 */
	void UPlayerHud_C::SequenceEvent__ENTRYPOINTPlayerHud_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHud.PlayerHud_C.SequenceEvent__ENTRYPOINTPlayerHud_1");
		
		UPlayerHud_C_SequenceEvent__ENTRYPOINTPlayerHud_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHud.PlayerHud_C.Event_HideBadgeProgress
	 * 		Flags  -> ()
	 */
	void UPlayerHud_C::Event_HideBadgeProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHud.PlayerHud_C.Event_HideBadgeProgress");
		
		UPlayerHud_C_Event_HideBadgeProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHud.PlayerHud_C.Event_ShowBadgeProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRBBadgeHudProgressDisplayDetails           progress                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UPlayerHud_C::Event_ShowBadgeProgress(const struct FRBBadgeHudProgressDisplayDetails& progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHud.PlayerHud_C.Event_ShowBadgeProgress");
		
		UPlayerHud_C_Event_ShowBadgeProgress_Params params {};
		params.progress = progress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHud.PlayerHud_C.PlayTransitionFeedback
	 * 		Flags  -> ()
	 */
	void UPlayerHud_C::PlayTransitionFeedback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHud.PlayerHud_C.PlayTransitionFeedback");
		
		UPlayerHud_C_PlayTransitionFeedback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHud.PlayerHud_C.BlackoutCompleted
	 * 		Flags  -> ()
	 */
	void UPlayerHud_C::BlackoutCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHud.PlayerHud_C.BlackoutCompleted");
		
		UPlayerHud_C_BlackoutCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHud.PlayerHud_C.Construct
	 * 		Flags  -> ()
	 */
	void UPlayerHud_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHud.PlayerHud_C.Construct");
		
		UPlayerHud_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHud.PlayerHud_C.Event_OnResetHud
	 * 		Flags  -> ()
	 */
	void UPlayerHud_C::Event_OnResetHud()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHud.PlayerHud_C.Event_OnResetHud");
		
		UPlayerHud_C_Event_OnResetHud_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHud.PlayerHud_C.Event_StartTransitionFeedback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              blackoutDuration                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHud_C::Event_StartTransitionFeedback(float blackoutDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHud.PlayerHud_C.Event_StartTransitionFeedback");
		
		UPlayerHud_C_Event_StartTransitionFeedback_Params params {};
		params.blackoutDuration = blackoutDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHud.PlayerHud_C.TransitionFeedbackFinished
	 * 		Flags  -> ()
	 */
	void UPlayerHud_C::TransitionFeedbackFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHud.PlayerHud_C.TransitionFeedbackFinished");
		
		UPlayerHud_C_TransitionFeedbackFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHud.PlayerHud_C.Event_ShowInteractionMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Message                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		EGameMessageCategory                               GameMessageCategory                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHud_C::Event_ShowInteractionMessage(const class FText& Message, EGameMessageCategory GameMessageCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHud.PlayerHud_C.Event_ShowInteractionMessage");
		
		UPlayerHud_C_Event_ShowInteractionMessage_Params params {};
		params.Message = Message;
		params.GameMessageCategory = GameMessageCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHud.PlayerHud_C.Event_HideInteractionMessage
	 * 		Flags  -> ()
	 */
	void UPlayerHud_C::Event_HideInteractionMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHud.PlayerHud_C.Event_HideInteractionMessage");
		
		UPlayerHud_C_Event_HideInteractionMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHud.PlayerHud_C.Destruct
	 * 		Flags  -> ()
	 */
	void UPlayerHud_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHud.PlayerHud_C.Destruct");
		
		UPlayerHud_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHud.PlayerHud_C.Event_ForceUpdateSwapIcons
	 * 		Flags  -> ()
	 */
	void UPlayerHud_C::Event_ForceUpdateSwapIcons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHud.PlayerHud_C.Event_ForceUpdateSwapIcons");
		
		UPlayerHud_C_Event_ForceUpdateSwapIcons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHud.PlayerHud_C.OnIncapacitatedVisibilityChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   InVisibility                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHud_C::OnIncapacitatedVisibilityChanged(ESlateVisibility InVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHud.PlayerHud_C.OnIncapacitatedVisibilityChanged");
		
		UPlayerHud_C_OnIncapacitatedVisibilityChanged_Params params {};
		params.InVisibility = InVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHud.PlayerHud_C.Event_OnHUDOpacityChanged
	 * 		Flags  -> ()
	 */
	void UPlayerHud_C::Event_OnHUDOpacityChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHud.PlayerHud_C.Event_OnHUDOpacityChanged");
		
		UPlayerHud_C_Event_OnHUDOpacityChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHud.PlayerHud_C.ChangeCrosshairVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerHud_C::ChangeCrosshairVisibility(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHud.PlayerHud_C.ChangeCrosshairVisibility");
		
		UPlayerHud_C_ChangeCrosshairVisibility_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHud.PlayerHud_C.ExecuteUbergraph_PlayerHud
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHud_C::ExecuteUbergraph_PlayerHud(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHud.PlayerHud_C.ExecuteUbergraph_PlayerHud");
		
		UPlayerHud_C_ExecuteUbergraph_PlayerHud_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHud.PlayerHud_C.FadeInCompleted__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPlayerHud_C::FadeInCompleted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHud.PlayerHud_C.FadeInCompleted__DelegateSignature");
		
		UPlayerHud_C_FadeInCompleted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerHud_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerHud_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerHud.PlayerHud_C");
		return ptr;
	}

}


