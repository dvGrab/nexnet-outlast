/**
 * Name: OUTLAST
 * Version: 0.0.2_fixed
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
	 * 		Name   -> Function BP_FX_Trial_01_PS_01_SparkBurst.BP_FX_Trial_01_PS_01_SparkBurst_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_FX_Trial_01_PS_01_SparkBurst_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_Trial_01_PS_01_SparkBurst.BP_FX_Trial_01_PS_01_SparkBurst_C.UserConstructionScript");
		
		ABP_FX_Trial_01_PS_01_SparkBurst_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FX_Trial_01_PS_01_SparkBurst.BP_FX_Trial_01_PS_01_SparkBurst_C.Event_OnTriggered
	 * 		Flags  -> ()
	 */
	void ABP_FX_Trial_01_PS_01_SparkBurst_C::Event_OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_Trial_01_PS_01_SparkBurst.BP_FX_Trial_01_PS_01_SparkBurst_C.Event_OnTriggered");
		
		ABP_FX_Trial_01_PS_01_SparkBurst_C_Event_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FX_Trial_01_PS_01_SparkBurst.BP_FX_Trial_01_PS_01_SparkBurst_C.ExecuteUbergraph_BP_FX_Trial_01_PS_01_SparkBurst
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FX_Trial_01_PS_01_SparkBurst_C::ExecuteUbergraph_BP_FX_Trial_01_PS_01_SparkBurst(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_Trial_01_PS_01_SparkBurst.BP_FX_Trial_01_PS_01_SparkBurst_C.ExecuteUbergraph_BP_FX_Trial_01_PS_01_SparkBurst");
		
		ABP_FX_Trial_01_PS_01_SparkBurst_C_ExecuteUbergraph_BP_FX_Trial_01_PS_01_SparkBurst_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_FX_Trial_01_PS_01_SparkBurst_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_FX_Trial_01_PS_01_SparkBurst_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_FX_Trial_01_PS_01_SparkBurst.BP_FX_Trial_01_PS_01_SparkBurst_C");
		return ptr;
	}

}


