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
	 * 		Name   -> Function BaseAmp_SkillItem_BP.BaseAmp_SkillItem_BP_C.RefreshCooldown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBActiveSkill*                              ActiveSkill                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseAmp_SkillItem_BP_C::RefreshCooldown(class ARBActiveSkill* ActiveSkill)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseAmp_SkillItem_BP.BaseAmp_SkillItem_BP_C.RefreshCooldown");
		
		ABaseAmp_SkillItem_BP_C_RefreshCooldown_Params params {};
		params.ActiveSkill = ActiveSkill;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseAmp_SkillItem_BP.BaseAmp_SkillItem_BP_C.Event_OnActivate
	 * 		Flags  -> ()
	 */
	void ABaseAmp_SkillItem_BP_C::Event_OnActivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseAmp_SkillItem_BP.BaseAmp_SkillItem_BP_C.Event_OnActivate");
		
		ABaseAmp_SkillItem_BP_C_Event_OnActivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseAmp_SkillItem_BP.BaseAmp_SkillItem_BP_C.Event_OnDeployed
	 * 		Flags  -> ()
	 */
	void ABaseAmp_SkillItem_BP_C::Event_OnDeployed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseAmp_SkillItem_BP.BaseAmp_SkillItem_BP_C.Event_OnDeployed");
		
		ABaseAmp_SkillItem_BP_C_Event_OnDeployed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseAmp_SkillItem_BP.BaseAmp_SkillItem_BP_C.PlayerAssigned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARBPickup*                                   Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseAmp_SkillItem_BP_C::PlayerAssigned(class ARBPawn* Pawn, class ARBPickup* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseAmp_SkillItem_BP.BaseAmp_SkillItem_BP_C.PlayerAssigned");
		
		ABaseAmp_SkillItem_BP_C_PlayerAssigned_Params params {};
		params.Pawn = Pawn;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseAmp_SkillItem_BP.BaseAmp_SkillItem_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABaseAmp_SkillItem_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseAmp_SkillItem_BP.BaseAmp_SkillItem_BP_C.ReceiveBeginPlay");
		
		ABaseAmp_SkillItem_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseAmp_SkillItem_BP.BaseAmp_SkillItem_BP_C.CooldownChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBActiveSkill*                              ActiveSkill                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsInCooldown                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseAmp_SkillItem_BP_C::CooldownChanged(class ARBActiveSkill* ActiveSkill, bool bIsInCooldown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseAmp_SkillItem_BP.BaseAmp_SkillItem_BP_C.CooldownChanged");
		
		ABaseAmp_SkillItem_BP_C_CooldownChanged_Params params {};
		params.ActiveSkill = ActiveSkill;
		params.bIsInCooldown = bIsInCooldown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseAmp_SkillItem_BP.BaseAmp_SkillItem_BP_C.On Skill Deactivate FX
	 * 		Flags  -> ()
	 */
	void ABaseAmp_SkillItem_BP_C::On_Skill_Deactivate_FX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseAmp_SkillItem_BP.BaseAmp_SkillItem_BP_C.On Skill Deactivate FX");
		
		ABaseAmp_SkillItem_BP_C_On_Skill_Deactivate_FX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseAmp_SkillItem_BP.BaseAmp_SkillItem_BP_C.ExecuteUbergraph_BaseAmp_SkillItem_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseAmp_SkillItem_BP_C::ExecuteUbergraph_BaseAmp_SkillItem_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseAmp_SkillItem_BP.BaseAmp_SkillItem_BP_C.ExecuteUbergraph_BaseAmp_SkillItem_BP");
		
		ABaseAmp_SkillItem_BP_C_ExecuteUbergraph_BaseAmp_SkillItem_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABaseAmp_SkillItem_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseAmp_SkillItem_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BaseAmp_SkillItem_BP.BaseAmp_SkillItem_BP_C");
		return ptr;
	}

}


