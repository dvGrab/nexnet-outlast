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
	 * 		Name   -> Function BaseFogger_SkillItem_BP.BaseFogger_SkillItem_BP_C.SpawnAndExplodeBomb_Server
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      BombActor                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseFogger_SkillItem_BP_C::SpawnAndExplodeBomb_Server(class AActor** BombActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseFogger_SkillItem_BP.BaseFogger_SkillItem_BP_C.SpawnAndExplodeBomb_Server");
		
		ABaseFogger_SkillItem_BP_C_SpawnAndExplodeBomb_Server_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BombActor != nullptr)
			*BombActor = params.BombActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseFogger_SkillItem_BP.BaseFogger_SkillItem_BP_C.Activate Light
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseFogger_SkillItem_BP_C::Activate_Light(const struct FLinearColor& Color, bool On)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseFogger_SkillItem_BP.BaseFogger_SkillItem_BP_C.Activate Light");
		
		ABaseFogger_SkillItem_BP_C_Activate_Light_Params params {};
		params.Color = Color;
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseFogger_SkillItem_BP.BaseFogger_SkillItem_BP_C.SpawnAndExplodeBomb_Client
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      BombActor                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseFogger_SkillItem_BP_C::SpawnAndExplodeBomb_Client(class AActor** BombActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseFogger_SkillItem_BP.BaseFogger_SkillItem_BP_C.SpawnAndExplodeBomb_Client");
		
		ABaseFogger_SkillItem_BP_C_SpawnAndExplodeBomb_Client_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BombActor != nullptr)
			*BombActor = params.BombActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseFogger_SkillItem_BP.BaseFogger_SkillItem_BP_C.Event_OnActivate
	 * 		Flags  -> ()
	 */
	void ABaseFogger_SkillItem_BP_C::Event_OnActivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseFogger_SkillItem_BP.BaseFogger_SkillItem_BP_C.Event_OnActivate");
		
		ABaseFogger_SkillItem_BP_C_Event_OnActivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseFogger_SkillItem_BP.BaseFogger_SkillItem_BP_C.Event_OnExpiredUnactivated
	 * 		Flags  -> ()
	 */
	void ABaseFogger_SkillItem_BP_C::Event_OnExpiredUnactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseFogger_SkillItem_BP.BaseFogger_SkillItem_BP_C.Event_OnExpiredUnactivated");
		
		ABaseFogger_SkillItem_BP_C_Event_OnExpiredUnactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseFogger_SkillItem_BP.BaseFogger_SkillItem_BP_C.Event_OnDeployed
	 * 		Flags  -> ()
	 */
	void ABaseFogger_SkillItem_BP_C::Event_OnDeployed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseFogger_SkillItem_BP.BaseFogger_SkillItem_BP_C.Event_OnDeployed");
		
		ABaseFogger_SkillItem_BP_C_Event_OnDeployed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseFogger_SkillItem_BP.BaseFogger_SkillItem_BP_C.Event_OnPlaced
	 * 		Flags  -> ()
	 */
	void ABaseFogger_SkillItem_BP_C::Event_OnPlaced()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseFogger_SkillItem_BP.BaseFogger_SkillItem_BP_C.Event_OnPlaced");
		
		ABaseFogger_SkillItem_BP_C_Event_OnPlaced_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseFogger_SkillItem_BP.BaseFogger_SkillItem_BP_C.Event_EffectFinished
	 * 		Flags  -> ()
	 */
	void ABaseFogger_SkillItem_BP_C::Event_EffectFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseFogger_SkillItem_BP.BaseFogger_SkillItem_BP_C.Event_EffectFinished");
		
		ABaseFogger_SkillItem_BP_C_Event_EffectFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseFogger_SkillItem_BP.BaseFogger_SkillItem_BP_C.DestroySpawnedActors
	 * 		Flags  -> ()
	 */
	void ABaseFogger_SkillItem_BP_C::DestroySpawnedActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseFogger_SkillItem_BP.BaseFogger_SkillItem_BP_C.DestroySpawnedActors");
		
		ABaseFogger_SkillItem_BP_C_DestroySpawnedActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseFogger_SkillItem_BP.BaseFogger_SkillItem_BP_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseFogger_SkillItem_BP_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseFogger_SkillItem_BP.BaseFogger_SkillItem_BP_C.ReceiveEndPlay");
		
		ABaseFogger_SkillItem_BP_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseFogger_SkillItem_BP.BaseFogger_SkillItem_BP_C.ExecuteUbergraph_BaseFogger_SkillItem_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseFogger_SkillItem_BP_C::ExecuteUbergraph_BaseFogger_SkillItem_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseFogger_SkillItem_BP.BaseFogger_SkillItem_BP_C.ExecuteUbergraph_BaseFogger_SkillItem_BP");
		
		ABaseFogger_SkillItem_BP_C_ExecuteUbergraph_BaseFogger_SkillItem_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABaseFogger_SkillItem_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseFogger_SkillItem_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BaseFogger_SkillItem_BP.BaseFogger_SkillItem_BP_C");
		return ptr;
	}

}


