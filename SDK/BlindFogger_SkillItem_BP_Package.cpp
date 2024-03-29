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
	 * 		Name   -> Function BlindFogger_SkillItem_BP.BlindFogger_SkillItem_BP_C.SpawnAndExplodeBomb_Server
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      BombActor                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABlindFogger_SkillItem_BP_C::SpawnAndExplodeBomb_Server(class AActor** BombActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlindFogger_SkillItem_BP.BlindFogger_SkillItem_BP_C.SpawnAndExplodeBomb_Server");
		
		ABlindFogger_SkillItem_BP_C_SpawnAndExplodeBomb_Server_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BombActor != nullptr)
			*BombActor = params.BombActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BlindFogger_SkillItem_BP.BlindFogger_SkillItem_BP_C.SpawnAndExplodeBomb_Client
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      BombActor                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABlindFogger_SkillItem_BP_C::SpawnAndExplodeBomb_Client(class AActor** BombActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlindFogger_SkillItem_BP.BlindFogger_SkillItem_BP_C.SpawnAndExplodeBomb_Client");
		
		ABlindFogger_SkillItem_BP_C_SpawnAndExplodeBomb_Client_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BombActor != nullptr)
			*BombActor = params.BombActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BlindFogger_SkillItem_BP.BlindFogger_SkillItem_BP_C.Event_OnDeployed
	 * 		Flags  -> ()
	 */
	void ABlindFogger_SkillItem_BP_C::Event_OnDeployed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlindFogger_SkillItem_BP.BlindFogger_SkillItem_BP_C.Event_OnDeployed");
		
		ABlindFogger_SkillItem_BP_C_Event_OnDeployed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BlindFogger_SkillItem_BP.BlindFogger_SkillItem_BP_C.Event_OnActivate
	 * 		Flags  -> ()
	 */
	void ABlindFogger_SkillItem_BP_C::Event_OnActivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlindFogger_SkillItem_BP.BlindFogger_SkillItem_BP_C.Event_OnActivate");
		
		ABlindFogger_SkillItem_BP_C_Event_OnActivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BlindFogger_SkillItem_BP.BlindFogger_SkillItem_BP_C.Event_AudioDistractionTriggered
	 * 		Flags  -> ()
	 */
	void ABlindFogger_SkillItem_BP_C::Event_AudioDistractionTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlindFogger_SkillItem_BP.BlindFogger_SkillItem_BP_C.Event_AudioDistractionTriggered");
		
		ABlindFogger_SkillItem_BP_C_Event_AudioDistractionTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BlindFogger_SkillItem_BP.BlindFogger_SkillItem_BP_C.On Skill Deactivate FX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsInZone                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABlindFogger_SkillItem_BP_C::On_Skill_Deactivate_FX(bool IsInZone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlindFogger_SkillItem_BP.BlindFogger_SkillItem_BP_C.On Skill Deactivate FX");
		
		ABlindFogger_SkillItem_BP_C_On_Skill_Deactivate_FX_Params params {};
		params.IsInZone = IsInZone;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BlindFogger_SkillItem_BP.BlindFogger_SkillItem_BP_C.ExecuteUbergraph_BlindFogger_SkillItem_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABlindFogger_SkillItem_BP_C::ExecuteUbergraph_BlindFogger_SkillItem_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlindFogger_SkillItem_BP.BlindFogger_SkillItem_BP_C.ExecuteUbergraph_BlindFogger_SkillItem_BP");
		
		ABlindFogger_SkillItem_BP_C_ExecuteUbergraph_BlindFogger_SkillItem_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABlindFogger_SkillItem_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABlindFogger_SkillItem_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BlindFogger_SkillItem_BP.BlindFogger_SkillItem_BP_C");
		return ptr;
	}

}


