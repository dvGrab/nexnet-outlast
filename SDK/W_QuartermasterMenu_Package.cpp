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
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.UnhoverAllCategories
	 * 		Flags  -> ()
	 */
	void UW_QuartermasterMenu_C::UnhoverAllCategories()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_QuartermasterMenu.W_QuartermasterMenu_C.UnhoverAllCategories");
		
		UW_QuartermasterMenu_C_UnhoverAllCategories_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.UnhoverAllCategoriesExcept
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_AttachmentCategory_C*                     AttachmentCategoryWIdget                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_SkinCategory_C*                           SkinCategoryWidget                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_QuartermasterMenu_C::UnhoverAllCategoriesExcept(class UW_AttachmentCategory_C* AttachmentCategoryWIdget, class UW_SkinCategory_C* SkinCategoryWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_QuartermasterMenu.W_QuartermasterMenu_C.UnhoverAllCategoriesExcept");
		
		UW_QuartermasterMenu_C_UnhoverAllCategoriesExcept_Params params {};
		params.AttachmentCategoryWIdget = AttachmentCategoryWIdget;
		params.SkinCategoryWidget = SkinCategoryWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.CollapseAllCategories
	 * 		Flags  -> ()
	 */
	void UW_QuartermasterMenu_C::CollapseAllCategories()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_QuartermasterMenu.W_QuartermasterMenu_C.CollapseAllCategories");
		
		UW_QuartermasterMenu_C_CollapseAllCategories_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.CollapseAllCategoriesExcept
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_AttachmentCategory_C*                     AttachmentCategoryWIdget                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_SkinCategory_C*                           SkinCategoryWidget                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_QuartermasterMenu_C::CollapseAllCategoriesExcept(class UW_AttachmentCategory_C* AttachmentCategoryWIdget, class UW_SkinCategory_C* SkinCategoryWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_QuartermasterMenu.W_QuartermasterMenu_C.CollapseAllCategoriesExcept");
		
		UW_QuartermasterMenu_C_CollapseAllCategoriesExcept_Params params {};
		params.AttachmentCategoryWIdget = AttachmentCategoryWIdget;
		params.SkinCategoryWidget = SkinCategoryWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnGunCleaned
	 * 		Flags  -> ()
	 */
	void UW_QuartermasterMenu_C::OnGunCleaned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnGunCleaned");
		
		UW_QuartermasterMenu_C_OnGunCleaned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.CanCleanGun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_QuartermasterMenu_C::CanCleanGun(bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_QuartermasterMenu.W_QuartermasterMenu_C.CanCleanGun");
		
		UW_QuartermasterMenu_C_CanCleanGun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.Get_CleanGun_Visibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UW_QuartermasterMenu_C::Get_CleanGun_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_QuartermasterMenu.W_QuartermasterMenu_C.Get_CleanGun_Visibility");
		
		UW_QuartermasterMenu_C_Get_CleanGun_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.AttemptCreateSkinCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FWeaponData>                         WeaponDataArray                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_QuartermasterMenu_C::AttemptCreateSkinCategory(TArray<struct FWeaponData>* WeaponDataArray, bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_QuartermasterMenu.W_QuartermasterMenu_C.AttemptCreateSkinCategory");
		
		UW_QuartermasterMenu_C_AttemptCreateSkinCategory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WeaponDataArray != nullptr)
			*WeaponDataArray = params.WeaponDataArray;
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.ScrollIntoView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     WidgetToFind                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_QuartermasterMenu_C::ScrollIntoView(class UWidget* WidgetToFind)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_QuartermasterMenu.W_QuartermasterMenu_C.ScrollIntoView");
		
		UW_QuartermasterMenu_C_ScrollIntoView_Params params {};
		params.WidgetToFind = WidgetToFind;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UW_QuartermasterMenu_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnKeyUp");
		
		UW_QuartermasterMenu_C_OnKeyUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.AnyAttachmentCategoryWidgetHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_QuartermasterMenu_C::AnyAttachmentCategoryWidgetHovered(bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_QuartermasterMenu.W_QuartermasterMenu_C.AnyAttachmentCategoryWidgetHovered");
		
		UW_QuartermasterMenu_C_AnyAttachmentCategoryWidgetHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.GetCurrentlyFocusedWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Return_Value                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_QuartermasterMenu_C::GetCurrentlyFocusedWidget(class UWidget** Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_QuartermasterMenu.W_QuartermasterMenu_C.GetCurrentlyFocusedWidget");
		
		UW_QuartermasterMenu_C_GetCurrentlyFocusedWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.PopulateAttachmentCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bAllowAttachmentCategory                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FAttachmentCategory>                 AttachmentCategories                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FAttachmentCategory                         AttachmentCategory                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UW_QuartermasterMenu_C::PopulateAttachmentCategory(bool bAllowAttachmentCategory, TArray<struct FAttachmentCategory>* AttachmentCategories, const struct FAttachmentCategory& AttachmentCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_QuartermasterMenu.W_QuartermasterMenu_C.PopulateAttachmentCategory");
		
		UW_QuartermasterMenu_C_PopulateAttachmentCategory_Params params {};
		params.bAllowAttachmentCategory = bAllowAttachmentCategory;
		params.AttachmentCategory = AttachmentCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AttachmentCategories != nullptr)
			*AttachmentCategories = params.AttachmentCategories;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.UnhoverAll
	 * 		Flags  -> ()
	 */
	void UW_QuartermasterMenu_C::UnhoverAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_QuartermasterMenu.W_QuartermasterMenu_C.UnhoverAll");
		
		UW_QuartermasterMenu_C_UnhoverAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.FocusOnWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     InWidgetToFocus                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_QuartermasterMenu_C::FocusOnWidget(class UWidget* InWidgetToFocus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_QuartermasterMenu.W_QuartermasterMenu_C.FocusOnWidget");
		
		UW_QuartermasterMenu_C_FocusOnWidget_Params params {};
		params.InWidgetToFocus = InWidgetToFocus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.Escape
	 * 		Flags  -> ()
	 */
	void UW_QuartermasterMenu_C::Escape()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_QuartermasterMenu.W_QuartermasterMenu_C.Escape");
		
		UW_QuartermasterMenu_C_Escape_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.UnselectAttachmentCategory
	 * 		Flags  -> ()
	 */
	void UW_QuartermasterMenu_C::UnselectAttachmentCategory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_QuartermasterMenu.W_QuartermasterMenu_C.UnselectAttachmentCategory");
		
		UW_QuartermasterMenu_C_UnselectAttachmentCategory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.SelectAttachmentCategory
	 * 		Flags  -> ()
	 */
	void UW_QuartermasterMenu_C::SelectAttachmentCategory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_QuartermasterMenu.W_QuartermasterMenu_C.SelectAttachmentCategory");
		
		UW_QuartermasterMenu_C_SelectAttachmentCategory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.UnhoverAttachmentCategory
	 * 		Flags  -> ()
	 */
	void UW_QuartermasterMenu_C::UnhoverAttachmentCategory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_QuartermasterMenu.W_QuartermasterMenu_C.UnhoverAttachmentCategory");
		
		UW_QuartermasterMenu_C_UnhoverAttachmentCategory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.HoverAttachmentCategory
	 * 		Flags  -> ()
	 */
	void UW_QuartermasterMenu_C::HoverAttachmentCategory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_QuartermasterMenu.W_QuartermasterMenu_C.HoverAttachmentCategory");
		
		UW_QuartermasterMenu_C_HoverAttachmentCategory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.PreviousRow
	 * 		Flags  -> ()
	 */
	void UW_QuartermasterMenu_C::PreviousRow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_QuartermasterMenu.W_QuartermasterMenu_C.PreviousRow");
		
		UW_QuartermasterMenu_C_PreviousRow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.NextRow
	 * 		Flags  -> ()
	 */
	void UW_QuartermasterMenu_C::NextRow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_QuartermasterMenu.W_QuartermasterMenu_C.NextRow");
		
		UW_QuartermasterMenu_C_NextRow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UW_QuartermasterMenu_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnKeyDown");
		
		UW_QuartermasterMenu_C_OnKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.Exit
	 * 		Flags  -> ()
	 */
	void UW_QuartermasterMenu_C::Exit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_QuartermasterMenu.W_QuartermasterMenu_C.Exit");
		
		UW_QuartermasterMenu_C_Exit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.Enter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      LoadoutItemClass                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_QuartermasterMenu_C::Enter(class UClass* LoadoutItemClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_QuartermasterMenu.W_QuartermasterMenu_C.Enter");
		
		UW_QuartermasterMenu_C_Enter_Params params {};
		params.LoadoutItemClass = LoadoutItemClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnAttachmentCategoryButtonClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_AttachmentCategory_C*                     AttachmentCategory                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_QuartermasterMenu_C::OnAttachmentCategoryButtonClicked(class UW_AttachmentCategory_C* AttachmentCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnAttachmentCategoryButtonClicked");
		
		UW_QuartermasterMenu_C_OnAttachmentCategoryButtonClicked_Params params {};
		params.AttachmentCategory = AttachmentCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnAttachmentItemButtonClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      AttachmentClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_QuartermasterMenu_C::OnAttachmentItemButtonClicked(class UClass* AttachmentClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnAttachmentItemButtonClicked");
		
		UW_QuartermasterMenu_C_OnAttachmentItemButtonClicked_Params params {};
		params.AttachmentClass = AttachmentClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnAttachmentCategoryButtonHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_AttachmentCategory_C*                     AttachmentCategory                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_QuartermasterMenu_C::OnAttachmentCategoryButtonHovered(class UW_AttachmentCategory_C* AttachmentCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnAttachmentCategoryButtonHovered");
		
		UW_QuartermasterMenu_C_OnAttachmentCategoryButtonHovered_Params params {};
		params.AttachmentCategory = AttachmentCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnAttachmentCategoryButtonUnhovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_AttachmentCategory_C*                     AttachmentCategory                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_QuartermasterMenu_C::OnAttachmentCategoryButtonUnhovered(class UW_AttachmentCategory_C* AttachmentCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnAttachmentCategoryButtonUnhovered");
		
		UW_QuartermasterMenu_C_OnAttachmentCategoryButtonUnhovered_Params params {};
		params.AttachmentCategory = AttachmentCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnSkinCategoryButtonClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_SkinCategory_C*                           SkinCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_QuartermasterMenu_C::OnSkinCategoryButtonClicked(class UW_SkinCategory_C* SkinCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnSkinCategoryButtonClicked");
		
		UW_QuartermasterMenu_C_OnSkinCategoryButtonClicked_Params params {};
		params.SkinCategory = SkinCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnSkinCategoryButtonHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_SkinCategory_C*                           SkinCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_QuartermasterMenu_C::OnSkinCategoryButtonHovered(class UW_SkinCategory_C* SkinCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnSkinCategoryButtonHovered");
		
		UW_QuartermasterMenu_C_OnSkinCategoryButtonHovered_Params params {};
		params.SkinCategory = SkinCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnSkinCategoryButtonUnhovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_SkinCategory_C*                           SkinCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_QuartermasterMenu_C::OnSkinCategoryButtonUnhovered(class UW_SkinCategory_C* SkinCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnSkinCategoryButtonUnhovered");
		
		UW_QuartermasterMenu_C_OnSkinCategoryButtonUnhovered_Params params {};
		params.SkinCategory = SkinCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnSkinItemButtonClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      SkinClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_QuartermasterMenu_C::OnSkinItemButtonClicked(class UClass* SkinClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnSkinItemButtonClicked");
		
		UW_QuartermasterMenu_C_OnSkinItemButtonClicked_Params params {};
		params.SkinClass = SkinClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.BndEvt__CleanGun_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_AttachmentCategory_C*                     AttachmentCategory                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_QuartermasterMenu_C::BndEvt__CleanGun_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(class UW_AttachmentCategory_C* AttachmentCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_QuartermasterMenu.W_QuartermasterMenu_C.BndEvt__CleanGun_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");
		
		UW_QuartermasterMenu_C_BndEvt__CleanGun_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params params {};
		params.AttachmentCategory = AttachmentCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.BndEvt__ApplyAttachments_1_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_AttachmentCategory_C*                     AttachmentCategory                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_QuartermasterMenu_C::BndEvt__ApplyAttachments_1_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature(class UW_AttachmentCategory_C* AttachmentCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_QuartermasterMenu.W_QuartermasterMenu_C.BndEvt__ApplyAttachments_1_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature");
		
		UW_QuartermasterMenu_C_BndEvt__ApplyAttachments_1_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature_Params params {};
		params.AttachmentCategory = AttachmentCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.BndEvt__DiscardAttachments_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_AttachmentCategory_C*                     AttachmentCategory                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_QuartermasterMenu_C::BndEvt__DiscardAttachments_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature(class UW_AttachmentCategory_C* AttachmentCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_QuartermasterMenu.W_QuartermasterMenu_C.BndEvt__DiscardAttachments_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature");
		
		UW_QuartermasterMenu_C_BndEvt__DiscardAttachments_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature_Params params {};
		params.AttachmentCategory = AttachmentCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_QuartermasterMenu.W_QuartermasterMenu_C.ExecuteUbergraph_W_QuartermasterMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_QuartermasterMenu_C::ExecuteUbergraph_W_QuartermasterMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_QuartermasterMenu.W_QuartermasterMenu_C.ExecuteUbergraph_W_QuartermasterMenu");
		
		UW_QuartermasterMenu_C_ExecuteUbergraph_W_QuartermasterMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_QuartermasterMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_QuartermasterMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_QuartermasterMenu.W_QuartermasterMenu_C");
		return ptr;
	}

}


