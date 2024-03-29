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
	 * 		Name   -> Function PsychosisBar2.PsychosisBar2_C.SequenceEvent__ENTRYPOINTPsychosisBar2_1
	 * 		Flags  -> ()
	 */
	void UPsychosisBar2_C::SequenceEvent__ENTRYPOINTPsychosisBar2_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PsychosisBar2.PsychosisBar2_C.SequenceEvent__ENTRYPOINTPsychosisBar2_1");
		
		UPsychosisBar2_C_SequenceEvent__ENTRYPOINTPsychosisBar2_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PsychosisBar2.PsychosisBar2_C.HandlePlayerStatusChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPlayerIndicatorType                               NewStatus                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPsychosisBar2_C::HandlePlayerStatusChanged(EPlayerIndicatorType NewStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PsychosisBar2.PsychosisBar2_C.HandlePlayerStatusChanged");
		
		UPsychosisBar2_C_HandlePlayerStatusChanged_Params params {};
		params.NewStatus = NewStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PsychosisBar2.PsychosisBar2_C.UpdateIcon
	 * 		Flags  -> ()
	 */
	void UPsychosisBar2_C::UpdateIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PsychosisBar2.PsychosisBar2_C.UpdateIcon");
		
		UPsychosisBar2_C_UpdateIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PsychosisBar2.PsychosisBar2_C.ProcessPsychosisEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OldValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SkipAnims                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPsychosisBar2_C::ProcessPsychosisEvent(int32_t NewValue, int32_t OldValue, bool SkipAnims)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PsychosisBar2.PsychosisBar2_C.ProcessPsychosisEvent");
		
		UPsychosisBar2_C_ProcessPsychosisEvent_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		params.SkipAnims = SkipAnims;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PsychosisBar2.PsychosisBar2_C.ChainTweens
	 * 		Flags  -> ()
	 */
	void UPsychosisBar2_C::ChainTweens()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PsychosisBar2.PsychosisBar2_C.ChainTweens");
		
		UPsychosisBar2_C_ChainTweens_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PsychosisBar2.PsychosisBar2_C.ShouldShow
	 * 		Flags  -> ()
	 */
	bool UPsychosisBar2_C::ShouldShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PsychosisBar2.PsychosisBar2_C.ShouldShow");
		
		UPsychosisBar2_C_ShouldShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PsychosisBar2.PsychosisBar2_C.IconMorphCompleted
	 * 		Flags  -> ()
	 */
	void UPsychosisBar2_C::IconMorphCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PsychosisBar2.PsychosisBar2_C.IconMorphCompleted");
		
		UPsychosisBar2_C_IconMorphCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PsychosisBar2.PsychosisBar2_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPsychosisBar2_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PsychosisBar2.PsychosisBar2_C.PreConstruct");
		
		UPsychosisBar2_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PsychosisBar2.PsychosisBar2_C.Event_Show
	 * 		Flags  -> ()
	 */
	void UPsychosisBar2_C::Event_Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PsychosisBar2.PsychosisBar2_C.Event_Show");
		
		UPsychosisBar2_C_Event_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PsychosisBar2.PsychosisBar2_C.Event_Hide
	 * 		Flags  -> ()
	 */
	void UPsychosisBar2_C::Event_Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PsychosisBar2.PsychosisBar2_C.Event_Hide");
		
		UPsychosisBar2_C_Event_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PsychosisBar2.PsychosisBar2_C.Event_OnWatchedPlayerChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   oldPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPlayer*                                   NewPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPsychosisBar2_C::Event_OnWatchedPlayerChanged(class ARBPlayer* oldPlayer, class ARBPlayer* NewPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PsychosisBar2.PsychosisBar2_C.Event_OnWatchedPlayerChanged");
		
		UPsychosisBar2_C_Event_OnWatchedPlayerChanged_Params params {};
		params.oldPlayer = oldPlayer;
		params.NewPlayer = NewPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PsychosisBar2.PsychosisBar2_C.OnPsychosisChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OldValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPsychosisBar2_C::OnPsychosisChanged(int32_t NewValue, int32_t OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PsychosisBar2.PsychosisBar2_C.OnPsychosisChanged");
		
		UPsychosisBar2_C_OnPsychosisChanged_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PsychosisBar2.PsychosisBar2_C.OnPlayerStatusChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPlayerIndicatorType                               playerIndicatorType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPsychosisBar2_C::OnPlayerStatusChanged(EPlayerIndicatorType playerIndicatorType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PsychosisBar2.PsychosisBar2_C.OnPlayerStatusChanged");
		
		UPsychosisBar2_C_OnPlayerStatusChanged_Params params {};
		params.playerIndicatorType = playerIndicatorType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PsychosisBar2.PsychosisBar2_C.OnBarHidden
	 * 		Flags  -> ()
	 */
	void UPsychosisBar2_C::OnBarHidden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PsychosisBar2.PsychosisBar2_C.OnBarHidden");
		
		UPsychosisBar2_C_OnBarHidden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PsychosisBar2.PsychosisBar2_C.Construct
	 * 		Flags  -> ()
	 */
	void UPsychosisBar2_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PsychosisBar2.PsychosisBar2_C.Construct");
		
		UPsychosisBar2_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PsychosisBar2.PsychosisBar2_C.ExecuteUbergraph_PsychosisBar2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPsychosisBar2_C::ExecuteUbergraph_PsychosisBar2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PsychosisBar2.PsychosisBar2_C.ExecuteUbergraph_PsychosisBar2");
		
		UPsychosisBar2_C_ExecuteUbergraph_PsychosisBar2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPsychosisBar2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPsychosisBar2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PsychosisBar2.PsychosisBar2_C");
		return ptr;
	}

}


