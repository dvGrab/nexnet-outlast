/**
 * Name: READYORNOT
 * Version: 0.0.1
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
	 * 		Name   -> Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.SetLooping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsLooping                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_Briefing_AudioControls_C::SetLooping(bool IsLooping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.SetLooping");
		
		UW_Briefing_AudioControls_C_SetLooping_Params params {};
		params.IsLooping = IsLooping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.SetState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_Briefing_Audio_PlayStates                        AudioPlayState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Briefing_AudioControls_C::SetState(E_Briefing_Audio_PlayStates AudioPlayState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.SetState");
		
		UW_Briefing_AudioControls_C_SetState_Params params {};
		params.AudioPlayState = AudioPlayState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_Briefing_AudioControls_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.PreConstruct");
		
		UW_Briefing_AudioControls_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Briefing_AudioControls_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.Tick");
		
		UW_Briefing_AudioControls_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.BndEvt__btn_Play_K2Node_ComponentBoundEvent_6_AudioControlButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Briefing_AudioControls_C::BndEvt__btn_Play_K2Node_ComponentBoundEvent_6_AudioControlButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.BndEvt__btn_Play_K2Node_ComponentBoundEvent_6_AudioControlButtonClicked__DelegateSignature");
		
		UW_Briefing_AudioControls_C_BndEvt__btn_Play_K2Node_ComponentBoundEvent_6_AudioControlButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.BndEvt__btn_Stop_K2Node_ComponentBoundEvent_7_AudioControlButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Briefing_AudioControls_C::BndEvt__btn_Stop_K2Node_ComponentBoundEvent_7_AudioControlButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.BndEvt__btn_Stop_K2Node_ComponentBoundEvent_7_AudioControlButtonClicked__DelegateSignature");
		
		UW_Briefing_AudioControls_C_BndEvt__btn_Stop_K2Node_ComponentBoundEvent_7_AudioControlButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.BndEvt__btn_Restart_K2Node_ComponentBoundEvent_8_AudioControlButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Briefing_AudioControls_C::BndEvt__btn_Restart_K2Node_ComponentBoundEvent_8_AudioControlButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.BndEvt__btn_Restart_K2Node_ComponentBoundEvent_8_AudioControlButtonClicked__DelegateSignature");
		
		UW_Briefing_AudioControls_C_BndEvt__btn_Restart_K2Node_ComponentBoundEvent_8_AudioControlButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.BndEvt__btn_Rewind_K2Node_ComponentBoundEvent_9_AudioControlButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Briefing_AudioControls_C::BndEvt__btn_Rewind_K2Node_ComponentBoundEvent_9_AudioControlButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.BndEvt__btn_Rewind_K2Node_ComponentBoundEvent_9_AudioControlButtonClicked__DelegateSignature");
		
		UW_Briefing_AudioControls_C_BndEvt__btn_Rewind_K2Node_ComponentBoundEvent_9_AudioControlButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.BndEvt__btn_FastForward_K2Node_ComponentBoundEvent_10_AudioControlButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Briefing_AudioControls_C::BndEvt__btn_FastForward_K2Node_ComponentBoundEvent_10_AudioControlButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.BndEvt__btn_FastForward_K2Node_ComponentBoundEvent_10_AudioControlButtonClicked__DelegateSignature");
		
		UW_Briefing_AudioControls_C_BndEvt__btn_FastForward_K2Node_ComponentBoundEvent_10_AudioControlButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.BndEvt__btn_Loop_K2Node_ComponentBoundEvent_11_AudioControlButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Briefing_AudioControls_C::BndEvt__btn_Loop_K2Node_ComponentBoundEvent_11_AudioControlButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.BndEvt__btn_Loop_K2Node_ComponentBoundEvent_11_AudioControlButtonClicked__DelegateSignature");
		
		UW_Briefing_AudioControls_C_BndEvt__btn_Loop_K2Node_ComponentBoundEvent_11_AudioControlButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.BndEvt__btn_Rewind_K2Node_ComponentBoundEvent_0_AudioControlButtonPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Briefing_AudioControls_C::BndEvt__btn_Rewind_K2Node_ComponentBoundEvent_0_AudioControlButtonPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.BndEvt__btn_Rewind_K2Node_ComponentBoundEvent_0_AudioControlButtonPressed__DelegateSignature");
		
		UW_Briefing_AudioControls_C_BndEvt__btn_Rewind_K2Node_ComponentBoundEvent_0_AudioControlButtonPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.BndEvt__btn_Rewind_K2Node_ComponentBoundEvent_1_AudioControlButtonReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Briefing_AudioControls_C::BndEvt__btn_Rewind_K2Node_ComponentBoundEvent_1_AudioControlButtonReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.BndEvt__btn_Rewind_K2Node_ComponentBoundEvent_1_AudioControlButtonReleased__DelegateSignature");
		
		UW_Briefing_AudioControls_C_BndEvt__btn_Rewind_K2Node_ComponentBoundEvent_1_AudioControlButtonReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.BndEvt__btn_FastForward_K2Node_ComponentBoundEvent_2_AudioControlButtonPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Briefing_AudioControls_C::BndEvt__btn_FastForward_K2Node_ComponentBoundEvent_2_AudioControlButtonPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.BndEvt__btn_FastForward_K2Node_ComponentBoundEvent_2_AudioControlButtonPressed__DelegateSignature");
		
		UW_Briefing_AudioControls_C_BndEvt__btn_FastForward_K2Node_ComponentBoundEvent_2_AudioControlButtonPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.BndEvt__btn_FastForward_K2Node_ComponentBoundEvent_3_AudioControlButtonReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Briefing_AudioControls_C::BndEvt__btn_FastForward_K2Node_ComponentBoundEvent_3_AudioControlButtonReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.BndEvt__btn_FastForward_K2Node_ComponentBoundEvent_3_AudioControlButtonReleased__DelegateSignature");
		
		UW_Briefing_AudioControls_C_BndEvt__btn_FastForward_K2Node_ComponentBoundEvent_3_AudioControlButtonReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.ButtonHover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Briefing_AudioControls_Button_C*          Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Hovered                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_Briefing_AudioControls_C::ButtonHover(class UW_Briefing_AudioControls_Button_C* Button, bool Hovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.ButtonHover");
		
		UW_Briefing_AudioControls_C_ButtonHover_Params params {};
		params.Button = Button;
		params.Hovered = Hovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.ExecuteUbergraph_W_Briefing_AudioControls
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Briefing_AudioControls_C::ExecuteUbergraph_W_Briefing_AudioControls(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.ExecuteUbergraph_W_Briefing_AudioControls");
		
		UW_Briefing_AudioControls_C_ExecuteUbergraph_W_Briefing_AudioControls_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.FastForward__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Briefing_AudioControls_C::FastForward__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.FastForward__DelegateSignature");
		
		UW_Briefing_AudioControls_C_FastForward__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.Loop__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Briefing_AudioControls_C::Loop__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.Loop__DelegateSignature");
		
		UW_Briefing_AudioControls_C_Loop__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.Restart__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Briefing_AudioControls_C::Restart__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.Restart__DelegateSignature");
		
		UW_Briefing_AudioControls_C_Restart__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.Rewind__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Briefing_AudioControls_C::Rewind__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.Rewind__DelegateSignature");
		
		UW_Briefing_AudioControls_C_Rewind__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.Stop__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Briefing_AudioControls_C::Stop__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.Stop__DelegateSignature");
		
		UW_Briefing_AudioControls_C_Stop__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.Play__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Briefing_AudioControls_C::Play__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Briefing_AudioControls.W_Briefing_AudioControls_C.Play__DelegateSignature");
		
		UW_Briefing_AudioControls_C_Play__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_Briefing_AudioControls_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_Briefing_AudioControls_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Briefing_AudioControls.W_Briefing_AudioControls_C");
		return ptr;
	}

}


