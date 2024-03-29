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
	 * 		Name   -> Function W_ItemSelection_Item.W_ItemSelection_Item_C.StopFadeOutAnim
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_Item_C::StopFadeOutAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_Item.W_ItemSelection_Item_C.StopFadeOutAnim");
		
		UW_ItemSelection_Item_C_StopFadeOutAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_Item.W_ItemSelection_Item_C.StopConfirmAnim
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_Item_C::StopConfirmAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_Item.W_ItemSelection_Item_C.StopConfirmAnim");
		
		UW_ItemSelection_Item_C_StopConfirmAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_Item.W_ItemSelection_Item_C.ConfirmSelection
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_Item_C::ConfirmSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_Item.W_ItemSelection_Item_C.ConfirmSelection");
		
		UW_ItemSelection_Item_C_ConfirmSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_Item.W_ItemSelection_Item_C.Deselect
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_Item_C::Deselect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_Item.W_ItemSelection_Item_C.Deselect");
		
		UW_ItemSelection_Item_C_Deselect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_Item.W_ItemSelection_Item_C.Select
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_Item_C::Select()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_Item.W_ItemSelection_Item_C.Select");
		
		UW_ItemSelection_Item_C_Select_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_Item.W_ItemSelection_Item_C.FadeOut
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_Item_C::FadeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_Item.W_ItemSelection_Item_C.FadeOut");
		
		UW_ItemSelection_Item_C_FadeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_Item.W_ItemSelection_Item_C.ChangeIconsIfBuildIsPirated
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_Item_C::ChangeIconsIfBuildIsPirated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_Item.W_ItemSelection_Item_C.ChangeIconsIfBuildIsPirated");
		
		UW_ItemSelection_Item_C_ChangeIconsIfBuildIsPirated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_Item.W_ItemSelection_Item_C.OnAnimFadeOut_Finished
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_Item_C::OnAnimFadeOut_Finished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_Item.W_ItemSelection_Item_C.OnAnimFadeOut_Finished");
		
		UW_ItemSelection_Item_C_OnAnimFadeOut_Finished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_Item.W_ItemSelection_Item_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateBrush                                 InBrush                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bIsVisible                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ItemSelection_Item_C::Initialize(const struct FSlateBrush& InBrush, bool bIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_Item.W_ItemSelection_Item_C.Initialize");
		
		UW_ItemSelection_Item_C_Initialize_Params params {};
		params.InBrush = InBrush;
		params.bIsVisible = bIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_Item.W_ItemSelection_Item_C.Reset Selection Indicator
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_Item_C::Reset_Selection_Indicator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_Item.W_ItemSelection_Item_C.Reset Selection Indicator");
		
		UW_ItemSelection_Item_C_Reset_Selection_Indicator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_Item.W_ItemSelection_Item_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_Item_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_Item.W_ItemSelection_Item_C.Construct");
		
		UW_ItemSelection_Item_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_Item.W_ItemSelection_Item_C.Re-Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ItemSelection_Item_C::Re_Initialize(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_Item.W_ItemSelection_Item_C.Re-Initialize");
		
		UW_ItemSelection_Item_C_Re_Initialize_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_Item.W_ItemSelection_Item_C.CustomEvent_1
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_Item_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_Item.W_ItemSelection_Item_C.CustomEvent_1");
		
		UW_ItemSelection_Item_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_Item.W_ItemSelection_Item_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ItemSelection_Item_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_Item.W_ItemSelection_Item_C.PreConstruct");
		
		UW_ItemSelection_Item_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_Item.W_ItemSelection_Item_C.CustomEvent_2
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_Item_C::CustomEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_Item.W_ItemSelection_Item_C.CustomEvent_2");
		
		UW_ItemSelection_Item_C_CustomEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_Item.W_ItemSelection_Item_C.ExecuteUbergraph_W_ItemSelection_Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ItemSelection_Item_C::ExecuteUbergraph_W_ItemSelection_Item(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_Item.W_ItemSelection_Item_C.ExecuteUbergraph_W_ItemSelection_Item");
		
		UW_ItemSelection_Item_C_ExecuteUbergraph_W_ItemSelection_Item_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_Item.W_ItemSelection_Item_C.ED_OnAnimSelectFinished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_Item_C::ED_OnAnimSelectFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_Item.W_ItemSelection_Item_C.ED_OnAnimSelectFinished__DelegateSignature");
		
		UW_ItemSelection_Item_C_ED_OnAnimSelectFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_Item.W_ItemSelection_Item_C.ED_OnAnimFadeOutFinished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_Item_C::ED_OnAnimFadeOutFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_Item.W_ItemSelection_Item_C.ED_OnAnimFadeOutFinished__DelegateSignature");
		
		UW_ItemSelection_Item_C_ED_OnAnimFadeOutFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_ItemSelection_Item_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_ItemSelection_Item_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_ItemSelection_Item.W_ItemSelection_Item_C");
		return ptr;
	}

}


