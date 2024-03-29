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
	 * 		Name   -> Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.ShouldShow
	 * 		Flags  -> ()
	 */
	bool UObjectiveWidgetBase_C::ShouldShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.ShouldShow");
		
		UObjectiveWidgetBase_C_ShouldShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.IsInValidStateForExtraInfo
	 * 		Flags  -> ()
	 */
	bool UObjectiveWidgetBase_C::IsInValidStateForExtraInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.IsInValidStateForExtraInfo");
		
		UObjectiveWidgetBase_C_IsInValidStateForExtraInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.ClearBindings
	 * 		Flags  -> ()
	 */
	void UObjectiveWidgetBase_C::ClearBindings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.ClearBindings");
		
		UObjectiveWidgetBase_C_ClearBindings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.GetFadeInAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            FadeInAnimation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UObjectiveWidgetBase_C::GetFadeInAnimation(class UWidgetAnimation** FadeInAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.GetFadeInAnimation");
		
		UObjectiveWidgetBase_C_GetFadeInAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FadeInAnimation != nullptr)
			*FadeInAnimation = params.FadeInAnimation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.UpdateProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isPositiveProgress                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        objectiveText                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UObjectiveWidgetBase_C::UpdateProgress(float progress, bool isPositiveProgress, const class FText& objectiveText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.UpdateProgress");
		
		UObjectiveWidgetBase_C_UpdateProgress_Params params {};
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
	 * 		Name   -> Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.SetCompleted
	 * 		Flags  -> ()
	 */
	void UObjectiveWidgetBase_C::SetCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.SetCompleted");
		
		UObjectiveWidgetBase_C_SetCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBBaseObjectiveCoordinator*                 coordinator                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UObjectiveWidgetBase_C::Initialize(class ARBBaseObjectiveCoordinator* coordinator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.Initialize");
		
		UObjectiveWidgetBase_C_Initialize_Params params {};
		params.coordinator = coordinator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.Event_Show
	 * 		Flags  -> ()
	 */
	void UObjectiveWidgetBase_C::Event_Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.Event_Show");
		
		UObjectiveWidgetBase_C_Event_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.Event_Hide
	 * 		Flags  -> ()
	 */
	void UObjectiveWidgetBase_C::Event_Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.Event_Hide");
		
		UObjectiveWidgetBase_C_Event_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.CustomEvent_1
	 * 		Flags  -> ()
	 */
	void UObjectiveWidgetBase_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.CustomEvent_1");
		
		UObjectiveWidgetBase_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.Event_Completed
	 * 		Flags  -> ()
	 */
	void UObjectiveWidgetBase_C::Event_Completed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.Event_Completed");
		
		UObjectiveWidgetBase_C_Event_Completed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.Remove
	 * 		Flags  -> ()
	 */
	void UObjectiveWidgetBase_C::Remove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.Remove");
		
		UObjectiveWidgetBase_C_Remove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.ExecuteUbergraph_ObjectiveWidgetBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UObjectiveWidgetBase_C::ExecuteUbergraph_ObjectiveWidgetBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.ExecuteUbergraph_ObjectiveWidgetBase");
		
		UObjectiveWidgetBase_C_ExecuteUbergraph_ObjectiveWidgetBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.VisibilityEventDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UObjectiveWidgetBase_C::VisibilityEventDispatcher__DelegateSignature(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectiveWidgetBase.ObjectiveWidgetBase_C.VisibilityEventDispatcher__DelegateSignature");
		
		UObjectiveWidgetBase_C_VisibilityEventDispatcher__DelegateSignature_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObjectiveWidgetBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectiveWidgetBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ObjectiveWidgetBase.ObjectiveWidgetBase_C");
		return ptr;
	}

}


