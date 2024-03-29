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
	 * 		Name   -> Function CustomizationCategories_V2.CustomizationCategories_V2_C.UpdateNewStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECustomizationMenuCategory                         Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationCategories_V2_C::UpdateNewStatus(ECustomizationMenuCategory Category)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationCategories_V2.CustomizationCategories_V2_C.UpdateNewStatus");
		
		UCustomizationCategories_V2_C_UpdateNewStatus_Params params {};
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationCategories_V2.CustomizationCategories_V2_C.OnCategoryCycled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCustomizationCategoryWidget_V2_C*           CategoryButton                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationCategories_V2_C::OnCategoryCycled(class UCustomizationCategoryWidget_V2_C* CategoryButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationCategories_V2.CustomizationCategories_V2_C.OnCategoryCycled");
		
		UCustomizationCategories_V2_C_OnCategoryCycled_Params params {};
		params.CategoryButton = CategoryButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationCategories_V2.CustomizationCategories_V2_C.OnCategoryClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCustomizationCategoryWidget_V2_C*           buttonClicked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationCategories_V2_C::OnCategoryClicked(class UCustomizationCategoryWidget_V2_C* buttonClicked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationCategories_V2.CustomizationCategories_V2_C.OnCategoryClicked");
		
		UCustomizationCategories_V2_C_OnCategoryClicked_Params params {};
		params.buttonClicked = buttonClicked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationCategories_V2.CustomizationCategories_V2_C.GetButtonFromCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECustomizationMenuCategory                         Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCustomizationCategoryWidget_V2_C*           Button                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationCategories_V2_C::GetButtonFromCategory(ECustomizationMenuCategory Category, class UCustomizationCategoryWidget_V2_C** Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationCategories_V2.CustomizationCategories_V2_C.GetButtonFromCategory");
		
		UCustomizationCategories_V2_C_GetButtonFromCategory_Params params {};
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Button != nullptr)
			*Button = params.Button;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationCategories_V2.CustomizationCategories_V2_C.GetCurrentCategoryList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<ECustomizationMenuCategory>                 CategoryList                                               (Parm, OutParm)
	 */
	void UCustomizationCategories_V2_C::GetCurrentCategoryList(TArray<ECustomizationMenuCategory>* CategoryList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationCategories_V2.CustomizationCategories_V2_C.GetCurrentCategoryList");
		
		UCustomizationCategories_V2_C_GetCurrentCategoryList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CategoryList != nullptr)
			*CategoryList = params.CategoryList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationCategories_V2.CustomizationCategories_V2_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isTutorial                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EMetaNPCType                                       ShopType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isCustomizingFemale                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCustomizationCategories_V2_C::Init(bool isTutorial, EMetaNPCType ShopType, bool isCustomizingFemale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationCategories_V2.CustomizationCategories_V2_C.Init");
		
		UCustomizationCategories_V2_C_Init_Params params {};
		params.isTutorial = isTutorial;
		params.ShopType = ShopType;
		params.isCustomizingFemale = isCustomizingFemale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationCategories_V2.CustomizationCategories_V2_C.SelectCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCustomizationCategoryWidget_V2_C*           buttonClicked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationCategories_V2_C::SelectCategory(class UCustomizationCategoryWidget_V2_C* buttonClicked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationCategories_V2.CustomizationCategories_V2_C.SelectCategory");
		
		UCustomizationCategories_V2_C_SelectCategory_Params params {};
		params.buttonClicked = buttonClicked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationCategories_V2.CustomizationCategories_V2_C.CreateCategoryButtons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isTutorial                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCustomizationCategories_V2_C::CreateCategoryButtons(bool isTutorial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationCategories_V2.CustomizationCategories_V2_C.CreateCategoryButtons");
		
		UCustomizationCategories_V2_C_CreateCategoryButtons_Params params {};
		params.isTutorial = isTutorial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationCategories_V2.CustomizationCategories_V2_C.Construct
	 * 		Flags  -> ()
	 */
	void UCustomizationCategories_V2_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationCategories_V2.CustomizationCategories_V2_C.Construct");
		
		UCustomizationCategories_V2_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationCategories_V2.CustomizationCategories_V2_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCustomizationCategories_V2_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationCategories_V2.CustomizationCategories_V2_C.PreConstruct");
		
		UCustomizationCategories_V2_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationCategories_V2.CustomizationCategories_V2_C.BndEvt__CustomizationCategories_V2_CycleLeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCustomizationCategories_V2_C::BndEvt__CustomizationCategories_V2_CycleLeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationCategories_V2.CustomizationCategories_V2_C.BndEvt__CustomizationCategories_V2_CycleLeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UCustomizationCategories_V2_C_BndEvt__CustomizationCategories_V2_CycleLeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationCategories_V2.CustomizationCategories_V2_C.BndEvt__CustomizationCategories_V2_CycleRightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCustomizationCategories_V2_C::BndEvt__CustomizationCategories_V2_CycleRightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationCategories_V2.CustomizationCategories_V2_C.BndEvt__CustomizationCategories_V2_CycleRightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UCustomizationCategories_V2_C_BndEvt__CustomizationCategories_V2_CycleRightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationCategories_V2.CustomizationCategories_V2_C.DisplayCategories
	 * 		Flags  -> ()
	 */
	void UCustomizationCategories_V2_C::DisplayCategories()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationCategories_V2.CustomizationCategories_V2_C.DisplayCategories");
		
		UCustomizationCategories_V2_C_DisplayCategories_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationCategories_V2.CustomizationCategories_V2_C.ExecuteUbergraph_CustomizationCategories_V2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationCategories_V2_C::ExecuteUbergraph_CustomizationCategories_V2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationCategories_V2.CustomizationCategories_V2_C.ExecuteUbergraph_CustomizationCategories_V2");
		
		UCustomizationCategories_V2_C_ExecuteUbergraph_CustomizationCategories_V2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationCategories_V2.CustomizationCategories_V2_C.EventOnCategoryClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECustomizationMenuCategory                         custoCategory                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationCategories_V2_C::EventOnCategoryClicked__DelegateSignature(ECustomizationMenuCategory custoCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationCategories_V2.CustomizationCategories_V2_C.EventOnCategoryClicked__DelegateSignature");
		
		UCustomizationCategories_V2_C_EventOnCategoryClicked__DelegateSignature_Params params {};
		params.custoCategory = custoCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomizationCategories_V2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomizationCategories_V2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CustomizationCategories_V2.CustomizationCategories_V2_C");
		return ptr;
	}

}


