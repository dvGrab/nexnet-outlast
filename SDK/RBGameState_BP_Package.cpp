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
	 * 		Name   -> Function RBGameState_BP.RBGameState_BP_C.OnRep_LevelList
	 * 		Flags  -> ()
	 */
	void ARBGameState_BP_C::OnRep_LevelList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBGameState_BP.RBGameState_BP_C.OnRep_LevelList");
		
		ARBGameState_BP_C_OnRep_LevelList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBGameState_BP.RBGameState_BP_C.CreateLevelList
	 * 		Flags  -> ()
	 */
	void ARBGameState_BP_C::CreateLevelList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBGameState_BP.RBGameState_BP_C.CreateLevelList");
		
		ARBGameState_BP_C_CreateLevelList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBGameState_BP.RBGameState_BP_C.LevelListUpdated__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ARBGameState_BP_C::LevelListUpdated__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBGameState_BP.RBGameState_BP_C.LevelListUpdated__DelegateSignature");
		
		ARBGameState_BP_C_LevelListUpdated__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBGameState_BP.RBGameState_BP_C.AllClientsLoadedAndVisible__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ARBGameState_BP_C::AllClientsLoadedAndVisible__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBGameState_BP.RBGameState_BP_C.AllClientsLoadedAndVisible__DelegateSignature");
		
		ARBGameState_BP_C_AllClientsLoadedAndVisible__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBGameState_BP.RBGameState_BP_C.LevelVisibleForAllClients__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ARBGameState_BP_C::LevelVisibleForAllClients__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBGameState_BP.RBGameState_BP_C.LevelVisibleForAllClients__DelegateSignature");
		
		ARBGameState_BP_C_LevelVisibleForAllClients__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBGameState_BP.RBGameState_BP_C.OnGameVarDeactivated (Server)__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGameVar                                           GameVar                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBGameState_BP_C::OnGameVarDeactivated_Server___DelegateSignature(EGameVar GameVar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBGameState_BP.RBGameState_BP_C.OnGameVarDeactivated (Server)__DelegateSignature");
		
		ARBGameState_BP_C_OnGameVarDeactivated_Server___DelegateSignature_Params params {};
		params.GameVar = GameVar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBGameState_BP.RBGameState_BP_C.OnGameVarDeactivated (Client)__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGameVar                                           GameVar                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBGameState_BP_C::OnGameVarDeactivated_Client___DelegateSignature(EGameVar GameVar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBGameState_BP.RBGameState_BP_C.OnGameVarDeactivated (Client)__DelegateSignature");
		
		ARBGameState_BP_C_OnGameVarDeactivated_Client___DelegateSignature_Params params {};
		params.GameVar = GameVar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBGameState_BP.RBGameState_BP_C.OnGameVarActivated (Server)__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGameVar                                           GameVar                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBGameState_BP_C::OnGameVarActivated_Server___DelegateSignature(EGameVar GameVar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBGameState_BP.RBGameState_BP_C.OnGameVarActivated (Server)__DelegateSignature");
		
		ARBGameState_BP_C_OnGameVarActivated_Server___DelegateSignature_Params params {};
		params.GameVar = GameVar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBGameState_BP.RBGameState_BP_C.OnGameVarActivated (Client)__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGameVar                                           GameVar                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBGameState_BP_C::OnGameVarActivated_Client___DelegateSignature(EGameVar GameVar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBGameState_BP.RBGameState_BP_C.OnGameVarActivated (Client)__DelegateSignature");
		
		ARBGameState_BP_C_OnGameVarActivated_Client___DelegateSignature_Params params {};
		params.GameVar = GameVar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARBGameState_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARBGameState_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RBGameState_BP.RBGameState_BP_C");
		return ptr;
	}

}


