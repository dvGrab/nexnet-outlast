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
	 * 		Name   -> Function NextLevelRewardWidget.NextLevelRewardWidget_C.UpdateRarity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPlayerCustomizationRarity                         Rarity                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNextLevelRewardWidget_C::UpdateRarity(EPlayerCustomizationRarity Rarity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NextLevelRewardWidget.NextLevelRewardWidget_C.UpdateRarity");
		
		UNextLevelRewardWidget_C_UpdateRarity_Params params {};
		params.Rarity = Rarity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NextLevelRewardWidget.NextLevelRewardWidget_C.InitFromRewardUIData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bAcquired                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bPerfect                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRewardUIData                               RewardUIData                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UNextLevelRewardWidget_C::InitFromRewardUIData(bool bAcquired, bool bPerfect, const struct FRewardUIData& RewardUIData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NextLevelRewardWidget.NextLevelRewardWidget_C.InitFromRewardUIData");
		
		UNextLevelRewardWidget_C_InitFromRewardUIData_Params params {};
		params.bAcquired = bAcquired;
		params.bPerfect = bPerfect;
		params.RewardUIData = RewardUIData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NextLevelRewardWidget.NextLevelRewardWidget_C.Setup
	 * 		Flags  -> ()
	 */
	void UNextLevelRewardWidget_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NextLevelRewardWidget.NextLevelRewardWidget_C.Setup");
		
		UNextLevelRewardWidget_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NextLevelRewardWidget.NextLevelRewardWidget_C.OnLoaded_54A1EA1342F0219294453894BE060EF2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNextLevelRewardWidget_C::OnLoaded_54A1EA1342F0219294453894BE060EF2(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NextLevelRewardWidget.NextLevelRewardWidget_C.OnLoaded_54A1EA1342F0219294453894BE060EF2");
		
		UNextLevelRewardWidget_C_OnLoaded_54A1EA1342F0219294453894BE060EF2_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NextLevelRewardWidget.NextLevelRewardWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UNextLevelRewardWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NextLevelRewardWidget.NextLevelRewardWidget_C.Construct");
		
		UNextLevelRewardWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NextLevelRewardWidget.NextLevelRewardWidget_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNextLevelRewardWidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NextLevelRewardWidget.NextLevelRewardWidget_C.PreConstruct");
		
		UNextLevelRewardWidget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NextLevelRewardWidget.NextLevelRewardWidget_C.LoadThumbnail
	 * 		Flags  -> ()
	 */
	void UNextLevelRewardWidget_C::LoadThumbnail()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NextLevelRewardWidget.NextLevelRewardWidget_C.LoadThumbnail");
		
		UNextLevelRewardWidget_C_LoadThumbnail_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NextLevelRewardWidget.NextLevelRewardWidget_C.ExecuteUbergraph_NextLevelRewardWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNextLevelRewardWidget_C::ExecuteUbergraph_NextLevelRewardWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NextLevelRewardWidget.NextLevelRewardWidget_C.ExecuteUbergraph_NextLevelRewardWidget");
		
		UNextLevelRewardWidget_C_ExecuteUbergraph_NextLevelRewardWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNextLevelRewardWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNextLevelRewardWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NextLevelRewardWidget.NextLevelRewardWidget_C");
		return ptr;
	}

}


