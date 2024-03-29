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
	 * 		Name   -> Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.GetColorAndOpacity_1
	 * 		Flags  -> ()
	 */
	struct FLinearColor UW_EquipTeamMateCategory_C::GetColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.GetColorAndOpacity_1");
		
		UW_EquipTeamMateCategory_C_GetColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.Get_GearCategory_Text_Text_1
	 * 		Flags  -> ()
	 */
	class FText UW_EquipTeamMateCategory_C::Get_GearCategory_Text_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.Get_GearCategory_Text_Text_1");
		
		UW_EquipTeamMateCategory_C_Get_GearCategory_Text_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_EquipTeamMateCategory_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.PreConstruct");
		
		UW_EquipTeamMateCategory_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_StandardButton_C*                         CallingButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_EquipTeamMateCategory_C::BndEvt__Button_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(class UW_StandardButton_C* CallingButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");
		
		UW_EquipTeamMateCategory_C_BndEvt__Button_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params {};
		params.CallingButton = CallingButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_EquipTeamMateCategory_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.Tick");
		
		UW_EquipTeamMateCategory_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.ExecuteUbergraph_W_EquipTeamMateCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_EquipTeamMateCategory_C::ExecuteUbergraph_W_EquipTeamMateCategory(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.ExecuteUbergraph_W_EquipTeamMateCategory");
		
		UW_EquipTeamMateCategory_C_ExecuteUbergraph_W_EquipTeamMateCategory_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.OnButtonUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutCategory_C*                        LoadoutCategory                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_EquipTeamMateCategory_C::OnButtonUnhovered__DelegateSignature(class UW_LoadoutCategory_C* LoadoutCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.OnButtonUnhovered__DelegateSignature");
		
		UW_EquipTeamMateCategory_C_OnButtonUnhovered__DelegateSignature_Params params {};
		params.LoadoutCategory = LoadoutCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.OnButtonHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutCategory_C*                        LoadoutCategory                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_EquipTeamMateCategory_C::OnButtonHovered__DelegateSignature(class UW_LoadoutCategory_C* LoadoutCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.OnButtonHovered__DelegateSignature");
		
		UW_EquipTeamMateCategory_C_OnButtonHovered__DelegateSignature_Params params {};
		params.LoadoutCategory = LoadoutCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.OnLoadoutItemButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemClass                                         ItemClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      ItemObjectClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsTactical                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            TacticalSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsMultipleTacticalSlots                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            MaxTacticalSlots                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Starting_Tactical_Slot                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_LoadoutItem_C*                            Loadout_Item_Widget                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_EquipTeamMateCategory_C::OnLoadoutItemButtonClicked__DelegateSignature(EItemClass ItemClass, class UClass* ItemObjectClass, bool bIsTactical, int32_t TacticalSlot, bool bIsMultipleTacticalSlots, int32_t MaxTacticalSlots, int32_t Starting_Tactical_Slot, class UW_LoadoutItem_C* Loadout_Item_Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.OnLoadoutItemButtonClicked__DelegateSignature");
		
		UW_EquipTeamMateCategory_C_OnLoadoutItemButtonClicked__DelegateSignature_Params params {};
		params.ItemClass = ItemClass;
		params.ItemObjectClass = ItemObjectClass;
		params.bIsTactical = bIsTactical;
		params.TacticalSlot = TacticalSlot;
		params.bIsMultipleTacticalSlots = bIsMultipleTacticalSlots;
		params.MaxTacticalSlots = MaxTacticalSlots;
		params.Starting_Tactical_Slot = Starting_Tactical_Slot;
		params.Loadout_Item_Widget = Loadout_Item_Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.OnButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutCategory_C*                        LoadoutCategory                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_EquipTeamMateCategory_C::OnButtonClicked__DelegateSignature(class UW_LoadoutCategory_C* LoadoutCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.OnButtonClicked__DelegateSignature");
		
		UW_EquipTeamMateCategory_C_OnButtonClicked__DelegateSignature_Params params {};
		params.LoadoutCategory = LoadoutCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_EquipTeamMateCategory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_EquipTeamMateCategory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_EquipTeamMateCategory.W_EquipTeamMateCategory_C");
		return ptr;
	}

}


