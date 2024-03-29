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
	 * 		Name   -> Function CommonMenuLibrary.CommonMenuLibrary_C.GetPlatformIconTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EProfilePlatform                                   Platform                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  Texture                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonMenuLibrary_C::GetPlatformIconTexture(EProfilePlatform Platform, class UObject* __WorldContext, class UTexture2D** Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonMenuLibrary.CommonMenuLibrary_C.GetPlatformIconTexture");
		
		UCommonMenuLibrary_C_GetPlatformIconTexture_Params params {};
		params.Platform = Platform;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Texture != nullptr)
			*Texture = params.Texture;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonMenuLibrary.CommonMenuLibrary_C.ButtonScrollDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UScrollBox*                                  ScrollBox                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AmountToScroll                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonMenuLibrary_C::ButtonScrollDown(class UScrollBox* ScrollBox, float AmountToScroll, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonMenuLibrary.CommonMenuLibrary_C.ButtonScrollDown");
		
		UCommonMenuLibrary_C_ButtonScrollDown_Params params {};
		params.ScrollBox = ScrollBox;
		params.AmountToScroll = AmountToScroll;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonMenuLibrary.CommonMenuLibrary_C.ButtonScrollUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UScrollBox*                                  ScrollBox                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AmountToScroll                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonMenuLibrary_C::ButtonScrollUp(class UScrollBox* ScrollBox, float AmountToScroll, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonMenuLibrary.CommonMenuLibrary_C.ButtonScrollUp");
		
		UCommonMenuLibrary_C_ButtonScrollUp_Params params {};
		params.ScrollBox = ScrollBox;
		params.AmountToScroll = AmountToScroll;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonMenuLibrary.CommonMenuLibrary_C.GamepadNav_HandleUniformGridNavigation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUniformGridPanel*                           InputGrid                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EUINavigation                                      Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            inputItemsPerRow                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            inputItemCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UCommonMenuLibrary_C::GamepadNav_HandleUniformGridNavigation(class UUniformGridPanel* InputGrid, EUINavigation Navigation, int32_t inputItemsPerRow, int32_t inputItemCount, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonMenuLibrary.CommonMenuLibrary_C.GamepadNav_HandleUniformGridNavigation");
		
		UCommonMenuLibrary_C_GamepadNav_HandleUniformGridNavigation_Params params {};
		params.InputGrid = InputGrid;
		params.Navigation = Navigation;
		params.inputItemsPerRow = inputItemsPerRow;
		params.inputItemCount = inputItemCount;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonMenuLibrary.CommonMenuLibrary_C.FocusNavTestCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               FocusCheck                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonMenuLibrary_C::FocusNavTestCheck(class UObject* __WorldContext, bool* FocusCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonMenuLibrary.CommonMenuLibrary_C.FocusNavTestCheck");
		
		UCommonMenuLibrary_C_FocusNavTestCheck_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FocusCheck != nullptr)
			*FocusCheck = params.FocusCheck;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonMenuLibrary.CommonMenuLibrary_C.FormatPlayerDisplayName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      DisplayName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            maxLength                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      formatedDisplayName                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCommonMenuLibrary_C::FormatPlayerDisplayName(const class FString& DisplayName, int32_t maxLength, class UObject* __WorldContext, class FString* formatedDisplayName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonMenuLibrary.CommonMenuLibrary_C.FormatPlayerDisplayName");
		
		UCommonMenuLibrary_C_FormatPlayerDisplayName_Params params {};
		params.DisplayName = DisplayName;
		params.maxLength = maxLength;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (formatedDisplayName != nullptr)
			*formatedDisplayName = params.formatedDisplayName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonMenuLibrary.CommonMenuLibrary_C.GetImageStringForCurrency
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECurrencyType                                      Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FText UCommonMenuLibrary_C::GetImageStringForCurrency(ECurrencyType Type, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonMenuLibrary.CommonMenuLibrary_C.GetImageStringForCurrency");
		
		UCommonMenuLibrary_C_GetImageStringForCurrency_Params params {};
		params.Type = Type;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonMenuLibrary.CommonMenuLibrary_C.GetNPCName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMetaNPCType                                       NPCType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Colors                                                     (Parm, OutParm)
	 */
	void UCommonMenuLibrary_C::GetNPCName(EMetaNPCType NPCType, class UObject* __WorldContext, class FText* Colors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonMenuLibrary.CommonMenuLibrary_C.GetNPCName");
		
		UCommonMenuLibrary_C_GetNPCName_Params params {};
		params.NPCType = NPCType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Colors != nullptr)
			*Colors = params.Colors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonMenuLibrary.CommonMenuLibrary_C.GetRankTextFromLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        rankText                                                   (Parm, OutParm)
	 */
	void UCommonMenuLibrary_C::GetRankTextFromLevel(int32_t Level, class UObject* __WorldContext, class FText* rankText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonMenuLibrary.CommonMenuLibrary_C.GetRankTextFromLevel");
		
		UCommonMenuLibrary_C_GetRankTextFromLevel_Params params {};
		params.Level = Level;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (rankText != nullptr)
			*rankText = params.rankText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonMenuLibrary.CommonMenuLibrary_C.GetRecipeCategoryColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      recipeCategory                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateColor                                 Color                                                      (Parm, OutParm)
	 */
	void UCommonMenuLibrary_C::GetRecipeCategoryColor(unsigned char recipeCategory, class UObject* __WorldContext, struct FSlateColor* Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonMenuLibrary.CommonMenuLibrary_C.GetRecipeCategoryColor");
		
		UCommonMenuLibrary_C_GetRecipeCategoryColor_Params params {};
		params.recipeCategory = recipeCategory;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Color != nullptr)
			*Color = params.Color;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonMenuLibrary.CommonMenuLibrary_C.GetRecipeCategoryIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      recipeCategory                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  Icon                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonMenuLibrary_C::GetRecipeCategoryIcon(unsigned char recipeCategory, class UObject* __WorldContext, class UTexture2D** Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonMenuLibrary.CommonMenuLibrary_C.GetRecipeCategoryIcon");
		
		UCommonMenuLibrary_C_GetRecipeCategoryIcon_Params params {};
		params.recipeCategory = recipeCategory;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Icon != nullptr)
			*Icon = params.Icon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonMenuLibrary.CommonMenuLibrary_C.GetNPCBlason
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMetaNPCType                                       Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  blason                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonMenuLibrary_C::GetNPCBlason(EMetaNPCType Type, class UObject* __WorldContext, class UTexture2D** blason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonMenuLibrary.CommonMenuLibrary_C.GetNPCBlason");
		
		UCommonMenuLibrary_C_GetNPCBlason_Params params {};
		params.Type = Type;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (blason != nullptr)
			*blason = params.blason;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonMenuLibrary.CommonMenuLibrary_C.IsShowingMenuTutorial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isShowingTutorial                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonMenuLibrary_C::IsShowingMenuTutorial(class UObject* __WorldContext, bool* isShowingTutorial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonMenuLibrary.CommonMenuLibrary_C.IsShowingMenuTutorial");
		
		UCommonMenuLibrary_C_IsShowingMenuTutorial_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isShowingTutorial != nullptr)
			*isShowingTutorial = params.isShowingTutorial;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonMenuLibrary.CommonMenuLibrary_C.HideMenuTutorial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonMenuLibrary_C::HideMenuTutorial(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonMenuLibrary.CommonMenuLibrary_C.HideMenuTutorial");
		
		UCommonMenuLibrary_C_HideMenuTutorial_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonMenuLibrary.CommonMenuLibrary_C.GetScreenPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   Position                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonMenuLibrary_C::GetScreenPosition(class UWidget* Widget, class UObject* __WorldContext, struct FVector2D* Position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonMenuLibrary.CommonMenuLibrary_C.GetScreenPosition");
		
		UCommonMenuLibrary_C_GetScreenPosition_Params params {};
		params.Widget = Widget;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Position != nullptr)
			*Position = params.Position;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonMenuLibrary.CommonMenuLibrary_C.ShowMenuTutorial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        TutorialId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        TutorialText                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UWidget*                                     popUpAnchorInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMenuPlacement                                     popupPlacement                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     focusAnchorInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               showBorder                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMenuTutorials_C*                            createdWidget                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonMenuLibrary_C::ShowMenuTutorial(const class FName& TutorialId, const class FText& TutorialText, class UWidget* popUpAnchorInfo, EMenuPlacement popupPlacement, class UWidget* focusAnchorInfo, bool showBorder, class UObject* __WorldContext, class UMenuTutorials_C** createdWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonMenuLibrary.CommonMenuLibrary_C.ShowMenuTutorial");
		
		UCommonMenuLibrary_C_ShowMenuTutorial_Params params {};
		params.TutorialId = TutorialId;
		params.TutorialText = TutorialText;
		params.popUpAnchorInfo = popUpAnchorInfo;
		params.popupPlacement = popupPlacement;
		params.focusAnchorInfo = focusAnchorInfo;
		params.showBorder = showBorder;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (createdWidget != nullptr)
			*createdWidget = params.createdWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonMenuLibrary.CommonMenuLibrary_C.GetNPCColors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMetaNPCType                                       NPCType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FUIColors                                   Colors                                                     (Parm, OutParm, NoDestructor)
	 */
	void UCommonMenuLibrary_C::GetNPCColors(EMetaNPCType NPCType, class UObject* __WorldContext, struct FUIColors* Colors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonMenuLibrary.CommonMenuLibrary_C.GetNPCColors");
		
		UCommonMenuLibrary_C_GetNPCColors_Params params {};
		params.NPCType = NPCType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Colors != nullptr)
			*Colors = params.Colors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonMenuLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonMenuLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CommonMenuLibrary.CommonMenuLibrary_C");
		return ptr;
	}

}


