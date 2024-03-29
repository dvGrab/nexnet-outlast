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
	 * 		Name   -> Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.UpdateRarity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPlayerCustomizationRarity                         Rarity                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProgramTrialRewardWidget_C::UpdateRarity(EPlayerCustomizationRarity Rarity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.UpdateRarity");
		
		UProgramTrialRewardWidget_C_UpdateRarity_Params params {};
		params.Rarity = Rarity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.MergeWith
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRewardUIData                               RewardUIData                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UProgramTrialRewardWidget_C::MergeWith(const struct FRewardUIData& RewardUIData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.MergeWith");
		
		UProgramTrialRewardWidget_C_MergeWith_Params params {};
		params.RewardUIData = RewardUIData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.CanMergeWith
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRewardUIData                               RewardUIData                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               bCanMergeWith                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UProgramTrialRewardWidget_C::CanMergeWith(const struct FRewardUIData& RewardUIData, bool* bCanMergeWith)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.CanMergeWith");
		
		UProgramTrialRewardWidget_C_CanMergeWith_Params params {};
		params.RewardUIData = RewardUIData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bCanMergeWith != nullptr)
			*bCanMergeWith = params.bCanMergeWith;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.InitFromRewardUIData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bAcquired                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bPerfect                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRewardUIData                               RewardUIData                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UProgramTrialRewardWidget_C::InitFromRewardUIData(bool bAcquired, bool bPerfect, const struct FRewardUIData& RewardUIData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.InitFromRewardUIData");
		
		UProgramTrialRewardWidget_C_InitFromRewardUIData_Params params {};
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
	 * 		Name   -> Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.PlayNewRewardAnimation
	 * 		Flags  -> ()
	 */
	void UProgramTrialRewardWidget_C::PlayNewRewardAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.PlayNewRewardAnimation");
		
		UProgramTrialRewardWidget_C_PlayNewRewardAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bAcquired                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bPerfect                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  IconTexture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateColor                                 IconColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        ForcedText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UProgramTrialRewardWidget_C::Init(bool bAcquired, bool bPerfect, int32_t amount, class UTexture2D* IconTexture, const struct FSlateColor& IconColor, const class FText& ForcedText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.Init");
		
		UProgramTrialRewardWidget_C_Init_Params params {};
		params.bAcquired = bAcquired;
		params.bPerfect = bPerfect;
		params.amount = amount;
		params.IconTexture = IconTexture;
		params.IconColor = IconColor;
		params.ForcedText = ForcedText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.Setup
	 * 		Flags  -> ()
	 */
	void UProgramTrialRewardWidget_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.Setup");
		
		UProgramTrialRewardWidget_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.OnLoaded_A87C4866469F6493BA837AA40651E406
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProgramTrialRewardWidget_C::OnLoaded_A87C4866469F6493BA837AA40651E406(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.OnLoaded_A87C4866469F6493BA837AA40651E406");
		
		UProgramTrialRewardWidget_C_OnLoaded_A87C4866469F6493BA837AA40651E406_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UProgramTrialRewardWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.Construct");
		
		UProgramTrialRewardWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UProgramTrialRewardWidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.PreConstruct");
		
		UProgramTrialRewardWidget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.LoadThumbnail
	 * 		Flags  -> ()
	 */
	void UProgramTrialRewardWidget_C::LoadThumbnail()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.LoadThumbnail");
		
		UProgramTrialRewardWidget_C_LoadThumbnail_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.ExecuteUbergraph_ProgramTrialRewardWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProgramTrialRewardWidget_C::ExecuteUbergraph_ProgramTrialRewardWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.ExecuteUbergraph_ProgramTrialRewardWidget");
		
		UProgramTrialRewardWidget_C_ExecuteUbergraph_ProgramTrialRewardWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProgramTrialRewardWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProgramTrialRewardWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ProgramTrialRewardWidget.ProgramTrialRewardWidget_C");
		return ptr;
	}

}


