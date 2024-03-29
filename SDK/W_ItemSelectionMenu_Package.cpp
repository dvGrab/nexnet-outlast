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
	 * 		Name   -> Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.ResetAnimationFadeOutState
	 * 		Flags  -> ()
	 */
	void UW_ItemSelectionMenu_C::ResetAnimationFadeOutState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.ResetAnimationFadeOutState");
		
		UW_ItemSelectionMenu_C_ResetAnimationFadeOutState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.FindItemFromColumnIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_ItemSelection_ItemList_C*                 Return_Value                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ItemSelectionMenu_C::FindItemFromColumnIndex(class UW_ItemSelection_ItemList_C** Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.FindItemFromColumnIndex");
		
		UW_ItemSelectionMenu_C_FindItemFromColumnIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.FadeOutSelectedColumn
	 * 		Flags  -> ()
	 */
	void UW_ItemSelectionMenu_C::FadeOutSelectedColumn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.FadeOutSelectedColumn");
		
		UW_ItemSelectionMenu_C_FadeOutSelectedColumn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.CanQueueSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ItemSelectionMenu_C::CanQueueSelection(bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.CanQueueSelection");
		
		UW_ItemSelectionMenu_C_CanQueueSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.QueuedExecuteSelection
	 * 		Flags  -> ()
	 */
	void UW_ItemSelectionMenu_C::QueuedExecuteSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.QueuedExecuteSelection");
		
		UW_ItemSelectionMenu_C_QueuedExecuteSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.FindColumnIndexFromItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   InItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ItemSelectionMenu_C::FindColumnIndexFromItem(class ABaseItem* InItem, int32_t* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.FindColumnIndexFromItem");
		
		UW_ItemSelectionMenu_C_FindColumnIndexFromItem_Params params {};
		params.InItem = InItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.IsOpen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ItemSelectionMenu_C::IsOpen(bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.IsOpen");
		
		UW_ItemSelectionMenu_C_IsOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.HideMenu
	 * 		Flags  -> ()
	 */
	void UW_ItemSelectionMenu_C::HideMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.HideMenu");
		
		UW_ItemSelectionMenu_C_HideMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.RemoveItemFromMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   ItemToRemove                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            List_Index                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ItemSelectionMenu_C::RemoveItemFromMenu(class ABaseItem* ItemToRemove, int32_t List_Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.RemoveItemFromMenu");
		
		UW_ItemSelectionMenu_C_RemoveItemFromMenu_Params params {};
		params.ItemToRemove = ItemToRemove;
		params.List_Index = List_Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.UpdateDebugInfo
	 * 		Flags  -> ()
	 */
	bool UW_ItemSelectionMenu_C::UpdateDebugInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.UpdateDebugInfo");
		
		UW_ItemSelectionMenu_C_UpdateDebugInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.CanNavigate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ItemSelectionMenu_C::CanNavigate(bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.CanNavigate");
		
		UW_ItemSelectionMenu_C_CanNavigate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.SetMouseWheelDelta
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewMouseWheelDelta                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ItemSelectionMenu_C::SetMouseWheelDelta(float NewMouseWheelDelta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.SetMouseWheelDelta");
		
		UW_ItemSelectionMenu_C_SetMouseWheelDelta_Params params {};
		params.NewMouseWheelDelta = NewMouseWheelDelta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.ExecuteSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ItemSelectionMenu_C::ExecuteSelection(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.ExecuteSelection");
		
		UW_ItemSelectionMenu_C_ExecuteSelection_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.CloseMenu
	 * 		Flags  -> ()
	 */
	void UW_ItemSelectionMenu_C::CloseMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.CloseMenu");
		
		UW_ItemSelectionMenu_C_CloseMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.OpenMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        TriggerKey                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UW_ItemSelectionMenu_C::OpenMenu(const struct FKey& TriggerKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.OpenMenu");
		
		UW_ItemSelectionMenu_C_OpenMenu_Params params {};
		params.TriggerKey = TriggerKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.OnWeaponMagCheck_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseMagazineWeapon*                         MagazineWeapon                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ItemSelectionMenu_C::OnWeaponMagCheck_Event_1(class ABaseMagazineWeapon* MagazineWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.OnWeaponMagCheck_Event_1");
		
		UW_ItemSelectionMenu_C_OnWeaponMagCheck_Event_1_Params params {};
		params.MagazineWeapon = MagazineWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.OnInitialized
	 * 		Flags  -> ()
	 */
	void UW_ItemSelectionMenu_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.OnInitialized");
		
		UW_ItemSelectionMenu_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.OnFadeOutFinished
	 * 		Flags  -> ()
	 */
	void UW_ItemSelectionMenu_C::OnFadeOutFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.OnFadeOutFinished");
		
		UW_ItemSelectionMenu_C_OnFadeOutFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ItemSelectionMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.Tick");
		
		UW_ItemSelectionMenu_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ItemSelectionMenu_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.PreConstruct");
		
		UW_ItemSelectionMenu_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bForce                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FItemSelectionGroup>                 InItemSelectionGroups                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_ItemSelectionMenu_C::Initialize(bool bForce, TArray<struct FItemSelectionGroup> InItemSelectionGroups)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.Initialize");
		
		UW_ItemSelectionMenu_C_Initialize_Params params {};
		params.bForce = bForce;
		params.InItemSelectionGroups = InItemSelectionGroups;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.CustomEvent_1
	 * 		Flags  -> ()
	 */
	void UW_ItemSelectionMenu_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.CustomEvent_1");
		
		UW_ItemSelectionMenu_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.ExecuteUbergraph_W_ItemSelectionMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ItemSelectionMenu_C::ExecuteUbergraph_W_ItemSelectionMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.ExecuteUbergraph_W_ItemSelectionMenu");
		
		UW_ItemSelectionMenu_C_ExecuteUbergraph_W_ItemSelectionMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.OnMenuOpened__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_ItemSelectionMenu_C::OnMenuOpened__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.OnMenuOpened__DelegateSignature");
		
		UW_ItemSelectionMenu_C_OnMenuOpened__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_ItemSelectionMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_ItemSelectionMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_ItemSelectionMenu.W_ItemSelectionMenu_C");
		return ptr;
	}

}


