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
	 * 		Name   -> Function ViolentKids_Interface_BP.ViolentKids_Interface_BP_C.GetPropAnimationData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UViolentKids_MannequinData_BP_C*             New_Param                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UViolentKids_Interface_BP_C::GetPropAnimationData(class UViolentKids_MannequinData_BP_C** New_Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Interface_BP.ViolentKids_Interface_BP_C.GetPropAnimationData");
		
		UViolentKids_Interface_BP_C_GetPropAnimationData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (New_Param != nullptr)
			*New_Param = params.New_Param;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Interface_BP.ViolentKids_Interface_BP_C.GetAnimationData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UViolentKids_MannequinData_BP_C*             Data                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UViolentKids_Interface_BP_C::GetAnimationData(class UViolentKids_MannequinData_BP_C** Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Interface_BP.ViolentKids_Interface_BP_C.GetAnimationData");
		
		UViolentKids_Interface_BP_C_GetAnimationData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UViolentKids_Interface_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UViolentKids_Interface_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ViolentKids_Interface_BP.ViolentKids_Interface_BP_C");
		return ptr;
	}

}


