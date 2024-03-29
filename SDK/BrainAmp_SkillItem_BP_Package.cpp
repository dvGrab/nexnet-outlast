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
	 * 		Name   -> Function BrainAmp_SkillItem_BP.BrainAmp_SkillItem_BP_C.Event_OnActivate
	 * 		Flags  -> ()
	 */
	void ABrainAmp_SkillItem_BP_C::Event_OnActivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainAmp_SkillItem_BP.BrainAmp_SkillItem_BP_C.Event_OnActivate");
		
		ABrainAmp_SkillItem_BP_C_Event_OnActivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BrainAmp_SkillItem_BP.BrainAmp_SkillItem_BP_C.Event_OnDeployed
	 * 		Flags  -> ()
	 */
	void ABrainAmp_SkillItem_BP_C::Event_OnDeployed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainAmp_SkillItem_BP.BrainAmp_SkillItem_BP_C.Event_OnDeployed");
		
		ABrainAmp_SkillItem_BP_C_Event_OnDeployed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BrainAmp_SkillItem_BP.BrainAmp_SkillItem_BP_C.ExecuteUbergraph_BrainAmp_SkillItem_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABrainAmp_SkillItem_BP_C::ExecuteUbergraph_BrainAmp_SkillItem_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainAmp_SkillItem_BP.BrainAmp_SkillItem_BP_C.ExecuteUbergraph_BrainAmp_SkillItem_BP");
		
		ABrainAmp_SkillItem_BP_C_ExecuteUbergraph_BrainAmp_SkillItem_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABrainAmp_SkillItem_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABrainAmp_SkillItem_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BrainAmp_SkillItem_BP.BrainAmp_SkillItem_BP_C");
		return ptr;
	}

}


