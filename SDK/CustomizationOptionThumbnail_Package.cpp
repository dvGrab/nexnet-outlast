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
	 * 		Name   -> Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.IsElementEmpty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsEmpty                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCustomizationOptionThumbnail_C::IsElementEmpty(bool* bIsEmpty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.IsElementEmpty");
		
		UCustomizationOptionThumbnail_C_IsElementEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsEmpty != nullptr)
			*bIsEmpty = params.bIsEmpty;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.RefreshInteractionType
	 * 		Flags  -> ()
	 */
	void UCustomizationOptionThumbnail_C::RefreshInteractionType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.RefreshInteractionType");
		
		UCustomizationOptionThumbnail_C_RefreshInteractionType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.UpdateThumbnailType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEmpty                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCustomizationOptionThumbnail_C::UpdateThumbnailType(bool IsEmpty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.UpdateThumbnailType");
		
		UCustomizationOptionThumbnail_C_UpdateThumbnailType_Params params {};
		params.IsEmpty = IsEmpty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.OnAnalogValueChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FAnalogInputEvent                           InAnalogInputEvent                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UCustomizationOptionThumbnail_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.OnAnalogValueChanged");
		
		UCustomizationOptionThumbnail_C_OnAnalogValueChanged_Params params {};
		params.MyGeometry = MyGeometry;
		params.InAnalogInputEvent = InAnalogInputEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.HideTooltip
	 * 		Flags  -> ()
	 */
	void UCustomizationOptionThumbnail_C::HideTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.HideTooltip");
		
		UCustomizationOptionThumbnail_C_HideTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.GamepadNav_MenuConfirm_Release
	 * 		Flags  -> ()
	 */
	void UCustomizationOptionThumbnail_C::GamepadNav_MenuConfirm_Release()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.GamepadNav_MenuConfirm_Release");
		
		UCustomizationOptionThumbnail_C_GamepadNav_MenuConfirm_Release_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.GamepadNav_MenuConfirm
	 * 		Flags  -> ()
	 */
	void UCustomizationOptionThumbnail_C::GamepadNav_MenuConfirm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.GamepadNav_MenuConfirm");
		
		UCustomizationOptionThumbnail_C_GamepadNav_MenuConfirm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.OnFocusLost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UCustomizationOptionThumbnail_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.OnFocusLost");
		
		UCustomizationOptionThumbnail_C_OnFocusLost_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.OnFocusReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UCustomizationOptionThumbnail_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.OnFocusReceived");
		
		UCustomizationOptionThumbnail_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.CreateTooltip
	 * 		Flags  -> ()
	 */
	void UCustomizationOptionThumbnail_C::CreateTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.CreateTooltip");
		
		UCustomizationOptionThumbnail_C_CreateTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.InitCost
	 * 		Flags  -> ()
	 */
	void UCustomizationOptionThumbnail_C::InitCost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.InitCost");
		
		UCustomizationOptionThumbnail_C_InitCost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.OnMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UCustomizationOptionThumbnail_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.OnMouseButtonDown");
		
		UCustomizationOptionThumbnail_C_OnMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.SetIsNew
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isNew                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCustomizationOptionThumbnail_C::SetIsNew(bool isNew)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.SetIsNew");
		
		UCustomizationOptionThumbnail_C_SetIsNew_Params params {};
		params.isNew = isNew;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.UpdateRarity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPlayerCustomizationRarity                         Rarity                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationOptionThumbnail_C::UpdateRarity(EPlayerCustomizationRarity Rarity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.UpdateRarity");
		
		UCustomizationOptionThumbnail_C_UpdateRarity_Params params {};
		params.Rarity = Rarity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.ShowLockedOverlay
	 * 		Flags  -> ()
	 */
	void UCustomizationOptionThumbnail_C::ShowLockedOverlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.ShowLockedOverlay");
		
		UCustomizationOptionThumbnail_C_ShowLockedOverlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.HideLockedOverlay
	 * 		Flags  -> ()
	 */
	void UCustomizationOptionThumbnail_C::HideLockedOverlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.HideLockedOverlay");
		
		UCustomizationOptionThumbnail_C_HideLockedOverlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.SetIsEquipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               equipped                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCustomizationOptionThumbnail_C::SetIsEquipped(bool equipped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.SetIsEquipped");
		
		UCustomizationOptionThumbnail_C_SetIsEquipped_Params params {};
		params.equipped = equipped;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.SetHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsHovered                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCustomizationOptionThumbnail_C::SetHovered(bool IsHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.SetHovered");
		
		UCustomizationOptionThumbnail_C_SetHovered_Params params {};
		params.IsHovered = IsHovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUICustomizationItem                        Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECustomizationMenuCategory                         Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationOptionThumbnail_C::Initialize(const struct FUICustomizationItem& Item, int32_t Index, ECustomizationMenuCategory Category)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.Initialize");
		
		UCustomizationOptionThumbnail_C_Initialize_Params params {};
		params.Item = Item;
		params.Index = Index;
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.Construct
	 * 		Flags  -> ()
	 */
	void UCustomizationOptionThumbnail_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.Construct");
		
		UCustomizationOptionThumbnail_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.BndEvt__Button_28_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCustomizationOptionThumbnail_C::BndEvt__Button_28_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.BndEvt__Button_28_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UCustomizationOptionThumbnail_C_BndEvt__Button_28_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.BndEvt__Button_28_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCustomizationOptionThumbnail_C::BndEvt__Button_28_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.BndEvt__Button_28_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UCustomizationOptionThumbnail_C_BndEvt__Button_28_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.BndEvt__Button_28_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCustomizationOptionThumbnail_C::BndEvt__Button_28_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.BndEvt__Button_28_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UCustomizationOptionThumbnail_C_BndEvt__Button_28_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.BndEvt__Button_28_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCustomizationOptionThumbnail_C::BndEvt__Button_28_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.BndEvt__Button_28_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");
		
		UCustomizationOptionThumbnail_C_BndEvt__Button_28_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.BndEvt__Button_28_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCustomizationOptionThumbnail_C::BndEvt__Button_28_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.BndEvt__Button_28_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature");
		
		UCustomizationOptionThumbnail_C_BndEvt__Button_28_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.ExecuteUbergraph_CustomizationOptionThumbnail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationOptionThumbnail_C::ExecuteUbergraph_CustomizationOptionThumbnail(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.ExecuteUbergraph_CustomizationOptionThumbnail");
		
		UCustomizationOptionThumbnail_C_ExecuteUbergraph_CustomizationOptionThumbnail_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.Event_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCustomizationOptionThumbnail_C*             Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationOptionThumbnail_C::Event_OnReleased__DelegateSignature(class UCustomizationOptionThumbnail_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.Event_OnReleased__DelegateSignature");
		
		UCustomizationOptionThumbnail_C_Event_OnReleased__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.Event_OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCustomizationOptionThumbnail_C*             Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationOptionThumbnail_C::Event_OnPressed__DelegateSignature(class UCustomizationOptionThumbnail_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.Event_OnPressed__DelegateSignature");
		
		UCustomizationOptionThumbnail_C_Event_OnPressed__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.Event_OnUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCustomizationOptionThumbnail_C*             Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationOptionThumbnail_C::Event_OnUnhovered__DelegateSignature(class UCustomizationOptionThumbnail_C* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.Event_OnUnhovered__DelegateSignature");
		
		UCustomizationOptionThumbnail_C_Event_OnUnhovered__DelegateSignature_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.Event_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCustomizationOptionThumbnail_C*             Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationOptionThumbnail_C::Event_OnHovered__DelegateSignature(class UCustomizationOptionThumbnail_C* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.Event_OnHovered__DelegateSignature");
		
		UCustomizationOptionThumbnail_C_Event_OnHovered__DelegateSignature_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.Event_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCustomizationOptionThumbnail_C*             Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationOptionThumbnail_C::Event_OnClicked__DelegateSignature(class UCustomizationOptionThumbnail_C* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.Event_OnClicked__DelegateSignature");
		
		UCustomizationOptionThumbnail_C_Event_OnClicked__DelegateSignature_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomizationOptionThumbnail_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomizationOptionThumbnail_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CustomizationOptionThumbnail.CustomizationOptionThumbnail_C");
		return ptr;
	}

}


