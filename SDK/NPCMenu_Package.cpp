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
	 * 		Name   -> Function NPCMenu.NPCMenu_C.PlayPurchasedVoice
	 * 		Flags  -> ()
	 */
	void UNPCMenu_C::PlayPurchasedVoice()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPCMenu.NPCMenu_C.PlayPurchasedVoice");
		
		UNPCMenu_C_PlayPurchasedVoice_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPCMenu.NPCMenu_C.TryStartNextMenuTutorial
	 * 		Flags  -> ()
	 */
	void UNPCMenu_C::TryStartNextMenuTutorial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPCMenu.NPCMenu_C.TryStartNextMenuTutorial");
		
		UNPCMenu_C_TryStartNextMenuTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPCMenu.NPCMenu_C.SetCategoryFocus
	 * 		Flags  -> ()
	 */
	void UNPCMenu_C::SetCategoryFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPCMenu.NPCMenu_C.SetCategoryFocus");
		
		UNPCMenu_C_SetCategoryFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPCMenu.NPCMenu_C.OnFocusReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UNPCMenu_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPCMenu.NPCMenu_C.OnFocusReceived");
		
		UNPCMenu_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function NPCMenu.NPCMenu_C.Refresh
	 * 		Flags  -> ()
	 */
	void UNPCMenu_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPCMenu.NPCMenu_C.Refresh");
		
		UNPCMenu_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPCMenu.NPCMenu_C.OnMenuBackRequested
	 * 		Flags  -> ()
	 */
	void UNPCMenu_C::OnMenuBackRequested()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPCMenu.NPCMenu_C.OnMenuBackRequested");
		
		UNPCMenu_C_OnMenuBackRequested_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPCMenu.NPCMenu_C.OnCoreUpgradeTierClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SelectedCoreUpgradeTier                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNPCMenu_C::OnCoreUpgradeTierClicked(int32_t SelectedCoreUpgradeTier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPCMenu.NPCMenu_C.OnCoreUpgradeTierClicked");
		
		UNPCMenu_C_OnCoreUpgradeTierClicked_Params params {};
		params.SelectedCoreUpgradeTier = SelectedCoreUpgradeTier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPCMenu.NPCMenu_C.OnRigClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemId                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EActiveSkillType                                   ActiveSkillType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNPCMenu_C::OnRigClicked(const class FName& ItemId, EActiveSkillType ActiveSkillType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPCMenu.NPCMenu_C.OnRigClicked");
		
		UNPCMenu_C_OnRigClicked_Params params {};
		params.ItemId = ItemId;
		params.ActiveSkillType = ActiveSkillType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPCMenu.NPCMenu_C.ChangeCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELoadoutElementType                                Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNPCMenu_C::ChangeCategory(ELoadoutElementType Category)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPCMenu.NPCMenu_C.ChangeCategory");
		
		UNPCMenu_C_ChangeCategory_Params params {};
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPCMenu.NPCMenu_C.PlayExitVoiceline
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsRudeExit                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNPCMenu_C::PlayExitVoiceline(bool IsRudeExit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPCMenu.NPCMenu_C.PlayExitVoiceline");
		
		UNPCMenu_C_PlayExitVoiceline_Params params {};
		params.IsRudeExit = IsRudeExit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPCMenu.NPCMenu_C.PlayGreetingVoiceline
	 * 		Flags  -> ()
	 */
	void UNPCMenu_C::PlayGreetingVoiceline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPCMenu.NPCMenu_C.PlayGreetingVoiceline");
		
		UNPCMenu_C_PlayGreetingVoiceline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPCMenu.NPCMenu_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      NPCActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMetaNPCType                                       NPCType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bActivateCamera                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNPCMenu_C::Initialize(class AActor* NPCActor, EMetaNPCType NPCType, bool bActivateCamera)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPCMenu.NPCMenu_C.Initialize");
		
		UNPCMenu_C_Initialize_Params params {};
		params.NPCActor = NPCActor;
		params.NPCType = NPCType;
		params.bActivateCamera = bActivateCamera;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPCMenu.NPCMenu_C.Setup
	 * 		Flags  -> ()
	 */
	void UNPCMenu_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPCMenu.NPCMenu_C.Setup");
		
		UNPCMenu_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPCMenu.NPCMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UNPCMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPCMenu.NPCMenu_C.Construct");
		
		UNPCMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPCMenu.NPCMenu_C.Event_OnPop
	 * 		Flags  -> ()
	 */
	void UNPCMenu_C::Event_OnPop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPCMenu.NPCMenu_C.Event_OnPop");
		
		UNPCMenu_C_Event_OnPop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPCMenu.NPCMenu_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuButton_C*                             Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNPCMenu_C::BndEvt__ExitButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class URBMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPCMenu.NPCMenu_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UNPCMenu_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPCMenu.NPCMenu_C.Event_OnFocusMenu
	 * 		Flags  -> ()
	 */
	void UNPCMenu_C::Event_OnFocusMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPCMenu.NPCMenu_C.Event_OnFocusMenu");
		
		UNPCMenu_C_Event_OnFocusMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPCMenu.NPCMenu_C.BndEvt__NPCMenu_RigList_K2Node_ComponentBoundEvent_0_OnRigClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EActiveSkillType                                   ActiveSkillType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNPCMenu_C::BndEvt__NPCMenu_RigList_K2Node_ComponentBoundEvent_0_OnRigClicked__DelegateSignature(const class FName& ItemId, EActiveSkillType ActiveSkillType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPCMenu.NPCMenu_C.BndEvt__NPCMenu_RigList_K2Node_ComponentBoundEvent_0_OnRigClicked__DelegateSignature");
		
		UNPCMenu_C_BndEvt__NPCMenu_RigList_K2Node_ComponentBoundEvent_0_OnRigClicked__DelegateSignature_Params params {};
		params.ItemId = ItemId;
		params.ActiveSkillType = ActiveSkillType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPCMenu.NPCMenu_C.BndEvt__NPCMenu_RigList_K2Node_ComponentBoundEvent_1_OnUpgradeAcquired__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UNPCMenu_C::BndEvt__NPCMenu_RigList_K2Node_ComponentBoundEvent_1_OnUpgradeAcquired__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPCMenu.NPCMenu_C.BndEvt__NPCMenu_RigList_K2Node_ComponentBoundEvent_1_OnUpgradeAcquired__DelegateSignature");
		
		UNPCMenu_C_BndEvt__NPCMenu_RigList_K2Node_ComponentBoundEvent_1_OnUpgradeAcquired__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPCMenu.NPCMenu_C.BndEvt__NPCMenu_RigUpgradeList_K2Node_ComponentBoundEvent_3_OnUpgradeAcquired__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UNPCMenu_C::BndEvt__NPCMenu_RigUpgradeList_K2Node_ComponentBoundEvent_3_OnUpgradeAcquired__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPCMenu.NPCMenu_C.BndEvt__NPCMenu_RigUpgradeList_K2Node_ComponentBoundEvent_3_OnUpgradeAcquired__DelegateSignature");
		
		UNPCMenu_C_BndEvt__NPCMenu_RigUpgradeList_K2Node_ComponentBoundEvent_3_OnUpgradeAcquired__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPCMenu.NPCMenu_C.BndEvt__NPCMenu_PerkList_K2Node_ComponentBoundEvent_4_OnUpgradeAcquired__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UNPCMenu_C::BndEvt__NPCMenu_PerkList_K2Node_ComponentBoundEvent_4_OnUpgradeAcquired__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPCMenu.NPCMenu_C.BndEvt__NPCMenu_PerkList_K2Node_ComponentBoundEvent_4_OnUpgradeAcquired__DelegateSignature");
		
		UNPCMenu_C_BndEvt__NPCMenu_PerkList_K2Node_ComponentBoundEvent_4_OnUpgradeAcquired__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPCMenu.NPCMenu_C.BndEvt__NPCMenu_CoreUpgradeList_K2Node_ComponentBoundEvent_5_OnUpgradeAcquired__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UNPCMenu_C::BndEvt__NPCMenu_CoreUpgradeList_K2Node_ComponentBoundEvent_5_OnUpgradeAcquired__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPCMenu.NPCMenu_C.BndEvt__NPCMenu_CoreUpgradeList_K2Node_ComponentBoundEvent_5_OnUpgradeAcquired__DelegateSignature");
		
		UNPCMenu_C_BndEvt__NPCMenu_CoreUpgradeList_K2Node_ComponentBoundEvent_5_OnUpgradeAcquired__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPCMenu.NPCMenu_C.BndEvt__NPCMenu_CoreUpgradeTierList_K2Node_ComponentBoundEvent_6_OnTierClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            tier                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNPCMenu_C::BndEvt__NPCMenu_CoreUpgradeTierList_K2Node_ComponentBoundEvent_6_OnTierClicked__DelegateSignature(int32_t tier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPCMenu.NPCMenu_C.BndEvt__NPCMenu_CoreUpgradeTierList_K2Node_ComponentBoundEvent_6_OnTierClicked__DelegateSignature");
		
		UNPCMenu_C_BndEvt__NPCMenu_CoreUpgradeTierList_K2Node_ComponentBoundEvent_6_OnTierClicked__DelegateSignature_Params params {};
		params.tier = tier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPCMenu.NPCMenu_C.Event_OnMenuTutorialSeen
	 * 		Flags  -> ()
	 */
	void UNPCMenu_C::Event_OnMenuTutorialSeen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPCMenu.NPCMenu_C.Event_OnMenuTutorialSeen");
		
		UNPCMenu_C_Event_OnMenuTutorialSeen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPCMenu.NPCMenu_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNPCMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPCMenu.NPCMenu_C.Tick");
		
		UNPCMenu_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPCMenu.NPCMenu_C.Event_MenuCancel_Pressed
	 * 		Flags  -> ()
	 */
	void UNPCMenu_C::Event_MenuCancel_Pressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPCMenu.NPCMenu_C.Event_MenuCancel_Pressed");
		
		UNPCMenu_C_Event_MenuCancel_Pressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPCMenu.NPCMenu_C.ExecuteUbergraph_NPCMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNPCMenu_C::ExecuteUbergraph_NPCMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPCMenu.NPCMenu_C.ExecuteUbergraph_NPCMenu");
		
		UNPCMenu_C_ExecuteUbergraph_NPCMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNPCMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNPCMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NPCMenu.NPCMenu_C");
		return ptr;
	}

}


