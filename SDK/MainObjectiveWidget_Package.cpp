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
	 * 		Name   -> Function MainObjectiveWidget.MainObjectiveWidget_C.UpdateIntermediateObjectives
	 * 		Flags  -> ()
	 */
	void UMainObjectiveWidget_C::UpdateIntermediateObjectives()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainObjectiveWidget.MainObjectiveWidget_C.UpdateIntermediateObjectives");
		
		UMainObjectiveWidget_C_UpdateIntermediateObjectives_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainObjectiveWidget.MainObjectiveWidget_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBBaseObjectiveCoordinator*                 coordinator                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMainObjectiveWidget_C::Initialize(class ARBBaseObjectiveCoordinator* coordinator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainObjectiveWidget.MainObjectiveWidget_C.Initialize");
		
		UMainObjectiveWidget_C_Initialize_Params params {};
		params.coordinator = coordinator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainObjectiveWidget.MainObjectiveWidget_C.SetProgressRatio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ratio                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMainObjectiveWidget_C::SetProgressRatio(float ratio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainObjectiveWidget.MainObjectiveWidget_C.SetProgressRatio");
		
		UMainObjectiveWidget_C_SetProgressRatio_Params params {};
		params.ratio = ratio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainObjectiveWidget.MainObjectiveWidget_C.SetIsMakingPositiveProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isMakingPositiveProgress                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMainObjectiveWidget_C::SetIsMakingPositiveProgress(bool isMakingPositiveProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainObjectiveWidget.MainObjectiveWidget_C.SetIsMakingPositiveProgress");
		
		UMainObjectiveWidget_C_SetIsMakingPositiveProgress_Params params {};
		params.isMakingPositiveProgress = isMakingPositiveProgress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainObjectiveWidget.MainObjectiveWidget_C.GetFadeInAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            FadeInAnimation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMainObjectiveWidget_C::GetFadeInAnimation(class UWidgetAnimation** FadeInAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainObjectiveWidget.MainObjectiveWidget_C.GetFadeInAnimation");
		
		UMainObjectiveWidget_C_GetFadeInAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FadeInAnimation != nullptr)
			*FadeInAnimation = params.FadeInAnimation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainObjectiveWidget.MainObjectiveWidget_C.Finished_8A3EC16D4EBA343192A93F85CA6E35E3
	 * 		Flags  -> ()
	 */
	void UMainObjectiveWidget_C::Finished_8A3EC16D4EBA343192A93F85CA6E35E3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainObjectiveWidget.MainObjectiveWidget_C.Finished_8A3EC16D4EBA343192A93F85CA6E35E3");
		
		UMainObjectiveWidget_C_Finished_8A3EC16D4EBA343192A93F85CA6E35E3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainObjectiveWidget.MainObjectiveWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UMainObjectiveWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainObjectiveWidget.MainObjectiveWidget_C.Construct");
		
		UMainObjectiveWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainObjectiveWidget.MainObjectiveWidget_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMainObjectiveWidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainObjectiveWidget.MainObjectiveWidget_C.PreConstruct");
		
		UMainObjectiveWidget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainObjectiveWidget.MainObjectiveWidget_C.Event_IsMakingPositiveProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isMakingPositiveProgress                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMainObjectiveWidget_C::Event_IsMakingPositiveProgress(bool isMakingPositiveProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainObjectiveWidget.MainObjectiveWidget_C.Event_IsMakingPositiveProgress");
		
		UMainObjectiveWidget_C_Event_IsMakingPositiveProgress_Params params {};
		params.isMakingPositiveProgress = isMakingPositiveProgress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainObjectiveWidget.MainObjectiveWidget_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMainObjectiveWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainObjectiveWidget.MainObjectiveWidget_C.Tick");
		
		UMainObjectiveWidget_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainObjectiveWidget.MainObjectiveWidget_C.Event_Completed
	 * 		Flags  -> ()
	 */
	void UMainObjectiveWidget_C::Event_Completed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainObjectiveWidget.MainObjectiveWidget_C.Event_Completed");
		
		UMainObjectiveWidget_C_Event_Completed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainObjectiveWidget.MainObjectiveWidget_C.Event_ProgressChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isPositiveProgress                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        objectiveText                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMainObjectiveWidget_C::Event_ProgressChanged(float progress, bool isPositiveProgress, const class FText& objectiveText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainObjectiveWidget.MainObjectiveWidget_C.Event_ProgressChanged");
		
		UMainObjectiveWidget_C_Event_ProgressChanged_Params params {};
		params.progress = progress;
		params.isPositiveProgress = isPositiveProgress;
		params.objectiveText = objectiveText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainObjectiveWidget.MainObjectiveWidget_C.ExecuteUbergraph_MainObjectiveWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMainObjectiveWidget_C::ExecuteUbergraph_MainObjectiveWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainObjectiveWidget.MainObjectiveWidget_C.ExecuteUbergraph_MainObjectiveWidget");
		
		UMainObjectiveWidget_C_ExecuteUbergraph_MainObjectiveWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMainObjectiveWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMainObjectiveWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MainObjectiveWidget.MainObjectiveWidget_C");
		return ptr;
	}

}


