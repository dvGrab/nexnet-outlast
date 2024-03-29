#pragma once

/**
 * Name: TRIALS
 * Version: FINAL
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function RBGameState_BP.RBGameState_BP_C.OnRep_LevelList
	 */
	struct ARBGameState_BP_C_OnRep_LevelList_Params
	{	};

	/**
	 * Function RBGameState_BP.RBGameState_BP_C.CreateLevelList
	 */
	struct ARBGameState_BP_C_CreateLevelList_Params
	{	};

	/**
	 * Function RBGameState_BP.RBGameState_BP_C.LevelListUpdated__DelegateSignature
	 */
	struct ARBGameState_BP_C_LevelListUpdated__DelegateSignature_Params
	{	};

	/**
	 * Function RBGameState_BP.RBGameState_BP_C.AllClientsLoadedAndVisible__DelegateSignature
	 */
	struct ARBGameState_BP_C_AllClientsLoadedAndVisible__DelegateSignature_Params
	{	};

	/**
	 * Function RBGameState_BP.RBGameState_BP_C.LevelVisibleForAllClients__DelegateSignature
	 */
	struct ARBGameState_BP_C_LevelVisibleForAllClients__DelegateSignature_Params
	{	};

	/**
	 * Function RBGameState_BP.RBGameState_BP_C.OnGameVarDeactivated (Server)__DelegateSignature
	 */
	struct ARBGameState_BP_C_OnGameVarDeactivated_Server___DelegateSignature_Params
	{
	public:
		EGameVar                                                   GameVar;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBGameState_BP.RBGameState_BP_C.OnGameVarDeactivated (Client)__DelegateSignature
	 */
	struct ARBGameState_BP_C_OnGameVarDeactivated_Client___DelegateSignature_Params
	{
	public:
		EGameVar                                                   GameVar;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBGameState_BP.RBGameState_BP_C.OnGameVarActivated (Server)__DelegateSignature
	 */
	struct ARBGameState_BP_C_OnGameVarActivated_Server___DelegateSignature_Params
	{
	public:
		EGameVar                                                   GameVar;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBGameState_BP.RBGameState_BP_C.OnGameVarActivated (Client)__DelegateSignature
	 */
	struct ARBGameState_BP_C_OnGameVarActivated_Client___DelegateSignature_Params
	{
	public:
		EGameVar                                                   GameVar;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
