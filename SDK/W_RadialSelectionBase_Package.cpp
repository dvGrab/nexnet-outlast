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
	 * 		Name   -> Function W_RadialSelectionBase.W_RadialSelectionBase_C.UpdateIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SelectionIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateBrush                                 InBrush                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_RadialSelectionBase_C::UpdateIcon(int32_t SelectionIndex, const struct FSlateBrush& InBrush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_RadialSelectionBase.W_RadialSelectionBase_C.UpdateIcon");
		
		UW_RadialSelectionBase_C_UpdateIcon_Params params {};
		params.SelectionIndex = SelectionIndex;
		params.InBrush = InBrush;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_RadialSelectionBase.W_RadialSelectionBase_C.Select
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_RadialSelectionBase_C::Select(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_RadialSelectionBase.W_RadialSelectionBase_C.Select");
		
		UW_RadialSelectionBase_C_Select_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_RadialSelectionBase.W_RadialSelectionBase_C.Previous
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_RadialSelectionBase_C::Previous(bool* bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_RadialSelectionBase.W_RadialSelectionBase_C.Previous");
		
		UW_RadialSelectionBase_C_Previous_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_RadialSelectionBase.W_RadialSelectionBase_C.Next
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_RadialSelectionBase_C::Next(bool* bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_RadialSelectionBase.W_RadialSelectionBase_C.Next");
		
		UW_RadialSelectionBase_C_Next_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_RadialSelectionBase.W_RadialSelectionBase_C.ExecuteRadial
	 * 		Flags  -> ()
	 */
	void UW_RadialSelectionBase_C::ExecuteRadial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_RadialSelectionBase.W_RadialSelectionBase_C.ExecuteRadial");
		
		UW_RadialSelectionBase_C_ExecuteRadial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_RadialSelectionBase.W_RadialSelectionBase_C.OnDeselected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Play_Animation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_RadialSelectionBase_C::OnDeselected(bool Play_Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_RadialSelectionBase.W_RadialSelectionBase_C.OnDeselected");
		
		UW_RadialSelectionBase_C_OnDeselected_Params params {};
		params.Play_Animation = Play_Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_RadialSelectionBase.W_RadialSelectionBase_C.OnSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Play_Animation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_RadialSelectionBase_C::OnSelected(bool Play_Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_RadialSelectionBase.W_RadialSelectionBase_C.OnSelected");
		
		UW_RadialSelectionBase_C_OnSelected_Params params {};
		params.Play_Animation = Play_Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_RadialSelectionBase.W_RadialSelectionBase_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_RadialSelectionBase_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_RadialSelectionBase.W_RadialSelectionBase_C.PreConstruct");
		
		UW_RadialSelectionBase_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_RadialSelectionBase.W_RadialSelectionBase_C.On Wheel Created
	 * 		Flags  -> ()
	 */
	void UW_RadialSelectionBase_C::On_Wheel_Created()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_RadialSelectionBase.W_RadialSelectionBase_C.On Wheel Created");
		
		UW_RadialSelectionBase_C_On_Wheel_Created_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_RadialSelectionBase.W_RadialSelectionBase_C.ExecuteUbergraph_W_RadialSelectionBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_RadialSelectionBase_C::ExecuteUbergraph_W_RadialSelectionBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_RadialSelectionBase.W_RadialSelectionBase_C.ExecuteUbergraph_W_RadialSelectionBase");
		
		UW_RadialSelectionBase_C_ExecuteUbergraph_W_RadialSelectionBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_RadialSelectionBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_RadialSelectionBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_RadialSelectionBase.W_RadialSelectionBase_C");
		return ptr;
	}

}


