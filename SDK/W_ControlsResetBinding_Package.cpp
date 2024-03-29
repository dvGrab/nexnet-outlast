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
	 * 		Name   -> Function W_ControlsResetBinding.W_ControlsResetBinding_C.Remove Key Bind
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_ControlsBind_C*                           Control_Bind                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ControlsResetBinding_C::Remove_Key_Bind(class UW_ControlsBind_C* Control_Bind)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsResetBinding.W_ControlsResetBinding_C.Remove Key Bind");
		
		UW_ControlsResetBinding_C_Remove_Key_Bind_Params params {};
		params.Control_Bind = Control_Bind;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsResetBinding.W_ControlsResetBinding_C.Update Input Mappings
	 * 		Flags  -> ()
	 */
	void UW_ControlsResetBinding_C::Update_Input_Mappings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsResetBinding.W_ControlsResetBinding_C.Update Input Mappings");
		
		UW_ControlsResetBinding_C_Update_Input_Mappings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsResetBinding.W_ControlsResetBinding_C.Clear Temp Input Mappings
	 * 		Flags  -> ()
	 */
	void UW_ControlsResetBinding_C::Clear_Temp_Input_Mappings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsResetBinding.W_ControlsResetBinding_C.Clear Temp Input Mappings");
		
		UW_ControlsResetBinding_C_Clear_Temp_Input_Mappings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsResetBinding.W_ControlsResetBinding_C.Check if None Key Is Assigned Action
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsNoneKeyAssigned                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ControlsResetBinding_C::Check_if_None_Key_Is_Assigned_Action(bool* IsNoneKeyAssigned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsResetBinding.W_ControlsResetBinding_C.Check if None Key Is Assigned Action");
		
		UW_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Action_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsNoneKeyAssigned != nullptr)
			*IsNoneKeyAssigned = params.IsNoneKeyAssigned;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsResetBinding.W_ControlsResetBinding_C.Check if None Key Is Assigned Axis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsNoneKeyAssigned                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ControlsResetBinding_C::Check_if_None_Key_Is_Assigned_Axis(bool* IsNoneKeyAssigned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsResetBinding.W_ControlsResetBinding_C.Check if None Key Is Assigned Axis");
		
		UW_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Axis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsNoneKeyAssigned != nullptr)
			*IsNoneKeyAssigned = params.IsNoneKeyAssigned;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsResetBinding.W_ControlsResetBinding_C.SetDisabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Disabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ControlsResetBinding_C::SetDisabled(bool Disabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsResetBinding.W_ControlsResetBinding_C.SetDisabled");
		
		UW_ControlsResetBinding_C_SetDisabled_Params params {};
		params.Disabled = Disabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsResetBinding.W_ControlsResetBinding_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_ControlsResetBinding_C::BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsResetBinding.W_ControlsResetBinding_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UW_ControlsResetBinding_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsResetBinding.W_ControlsResetBinding_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_ControlsResetBinding_C::BndEvt__ResetButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsResetBinding.W_ControlsResetBinding_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");
		
		UW_ControlsResetBinding_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsResetBinding.W_ControlsResetBinding_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_ControlsResetBinding_C::BndEvt__ResetButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsResetBinding.W_ControlsResetBinding_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");
		
		UW_ControlsResetBinding_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsResetBinding.W_ControlsResetBinding_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_ControlsResetBinding_C::BndEvt__ResetButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsResetBinding.W_ControlsResetBinding_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UW_ControlsResetBinding_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsResetBinding.W_ControlsResetBinding_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_ControlsResetBinding_C::BndEvt__ResetButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsResetBinding.W_ControlsResetBinding_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");
		
		UW_ControlsResetBinding_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsResetBinding.W_ControlsResetBinding_C.ExecuteUbergraph_W_ControlsResetBinding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ControlsResetBinding_C::ExecuteUbergraph_W_ControlsResetBinding(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsResetBinding.W_ControlsResetBinding_C.ExecuteUbergraph_W_ControlsResetBinding");
		
		UW_ControlsResetBinding_C_ExecuteUbergraph_W_ControlsResetBinding_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsResetBinding.W_ControlsResetBinding_C.OnResetReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_ControlsResetBinding_C::OnResetReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsResetBinding.W_ControlsResetBinding_C.OnResetReleased__DelegateSignature");
		
		UW_ControlsResetBinding_C_OnResetReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsResetBinding.W_ControlsResetBinding_C.OnResetPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_ControlsResetBinding_C::OnResetPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsResetBinding.W_ControlsResetBinding_C.OnResetPressed__DelegateSignature");
		
		UW_ControlsResetBinding_C_OnResetPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsResetBinding.W_ControlsResetBinding_C.OnResetUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_ControlsResetBinding_C::OnResetUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsResetBinding.W_ControlsResetBinding_C.OnResetUnhovered__DelegateSignature");
		
		UW_ControlsResetBinding_C_OnResetUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsResetBinding.W_ControlsResetBinding_C.OnResetHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_ControlsResetBinding_C::OnResetHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsResetBinding.W_ControlsResetBinding_C.OnResetHovered__DelegateSignature");
		
		UW_ControlsResetBinding_C_OnResetHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsResetBinding.W_ControlsResetBinding_C.OnResetClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_ControlsResetBinding_C*                   CallingWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ControlsResetBinding_C::OnResetClicked__DelegateSignature(class UW_ControlsResetBinding_C* CallingWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsResetBinding.W_ControlsResetBinding_C.OnResetClicked__DelegateSignature");
		
		UW_ControlsResetBinding_C_OnResetClicked__DelegateSignature_Params params {};
		params.CallingWidget = CallingWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_ControlsResetBinding_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_ControlsResetBinding_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_ControlsResetBinding.W_ControlsResetBinding_C");
		return ptr;
	}

}


