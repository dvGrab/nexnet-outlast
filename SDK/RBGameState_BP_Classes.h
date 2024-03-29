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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass RBGameState_BP.RBGameState_BP_C
	 * Size -> 0x0082 (FullSize[0x07C2] - InheritedSize[0x0740])
	 */
	class ARBGameState_BP_C : public ARBGameState
	{
	public:
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0740(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnGameVarActivated_Client;                               // 0x0748(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnGameVarActivated_Server;                               // 0x0758(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnGameVarDeactivated_Client;                             // 0x0768(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnGameVarDeactivated_Server;                             // 0x0778(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             LevelVisibleForAllClients;                               // 0x0788(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             AllClientsLoadedAndVisible;                              // 0x0798(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             LevelListUpdated;                                        // 0x07A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    NumObjectives;                                           // 0x07B8(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentLevelIndex;                                       // 0x07BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       FastTravelMode;                                          // 0x07C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ReadyForNextLevel;                                       // 0x07C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnRep_LevelList();
		void CreateLevelList();
		void LevelListUpdated__DelegateSignature();
		void AllClientsLoadedAndVisible__DelegateSignature();
		void LevelVisibleForAllClients__DelegateSignature();
		void OnGameVarDeactivated_Server___DelegateSignature(EGameVar GameVar);
		void OnGameVarDeactivated_Client___DelegateSignature(EGameVar GameVar);
		void OnGameVarActivated_Server___DelegateSignature(EGameVar GameVar);
		void OnGameVarActivated_Client___DelegateSignature(EGameVar GameVar);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
