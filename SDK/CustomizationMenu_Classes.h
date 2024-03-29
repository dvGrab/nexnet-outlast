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
	 * WidgetBlueprintGeneratedClass CustomizationMenu.CustomizationMenu_C
	 * Size -> 0x00C3 (FullSize[0x03D3] - InheritedSize[0x0310])
	 */
	class UCustomizationMenu_C : public URBCharacterCustomizationMenu
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0310(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          CellTitle;                                               // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          CharacterTitle;                                          // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          CustoDescription;                                        // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        CustoDetails;                                            // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCustomizationColorPalette_C*                        CustomizationColorPalette;                               // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      CustoName;                                               // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          CustoRarity;                                             // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          EmptyText;                                               // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URBMenuButton_C*                                     ExitButton;                                              // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URBMenuButton_C*                                     HairColorButton;                                         // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULocalPlayerInfo_v2_C*                               LocalPlayerInfo_v2;                                      // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      pageSpecificButtonContainer;                             // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Rotate_Button;                                           // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              tutorialFocusAnchor;                                     // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              tutorialPopupAnchor;                                     // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TutorialText;                                            // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class AMenuCharacter_C*                                    MenuCharacter;                                           // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsCellCustomization;                                    // 0x03A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bPendingTutorialRequest;                                 // 0x03A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OCRY[0x6];                                   // 0x03A2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ACellCustomizationCameraActor_C*                     CellCustomizationActor;                                  // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USimpleActionTooltip_C*                              RotateToolTip;                                           // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RotateFactorX;                                           // 0x03B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RotateFactorY;                                           // 0x03BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        GamepadNav_RotateTimerHandle;                            // 0x03C0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UCustomizationOptionThumbnail_C*                     HairHovered;                                             // 0x03C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsTutorial;                                             // 0x03D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsRelease;                                              // 0x03D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bShownReleaseTutorial;                                   // 0x03D2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UpdateHairColorNavigation();
		void TryStartNextMenuTutorial();
		void UpdateFTUESpecificElements();
		void UpdateListScrollBehaviour(bool Index);
		void UpdatePageSpecificButtons();
		void GamepadNav_TryToggleHairPalette();
		void TransmitFocusToCustoContent();
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void CreateRotateTooltip();
		void PreviewCosts(const struct FUICustomizationItem& Custo_Item);
		void UpdateCustoDetails(const struct FUICustomizationItem& Custo_Item);
		void SetupForCellCustomization(bool bNewIsCellCustomization);
		void SetupForTutorial();
		void UpdateNavigation(bool CanExitMenu);
		void BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class URBMenuButton_C* Button);
		void BndEvt__Rotate_Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__Rotate_Button_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
		void Initialize(bool isTutorial, class AMenuCharacter_C* MenuCharacter, class ACellCustomizationCameraActor_C* CellCustomization);
		void Destruct();
		void Construct();
		void OnNavigationChangedEvent_Event_1(bool CanExitMenu);
		void OnItemPreviewed(const struct FUICustomizationItem& CustoItem);
		void OnStoppedPreview();
		void UpdatePaletteDisplay(bool ShouldShowPalette);
		void HairColorClicked(const struct FRBHairColorOption& newHairColor);
		void OnHairColorHovered(const struct FRBHairColorOption& HoveredHairColor);
		void BndEvt__CustomizationMenu_Rotate_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__CustomizationMenu_Rotate_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
		void GamepadNav_RotateCharacter();
		void GamepadNav_StartRotation();
		void GamepadNav_StopRotation();
		void OnCategoryChangeRequested();
		void GamepadNav_ToggleHairPalette();
		void BndEvt__CustomizationMenu_ColorPaletteButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(class URBMenuButton_C* Button);
		void Event_InputSourceChanged(bool bIsGamepad);
		void BndEvt__CustomizationMenu_CustomizationContent_K2Node_ComponentBoundEvent_8_OnItemEquippedEvent__DelegateSignature(const struct FUICustomizationItem& Item);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void Event_OnMenuTutorialSeen();
		void Event_SetupPostRelease();
		void Event_MenuCancel_Pressed();
		void SetupPostRelease();
		void BndEvt__CustomizationMenu_CustomizationContent_K2Node_ComponentBoundEvent_1_OnItemsAdded__DelegateSignature(int32_t amount);
		void ToggleCellCustomization();
		void SetGamepadRotateX(float FactorX);
		void SetGamepadRotateY(float FactorY);
		void ExecuteUbergraph_CustomizationMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
