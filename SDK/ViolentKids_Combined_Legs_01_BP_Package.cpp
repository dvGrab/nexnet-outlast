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
	 * 		Name   -> Function ViolentKids_Combined_Legs_01_BP.ViolentKids_Combined_Legs_01_BP_C.UpdateSex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsGirl                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AViolentKids_Combined_Legs_01_BP_C::UpdateSex(bool IsGirl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Legs_01_BP.ViolentKids_Combined_Legs_01_BP_C.UpdateSex");
		
		AViolentKids_Combined_Legs_01_BP_C_UpdateSex_Params params {};
		params.IsGirl = IsGirl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Legs_01_BP.ViolentKids_Combined_Legs_01_BP_C.OnLoopDoneChanged
	 * 		Flags  -> ()
	 */
	void AViolentKids_Combined_Legs_01_BP_C::OnLoopDoneChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Legs_01_BP.ViolentKids_Combined_Legs_01_BP_C.OnLoopDoneChanged");
		
		AViolentKids_Combined_Legs_01_BP_C_OnLoopDoneChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Legs_01_BP.ViolentKids_Combined_Legs_01_BP_C.Reset Anims
	 * 		Flags  -> ()
	 */
	void AViolentKids_Combined_Legs_01_BP_C::Reset_Anims()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Legs_01_BP.ViolentKids_Combined_Legs_01_BP_C.Reset Anims");
		
		AViolentKids_Combined_Legs_01_BP_C_Reset_Anims_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Legs_01_BP.ViolentKids_Combined_Legs_01_BP_C.SetStillAttached
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               StillAttached                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AViolentKids_Combined_Legs_01_BP_C::SetStillAttached(bool StillAttached)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Legs_01_BP.ViolentKids_Combined_Legs_01_BP_C.SetStillAttached");
		
		AViolentKids_Combined_Legs_01_BP_C_SetStillAttached_Params params {};
		params.StillAttached = StillAttached;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Legs_01_BP.ViolentKids_Combined_Legs_01_BP_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      AnimDriver                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AViolentKids_Combined_Legs_01_BP_C::Initialize(class AActor* AnimDriver)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Legs_01_BP.ViolentKids_Combined_Legs_01_BP_C.Initialize");
		
		AViolentKids_Combined_Legs_01_BP_C_Initialize_Params params {};
		params.AnimDriver = AnimDriver;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ViolentKids_Combined_Legs_01_BP.ViolentKids_Combined_Legs_01_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AViolentKids_Combined_Legs_01_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ViolentKids_Combined_Legs_01_BP.ViolentKids_Combined_Legs_01_BP_C.UserConstructionScript");
		
		AViolentKids_Combined_Legs_01_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AViolentKids_Combined_Legs_01_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AViolentKids_Combined_Legs_01_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ViolentKids_Combined_Legs_01_BP.ViolentKids_Combined_Legs_01_BP_C");
		return ptr;
	}

}


