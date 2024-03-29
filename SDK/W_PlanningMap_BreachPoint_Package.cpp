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
	 * 		Name   -> Function W_PlanningMap_BreachPoint.W_PlanningMap_BreachPoint_C.SetSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Selected                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_PlanningMap_BreachPoint_C::SetSelected(bool Selected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PlanningMap_BreachPoint.W_PlanningMap_BreachPoint_C.SetSelected");
		
		UW_PlanningMap_BreachPoint_C_SetSelected_Params params {};
		params.Selected = Selected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PlanningMap_BreachPoint.W_PlanningMap_BreachPoint_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_PlanningMap_BreachPoint_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PlanningMap_BreachPoint.W_PlanningMap_BreachPoint_C.Construct");
		
		UW_PlanningMap_BreachPoint_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PlanningMap_BreachPoint.W_PlanningMap_BreachPoint_C.FadeIn
	 * 		Flags  -> ()
	 */
	void UW_PlanningMap_BreachPoint_C::FadeIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PlanningMap_BreachPoint.W_PlanningMap_BreachPoint_C.FadeIn");
		
		UW_PlanningMap_BreachPoint_C_FadeIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PlanningMap_BreachPoint.W_PlanningMap_BreachPoint_C.FadeOut
	 * 		Flags  -> ()
	 */
	void UW_PlanningMap_BreachPoint_C::FadeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PlanningMap_BreachPoint.W_PlanningMap_BreachPoint_C.FadeOut");
		
		UW_PlanningMap_BreachPoint_C_FadeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PlanningMap_BreachPoint.W_PlanningMap_BreachPoint_C.BndEvt__btn_BreachPoint_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PlanningMap_BreachPoint_C::BndEvt__btn_BreachPoint_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PlanningMap_BreachPoint.W_PlanningMap_BreachPoint_C.BndEvt__btn_BreachPoint_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");
		
		UW_PlanningMap_BreachPoint_C_BndEvt__btn_BreachPoint_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PlanningMap_BreachPoint.W_PlanningMap_BreachPoint_C.BndEvt__btn_BreachPoint_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PlanningMap_BreachPoint_C::BndEvt__btn_BreachPoint_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PlanningMap_BreachPoint.W_PlanningMap_BreachPoint_C.BndEvt__btn_BreachPoint_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature");
		
		UW_PlanningMap_BreachPoint_C_BndEvt__btn_BreachPoint_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PlanningMap_BreachPoint.W_PlanningMap_BreachPoint_C.ExecuteUbergraph_W_PlanningMap_BreachPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PlanningMap_BreachPoint_C::ExecuteUbergraph_W_PlanningMap_BreachPoint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PlanningMap_BreachPoint.W_PlanningMap_BreachPoint_C.ExecuteUbergraph_W_PlanningMap_BreachPoint");
		
		UW_PlanningMap_BreachPoint_C_ExecuteUbergraph_W_PlanningMap_BreachPoint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PlanningMap_BreachPoint.W_PlanningMap_BreachPoint_C.OnBreachPointClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_PlanningMap_BreachPoint_C*                ClickedPoint                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PlanningMap_BreachPoint_C::OnBreachPointClicked__DelegateSignature(class UW_PlanningMap_BreachPoint_C* ClickedPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PlanningMap_BreachPoint.W_PlanningMap_BreachPoint_C.OnBreachPointClicked__DelegateSignature");
		
		UW_PlanningMap_BreachPoint_C_OnBreachPointClicked__DelegateSignature_Params params {};
		params.ClickedPoint = ClickedPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PlanningMap_BreachPoint.W_PlanningMap_BreachPoint_C.OnBreachPointHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_PlanningMap_BreachPoint_C*                HoveredPoint                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PlanningMap_BreachPoint_C::OnBreachPointHovered__DelegateSignature(class UW_PlanningMap_BreachPoint_C* HoveredPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PlanningMap_BreachPoint.W_PlanningMap_BreachPoint_C.OnBreachPointHovered__DelegateSignature");
		
		UW_PlanningMap_BreachPoint_C_OnBreachPointHovered__DelegateSignature_Params params {};
		params.HoveredPoint = HoveredPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_PlanningMap_BreachPoint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_PlanningMap_BreachPoint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_PlanningMap_BreachPoint.W_PlanningMap_BreachPoint_C");
		return ptr;
	}

}


