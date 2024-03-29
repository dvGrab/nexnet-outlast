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
	 * 		Name   -> Function CountdownConfirmCancelPopup.CountdownConfirmCancelPopup_C.Update Countdown Text
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Countdown                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCountdownConfirmCancelPopup_C::Update_Countdown_Text(int32_t Countdown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CountdownConfirmCancelPopup.CountdownConfirmCancelPopup_C.Update Countdown Text");
		
		UCountdownConfirmCancelPopup_C_Update_Countdown_Text_Params params {};
		params.Countdown = Countdown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CountdownConfirmCancelPopup.CountdownConfirmCancelPopup_C.OnCountdownEnds
	 * 		Flags  -> ()
	 */
	void UCountdownConfirmCancelPopup_C::OnCountdownEnds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CountdownConfirmCancelPopup.CountdownConfirmCancelPopup_C.OnCountdownEnds");
		
		UCountdownConfirmCancelPopup_C_OnCountdownEnds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CountdownConfirmCancelPopup.CountdownConfirmCancelPopup_C.StartCountdown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCountdownConfirmCancelPopup_C::StartCountdown(int32_t Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CountdownConfirmCancelPopup.CountdownConfirmCancelPopup_C.StartCountdown");
		
		UCountdownConfirmCancelPopup_C_StartCountdown_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CountdownConfirmCancelPopup.CountdownConfirmCancelPopup_C.Event_InitializePopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        TitleText                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FText                                        MainText                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FText                                        ConfirmText                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FText                                        CancelText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UCountdownConfirmCancelPopup_C::Event_InitializePopup(const class FText& TitleText, const class FText& MainText, const class FText& ConfirmText, const class FText& CancelText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CountdownConfirmCancelPopup.CountdownConfirmCancelPopup_C.Event_InitializePopup");
		
		UCountdownConfirmCancelPopup_C_Event_InitializePopup_Params params {};
		params.TitleText = TitleText;
		params.MainText = MainText;
		params.ConfirmText = ConfirmText;
		params.CancelText = CancelText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CountdownConfirmCancelPopup.CountdownConfirmCancelPopup_C.Destruct
	 * 		Flags  -> ()
	 */
	void UCountdownConfirmCancelPopup_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CountdownConfirmCancelPopup.CountdownConfirmCancelPopup_C.Destruct");
		
		UCountdownConfirmCancelPopup_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CountdownConfirmCancelPopup.CountdownConfirmCancelPopup_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCountdownConfirmCancelPopup_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CountdownConfirmCancelPopup.CountdownConfirmCancelPopup_C.Tick");
		
		UCountdownConfirmCancelPopup_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CountdownConfirmCancelPopup.CountdownConfirmCancelPopup_C.ExecuteUbergraph_CountdownConfirmCancelPopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCountdownConfirmCancelPopup_C::ExecuteUbergraph_CountdownConfirmCancelPopup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CountdownConfirmCancelPopup.CountdownConfirmCancelPopup_C.ExecuteUbergraph_CountdownConfirmCancelPopup");
		
		UCountdownConfirmCancelPopup_C_ExecuteUbergraph_CountdownConfirmCancelPopup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCountdownConfirmCancelPopup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCountdownConfirmCancelPopup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CountdownConfirmCancelPopup.CountdownConfirmCancelPopup_C");
		return ptr;
	}

}


