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
	 * BlueprintGeneratedClass CommonMenuLibrary.CommonMenuLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCommonMenuLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void GetPlatformIconTexture(EProfilePlatform Platform, class UObject* __WorldContext, class UTexture2D** Texture);
		void ButtonScrollDown(class UScrollBox* ScrollBox, float AmountToScroll, class UObject* __WorldContext);
		void ButtonScrollUp(class UScrollBox* ScrollBox, float AmountToScroll, class UObject* __WorldContext);
		class UWidget* GamepadNav_HandleUniformGridNavigation(class UUniformGridPanel* InputGrid, EUINavigation Navigation, int32_t inputItemsPerRow, int32_t inputItemCount, class UObject* __WorldContext);
		void FocusNavTestCheck(class UObject* __WorldContext, bool* FocusCheck);
		void FormatPlayerDisplayName(const class FString& DisplayName, int32_t maxLength, class UObject* __WorldContext, class FString* formatedDisplayName);
		class FText GetImageStringForCurrency(ECurrencyType Type, class UObject* __WorldContext);
		void GetNPCName(EMetaNPCType NPCType, class UObject* __WorldContext, class FText* Colors);
		void GetRankTextFromLevel(int32_t Level, class UObject* __WorldContext, class FText* rankText);
		void GetRecipeCategoryColor(unsigned char recipeCategory, class UObject* __WorldContext, struct FSlateColor* Color);
		void GetRecipeCategoryIcon(unsigned char recipeCategory, class UObject* __WorldContext, class UTexture2D** Icon);
		void GetNPCBlason(EMetaNPCType Type, class UObject* __WorldContext, class UTexture2D** blason);
		void IsShowingMenuTutorial(class UObject* __WorldContext, bool* isShowingTutorial);
		void HideMenuTutorial(class UObject* __WorldContext);
		void GetScreenPosition(class UWidget* Widget, class UObject* __WorldContext, struct FVector2D* Position);
		void ShowMenuTutorial(const class FName& TutorialId, const class FText& TutorialText, class UWidget* popUpAnchorInfo, EMenuPlacement popupPlacement, class UWidget* focusAnchorInfo, bool showBorder, class UObject* __WorldContext, class UMenuTutorials_C** createdWidget);
		void GetNPCColors(EMetaNPCType NPCType, class UObject* __WorldContext, struct FUIColors* Colors);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
