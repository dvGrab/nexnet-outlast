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
	 * 		Name   -> Function StageIntroVariatorEntry.StageIntroVariatorEntry_C.StartAnimation
	 * 		Flags  -> ()
	 */
	void UStageIntroVariatorEntry_C::StartAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StageIntroVariatorEntry.StageIntroVariatorEntry_C.StartAnimation");
		
		UStageIntroVariatorEntry_C_StartAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StageIntroVariatorEntry.StageIntroVariatorEntry_C.InitFromVariatorInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBVariatorInfo*                             variatorInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStageIntroVariatorEntry_C::InitFromVariatorInfo(class URBVariatorInfo* variatorInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StageIntroVariatorEntry.StageIntroVariatorEntry_C.InitFromVariatorInfo");
		
		UStageIntroVariatorEntry_C_InitFromVariatorInfo_Params params {};
		params.variatorInfo = variatorInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StageIntroVariatorEntry.StageIntroVariatorEntry_C.InitFromDifficulty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGameDifficulty                                    Difficulty                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStageIntroVariatorEntry_C::InitFromDifficulty(EGameDifficulty Difficulty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StageIntroVariatorEntry.StageIntroVariatorEntry_C.InitFromDifficulty");
		
		UStageIntroVariatorEntry_C_InitFromDifficulty_Params params {};
		params.Difficulty = Difficulty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StageIntroVariatorEntry.StageIntroVariatorEntry_C.Refresh
	 * 		Flags  -> ()
	 */
	void UStageIntroVariatorEntry_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StageIntroVariatorEntry.StageIntroVariatorEntry_C.Refresh");
		
		UStageIntroVariatorEntry_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StageIntroVariatorEntry.StageIntroVariatorEntry_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStageIntroVariatorEntry_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StageIntroVariatorEntry.StageIntroVariatorEntry_C.PreConstruct");
		
		UStageIntroVariatorEntry_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StageIntroVariatorEntry.StageIntroVariatorEntry_C.Construct
	 * 		Flags  -> ()
	 */
	void UStageIntroVariatorEntry_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StageIntroVariatorEntry.StageIntroVariatorEntry_C.Construct");
		
		UStageIntroVariatorEntry_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StageIntroVariatorEntry.StageIntroVariatorEntry_C.OnShowFinished
	 * 		Flags  -> ()
	 */
	void UStageIntroVariatorEntry_C::OnShowFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StageIntroVariatorEntry.StageIntroVariatorEntry_C.OnShowFinished");
		
		UStageIntroVariatorEntry_C_OnShowFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StageIntroVariatorEntry.StageIntroVariatorEntry_C.ExecuteUbergraph_StageIntroVariatorEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStageIntroVariatorEntry_C::ExecuteUbergraph_StageIntroVariatorEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StageIntroVariatorEntry.StageIntroVariatorEntry_C.ExecuteUbergraph_StageIntroVariatorEntry");
		
		UStageIntroVariatorEntry_C_ExecuteUbergraph_StageIntroVariatorEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StageIntroVariatorEntry.StageIntroVariatorEntry_C.OnAnimationCompleted__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UStageIntroVariatorEntry_C::OnAnimationCompleted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StageIntroVariatorEntry.StageIntroVariatorEntry_C.OnAnimationCompleted__DelegateSignature");
		
		UStageIntroVariatorEntry_C_OnAnimationCompleted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStageIntroVariatorEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStageIntroVariatorEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StageIntroVariatorEntry.StageIntroVariatorEntry_C");
		return ptr;
	}

}


