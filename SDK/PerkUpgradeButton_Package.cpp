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
	 * 		Name   -> Function PerkUpgradeButton.PerkUpgradeButton_C.IsElementEmpty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsEmpty                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPerkUpgradeButton_C::IsElementEmpty(bool* bIsEmpty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerkUpgradeButton.PerkUpgradeButton_C.IsElementEmpty");
		
		UPerkUpgradeButton_C_IsElementEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsEmpty != nullptr)
			*bIsEmpty = params.bIsEmpty;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PerkUpgradeButton.PerkUpgradeButton_C.Setup
	 * 		Flags  -> ()
	 */
	void UPerkUpgradeButton_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerkUpgradeButton.PerkUpgradeButton_C.Setup");
		
		UPerkUpgradeButton_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PerkUpgradeButton.PerkUpgradeButton_C.GamepadNav_MenuConfirm_Release
	 * 		Flags  -> ()
	 */
	void UPerkUpgradeButton_C::GamepadNav_MenuConfirm_Release()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerkUpgradeButton.PerkUpgradeButton_C.GamepadNav_MenuConfirm_Release");
		
		UPerkUpgradeButton_C_GamepadNav_MenuConfirm_Release_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PerkUpgradeButton.PerkUpgradeButton_C.GamepadNav_MenuConfirm
	 * 		Flags  -> ()
	 */
	void UPerkUpgradeButton_C::GamepadNav_MenuConfirm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerkUpgradeButton.PerkUpgradeButton_C.GamepadNav_MenuConfirm");
		
		UPerkUpgradeButton_C_GamepadNav_MenuConfirm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PerkUpgradeButton.PerkUpgradeButton_C.OnFocusLost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UPerkUpgradeButton_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerkUpgradeButton.PerkUpgradeButton_C.OnFocusLost");
		
		UPerkUpgradeButton_C_OnFocusLost_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PerkUpgradeButton.PerkUpgradeButton_C.OnFocusReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UPerkUpgradeButton_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerkUpgradeButton.PerkUpgradeButton_C.OnFocusReceived");
		
		UPerkUpgradeButton_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function PerkUpgradeButton.PerkUpgradeButton_C.GetIsEquipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEquipped                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPerkUpgradeButton_C::GetIsEquipped(bool* IsEquipped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerkUpgradeButton.PerkUpgradeButton_C.GetIsEquipped");
		
		UPerkUpgradeButton_C_GetIsEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsEquipped != nullptr)
			*IsEquipped = params.IsEquipped;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PerkUpgradeButton.PerkUpgradeButton_C.SetIsEquipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEquipped                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPerkUpgradeButton_C::SetIsEquipped(bool IsEquipped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerkUpgradeButton.PerkUpgradeButton_C.SetIsEquipped");
		
		UPerkUpgradeButton_C_SetIsEquipped_Params params {};
		params.IsEquipped = IsEquipped;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PerkUpgradeButton.PerkUpgradeButton_C.InitializeEmptySlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SlotIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DisplayOnly                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPerkUpgradeButton_C::InitializeEmptySlot(int32_t SlotIndex, bool DisplayOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerkUpgradeButton.PerkUpgradeButton_C.InitializeEmptySlot");
		
		UPerkUpgradeButton_C_InitializeEmptySlot_Params params {};
		params.SlotIndex = SlotIndex;
		params.DisplayOnly = DisplayOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PerkUpgradeButton.PerkUpgradeButton_C.Initialize Locked Slot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SlotIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPerkUpgradeButton_C::Initialize_Locked_Slot(int32_t SlotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerkUpgradeButton.PerkUpgradeButton_C.Initialize Locked Slot");
		
		UPerkUpgradeButton_C_Initialize_Locked_Slot_Params params {};
		params.SlotIndex = SlotIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PerkUpgradeButton.PerkUpgradeButton_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMenuUpgradeItemInfo                        itemUpgradeInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               inIsLoadout                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SlotIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInIsSlot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ARBPlayerState*                              PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPerkUpgradeButton_C::Initialize(const struct FMenuUpgradeItemInfo& itemUpgradeInfo, bool inIsLoadout, int32_t SlotIndex, bool bInIsSlot, class ARBPlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerkUpgradeButton.PerkUpgradeButton_C.Initialize");
		
		UPerkUpgradeButton_C_Initialize_Params params {};
		params.itemUpgradeInfo = itemUpgradeInfo;
		params.inIsLoadout = inIsLoadout;
		params.SlotIndex = SlotIndex;
		params.bInIsSlot = bInIsSlot;
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PerkUpgradeButton.PerkUpgradeButton_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPerkUpgradeButton_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerkUpgradeButton.PerkUpgradeButton_C.PreConstruct");
		
		UPerkUpgradeButton_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PerkUpgradeButton.PerkUpgradeButton_C.BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_0_Event_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPerkUpgradeButton_C::BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_0_Event_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerkUpgradeButton.PerkUpgradeButton_C.BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_0_Event_OnClicked__DelegateSignature");
		
		UPerkUpgradeButton_C_BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_0_Event_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PerkUpgradeButton.PerkUpgradeButton_C.BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_1_Event_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPerkUpgradeButton_C::BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_1_Event_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerkUpgradeButton.PerkUpgradeButton_C.BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_1_Event_OnHovered__DelegateSignature");
		
		UPerkUpgradeButton_C_BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_1_Event_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PerkUpgradeButton.PerkUpgradeButton_C.BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_2_Event_OnUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPerkUpgradeButton_C::BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_2_Event_OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerkUpgradeButton.PerkUpgradeButton_C.BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_2_Event_OnUnhovered__DelegateSignature");
		
		UPerkUpgradeButton_C_BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_2_Event_OnUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PerkUpgradeButton.PerkUpgradeButton_C.BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_3_Event_OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPerkUpgradeButton_C::BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_3_Event_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerkUpgradeButton.PerkUpgradeButton_C.BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_3_Event_OnPressed__DelegateSignature");
		
		UPerkUpgradeButton_C_BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_3_Event_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PerkUpgradeButton.PerkUpgradeButton_C.BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_4_Event_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPerkUpgradeButton_C::BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_4_Event_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerkUpgradeButton.PerkUpgradeButton_C.BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_4_Event_OnReleased__DelegateSignature");
		
		UPerkUpgradeButton_C_BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_4_Event_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PerkUpgradeButton.PerkUpgradeButton_C.ExecuteUbergraph_PerkUpgradeButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPerkUpgradeButton_C::ExecuteUbergraph_PerkUpgradeButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerkUpgradeButton.PerkUpgradeButton_C.ExecuteUbergraph_PerkUpgradeButton");
		
		UPerkUpgradeButton_C_ExecuteUbergraph_PerkUpgradeButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PerkUpgradeButton.PerkUpgradeButton_C.OnReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMenuUpgradeItemInfo                        itemInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UPerkUpgradeButton_C::OnReleasedEvent__DelegateSignature(const struct FMenuUpgradeItemInfo& itemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerkUpgradeButton.PerkUpgradeButton_C.OnReleasedEvent__DelegateSignature");
		
		UPerkUpgradeButton_C_OnReleasedEvent__DelegateSignature_Params params {};
		params.itemInfo = itemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PerkUpgradeButton.PerkUpgradeButton_C.OnPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMenuUpgradeItemInfo                        itemInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UPerkUpgradeButton_C::OnPressedEvent__DelegateSignature(const struct FMenuUpgradeItemInfo& itemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerkUpgradeButton.PerkUpgradeButton_C.OnPressedEvent__DelegateSignature");
		
		UPerkUpgradeButton_C_OnPressedEvent__DelegateSignature_Params params {};
		params.itemInfo = itemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PerkUpgradeButton.PerkUpgradeButton_C.OnUnhoveredEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPerkUpgradeButton_C*                        Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPerkUpgradeButton_C::OnUnhoveredEvent__DelegateSignature(class UPerkUpgradeButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerkUpgradeButton.PerkUpgradeButton_C.OnUnhoveredEvent__DelegateSignature");
		
		UPerkUpgradeButton_C_OnUnhoveredEvent__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PerkUpgradeButton.PerkUpgradeButton_C.OnHoveredEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPerkUpgradeButton_C*                        Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPerkUpgradeButton_C::OnHoveredEvent__DelegateSignature(class UPerkUpgradeButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerkUpgradeButton.PerkUpgradeButton_C.OnHoveredEvent__DelegateSignature");
		
		UPerkUpgradeButton_C_OnHoveredEvent__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PerkUpgradeButton.PerkUpgradeButton_C.OnClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPerkUpgradeButton_C*                        Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPerkUpgradeButton_C::OnClickedEvent__DelegateSignature(class UPerkUpgradeButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerkUpgradeButton.PerkUpgradeButton_C.OnClickedEvent__DelegateSignature");
		
		UPerkUpgradeButton_C_OnClickedEvent__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPerkUpgradeButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPerkUpgradeButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PerkUpgradeButton.PerkUpgradeButton_C");
		return ptr;
	}

}


