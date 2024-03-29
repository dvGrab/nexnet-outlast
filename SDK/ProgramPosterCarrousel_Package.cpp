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
	 * 		Name   -> Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.GetRightCycleVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UProgramPosterCarrousel_C::GetRightCycleVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.GetRightCycleVisibility");
		
		UProgramPosterCarrousel_C_GetRightCycleVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.GetLeftCycleVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UProgramPosterCarrousel_C::GetLeftCycleVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.GetLeftCycleVisibility");
		
		UProgramPosterCarrousel_C_GetLeftCycleVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.GetLastHoveredPoster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UProgramPosterCarrouselEntry_C*              outLastHoveredPoster                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProgramPosterCarrousel_C::GetLastHoveredPoster(class UProgramPosterCarrouselEntry_C** outLastHoveredPoster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.GetLastHoveredPoster");
		
		UProgramPosterCarrousel_C_GetLastHoveredPoster_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outLastHoveredPoster != nullptr)
			*outLastHoveredPoster = params.outLastHoveredPoster;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.OnFocusReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UProgramPosterCarrousel_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.OnFocusReceived");
		
		UProgramPosterCarrousel_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.GetCurrentlySelectedPoster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UProgramPosterCarrouselEntry_C*              SelectedPoster                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProgramPosterCarrousel_C::GetCurrentlySelectedPoster(class UProgramPosterCarrouselEntry_C** SelectedPoster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.GetCurrentlySelectedPoster");
		
		UProgramPosterCarrousel_C_GetCurrentlySelectedPoster_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SelectedPoster != nullptr)
			*SelectedPoster = params.SelectedPoster;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.HandleLeftCycle
	 * 		Flags  -> ()
	 */
	void UProgramPosterCarrousel_C::HandleLeftCycle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.HandleLeftCycle");
		
		UProgramPosterCarrousel_C_HandleLeftCycle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.HandleRightCycle
	 * 		Flags  -> ()
	 */
	void UProgramPosterCarrousel_C::HandleRightCycle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.HandleRightCycle");
		
		UProgramPosterCarrousel_C_HandleRightCycle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.GetFirstAvailablePoster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UProgramPosterCarrouselEntry_C*              Poster                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProgramPosterCarrousel_C::GetFirstAvailablePoster(class UProgramPosterCarrouselEntry_C** Poster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.GetFirstAvailablePoster");
		
		UProgramPosterCarrousel_C_GetFirstAvailablePoster_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Poster != nullptr)
			*Poster = params.Poster;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.GetPosterForId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ProgramId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UProgramPosterCarrouselEntry_C*              Poster                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProgramPosterCarrousel_C::GetPosterForId(const class FName& ProgramId, class UProgramPosterCarrouselEntry_C** Poster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.GetPosterForId");
		
		UProgramPosterCarrousel_C_GetPosterForId_Params params {};
		params.ProgramId = ProgramId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Poster != nullptr)
			*Poster = params.Poster;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.Cycle Posters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UProgramPosterCarrousel_C::Cycle_Posters(EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.Cycle Posters");
		
		UProgramPosterCarrousel_C_Cycle_Posters_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.ClearDelegates
	 * 		Flags  -> ()
	 */
	void UProgramPosterCarrousel_C::ClearDelegates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.ClearDelegates");
		
		UProgramPosterCarrousel_C_ClearDelegates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.HandlePosterUnhover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ProgramId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProgramPosterCarrousel_C::HandlePosterUnhover(const class FName& ProgramId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.HandlePosterUnhover");
		
		UProgramPosterCarrousel_C_HandlePosterUnhover_Params params {};
		params.ProgramId = ProgramId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.HandlePosterHover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ProgramId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProgramPosterCarrousel_C::HandlePosterHover(const class FName& ProgramId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.HandlePosterHover");
		
		UProgramPosterCarrousel_C_HandlePosterHover_Params params {};
		params.ProgramId = ProgramId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.HandlePosterClick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ProgramId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProgramPosterCarrousel_C::HandlePosterClick(const class FName& ProgramId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.HandlePosterClick");
		
		UProgramPosterCarrousel_C_HandlePosterClick_Params params {};
		params.ProgramId = ProgramId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.Refresh
	 * 		Flags  -> ()
	 */
	void UProgramPosterCarrousel_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.Refresh");
		
		UProgramPosterCarrousel_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.Setup
	 * 		Flags  -> ()
	 */
	void UProgramPosterCarrousel_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.Setup");
		
		UProgramPosterCarrousel_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UProgramPosterCarrousel_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.PreConstruct");
		
		UProgramPosterCarrousel_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.Construct
	 * 		Flags  -> ()
	 */
	void UProgramPosterCarrousel_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.Construct");
		
		UProgramPosterCarrousel_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.BndEvt__TrialPosterCarrousel_V2_LeftCycle_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UProgramPosterCarrousel_C::BndEvt__TrialPosterCarrousel_V2_LeftCycle_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.BndEvt__TrialPosterCarrousel_V2_LeftCycle_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UProgramPosterCarrousel_C_BndEvt__TrialPosterCarrousel_V2_LeftCycle_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.BndEvt__TrialPosterCarrousel_V2_RightCycle_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UProgramPosterCarrousel_C::BndEvt__TrialPosterCarrousel_V2_RightCycle_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.BndEvt__TrialPosterCarrousel_V2_RightCycle_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UProgramPosterCarrousel_C_BndEvt__TrialPosterCarrousel_V2_RightCycle_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.ExecuteUbergraph_ProgramPosterCarrousel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProgramPosterCarrousel_C::ExecuteUbergraph_ProgramPosterCarrousel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.ExecuteUbergraph_ProgramPosterCarrousel");
		
		UProgramPosterCarrousel_C_ExecuteUbergraph_ProgramPosterCarrousel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.OnPosterUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ProgramId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProgramPosterCarrousel_C::OnPosterUnhovered__DelegateSignature(const class FName& ProgramId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.OnPosterUnhovered__DelegateSignature");
		
		UProgramPosterCarrousel_C_OnPosterUnhovered__DelegateSignature_Params params {};
		params.ProgramId = ProgramId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.OnPosterHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ProgramId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProgramPosterCarrousel_C::OnPosterHovered__DelegateSignature(const class FName& ProgramId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.OnPosterHovered__DelegateSignature");
		
		UProgramPosterCarrousel_C_OnPosterHovered__DelegateSignature_Params params {};
		params.ProgramId = ProgramId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.OnPosterClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ProgramId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProgramPosterCarrousel_C::OnPosterClicked__DelegateSignature(const class FName& ProgramId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.OnPosterClicked__DelegateSignature");
		
		UProgramPosterCarrousel_C_OnPosterClicked__DelegateSignature_Params params {};
		params.ProgramId = ProgramId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProgramPosterCarrousel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProgramPosterCarrousel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ProgramPosterCarrousel.ProgramPosterCarrousel_C");
		return ptr;
	}

}


