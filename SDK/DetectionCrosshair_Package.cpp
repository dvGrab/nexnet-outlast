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
	 * 		Name   -> Function DetectionCrosshair.DetectionCrosshair_C.UpdateCrosshairV3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldAnimate                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDetectionCrosshair_C::UpdateCrosshairV3(bool ShouldAnimate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DetectionCrosshair.DetectionCrosshair_C.UpdateCrosshairV3");
		
		UDetectionCrosshair_C_UpdateCrosshairV3_Params params {};
		params.ShouldAnimate = ShouldAnimate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DetectionCrosshair.DetectionCrosshair_C.ShouldShow
	 * 		Flags  -> ()
	 */
	bool UDetectionCrosshair_C::ShouldShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DetectionCrosshair.DetectionCrosshair_C.ShouldShow");
		
		UDetectionCrosshair_C_ShouldShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DetectionCrosshair.DetectionCrosshair_C.UpdateVisualDetection
	 * 		Flags  -> ()
	 */
	void UDetectionCrosshair_C::UpdateVisualDetection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DetectionCrosshair.DetectionCrosshair_C.UpdateVisualDetection");
		
		UDetectionCrosshair_C_UpdateVisualDetection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DetectionCrosshair.DetectionCrosshair_C.UpdateFeedbackProgressBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UProgressBar*                                FeedbackProgressBar                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Increasing                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDetectionCrosshair_C::UpdateFeedbackProgressBar(class UProgressBar* FeedbackProgressBar, bool Increasing, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DetectionCrosshair.DetectionCrosshair_C.UpdateFeedbackProgressBar");
		
		UDetectionCrosshair_C_UpdateFeedbackProgressBar_Params params {};
		params.FeedbackProgressBar = FeedbackProgressBar;
		params.Increasing = Increasing;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DetectionCrosshair.DetectionCrosshair_C.Update CrosshairV2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDetectionCrosshair_C::Update_CrosshairV2(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DetectionCrosshair.DetectionCrosshair_C.Update CrosshairV2");
		
		UDetectionCrosshair_C_Update_CrosshairV2_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DetectionCrosshair.DetectionCrosshair_C.UpdateSoundFeedback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDetectionCrosshair_C::UpdateSoundFeedback(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DetectionCrosshair.DetectionCrosshair_C.UpdateSoundFeedback");
		
		UDetectionCrosshair_C_UpdateSoundFeedback_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DetectionCrosshair.DetectionCrosshair_C.Update Crosshair
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDetectionCrosshair_C::Update_Crosshair(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DetectionCrosshair.DetectionCrosshair_C.Update Crosshair");
		
		UDetectionCrosshair_C_Update_Crosshair_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DetectionCrosshair.DetectionCrosshair_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDetectionCrosshair_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DetectionCrosshair.DetectionCrosshair_C.Tick");
		
		UDetectionCrosshair_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DetectionCrosshair.DetectionCrosshair_C.Construct
	 * 		Flags  -> ()
	 */
	void UDetectionCrosshair_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DetectionCrosshair.DetectionCrosshair_C.Construct");
		
		UDetectionCrosshair_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DetectionCrosshair.DetectionCrosshair_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDetectionCrosshair_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DetectionCrosshair.DetectionCrosshair_C.PreConstruct");
		
		UDetectionCrosshair_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DetectionCrosshair.DetectionCrosshair_C.Event_Hide
	 * 		Flags  -> ()
	 */
	void UDetectionCrosshair_C::Event_Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DetectionCrosshair.DetectionCrosshair_C.Event_Hide");
		
		UDetectionCrosshair_C_Event_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DetectionCrosshair.DetectionCrosshair_C.Event_Show
	 * 		Flags  -> ()
	 */
	void UDetectionCrosshair_C::Event_Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DetectionCrosshair.DetectionCrosshair_C.Event_Show");
		
		UDetectionCrosshair_C_Event_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DetectionCrosshair.DetectionCrosshair_C.Event_OnWatchedPlayerChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   oldPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPlayer*                                   NewPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDetectionCrosshair_C::Event_OnWatchedPlayerChanged(class ARBPlayer* oldPlayer, class ARBPlayer* NewPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DetectionCrosshair.DetectionCrosshair_C.Event_OnWatchedPlayerChanged");
		
		UDetectionCrosshair_C_Event_OnWatchedPlayerChanged_Params params {};
		params.oldPlayer = oldPlayer;
		params.NewPlayer = NewPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DetectionCrosshair.DetectionCrosshair_C.OnIsAimingThowableChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               newAimingState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDetectionCrosshair_C::OnIsAimingThowableChanged(bool newAimingState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DetectionCrosshair.DetectionCrosshair_C.OnIsAimingThowableChanged");
		
		UDetectionCrosshair_C_OnIsAimingThowableChanged_Params params {};
		params.newAimingState = newAimingState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DetectionCrosshair.DetectionCrosshair_C.Destruct
	 * 		Flags  -> ()
	 */
	void UDetectionCrosshair_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DetectionCrosshair.DetectionCrosshair_C.Destruct");
		
		UDetectionCrosshair_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DetectionCrosshair.DetectionCrosshair_C.ExecuteUbergraph_DetectionCrosshair
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDetectionCrosshair_C::ExecuteUbergraph_DetectionCrosshair(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DetectionCrosshair.DetectionCrosshair_C.ExecuteUbergraph_DetectionCrosshair");
		
		UDetectionCrosshair_C_ExecuteUbergraph_DetectionCrosshair_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDetectionCrosshair_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDetectionCrosshair_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DetectionCrosshair.DetectionCrosshair_C");
		return ptr;
	}

}


