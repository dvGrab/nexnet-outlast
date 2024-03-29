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
	 * 		Name   -> Function SecondaryObjectiveWidget.SecondaryObjectiveWidget_C.ShouldShow
	 * 		Flags  -> ()
	 */
	bool USecondaryObjectiveWidget_C::ShouldShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecondaryObjectiveWidget.SecondaryObjectiveWidget_C.ShouldShow");
		
		USecondaryObjectiveWidget_C_ShouldShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SecondaryObjectiveWidget.SecondaryObjectiveWidget_C.SetCompleted
	 * 		Flags  -> ()
	 */
	void USecondaryObjectiveWidget_C::SetCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecondaryObjectiveWidget.SecondaryObjectiveWidget_C.SetCompleted");
		
		USecondaryObjectiveWidget_C_SetCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SecondaryObjectiveWidget.SecondaryObjectiveWidget_C.GetFadeInAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            FadeInAnimation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USecondaryObjectiveWidget_C::GetFadeInAnimation(class UWidgetAnimation** FadeInAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecondaryObjectiveWidget.SecondaryObjectiveWidget_C.GetFadeInAnimation");
		
		USecondaryObjectiveWidget_C_GetFadeInAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FadeInAnimation != nullptr)
			*FadeInAnimation = params.FadeInAnimation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SecondaryObjectiveWidget.SecondaryObjectiveWidget_C.Event_ProgressChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isPositiveProgress                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        objectiveText                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void USecondaryObjectiveWidget_C::Event_ProgressChanged(float progress, bool isPositiveProgress, const class FText& objectiveText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecondaryObjectiveWidget.SecondaryObjectiveWidget_C.Event_ProgressChanged");
		
		USecondaryObjectiveWidget_C_Event_ProgressChanged_Params params {};
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
	 * 		Name   -> Function SecondaryObjectiveWidget.SecondaryObjectiveWidget_C.ExecuteUbergraph_SecondaryObjectiveWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USecondaryObjectiveWidget_C::ExecuteUbergraph_SecondaryObjectiveWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecondaryObjectiveWidget.SecondaryObjectiveWidget_C.ExecuteUbergraph_SecondaryObjectiveWidget");
		
		USecondaryObjectiveWidget_C_ExecuteUbergraph_SecondaryObjectiveWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USecondaryObjectiveWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USecondaryObjectiveWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SecondaryObjectiveWidget.SecondaryObjectiveWidget_C");
		return ptr;
	}

}


