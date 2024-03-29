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
	 * 		Name   -> Function MenuTutorials.MenuTutorials_C.UpdateMaterialParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMenuTutorials_C::UpdateMaterialParams(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuTutorials.MenuTutorials_C.UpdateMaterialParams");
		
		UMenuTutorials_C_UpdateMaterialParams_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuTutorials.MenuTutorials_C.MenuTutorials_AutoGenFunc
	 * 		Flags  -> ()
	 */
	void UMenuTutorials_C::MenuTutorials_AutoGenFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuTutorials.MenuTutorials_C.MenuTutorials_AutoGenFunc");
		
		UMenuTutorials_C_MenuTutorials_AutoGenFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuTutorials.MenuTutorials_C.isShowingTutorial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isShowingTutorial                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMenuTutorials_C::isShowingTutorial(bool* isShowingTutorial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuTutorials.MenuTutorials_C.isShowingTutorial");
		
		UMenuTutorials_C_isShowingTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isShowingTutorial != nullptr)
			*isShowingTutorial = params.isShowingTutorial;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuTutorials.MenuTutorials_C.Refresh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        TutorialText                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UWidget*                                     popUpAnchorInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMenuPlacement                                     popupPlacement                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     focusAnchorInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               showBorder                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMenuTutorials_C::Refresh(const class FText& TutorialText, class UWidget* popUpAnchorInfo, EMenuPlacement popupPlacement, class UWidget* focusAnchorInfo, bool showBorder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuTutorials.MenuTutorials_C.Refresh");
		
		UMenuTutorials_C_Refresh_Params params {};
		params.TutorialText = TutorialText;
		params.popUpAnchorInfo = popUpAnchorInfo;
		params.popupPlacement = popupPlacement;
		params.focusAnchorInfo = focusAnchorInfo;
		params.showBorder = showBorder;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuTutorials.MenuTutorials_C.SetAnchorInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     anchorInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCanvasPanelSlot*                            Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMenuTutorials_C::SetAnchorInfo(class UWidget* anchorInfo, class UCanvasPanelSlot* Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuTutorials.MenuTutorials_C.SetAnchorInfo");
		
		UMenuTutorials_C_SetAnchorInfo_Params params {};
		params.anchorInfo = anchorInfo;
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuTutorials.MenuTutorials_C.OnGetUserMenuContent_1
	 * 		Flags  -> ()
	 */
	class UUserWidget* UMenuTutorials_C::OnGetUserMenuContent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuTutorials.MenuTutorials_C.OnGetUserMenuContent_1");
		
		UMenuTutorials_C_OnGetUserMenuContent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuTutorials.MenuTutorials_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        TutorialText                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UWidget*                                     popUpAnchorInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMenuPlacement                                     popupPlacement                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     focusAnchorInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               showBorder                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMenuTutorials_C::Initialize(const class FText& TutorialText, class UWidget* popUpAnchorInfo, EMenuPlacement popupPlacement, class UWidget* focusAnchorInfo, bool showBorder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuTutorials.MenuTutorials_C.Initialize");
		
		UMenuTutorials_C_Initialize_Params params {};
		params.TutorialText = TutorialText;
		params.popUpAnchorInfo = popUpAnchorInfo;
		params.popupPlacement = popupPlacement;
		params.focusAnchorInfo = focusAnchorInfo;
		params.showBorder = showBorder;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuTutorials.MenuTutorials_C.Finished_5E4AE732454933DB073342A872BDF217
	 * 		Flags  -> ()
	 */
	void UMenuTutorials_C::Finished_5E4AE732454933DB073342A872BDF217()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuTutorials.MenuTutorials_C.Finished_5E4AE732454933DB073342A872BDF217");
		
		UMenuTutorials_C_Finished_5E4AE732454933DB073342A872BDF217_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuTutorials.MenuTutorials_C.Finished_FAE44480483B6DD5E75A0BA71A890721
	 * 		Flags  -> ()
	 */
	void UMenuTutorials_C::Finished_FAE44480483B6DD5E75A0BA71A890721()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuTutorials.MenuTutorials_C.Finished_FAE44480483B6DD5E75A0BA71A890721");
		
		UMenuTutorials_C_Finished_FAE44480483B6DD5E75A0BA71A890721_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuTutorials.MenuTutorials_C.Construct
	 * 		Flags  -> ()
	 */
	void UMenuTutorials_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuTutorials.MenuTutorials_C.Construct");
		
		UMenuTutorials_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuTutorials.MenuTutorials_C.Event_OnPush
	 * 		Flags  -> ()
	 */
	void UMenuTutorials_C::Event_OnPush()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuTutorials.MenuTutorials_C.Event_OnPush");
		
		UMenuTutorials_C_Event_OnPush_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuTutorials.MenuTutorials_C.OnMenuOpenChanged_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsOpen                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMenuTutorials_C::OnMenuOpenChanged_Event_1(bool bIsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuTutorials.MenuTutorials_C.OnMenuOpenChanged_Event_1");
		
		UMenuTutorials_C_OnMenuOpenChanged_Event_1_Params params {};
		params.bIsOpen = bIsOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuTutorials.MenuTutorials_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMenuTutorials_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuTutorials.MenuTutorials_C.Tick");
		
		UMenuTutorials_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuTutorials.MenuTutorials_C.HideMenu
	 * 		Flags  -> ()
	 */
	void UMenuTutorials_C::HideMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuTutorials.MenuTutorials_C.HideMenu");
		
		UMenuTutorials_C_HideMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuTutorials.MenuTutorials_C.OnMenuConfirm
	 * 		Flags  -> ()
	 */
	void UMenuTutorials_C::OnMenuConfirm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuTutorials.MenuTutorials_C.OnMenuConfirm");
		
		UMenuTutorials_C_OnMenuConfirm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuTutorials.MenuTutorials_C.Destruct
	 * 		Flags  -> ()
	 */
	void UMenuTutorials_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuTutorials.MenuTutorials_C.Destruct");
		
		UMenuTutorials_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuTutorials.MenuTutorials_C.ExecuteUbergraph_MenuTutorials
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMenuTutorials_C::ExecuteUbergraph_MenuTutorials(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuTutorials.MenuTutorials_C.ExecuteUbergraph_MenuTutorials");
		
		UMenuTutorials_C_ExecuteUbergraph_MenuTutorials_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMenuTutorials_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMenuTutorials_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MenuTutorials.MenuTutorials_C");
		return ptr;
	}

}


