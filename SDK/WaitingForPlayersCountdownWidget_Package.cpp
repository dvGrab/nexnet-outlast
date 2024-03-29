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
	 * 		Name   -> Function WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C.ShouldShowWaitingForInstall
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldShow                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DownloadPercent                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWaitingForPlayersCountdownWidget_C::ShouldShowWaitingForInstall(bool* ShouldShow, float* DownloadPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C.ShouldShowWaitingForInstall");
		
		UWaitingForPlayersCountdownWidget_C_ShouldShowWaitingForInstall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldShow != nullptr)
			*ShouldShow = params.ShouldShow;
		if (DownloadPercent != nullptr)
			*DownloadPercent = params.DownloadPercent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C.UpdateGameInstallText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Percent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWaitingForPlayersCountdownWidget_C::UpdateGameInstallText(float Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C.UpdateGameInstallText");
		
		UWaitingForPlayersCountdownWidget_C_UpdateGameInstallText_Params params {};
		params.Percent = Percent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C.OnGamePhaseUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGamePhase                                         gamePhase                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bDrugSequenceCompleted                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWaitingForPlayersCountdownWidget_C::OnGamePhaseUpdated(EGamePhase gamePhase, bool bDrugSequenceCompleted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C.OnGamePhaseUpdated");
		
		UWaitingForPlayersCountdownWidget_C_OnGamePhaseUpdated_Params params {};
		params.gamePhase = gamePhase;
		params.bDrugSequenceCompleted = bDrugSequenceCompleted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C.ShouldShow
	 * 		Flags  -> ()
	 */
	bool UWaitingForPlayersCountdownWidget_C::ShouldShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C.ShouldShow");
		
		UWaitingForPlayersCountdownWidget_C_ShouldShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C.HideCountdown
	 * 		Flags  -> ()
	 */
	void UWaitingForPlayersCountdownWidget_C::HideCountdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C.HideCountdown");
		
		UWaitingForPlayersCountdownWidget_C_HideCountdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C.StartCountdown
	 * 		Flags  -> ()
	 */
	void UWaitingForPlayersCountdownWidget_C::StartCountdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C.StartCountdown");
		
		UWaitingForPlayersCountdownWidget_C_StartCountdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C.OnGamePhaseUpdatedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGamePhase                                         gamePhase                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWaitingForPlayersCountdownWidget_C::OnGamePhaseUpdatedEvent(EGamePhase gamePhase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C.OnGamePhaseUpdatedEvent");
		
		UWaitingForPlayersCountdownWidget_C_OnGamePhaseUpdatedEvent_Params params {};
		params.gamePhase = gamePhase;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C.Destruct
	 * 		Flags  -> ()
	 */
	void UWaitingForPlayersCountdownWidget_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C.Destruct");
		
		UWaitingForPlayersCountdownWidget_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWaitingForPlayersCountdownWidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C.PreConstruct");
		
		UWaitingForPlayersCountdownWidget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWaitingForPlayersCountdownWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C.Tick");
		
		UWaitingForPlayersCountdownWidget_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UWaitingForPlayersCountdownWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C.Construct");
		
		UWaitingForPlayersCountdownWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C.OnDrugSequenceCompleted
	 * 		Flags  -> ()
	 */
	void UWaitingForPlayersCountdownWidget_C::OnDrugSequenceCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C.OnDrugSequenceCompleted");
		
		UWaitingForPlayersCountdownWidget_C_OnDrugSequenceCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C.ExecuteUbergraph_WaitingForPlayersCountdownWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWaitingForPlayersCountdownWidget_C::ExecuteUbergraph_WaitingForPlayersCountdownWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C.ExecuteUbergraph_WaitingForPlayersCountdownWidget");
		
		UWaitingForPlayersCountdownWidget_C_ExecuteUbergraph_WaitingForPlayersCountdownWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaitingForPlayersCountdownWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaitingForPlayersCountdownWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C");
		return ptr;
	}

}


