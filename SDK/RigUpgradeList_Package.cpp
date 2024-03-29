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
	 * 		Name   -> Function RigUpgradeList.RigUpgradeList_C.OnFocusReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply URigUpgradeList_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RigUpgradeList.RigUpgradeList_C.OnFocusReceived");
		
		URigUpgradeList_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function RigUpgradeList.RigUpgradeList_C.OnUpgradeReleasedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URigUpgradeList_C::OnUpgradeReleasedEvent(const class FName& ItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RigUpgradeList.RigUpgradeList_C.OnUpgradeReleasedEvent");
		
		URigUpgradeList_C_OnUpgradeReleasedEvent_Params params {};
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RigUpgradeList.RigUpgradeList_C.OnUpgradePressedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URigUpgradeList_C::OnUpgradePressedEvent(const class FName& ItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RigUpgradeList.RigUpgradeList_C.OnUpgradePressedEvent");
		
		URigUpgradeList_C_OnUpgradePressedEvent_Params params {};
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RigUpgradeList.RigUpgradeList_C.OnUpgradeClickedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URigUpgradeList_C::OnUpgradeClickedEvent(const class FName& ItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RigUpgradeList.RigUpgradeList_C.OnUpgradeClickedEvent");
		
		URigUpgradeList_C_OnUpgradeClickedEvent_Params params {};
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RigUpgradeList.RigUpgradeList_C.OnUpgradeUnhoveredEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URigUpgradeList_C::OnUpgradeUnhoveredEvent(const class FName& ItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RigUpgradeList.RigUpgradeList_C.OnUpgradeUnhoveredEvent");
		
		URigUpgradeList_C_OnUpgradeUnhoveredEvent_Params params {};
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RigUpgradeList.RigUpgradeList_C.OnUpgradeHoveredEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URigUpgradeList_C::OnUpgradeHoveredEvent(const class FName& ItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RigUpgradeList.RigUpgradeList_C.OnUpgradeHoveredEvent");
		
		URigUpgradeList_C_OnUpgradeHoveredEvent_Params params {};
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RigUpgradeList.RigUpgradeList_C.Refresh
	 * 		Flags  -> ()
	 */
	void URigUpgradeList_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RigUpgradeList.RigUpgradeList_C.Refresh");
		
		URigUpgradeList_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RigUpgradeList.RigUpgradeList_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsLoadout                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EActiveSkillType                                   activeSkillUpgradeId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URigUpgradeList_C::Init(bool bIsLoadout, EActiveSkillType activeSkillUpgradeId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RigUpgradeList.RigUpgradeList_C.Init");
		
		URigUpgradeList_C_Init_Params params {};
		params.bIsLoadout = bIsLoadout;
		params.activeSkillUpgradeId = activeSkillUpgradeId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RigUpgradeList.RigUpgradeList_C.Setup
	 * 		Flags  -> ()
	 */
	void URigUpgradeList_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RigUpgradeList.RigUpgradeList_C.Setup");
		
		URigUpgradeList_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RigUpgradeList.RigUpgradeList_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URigUpgradeList_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RigUpgradeList.RigUpgradeList_C.PreConstruct");
		
		URigUpgradeList_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RigUpgradeList.RigUpgradeList_C.ExecuteUbergraph_RigUpgradeList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URigUpgradeList_C::ExecuteUbergraph_RigUpgradeList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RigUpgradeList.RigUpgradeList_C.ExecuteUbergraph_RigUpgradeList");
		
		URigUpgradeList_C_ExecuteUbergraph_RigUpgradeList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RigUpgradeList.RigUpgradeList_C.OnUpgradeClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URigUpgradeList_C::OnUpgradeClicked__DelegateSignature(const class FName& ItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RigUpgradeList.RigUpgradeList_C.OnUpgradeClicked__DelegateSignature");
		
		URigUpgradeList_C_OnUpgradeClicked__DelegateSignature_Params params {};
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RigUpgradeList.RigUpgradeList_C.OnUpgradeUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URigUpgradeList_C::OnUpgradeUnhovered__DelegateSignature(const class FName& ItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RigUpgradeList.RigUpgradeList_C.OnUpgradeUnhovered__DelegateSignature");
		
		URigUpgradeList_C_OnUpgradeUnhovered__DelegateSignature_Params params {};
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RigUpgradeList.RigUpgradeList_C.OnUpgradeHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URigUpgradeList_C::OnUpgradeHovered__DelegateSignature(const class FName& ItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RigUpgradeList.RigUpgradeList_C.OnUpgradeHovered__DelegateSignature");
		
		URigUpgradeList_C_OnUpgradeHovered__DelegateSignature_Params params {};
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URigUpgradeList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URigUpgradeList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RigUpgradeList.RigUpgradeList_C");
		return ptr;
	}

}


