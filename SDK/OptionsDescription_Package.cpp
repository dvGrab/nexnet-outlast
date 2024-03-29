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
	 * 		Name   -> Function OptionsDescription.OptionsDescription_C.UpdateRestartRequired
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOptionData                                 Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UOptionsDescription_C::UpdateRestartRequired(const struct FOptionData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsDescription.OptionsDescription_C.UpdateRestartRequired");
		
		UOptionsDescription_C_UpdateRestartRequired_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsDescription.OptionsDescription_C.UpdateDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOptionData                                 OptionData                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UOptionsDescription_C::UpdateDescription(const struct FOptionData& OptionData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsDescription.OptionsDescription_C.UpdateDescription");
		
		UOptionsDescription_C_UpdateDescription_Params params {};
		params.OptionData = OptionData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsDescription.OptionsDescription_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsDescription_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsDescription.OptionsDescription_C.Tick");
		
		UOptionsDescription_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsDescription.OptionsDescription_C.ExecuteUbergraph_OptionsDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsDescription_C::ExecuteUbergraph_OptionsDescription(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsDescription.OptionsDescription_C.ExecuteUbergraph_OptionsDescription");
		
		UOptionsDescription_C_ExecuteUbergraph_OptionsDescription_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptionsDescription_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptionsDescription_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OptionsDescription.OptionsDescription_C");
		return ptr;
	}

}


