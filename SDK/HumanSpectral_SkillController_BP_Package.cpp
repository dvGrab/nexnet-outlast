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
	 * 		Name   -> Function HumanSpectral_SkillController_BP.HumanSpectral_SkillController_BP_C.On Skill Deactivate FX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsInZone                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHumanSpectral_SkillController_BP_C::On_Skill_Deactivate_FX(bool IsInZone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HumanSpectral_SkillController_BP.HumanSpectral_SkillController_BP_C.On Skill Deactivate FX");
		
		AHumanSpectral_SkillController_BP_C_On_Skill_Deactivate_FX_Params params {};
		params.IsInZone = IsInZone;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HumanSpectral_SkillController_BP.HumanSpectral_SkillController_BP_C.ExecuteUbergraph_HumanSpectral_SkillController_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHumanSpectral_SkillController_BP_C::ExecuteUbergraph_HumanSpectral_SkillController_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HumanSpectral_SkillController_BP.HumanSpectral_SkillController_BP_C.ExecuteUbergraph_HumanSpectral_SkillController_BP");
		
		AHumanSpectral_SkillController_BP_C_ExecuteUbergraph_HumanSpectral_SkillController_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHumanSpectral_SkillController_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHumanSpectral_SkillController_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HumanSpectral_SkillController_BP.HumanSpectral_SkillController_BP_C");
		return ptr;
	}

}


