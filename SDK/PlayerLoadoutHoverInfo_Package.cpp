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
	 * 		Name   -> Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.IsTierLocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsTierLocked                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerLoadoutHoverInfo_C::IsTierLocked(bool* bIsTierLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.IsTierLocked");
		
		UPlayerLoadoutHoverInfo_C_IsTierLocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsTierLocked != nullptr)
			*bIsTierLocked = params.bIsTierLocked;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.SetupActionButton2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ActionName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        actionText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               bHold                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerLoadoutHoverInfo_C::SetupActionButton2(const class FString& ActionName, const class FText& actionText, bool bHold)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.SetupActionButton2");
		
		UPlayerLoadoutHoverInfo_C_SetupActionButton2_Params params {};
		params.ActionName = ActionName;
		params.actionText = actionText;
		params.bHold = bHold;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.SetupActionButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ActionName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        actionText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               bHold                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerLoadoutHoverInfo_C::SetupActionButton(const class FString& ActionName, const class FText& actionText, bool bHold)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.SetupActionButton");
		
		UPlayerLoadoutHoverInfo_C_SetupActionButton_Params params {};
		params.ActionName = ActionName;
		params.actionText = actionText;
		params.bHold = bHold;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.SetupError
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Error                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UPlayerLoadoutHoverInfo_C::SetupError(const class FText& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.SetupError");
		
		UPlayerLoadoutHoverInfo_C_SetupError_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.SetupCoreUpgrade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            tier                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerLoadoutHoverInfo_C::SetupCoreUpgrade(const class FName& ItemId, int32_t tier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.SetupCoreUpgrade");
		
		UPlayerLoadoutHoverInfo_C_SetupCoreUpgrade_Params params {};
		params.ItemId = ItemId;
		params.tier = tier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.SetupPerk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SlotIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerLoadoutHoverInfo_C::SetupPerk(const class FName& ItemId, int32_t SlotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.SetupPerk");
		
		UPlayerLoadoutHoverInfo_C_SetupPerk_Params params {};
		params.ItemId = ItemId;
		params.SlotIndex = SlotIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.SetupRigUpgrade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SlotIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerLoadoutHoverInfo_C::SetupRigUpgrade(const class FName& ItemId, int32_t SlotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.SetupRigUpgrade");
		
		UPlayerLoadoutHoverInfo_C_SetupRigUpgrade_Params params {};
		params.ItemId = ItemId;
		params.SlotIndex = SlotIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.SetupRig
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerLoadoutHoverInfo_C::SetupRig(const class FName& ItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.SetupRig");
		
		UPlayerLoadoutHoverInfo_C_SetupRig_Params params {};
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.OnLoadoutItemUnhovered
	 * 		Flags  -> ()
	 */
	void UPlayerLoadoutHoverInfo_C::OnLoadoutItemUnhovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.OnLoadoutItemUnhovered");
		
		UPlayerLoadoutHoverInfo_C_OnLoadoutItemUnhovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.OnLoadoutItemHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELoadoutElementType                                loadoutItemType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ItemId                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            tier                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerLoadoutHoverInfo_C::OnLoadoutItemHovered(ELoadoutElementType loadoutItemType, const class FName& ItemId, int32_t tier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.OnLoadoutItemHovered");
		
		UPlayerLoadoutHoverInfo_C_OnLoadoutItemHovered_Params params {};
		params.loadoutItemType = loadoutItemType;
		params.ItemId = ItemId;
		params.tier = tier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.Refresh
	 * 		Flags  -> ()
	 */
	void UPlayerLoadoutHoverInfo_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.Refresh");
		
		UPlayerLoadoutHoverInfo_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.Construct
	 * 		Flags  -> ()
	 */
	void UPlayerLoadoutHoverInfo_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.Construct");
		
		UPlayerLoadoutHoverInfo_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.Destruct
	 * 		Flags  -> ()
	 */
	void UPlayerLoadoutHoverInfo_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.Destruct");
		
		UPlayerLoadoutHoverInfo_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.ExecuteUbergraph_PlayerLoadoutHoverInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerLoadoutHoverInfo_C::ExecuteUbergraph_PlayerLoadoutHoverInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C.ExecuteUbergraph_PlayerLoadoutHoverInfo");
		
		UPlayerLoadoutHoverInfo_C_ExecuteUbergraph_PlayerLoadoutHoverInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerLoadoutHoverInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerLoadoutHoverInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerLoadoutHoverInfo.PlayerLoadoutHoverInfo_C");
		return ptr;
	}

}


