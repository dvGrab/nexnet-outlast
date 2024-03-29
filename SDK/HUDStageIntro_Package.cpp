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
	 * 		Name   -> Function HUDStageIntro.HUDStageIntro_C.GetTrialName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        StageName                                                  (Parm, OutParm)
	 */
	void UHUDStageIntro_C::GetTrialName(class FText* StageName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDStageIntro.HUDStageIntro_C.GetTrialName");
		
		UHUDStageIntro_C_GetTrialName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StageName != nullptr)
			*StageName = params.StageName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDStageIntro.HUDStageIntro_C.GetStageName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        StageName                                                  (Parm, OutParm)
	 */
	void UHUDStageIntro_C::GetStageName(class FText* StageName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDStageIntro.HUDStageIntro_C.GetStageName");
		
		UHUDStageIntro_C_GetStageName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StageName != nullptr)
			*StageName = params.StageName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDStageIntro.HUDStageIntro_C.ShowNextVariator
	 * 		Flags  -> ()
	 */
	void UHUDStageIntro_C::ShowNextVariator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDStageIntro.HUDStageIntro_C.ShowNextVariator");
		
		UHUDStageIntro_C_ShowNextVariator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDStageIntro.HUDStageIntro_C.InitVariators
	 * 		Flags  -> ()
	 */
	void UHUDStageIntro_C::InitVariators()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDStageIntro.HUDStageIntro_C.InitVariators");
		
		UHUDStageIntro_C_InitVariators_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDStageIntro.HUDStageIntro_C.Finished_5005AE6A43210FC2510BF2B1AF634AB5
	 * 		Flags  -> ()
	 */
	void UHUDStageIntro_C::Finished_5005AE6A43210FC2510BF2B1AF634AB5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDStageIntro.HUDStageIntro_C.Finished_5005AE6A43210FC2510BF2B1AF634AB5");
		
		UHUDStageIntro_C_Finished_5005AE6A43210FC2510BF2B1AF634AB5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDStageIntro.HUDStageIntro_C.Event_Show
	 * 		Flags  -> ()
	 */
	void UHUDStageIntro_C::Event_Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDStageIntro.HUDStageIntro_C.Event_Show");
		
		UHUDStageIntro_C_Event_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDStageIntro.HUDStageIntro_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDStageIntro_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDStageIntro.HUDStageIntro_C.Tick");
		
		UHUDStageIntro_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDStageIntro.HUDStageIntro_C.ExecuteUbergraph_HUDStageIntro
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDStageIntro_C::ExecuteUbergraph_HUDStageIntro(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDStageIntro.HUDStageIntro_C.ExecuteUbergraph_HUDStageIntro");
		
		UHUDStageIntro_C_ExecuteUbergraph_HUDStageIntro_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUDStageIntro_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUDStageIntro_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUDStageIntro.HUDStageIntro_C");
		return ptr;
	}

}


