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
	 * 		Name   -> Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.SetKeybindText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ActionName                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ItemSelection_ItemGroup_C::SetKeybindText(const class FName& ActionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.SetKeybindText");
		
		UW_ItemSelection_ItemGroup_C_SetKeybindText_Params params {};
		params.ActionName = ActionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.ResetFadeOutAnimationState
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemGroup_C::ResetFadeOutAnimationState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.ResetFadeOutAnimationState");
		
		UW_ItemSelection_ItemGroup_C_ResetFadeOutAnimationState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.PlayFadeOutAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSelected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ItemSelection_ItemGroup_C::PlayFadeOutAnim(bool bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.PlayFadeOutAnim");
		
		UW_ItemSelection_ItemGroup_C_PlayFadeOutAnim_Params params {};
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.ShowDivider
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemGroup_C::ShowDivider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.ShowDivider");
		
		UW_ItemSelection_ItemGroup_C_ShowDivider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.HideDivider
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemGroup_C::HideDivider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.HideDivider");
		
		UW_ItemSelection_ItemGroup_C_HideDivider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.UpdateIconImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ItemSelection_ItemGroup_C::UpdateIconImage(class UTexture2D* Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.UpdateIconImage");
		
		UW_ItemSelection_ItemGroup_C_UpdateIconImage_Params params {};
		params.Icon = Icon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.PlaySelectFailedAnim
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemGroup_C::PlaySelectFailedAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.PlaySelectFailedAnim");
		
		UW_ItemSelection_ItemGroup_C_PlaySelectFailedAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.HasAnyItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ItemSelection_ItemGroup_C::HasAnyItems(bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.HasAnyItems");
		
		UW_ItemSelection_ItemGroup_C_HasAnyItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.HideHint
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemGroup_C::HideHint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.HideHint");
		
		UW_ItemSelection_ItemGroup_C_HideHint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.ShowHint
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemGroup_C::ShowHint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.ShowHint");
		
		UW_ItemSelection_ItemGroup_C_ShowHint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.PlayUnfocusAnim
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemGroup_C::PlayUnfocusAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.PlayUnfocusAnim");
		
		UW_ItemSelection_ItemGroup_C_PlayUnfocusAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.PlayFocusAnim
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemGroup_C::PlayFocusAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.PlayFocusAnim");
		
		UW_ItemSelection_ItemGroup_C_PlayFocusAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.EquipItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ItemEquipped                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ItemSelection_ItemGroup_C::EquipItem(bool* ItemEquipped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.EquipItem");
		
		UW_ItemSelection_ItemGroup_C_EquipItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemEquipped != nullptr)
			*ItemEquipped = params.ItemEquipped;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   InItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FItemSelectionGroup                         ItemGroupSetting                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               bLastGroup                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ItemSelection_ItemGroup_C::Initialize(class ABaseItem* InItem, const struct FItemSelectionGroup& ItemGroupSetting, bool bLastGroup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.Initialize");
		
		UW_ItemSelection_ItemGroup_C_Initialize_Params params {};
		params.InItem = InItem;
		params.ItemGroupSetting = ItemGroupSetting;
		params.bLastGroup = bLastGroup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemGroup_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.Construct");
		
		UW_ItemSelection_ItemGroup_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.OnFocus
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemGroup_C::OnFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.OnFocus");
		
		UW_ItemSelection_ItemGroup_C_OnFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.OnUnfocus
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemGroup_C::OnUnfocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.OnUnfocus");
		
		UW_ItemSelection_ItemGroup_C_OnUnfocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ItemSelection_ItemGroup_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.Tick");
		
		UW_ItemSelection_ItemGroup_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.OnInitialized
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemGroup_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.OnInitialized");
		
		UW_ItemSelection_ItemGroup_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.CustomEvent_1
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemGroup_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.CustomEvent_1");
		
		UW_ItemSelection_ItemGroup_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.CustomEvent_2
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemGroup_C::CustomEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.CustomEvent_2");
		
		UW_ItemSelection_ItemGroup_C_CustomEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.ExecuteUbergraph_W_ItemSelection_ItemGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ItemSelection_ItemGroup_C::ExecuteUbergraph_W_ItemSelection_ItemGroup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.ExecuteUbergraph_W_ItemSelection_ItemGroup");
		
		UW_ItemSelection_ItemGroup_C_ExecuteUbergraph_W_ItemSelection_ItemGroup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.OnFadeOutFinished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemGroup_C::OnFadeOutFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.OnFadeOutFinished__DelegateSignature");
		
		UW_ItemSelection_ItemGroup_C_OnFadeOutFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.OnFadeOutSelectedFinished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_ItemSelection_ItemGroup_C::OnFadeOutSelectedFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.OnFadeOutSelectedFinished__DelegateSignature");
		
		UW_ItemSelection_ItemGroup_C_OnFadeOutSelectedFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_ItemSelection_ItemGroup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_ItemSelection_ItemGroup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C");
		return ptr;
	}

}


