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
	 * 		Name   -> Function MedPharma_SkillController_BP.MedPharma_SkillController_BP_C.UpdateParticleEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMedPharma_SkillController_BP_C::UpdateParticleEmitter(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MedPharma_SkillController_BP.MedPharma_SkillController_BP_C.UpdateParticleEmitter");
		
		AMedPharma_SkillController_BP_C_UpdateParticleEmitter_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MedPharma_SkillController_BP.MedPharma_SkillController_BP_C.Event_OnItemHeldInHandChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bHeldInHand                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMedPharma_SkillController_BP_C::Event_OnItemHeldInHandChanged(bool bHeldInHand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MedPharma_SkillController_BP.MedPharma_SkillController_BP_C.Event_OnItemHeldInHandChanged");
		
		AMedPharma_SkillController_BP_C_Event_OnItemHeldInHandChanged_Params params {};
		params.bHeldInHand = bHeldInHand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MedPharma_SkillController_BP.MedPharma_SkillController_BP_C.On Skill Deactivate FX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsInZone                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMedPharma_SkillController_BP_C::On_Skill_Deactivate_FX(bool IsInZone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MedPharma_SkillController_BP.MedPharma_SkillController_BP_C.On Skill Deactivate FX");
		
		AMedPharma_SkillController_BP_C_On_Skill_Deactivate_FX_Params params {};
		params.IsInZone = IsInZone;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MedPharma_SkillController_BP.MedPharma_SkillController_BP_C.ExecuteUbergraph_MedPharma_SkillController_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMedPharma_SkillController_BP_C::ExecuteUbergraph_MedPharma_SkillController_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MedPharma_SkillController_BP.MedPharma_SkillController_BP_C.ExecuteUbergraph_MedPharma_SkillController_BP");
		
		AMedPharma_SkillController_BP_C_ExecuteUbergraph_MedPharma_SkillController_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMedPharma_SkillController_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMedPharma_SkillController_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MedPharma_SkillController_BP.MedPharma_SkillController_BP_C");
		return ptr;
	}

}


