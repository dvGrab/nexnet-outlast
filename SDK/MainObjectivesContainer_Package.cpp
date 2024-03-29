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
	 * 		Name   -> Function MainObjectivesContainer.MainObjectivesContainer_C.RefreshObjectivesTexts
	 * 		Flags  -> ()
	 */
	void UMainObjectivesContainer_C::RefreshObjectivesTexts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainObjectivesContainer.MainObjectivesContainer_C.RefreshObjectivesTexts");
		
		UMainObjectivesContainer_C_RefreshObjectivesTexts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainObjectivesContainer.MainObjectivesContainer_C.ShouldShow
	 * 		Flags  -> ()
	 */
	bool UMainObjectivesContainer_C::ShouldShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainObjectivesContainer.MainObjectivesContainer_C.ShouldShow");
		
		UMainObjectivesContainer_C_ShouldShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainObjectivesContainer.MainObjectivesContainer_C.MainObjectivesContainer_AutoGenFunc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMainObjectivesContainer_C::MainObjectivesContainer_AutoGenFunc(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainObjectivesContainer.MainObjectivesContainer_C.MainObjectivesContainer_AutoGenFunc");
		
		UMainObjectivesContainer_C_MainObjectivesContainer_AutoGenFunc_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainObjectivesContainer.MainObjectivesContainer_C.Add Objective
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBBaseObjectiveCoordinator*                 coordinator                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMainObjectivesContainer_C::Add_Objective(class ARBBaseObjectiveCoordinator* coordinator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainObjectivesContainer.MainObjectivesContainer_C.Add Objective");
		
		UMainObjectivesContainer_C_Add_Objective_Params params {};
		params.coordinator = coordinator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainObjectivesContainer.MainObjectivesContainer_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMainObjectivesContainer_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainObjectivesContainer.MainObjectivesContainer_C.PreConstruct");
		
		UMainObjectivesContainer_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainObjectivesContainer.MainObjectivesContainer_C.Event_Show
	 * 		Flags  -> ()
	 */
	void UMainObjectivesContainer_C::Event_Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainObjectivesContainer.MainObjectivesContainer_C.Event_Show");
		
		UMainObjectivesContainer_C_Event_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainObjectivesContainer.MainObjectivesContainer_C.Event_Hide
	 * 		Flags  -> ()
	 */
	void UMainObjectivesContainer_C::Event_Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainObjectivesContainer.MainObjectivesContainer_C.Event_Hide");
		
		UMainObjectivesContainer_C_Event_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainObjectivesContainer.MainObjectivesContainer_C.ExecuteUbergraph_MainObjectivesContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMainObjectivesContainer_C::ExecuteUbergraph_MainObjectivesContainer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainObjectivesContainer.MainObjectivesContainer_C.ExecuteUbergraph_MainObjectivesContainer");
		
		UMainObjectivesContainer_C_ExecuteUbergraph_MainObjectivesContainer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMainObjectivesContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMainObjectivesContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MainObjectivesContainer.MainObjectivesContainer_C");
		return ptr;
	}

}


