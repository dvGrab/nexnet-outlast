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
	 * 		Name   -> Function LinearInventory.LinearInventory_C.SequenceEvent__ENTRYPOINTLinearInventory_1
	 * 		Flags  -> ()
	 */
	void ULinearInventory_C::SequenceEvent__ENTRYPOINTLinearInventory_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LinearInventory.LinearInventory_C.SequenceEvent__ENTRYPOINTLinearInventory_1");
		
		ULinearInventory_C_SequenceEvent__ENTRYPOINTLinearInventory_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LinearInventory.LinearInventory_C.ShouldShow
	 * 		Flags  -> ()
	 */
	bool ULinearInventory_C::ShouldShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LinearInventory.LinearInventory_C.ShouldShow");
		
		ULinearInventory_C_ShouldShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LinearInventory.LinearInventory_C.OnASCooldownStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBActiveSkill*                              ActiveSkill                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsInCooldown                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULinearInventory_C::OnASCooldownStateChanged(class ARBActiveSkill* ActiveSkill, bool bIsInCooldown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LinearInventory.LinearInventory_C.OnASCooldownStateChanged");
		
		ULinearInventory_C_OnASCooldownStateChanged_Params params {};
		params.ActiveSkill = ActiveSkill;
		params.bIsInCooldown = bIsInCooldown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LinearInventory.LinearInventory_C.UpdateDarknessDetection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InDarkness                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULinearInventory_C::UpdateDarknessDetection(bool InDarkness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LinearInventory.LinearInventory_C.UpdateDarknessDetection");
		
		ULinearInventory_C_UpdateDarknessDetection_Params params {};
		params.InDarkness = InDarkness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LinearInventory.LinearInventory_C.GetActiveSkillIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ActiveSkillIndex                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ActiveSkillFound                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULinearInventory_C::GetActiveSkillIndex(int32_t* ActiveSkillIndex, bool* ActiveSkillFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LinearInventory.LinearInventory_C.GetActiveSkillIndex");
		
		ULinearInventory_C_GetActiveSkillIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActiveSkillIndex != nullptr)
			*ActiveSkillIndex = params.ActiveSkillIndex;
		if (ActiveSkillFound != nullptr)
			*ActiveSkillFound = params.ActiveSkillFound;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LinearInventory.LinearInventory_C.GetActiveSkillInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ActiveSkillFound                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FUILinearInventoryItem                      ActiveSkillInfo                                            (Parm, OutParm)
	 */
	void ULinearInventory_C::GetActiveSkillInfo(bool* ActiveSkillFound, struct FUILinearInventoryItem* ActiveSkillInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LinearInventory.LinearInventory_C.GetActiveSkillInfo");
		
		ULinearInventory_C_GetActiveSkillInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActiveSkillFound != nullptr)
			*ActiveSkillFound = params.ActiveSkillFound;
		if (ActiveSkillInfo != nullptr)
			*ActiveSkillInfo = params.ActiveSkillInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LinearInventory.LinearInventory_C.RefreshPrompts
	 * 		Flags  -> ()
	 */
	void ULinearInventory_C::RefreshPrompts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LinearInventory.LinearInventory_C.RefreshPrompts");
		
		ULinearInventory_C_RefreshPrompts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LinearInventory.LinearInventory_C.UpdateASCooldown
	 * 		Flags  -> ()
	 */
	void ULinearInventory_C::UpdateASCooldown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LinearInventory.LinearInventory_C.UpdateASCooldown");
		
		ULinearInventory_C_UpdateASCooldown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LinearInventory.LinearInventory_C.UpdateRigSlot
	 * 		Flags  -> ()
	 */
	void ULinearInventory_C::UpdateRigSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LinearInventory.LinearInventory_C.UpdateRigSlot");
		
		ULinearInventory_C_UpdateRigSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LinearInventory.LinearInventory_C.UpdateObjectiveItems
	 * 		Flags  -> ()
	 */
	void ULinearInventory_C::UpdateObjectiveItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LinearInventory.LinearInventory_C.UpdateObjectiveItems");
		
		ULinearInventory_C_UpdateObjectiveItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LinearInventory.LinearInventory_C.RefreshInventory
	 * 		Flags  -> ()
	 */
	void ULinearInventory_C::RefreshInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LinearInventory.LinearInventory_C.RefreshInventory");
		
		ULinearInventory_C_RefreshInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LinearInventory.LinearInventory_C.UpdateEquippedItem
	 * 		Flags  -> ()
	 */
	void ULinearInventory_C::UpdateEquippedItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LinearInventory.LinearInventory_C.UpdateEquippedItem");
		
		ULinearInventory_C_UpdateEquippedItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LinearInventory.LinearInventory_C.UpdateText
	 * 		Flags  -> ()
	 */
	void ULinearInventory_C::UpdateText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LinearInventory.LinearInventory_C.UpdateText");
		
		ULinearInventory_C_UpdateText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LinearInventory.LinearInventory_C.Construct
	 * 		Flags  -> ()
	 */
	void ULinearInventory_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LinearInventory.LinearInventory_C.Construct");
		
		ULinearInventory_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LinearInventory.LinearInventory_C.Event_Refresh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInventoryUpdateEventType                          EventType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULinearInventory_C::Event_Refresh(EInventoryUpdateEventType EventType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LinearInventory.LinearInventory_C.Event_Refresh");
		
		ULinearInventory_C_Event_Refresh_Params params {};
		params.EventType = EventType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LinearInventory.LinearInventory_C.Event_RefreshActiveSkill
	 * 		Flags  -> ()
	 */
	void ULinearInventory_C::Event_RefreshActiveSkill()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LinearInventory.LinearInventory_C.Event_RefreshActiveSkill");
		
		ULinearInventory_C_Event_RefreshActiveSkill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LinearInventory.LinearInventory_C.OnMenuExit
	 * 		Flags  -> ()
	 */
	void ULinearInventory_C::OnMenuExit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LinearInventory.LinearInventory_C.OnMenuExit");
		
		ULinearInventory_C_OnMenuExit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LinearInventory.LinearInventory_C.Event_RefreshPrompts
	 * 		Flags  -> ()
	 */
	void ULinearInventory_C::Event_RefreshPrompts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LinearInventory.LinearInventory_C.Event_RefreshPrompts");
		
		ULinearInventory_C_Event_RefreshPrompts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LinearInventory.LinearInventory_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULinearInventory_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LinearInventory.LinearInventory_C.Tick");
		
		ULinearInventory_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LinearInventory.LinearInventory_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULinearInventory_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LinearInventory.LinearInventory_C.PreConstruct");
		
		ULinearInventory_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LinearInventory.LinearInventory_C.Event_OnWatchedPlayerChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayer*                                   oldPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPlayer*                                   NewPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULinearInventory_C::Event_OnWatchedPlayerChanged(class ARBPlayer* oldPlayer, class ARBPlayer* NewPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LinearInventory.LinearInventory_C.Event_OnWatchedPlayerChanged");
		
		ULinearInventory_C_Event_OnWatchedPlayerChanged_Params params {};
		params.oldPlayer = oldPlayer;
		params.NewPlayer = NewPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LinearInventory.LinearInventory_C.OnSpeakerVisibilityChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   InVisibility                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULinearInventory_C::OnSpeakerVisibilityChanged(ESlateVisibility InVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LinearInventory.LinearInventory_C.OnSpeakerVisibilityChanged");
		
		ULinearInventory_C_OnSpeakerVisibilityChanged_Params params {};
		params.InVisibility = InVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LinearInventory.LinearInventory_C.OnInventorySizeChanged
	 * 		Flags  -> ()
	 */
	void ULinearInventory_C::OnInventorySizeChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LinearInventory.LinearInventory_C.OnInventorySizeChanged");
		
		ULinearInventory_C_OnInventorySizeChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LinearInventory.LinearInventory_C.Event_RefreshDarknessIndicator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               newDarknessState                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULinearInventory_C::Event_RefreshDarknessIndicator(bool newDarknessState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LinearInventory.LinearInventory_C.Event_RefreshDarknessIndicator");
		
		ULinearInventory_C_Event_RefreshDarknessIndicator_Params params {};
		params.newDarknessState = newDarknessState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LinearInventory.LinearInventory_C.StartFadeOutTimer
	 * 		Flags  -> ()
	 */
	void ULinearInventory_C::StartFadeOutTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LinearInventory.LinearInventory_C.StartFadeOutTimer");
		
		ULinearInventory_C_StartFadeOutTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LinearInventory.LinearInventory_C.Event_OnIsInCooldownChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBActiveSkill*                              ActiveSkill                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsInCooldown                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULinearInventory_C::Event_OnIsInCooldownChanged(class ARBActiveSkill* ActiveSkill, bool bIsInCooldown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LinearInventory.LinearInventory_C.Event_OnIsInCooldownChanged");
		
		ULinearInventory_C_Event_OnIsInCooldownChanged_Params params {};
		params.ActiveSkill = ActiveSkill;
		params.bIsInCooldown = bIsInCooldown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LinearInventory.LinearInventory_C.Event_Hide
	 * 		Flags  -> ()
	 */
	void ULinearInventory_C::Event_Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LinearInventory.LinearInventory_C.Event_Hide");
		
		ULinearInventory_C_Event_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LinearInventory.LinearInventory_C.Event_Show
	 * 		Flags  -> ()
	 */
	void ULinearInventory_C::Event_Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LinearInventory.LinearInventory_C.Event_Show");
		
		ULinearInventory_C_Event_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LinearInventory.LinearInventory_C.OnHide
	 * 		Flags  -> ()
	 */
	void ULinearInventory_C::OnHide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LinearInventory.LinearInventory_C.OnHide");
		
		ULinearInventory_C_OnHide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LinearInventory.LinearInventory_C.Event_OnHudModeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHudMode                                           newHudMode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULinearInventory_C::Event_OnHudModeChanged(EHudMode newHudMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LinearInventory.LinearInventory_C.Event_OnHudModeChanged");
		
		ULinearInventory_C_Event_OnHudModeChanged_Params params {};
		params.newHudMode = newHudMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LinearInventory.LinearInventory_C.Event_RefreshASRestriction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isRestricted                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULinearInventory_C::Event_RefreshASRestriction(bool isRestricted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LinearInventory.LinearInventory_C.Event_RefreshASRestriction");
		
		ULinearInventory_C_Event_RefreshASRestriction_Params params {};
		params.isRestricted = isRestricted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LinearInventory.LinearInventory_C.ExecuteUbergraph_LinearInventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULinearInventory_C::ExecuteUbergraph_LinearInventory(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LinearInventory.LinearInventory_C.ExecuteUbergraph_LinearInventory");
		
		ULinearInventory_C_ExecuteUbergraph_LinearInventory_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULinearInventory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULinearInventory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LinearInventory.LinearInventory_C");
		return ptr;
	}

}


