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
	 * 		Name   -> Function LevelIndicatorWidget.LevelIndicatorWidget_C.PlayerLevelUpAnimation
	 * 		Flags  -> ()
	 */
	void ULevelIndicatorWidget_C::PlayerLevelUpAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelIndicatorWidget.LevelIndicatorWidget_C.PlayerLevelUpAnimation");
		
		ULevelIndicatorWidget_C_PlayerLevelUpAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LevelIndicatorWidget.LevelIndicatorWidget_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ReleaseCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULevelIndicatorWidget_C::Init(int32_t Level, int32_t ReleaseCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelIndicatorWidget.LevelIndicatorWidget_C.Init");
		
		ULevelIndicatorWidget_C_Init_Params params {};
		params.Level = Level;
		params.ReleaseCount = ReleaseCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LevelIndicatorWidget.LevelIndicatorWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void ULevelIndicatorWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelIndicatorWidget.LevelIndicatorWidget_C.Construct");
		
		ULevelIndicatorWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LevelIndicatorWidget.LevelIndicatorWidget_C.LevelAnimationFinished
	 * 		Flags  -> ()
	 */
	void ULevelIndicatorWidget_C::LevelAnimationFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelIndicatorWidget.LevelIndicatorWidget_C.LevelAnimationFinished");
		
		ULevelIndicatorWidget_C_LevelAnimationFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LevelIndicatorWidget.LevelIndicatorWidget_C.ExecuteUbergraph_LevelIndicatorWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULevelIndicatorWidget_C::ExecuteUbergraph_LevelIndicatorWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelIndicatorWidget.LevelIndicatorWidget_C.ExecuteUbergraph_LevelIndicatorWidget");
		
		ULevelIndicatorWidget_C_ExecuteUbergraph_LevelIndicatorWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LevelIndicatorWidget.LevelIndicatorWidget_C.LevelUpAnimationFinished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULevelIndicatorWidget_C::LevelUpAnimationFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelIndicatorWidget.LevelIndicatorWidget_C.LevelUpAnimationFinished__DelegateSignature");
		
		ULevelIndicatorWidget_C_LevelUpAnimationFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULevelIndicatorWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelIndicatorWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LevelIndicatorWidget.LevelIndicatorWidget_C");
		return ptr;
	}

}


