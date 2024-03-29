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
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_ItemBought
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUICustomizationItem                        Item                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UCustomizationContentWidget_V2_C::Event_ItemBought(const struct FUICustomizationItem& Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_ItemBought");
		
		UCustomizationContentWidget_V2_C_Event_ItemBought_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.SetMenuCharacterCusto
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRBPlayerCustomizationInfo                  Custo                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCustomizationContentWidget_V2_C::SetMenuCharacterCusto(const struct FRBPlayerCustomizationInfo& Custo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.SetMenuCharacterCusto");
		
		UCustomizationContentWidget_V2_C_SetMenuCharacterCusto_Params params {};
		params.Custo = Custo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.NotifyMenuCharacterCategoryClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECustomizationMenuCategory                         Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationContentWidget_V2_C::NotifyMenuCharacterCategoryClicked(ECustomizationMenuCategory Category)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.NotifyMenuCharacterCategoryClicked");
		
		UCustomizationContentWidget_V2_C_NotifyMenuCharacterCategoryClicked_Params params {};
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.RefreshBoughtItem
	 * 		Flags  -> ()
	 */
	void UCustomizationContentWidget_V2_C::RefreshBoughtItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.RefreshBoughtItem");
		
		UCustomizationContentWidget_V2_C_RefreshBoughtItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnFocusReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UCustomizationContentWidget_V2_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnFocusReceived");
		
		UCustomizationContentWidget_V2_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.TransmitFocusToCustoOption
	 * 		Flags  -> ()
	 */
	void UCustomizationContentWidget_V2_C::TransmitFocusToCustoOption()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.TransmitFocusToCustoOption");
		
		UCustomizationContentWidget_V2_C_TransmitFocusToCustoOption_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.CycleCategories
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CycleRight                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCustomizationContentWidget_V2_C::CycleCategories(bool CycleRight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.CycleCategories");
		
		UCustomizationContentWidget_V2_C_CycleCategories_Params params {};
		params.CycleRight = CycleRight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.GetCellCustomizationActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACellCustomizationCameraActor_C*             NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationContentWidget_V2_C::GetCellCustomizationActor(class ACellCustomizationCameraActor_C** NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.GetCellCustomizationActor");
		
		UCustomizationContentWidget_V2_C_GetCellCustomizationActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.PreviewCellItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECustomizationMenuCategory                         Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class URBPlayerCellItemDefinition*                 ItemDefinition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationContentWidget_V2_C::PreviewCellItem(ECustomizationMenuCategory Category, class URBPlayerCellItemDefinition* ItemDefinition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.PreviewCellItem");
		
		UCustomizationContentWidget_V2_C_PreviewCellItem_Params params {};
		params.Category = Category;
		params.ItemDefinition = ItemDefinition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.UpdateCategories
	 * 		Flags  -> ()
	 */
	void UCustomizationContentWidget_V2_C::UpdateCategories()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.UpdateCategories");
		
		UCustomizationContentWidget_V2_C_UpdateCategories_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.CycleFocus
	 * 		Flags  -> ()
	 */
	void UCustomizationContentWidget_V2_C::CycleFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.CycleFocus");
		
		UCustomizationContentWidget_V2_C_CycleFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_ItemEquipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUICustomizationItem                        Item                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UCustomizationContentWidget_V2_C::Event_ItemEquipped(const struct FUICustomizationItem& Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_ItemEquipped");
		
		UCustomizationContentWidget_V2_C_Event_ItemEquipped_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.PlayPreviewVoiceline
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBVoiceCustomizationOption*                 VoiceOption                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationContentWidget_V2_C::PlayPreviewVoiceline(class URBVoiceCustomizationOption* VoiceOption)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.PlayPreviewVoiceline");
		
		UCustomizationContentWidget_V2_C_PlayPreviewVoiceline_Params params {};
		params.VoiceOption = VoiceOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.AddCategoriesItems
	 * 		Flags  -> ()
	 */
	void UCustomizationContentWidget_V2_C::AddCategoriesItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.AddCategoriesItems");
		
		UCustomizationContentWidget_V2_C_AddCategoriesItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.AddCustomizationItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FUICustomizationItem>                Items                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UCustomizationContentWidget_V2_C::AddCustomizationItems(TArray<struct FUICustomizationItem>* Items)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.AddCustomizationItems");
		
		UCustomizationContentWidget_V2_C_AddCustomizationItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Items != nullptr)
			*Items = params.Items;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.ChangeCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECustomizationMenuCategory                         custoCategory                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationContentWidget_V2_C::ChangeCategory(ECustomizationMenuCategory custoCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.ChangeCategory");
		
		UCustomizationContentWidget_V2_C_ChangeCategory_Params params {};
		params.custoCategory = custoCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.ResetPreview
	 * 		Flags  -> ()
	 */
	void UCustomizationContentWidget_V2_C::ResetPreview()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.ResetPreview");
		
		UCustomizationContentWidget_V2_C_ResetPreview_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.GetPageSpecificButtons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UUserWidget*>                         outButtons                                                 (Parm, OutParm, ContainsInstancedReference)
	 */
	void UCustomizationContentWidget_V2_C::GetPageSpecificButtons(TArray<class UUserWidget*>* outButtons)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.GetPageSpecificButtons");
		
		UCustomizationContentWidget_V2_C_GetPageSpecificButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outButtons != nullptr)
			*outButtons = params.outButtons;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnCategoryClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECustomizationMenuCategory                         custoCategory                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationContentWidget_V2_C::OnCategoryClicked(ECustomizationMenuCategory custoCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnCategoryClicked");
		
		UCustomizationContentWidget_V2_C_OnCategoryClicked_Params params {};
		params.custoCategory = custoCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnItemUnhovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUICustomizationItem                        CustoItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UCustomizationContentWidget_V2_C::OnItemUnhovered(const struct FUICustomizationItem& CustoItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnItemUnhovered");
		
		UCustomizationContentWidget_V2_C_OnItemUnhovered_Params params {};
		params.CustoItem = CustoItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnItemHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUICustomizationItem                        CustoItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UCustomizationContentWidget_V2_C::OnItemHovered(const struct FUICustomizationItem& CustoItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnItemHovered");
		
		UCustomizationContentWidget_V2_C_OnItemHovered_Params params {};
		params.CustoItem = CustoItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Finished_21144A754E101553B7E45DA67E7780FE
	 * 		Flags  -> ()
	 */
	void UCustomizationContentWidget_V2_C::Finished_21144A754E101553B7E45DA67E7780FE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Finished_21144A754E101553B7E45DA67E7780FE");
		
		UCustomizationContentWidget_V2_C_Finished_21144A754E101553B7E45DA67E7780FE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.RotateViewer
	 * 		Flags  -> ()
	 */
	void UCustomizationContentWidget_V2_C::RotateViewer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.RotateViewer");
		
		UCustomizationContentWidget_V2_C_RotateViewer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMetaNPCType                                       ShopType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isTutorial                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AMenuCharacter_C*                            _MenuCharacter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      viewerReturnTarget                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ACellCustomizationCameraActor_C*             CellCustomizationActor                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationContentWidget_V2_C::Initialize(EMetaNPCType ShopType, bool isTutorial, class AMenuCharacter_C* _MenuCharacter, class AActor* viewerReturnTarget, class ACellCustomizationCameraActor_C* CellCustomizationActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Initialize");
		
		UCustomizationContentWidget_V2_C_Initialize_Params params {};
		params.ShopType = ShopType;
		params.isTutorial = isTutorial;
		params._MenuCharacter = _MenuCharacter;
		params.viewerReturnTarget = viewerReturnTarget;
		params.CellCustomizationActor = CellCustomizationActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.RotateButtonPressed
	 * 		Flags  -> ()
	 */
	void UCustomizationContentWidget_V2_C::RotateButtonPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.RotateButtonPressed");
		
		UCustomizationContentWidget_V2_C_RotateButtonPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.RotateButtonReleased
	 * 		Flags  -> ()
	 */
	void UCustomizationContentWidget_V2_C::RotateButtonReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.RotateButtonReleased");
		
		UCustomizationContentWidget_V2_C_RotateButtonReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_OnTabUnselected
	 * 		Flags  -> ()
	 */
	void UCustomizationContentWidget_V2_C::Event_OnTabUnselected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_OnTabUnselected");
		
		UCustomizationContentWidget_V2_C_Event_OnTabUnselected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_LoadingStarted
	 * 		Flags  -> ()
	 */
	void UCustomizationContentWidget_V2_C::Event_LoadingStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_LoadingStarted");
		
		UCustomizationContentWidget_V2_C_Event_LoadingStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_OnTabSelected
	 * 		Flags  -> ()
	 */
	void UCustomizationContentWidget_V2_C::Event_OnTabSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_OnTabSelected");
		
		UCustomizationContentWidget_V2_C_Event_OnTabSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_AddCustomizationItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FUICustomizationItem>                Items                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UCustomizationContentWidget_V2_C::Event_AddCustomizationItems(TArray<struct FUICustomizationItem> Items)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_AddCustomizationItems");
		
		UCustomizationContentWidget_V2_C_Event_AddCustomizationItems_Params params {};
		params.Items = Items;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event OnItemClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUICustomizationItem                        Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UCustomizationContentWidget_V2_C::Event_OnItemClicked(const struct FUICustomizationItem& Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event OnItemClicked");
		
		UCustomizationContentWidget_V2_C_Event_OnItemClicked_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Destruct
	 * 		Flags  -> ()
	 */
	void UCustomizationContentWidget_V2_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Destruct");
		
		UCustomizationContentWidget_V2_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Construct
	 * 		Flags  -> ()
	 */
	void UCustomizationContentWidget_V2_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Construct");
		
		UCustomizationContentWidget_V2_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.EventOnItemPressed_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUICustomizationItem                        Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UCustomizationContentWidget_V2_C::EventOnItemPressed_Event_1(const struct FUICustomizationItem& Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.EventOnItemPressed_Event_1");
		
		UCustomizationContentWidget_V2_C_EventOnItemPressed_Event_1_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.EventOnItemReleased_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUICustomizationItem                        Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UCustomizationContentWidget_V2_C::EventOnItemReleased_Event_1(const struct FUICustomizationItem& Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.EventOnItemReleased_Event_1");
		
		UCustomizationContentWidget_V2_C_EventOnItemReleased_Event_1_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.StartTransition
	 * 		Flags  -> ()
	 */
	void UCustomizationContentWidget_V2_C::StartTransition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.StartTransition");
		
		UCustomizationContentWidget_V2_C_StartTransition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_PlayerCustomizationUpdated
	 * 		Flags  -> ()
	 */
	void UCustomizationContentWidget_V2_C::Event_PlayerCustomizationUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_PlayerCustomizationUpdated");
		
		UCustomizationContentWidget_V2_C_Event_PlayerCustomizationUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_OnParentFocused
	 * 		Flags  -> ()
	 */
	void UCustomizationContentWidget_V2_C::Event_OnParentFocused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_OnParentFocused");
		
		UCustomizationContentWidget_V2_C_Event_OnParentFocused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnChangeFocusRequested
	 * 		Flags  -> ()
	 */
	void UCustomizationContentWidget_V2_C::OnChangeFocusRequested()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnChangeFocusRequested");
		
		UCustomizationContentWidget_V2_C_OnChangeFocusRequested_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_RefreshItemInfos
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FUICustomizationItem>                Items                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UCustomizationContentWidget_V2_C::Event_RefreshItemInfos(TArray<struct FUICustomizationItem> Items)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_RefreshItemInfos");
		
		UCustomizationContentWidget_V2_C_Event_RefreshItemInfos_Params params {};
		params.Items = Items;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_CycleFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuButton_C*                             Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationContentWidget_V2_C::Event_CycleFocus(class URBMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_CycleFocus");
		
		UCustomizationContentWidget_V2_C_Event_CycleFocus_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.CycleCategoriesRight
	 * 		Flags  -> ()
	 */
	void UCustomizationContentWidget_V2_C::CycleCategoriesRight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.CycleCategoriesRight");
		
		UCustomizationContentWidget_V2_C_CycleCategoriesRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.CycleCategoriesLeft
	 * 		Flags  -> ()
	 */
	void UCustomizationContentWidget_V2_C::CycleCategoriesLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.CycleCategoriesLeft");
		
		UCustomizationContentWidget_V2_C_CycleCategoriesLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_OnParentPopped
	 * 		Flags  -> ()
	 */
	void UCustomizationContentWidget_V2_C::Event_OnParentPopped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_OnParentPopped");
		
		UCustomizationContentWidget_V2_C_Event_OnParentPopped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnInputSourceChanged
	 * 		Flags  -> ()
	 */
	void UCustomizationContentWidget_V2_C::OnInputSourceChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnInputSourceChanged");
		
		UCustomizationContentWidget_V2_C_OnInputSourceChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.ExecuteUbergraph_CustomizationContentWidget_V2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationContentWidget_V2_C::ExecuteUbergraph_CustomizationContentWidget_V2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.ExecuteUbergraph_CustomizationContentWidget_V2");
		
		UCustomizationContentWidget_V2_C_ExecuteUbergraph_CustomizationContentWidget_V2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnItemHoveredEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUICustomizationItem                        CustoItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UCustomizationContentWidget_V2_C::OnItemHoveredEvent__DelegateSignature(const struct FUICustomizationItem& CustoItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnItemHoveredEvent__DelegateSignature");
		
		UCustomizationContentWidget_V2_C_OnItemHoveredEvent__DelegateSignature_Params params {};
		params.CustoItem = CustoItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnItemsAdded__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationContentWidget_V2_C::OnItemsAdded__DelegateSignature(int32_t amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnItemsAdded__DelegateSignature");
		
		UCustomizationContentWidget_V2_C_OnItemsAdded__DelegateSignature_Params params {};
		params.amount = amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnItemEquippedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUICustomizationItem                        Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UCustomizationContentWidget_V2_C::OnItemEquippedEvent__DelegateSignature(const struct FUICustomizationItem& Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnItemEquippedEvent__DelegateSignature");
		
		UCustomizationContentWidget_V2_C_OnItemEquippedEvent__DelegateSignature_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnCategoryChangeRequested__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCustomizationContentWidget_V2_C::OnCategoryChangeRequested__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnCategoryChangeRequested__DelegateSignature");
		
		UCustomizationContentWidget_V2_C_OnCategoryChangeRequested__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.UpdatePaletteDisplay__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldShowPalette                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCustomizationContentWidget_V2_C::UpdatePaletteDisplay__DelegateSignature(bool ShouldShowPalette)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.UpdatePaletteDisplay__DelegateSignature");
		
		UCustomizationContentWidget_V2_C_UpdatePaletteDisplay__DelegateSignature_Params params {};
		params.ShouldShowPalette = ShouldShowPalette;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnStoppedPreview__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCustomizationContentWidget_V2_C::OnStoppedPreview__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnStoppedPreview__DelegateSignature");
		
		UCustomizationContentWidget_V2_C_OnStoppedPreview__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnItemPreviewed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUICustomizationItem                        Custo_Item                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UCustomizationContentWidget_V2_C::OnItemPreviewed__DelegateSignature(const struct FUICustomizationItem& Custo_Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnItemPreviewed__DelegateSignature");
		
		UCustomizationContentWidget_V2_C_OnItemPreviewed__DelegateSignature_Params params {};
		params.Custo_Item = Custo_Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomizationContentWidget_V2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomizationContentWidget_V2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CustomizationContentWidget_V2.CustomizationContentWidget_V2_C");
		return ptr;
	}

}


