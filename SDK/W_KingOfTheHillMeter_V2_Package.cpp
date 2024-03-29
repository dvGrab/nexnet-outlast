/**
 * Name: READYORNOT
 * Version: 0.0.1
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
	 * 		Name   -> Function W_KingOfTheHillMeter_V2.W_KingOfTheHillMeter_V2_C.SetPercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Percent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_KingOfTheHillMeter_V2_C::SetPercent(float Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_KingOfTheHillMeter_V2.W_KingOfTheHillMeter_V2_C.SetPercent");
		
		UW_KingOfTheHillMeter_V2_C_SetPercent_Params params {};
		params.Percent = Percent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_KingOfTheHillMeter_V2.W_KingOfTheHillMeter_V2_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_KingOfTheHillMeter_V2_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_KingOfTheHillMeter_V2.W_KingOfTheHillMeter_V2_C.PreConstruct");
		
		UW_KingOfTheHillMeter_V2_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_KingOfTheHillMeter_V2.W_KingOfTheHillMeter_V2_C.ExecuteUbergraph_W_KingOfTheHillMeter_V2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_KingOfTheHillMeter_V2_C::ExecuteUbergraph_W_KingOfTheHillMeter_V2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_KingOfTheHillMeter_V2.W_KingOfTheHillMeter_V2_C.ExecuteUbergraph_W_KingOfTheHillMeter_V2");
		
		UW_KingOfTheHillMeter_V2_C_ExecuteUbergraph_W_KingOfTheHillMeter_V2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_KingOfTheHillMeter_V2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_KingOfTheHillMeter_V2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_KingOfTheHillMeter_V2.W_KingOfTheHillMeter_V2_C");
		return ptr;
	}

}


