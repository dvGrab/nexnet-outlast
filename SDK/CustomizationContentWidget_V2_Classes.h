#pragma once

/**
 * Name: TRIALS
 * Version: FINAL
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass CustomizationContentWidget_V2.CustomizationContentWidget_V2_C
	 * Size -> 0x0121 (FullSize[0x0571] - InheritedSize[0x0450])
	 */
	class UCustomizationContentWidget_V2_C : public URBCharacterCustomizationContent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0450(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    FadeOutContent;                                          // 0x0458(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              BackgroundImage;                                         // 0x0460(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        Content;                                                 // 0x0468(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCustomizationCategories_V2_C*                       CustomizationCategories;                                 // 0x0470(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCustomizationItemGrid_C*                            CustomizationItemGrid;                                   // 0x0478(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULoadingVideoWidget_C*                               LoadingVideoWidget;                                      // 0x0480(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCategoryTitle_C*                                    PageTitle;                                               // 0x0488(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class AMenuCharacter_C*                                    MenuCharacter;                                           // 0x0490(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PreviousXMousePos;                                       // 0x0498(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isShowingItems;                                          // 0x049C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XHUG[0x3];                                   // 0x049D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              NPCActor;                                                // 0x04A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UUserWidget*>                                 ActionButtons;                                           // 0x04A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		ECustomizationMenuCategory                                 WantedCategory;                                          // 0x04B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsCellCustomization;                                    // 0x04B9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7OOS[0x6];                                   // 0x04BA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ACellCustomizationCameraActor_C*                     CellCustomizationActor;                                  // 0x04C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnItemPreviewed;                                         // 0x04C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnItemHoveredEvent;                                      // 0x04D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnStoppedPreview;                                        // 0x04E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             UpdatePaletteDisplay;                                    // 0x04F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnCategoryChangeRequested;                               // 0x0508(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FUICustomizationItem                                InteractedItem;                                          // 0x0518(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class FScriptMulticastDelegate                             OnItemEquippedEvent;                                     // 0x0548(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      PreviousYMousePos;                                       // 0x0558(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_A85D[0x4];                                   // 0x055C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnItemsAdded;                                            // 0x0560(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bLeftInitialCategory;                                    // 0x0570(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void Event_ItemBought(const struct FUICustomizationItem& Item);
		void SetMenuCharacterCusto(const struct FRBPlayerCustomizationInfo& Custo);
		void NotifyMenuCharacterCategoryClicked(ECustomizationMenuCategory Category);
		void RefreshBoughtItem();
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void TransmitFocusToCustoOption();
		void CycleCategories(bool CycleRight);
		void GetCellCustomizationActor(class ACellCustomizationCameraActor_C** NewParam);
		void PreviewCellItem(ECustomizationMenuCategory Category, class URBPlayerCellItemDefinition* ItemDefinition);
		void UpdateCategories();
		void CycleFocus();
		void Event_ItemEquipped(const struct FUICustomizationItem& Item);
		void PlayPreviewVoiceline(class URBVoiceCustomizationOption* VoiceOption);
		void AddCategoriesItems();
		void AddCustomizationItems(TArray<struct FUICustomizationItem>* Items);
		void ChangeCategory(ECustomizationMenuCategory custoCategory);
		void ResetPreview();
		void GetPageSpecificButtons(TArray<class UUserWidget*>* outButtons);
		void OnCategoryClicked(ECustomizationMenuCategory custoCategory);
		void OnItemUnhovered(const struct FUICustomizationItem& CustoItem);
		void OnItemHovered(const struct FUICustomizationItem& CustoItem);
		void Finished_21144A754E101553B7E45DA67E7780FE();
		void RotateViewer();
		void Initialize(EMetaNPCType ShopType, bool isTutorial, class AMenuCharacter_C* _MenuCharacter, class AActor* viewerReturnTarget, class ACellCustomizationCameraActor_C* CellCustomizationActor);
		void RotateButtonPressed();
		void RotateButtonReleased();
		void Event_OnTabUnselected();
		void Event_LoadingStarted();
		void Event_OnTabSelected();
		void Event_AddCustomizationItems(TArray<struct FUICustomizationItem> Items);
		void Event_OnItemClicked(const struct FUICustomizationItem& Item);
		void Destruct();
		void Construct();
		void EventOnItemPressed_Event_1(const struct FUICustomizationItem& Item);
		void EventOnItemReleased_Event_1(const struct FUICustomizationItem& Item);
		void StartTransition();
		void Event_PlayerCustomizationUpdated();
		void Event_OnParentFocused();
		void OnChangeFocusRequested();
		void Event_RefreshItemInfos(TArray<struct FUICustomizationItem> Items);
		void Event_CycleFocus(class URBMenuButton_C* Button);
		void CycleCategoriesRight();
		void CycleCategoriesLeft();
		void Event_OnParentPopped();
		void OnInputSourceChanged();
		void ExecuteUbergraph_CustomizationContentWidget_V2(int32_t EntryPoint);
		void OnItemHoveredEvent__DelegateSignature(const struct FUICustomizationItem& CustoItem);
		void OnItemsAdded__DelegateSignature(int32_t amount);
		void OnItemEquippedEvent__DelegateSignature(const struct FUICustomizationItem& Item);
		void OnCategoryChangeRequested__DelegateSignature();
		void UpdatePaletteDisplay__DelegateSignature(bool ShouldShowPalette);
		void OnStoppedPreview__DelegateSignature();
		void OnItemPreviewed__DelegateSignature(const struct FUICustomizationItem& Custo_Item);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
