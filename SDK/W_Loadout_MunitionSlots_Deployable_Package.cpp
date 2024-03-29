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
	 * 		Name   -> Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.SetCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_Deployable_C::SetCount(int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.SetCount");
		
		UW_Loadout_MunitionSlots_Deployable_C_SetCount_Params params {};
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.SetSlotVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsGrenade                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_Loadout_MunitionSlots_Deployable_C::SetSlotVisibility(bool IsGrenade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.SetSlotVisibility");
		
		UW_Loadout_MunitionSlots_Deployable_C_SetSlotVisibility_Params params {};
		params.IsGrenade = IsGrenade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.GetSlot
	 * 		Flags  -> ()
	 */
	class UW_LoadoutSlot_C* UW_Loadout_MunitionSlots_Deployable_C::GetSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.GetSlot");
		
		UW_Loadout_MunitionSlots_Deployable_C_GetSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.DisplayCountControls
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShowCountControls                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_Loadout_MunitionSlots_Deployable_C::DisplayCountControls(bool ShowCountControls)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.DisplayCountControls");
		
		UW_Loadout_MunitionSlots_Deployable_C_DisplayCountControls_Params params {};
		params.ShowCountControls = ShowCountControls;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.Reveal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_Deployable_C::Reveal(float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.Reveal");
		
		UW_Loadout_MunitionSlots_Deployable_C_Reveal_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.Hide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Collapse                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_Loadout_MunitionSlots_Deployable_C::Hide(float Delay, bool Collapse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.Hide");
		
		UW_Loadout_MunitionSlots_Deployable_C_Hide_Params params {};
		params.Delay = Delay;
		params.Collapse = Collapse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_Loadout_MunitionSlots_Deployable_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.PreConstruct");
		
		UW_Loadout_MunitionSlots_Deployable_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_Loadout_MunitionSlots_Deployable_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.Construct");
		
		UW_Loadout_MunitionSlots_Deployable_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.BndEvt__W_Loadout_MunitionSlots_Deployable_btn_Add_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_Deployable_C::BndEvt__W_Loadout_MunitionSlots_Deployable_btn_Add_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.BndEvt__W_Loadout_MunitionSlots_Deployable_btn_Add_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");
		
		UW_Loadout_MunitionSlots_Deployable_C_BndEvt__W_Loadout_MunitionSlots_Deployable_btn_Add_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.BndEvt__W_Loadout_MunitionSlots_Deployable_btn_Minus_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_Deployable_C::BndEvt__W_Loadout_MunitionSlots_Deployable_btn_Minus_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.BndEvt__W_Loadout_MunitionSlots_Deployable_btn_Minus_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");
		
		UW_Loadout_MunitionSlots_Deployable_C_BndEvt__W_Loadout_MunitionSlots_Deployable_btn_Minus_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.LoadoutSlotClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_Deployable_C::LoadoutSlotClicked(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.LoadoutSlotClicked");
		
		UW_Loadout_MunitionSlots_Deployable_C_LoadoutSlotClicked_Params params {};
		params.TriggeringSlot = TriggeringSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.SetItemClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_Deployable_C::SetItemClass(class UClass* ItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.SetItemClass");
		
		UW_Loadout_MunitionSlots_Deployable_C_SetItemClass_Params params {};
		params.ItemData = ItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.LoadoutSlotHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_Deployable_C::LoadoutSlotHovered(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.LoadoutSlotHovered");
		
		UW_Loadout_MunitionSlots_Deployable_C_LoadoutSlotHovered_Params params {};
		params.TriggeringSlot = TriggeringSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.LoadoutSlotUnhovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            TriggeringSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_Deployable_C::LoadoutSlotUnhovered(class UW_LoadoutSlot_C* TriggeringSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.LoadoutSlotUnhovered");
		
		UW_Loadout_MunitionSlots_Deployable_C_LoadoutSlotUnhovered_Params params {};
		params.TriggeringSlot = TriggeringSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.ToggleAddButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_Loadout_MunitionSlots_Deployable_C::ToggleAddButton(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.ToggleAddButton");
		
		UW_Loadout_MunitionSlots_Deployable_C_ToggleAddButton_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.ForceClick
	 * 		Flags  -> ()
	 */
	void UW_Loadout_MunitionSlots_Deployable_C::ForceClick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.ForceClick");
		
		UW_Loadout_MunitionSlots_Deployable_C_ForceClick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.ExecuteUbergraph_W_Loadout_MunitionSlots_Deployable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_Deployable_C::ExecuteUbergraph_W_Loadout_MunitionSlots_Deployable(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.ExecuteUbergraph_W_Loadout_MunitionSlots_Deployable");
		
		UW_Loadout_MunitionSlots_Deployable_C_ExecuteUbergraph_W_Loadout_MunitionSlots_Deployable_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.OnDeployableSlotUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            LoadoutSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_Loadout_MunitionSlots_Deployable_C*       TriggeringDeployableSlot                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_Deployable_C::OnDeployableSlotUnhovered__DelegateSignature(class UW_LoadoutSlot_C* LoadoutSlot, class UW_Loadout_MunitionSlots_Deployable_C* TriggeringDeployableSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.OnDeployableSlotUnhovered__DelegateSignature");
		
		UW_Loadout_MunitionSlots_Deployable_C_OnDeployableSlotUnhovered__DelegateSignature_Params params {};
		params.LoadoutSlot = LoadoutSlot;
		params.TriggeringDeployableSlot = TriggeringDeployableSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.OnDeployableSlotHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutSlot_C*                            LoadoutSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_Loadout_MunitionSlots_Deployable_C*       TriggeringDeployableSlot                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_Deployable_C::OnDeployableSlotHovered__DelegateSignature(class UW_LoadoutSlot_C* LoadoutSlot, class UW_Loadout_MunitionSlots_Deployable_C* TriggeringDeployableSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.OnDeployableSlotHovered__DelegateSignature");
		
		UW_Loadout_MunitionSlots_Deployable_C_OnDeployableSlotHovered__DelegateSignature_Params params {};
		params.LoadoutSlot = LoadoutSlot;
		params.TriggeringDeployableSlot = TriggeringDeployableSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.OnDeployableSlotClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Loadout_MunitionSlots_Deployable_C*       TriggeringDeployableSlot                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_LoadoutSlot_C*                            LoadoutSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_Deployable_C::OnDeployableSlotClicked__DelegateSignature(class UW_Loadout_MunitionSlots_Deployable_C* TriggeringDeployableSlot, class UW_LoadoutSlot_C* LoadoutSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.OnDeployableSlotClicked__DelegateSignature");
		
		UW_Loadout_MunitionSlots_Deployable_C_OnDeployableSlotClicked__DelegateSignature_Params params {};
		params.TriggeringDeployableSlot = TriggeringDeployableSlot;
		params.LoadoutSlot = LoadoutSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.OnMinusClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Loadout_MunitionSlots_Deployable_C*       TriggeringDeployableSlot                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_Deployable_C::OnMinusClicked__DelegateSignature(class UW_Loadout_MunitionSlots_Deployable_C* TriggeringDeployableSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.OnMinusClicked__DelegateSignature");
		
		UW_Loadout_MunitionSlots_Deployable_C_OnMinusClicked__DelegateSignature_Params params {};
		params.TriggeringDeployableSlot = TriggeringDeployableSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.OnAddClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Loadout_MunitionSlots_Deployable_C*       TriggeringDeployableSlot                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Loadout_MunitionSlots_Deployable_C::OnAddClicked__DelegateSignature(class UW_Loadout_MunitionSlots_Deployable_C* TriggeringDeployableSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.OnAddClicked__DelegateSignature");
		
		UW_Loadout_MunitionSlots_Deployable_C_OnAddClicked__DelegateSignature_Params params {};
		params.TriggeringDeployableSlot = TriggeringDeployableSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_Loadout_MunitionSlots_Deployable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_Loadout_MunitionSlots_Deployable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C");
		return ptr;
	}

}


