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
	 * 		Name   -> Function Spectra_Base_ActiveSkill_BP.Spectra_Base_ActiveSkill_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ASpectra_Base_ActiveSkill_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spectra_Base_ActiveSkill_BP.Spectra_Base_ActiveSkill_BP_C.UserConstructionScript");
		
		ASpectra_Base_ActiveSkill_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Spectra_Base_ActiveSkill_BP.Spectra_Base_ActiveSkill_BP_C.Event_OnVisionActiveChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bFullEffect                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpectra_Base_ActiveSkill_BP_C::Event_OnVisionActiveChanged(bool IsActive, bool bFullEffect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spectra_Base_ActiveSkill_BP.Spectra_Base_ActiveSkill_BP_C.Event_OnVisionActiveChanged");
		
		ASpectra_Base_ActiveSkill_BP_C_Event_OnVisionActiveChanged_Params params {};
		params.IsActive = IsActive;
		params.bFullEffect = bFullEffect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Spectra_Base_ActiveSkill_BP.Spectra_Base_ActiveSkill_BP_C.ExecuteUbergraph_Spectra_Base_ActiveSkill_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASpectra_Base_ActiveSkill_BP_C::ExecuteUbergraph_Spectra_Base_ActiveSkill_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spectra_Base_ActiveSkill_BP.Spectra_Base_ActiveSkill_BP_C.ExecuteUbergraph_Spectra_Base_ActiveSkill_BP");
		
		ASpectra_Base_ActiveSkill_BP_C_ExecuteUbergraph_Spectra_Base_ActiveSkill_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASpectra_Base_ActiveSkill_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASpectra_Base_ActiveSkill_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Spectra_Base_ActiveSkill_BP.Spectra_Base_ActiveSkill_BP_C");
		return ptr;
	}

}


