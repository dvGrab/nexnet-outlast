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
	 * BlueprintGeneratedClass Regroup_Button_BP.Regroup_Button_BP_C
	 * Size -> 0x007B (FullSize[0x0398] - InheritedSize[0x031D])
	 */
	class ARegroup_Button_BP_C : public ABase_Movable_Button_BP_C
	{
	public:
		unsigned char                                              UnknownData_62E4[0x3];                                   // 0x031D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0320(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                PlayerSign04;                                            // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                PlayerSign03;                                            // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                PlayerSign02;                                            // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                PlayerSign01;                                            // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                playerSign_1;                                            // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UStaticMeshComponent*>                        Player_Sign;                                             // 0x0350(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class ARBRegroupObjectiveCoordinator*                      RegroupCoordinator;                                      // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<float>                                              PlayerSignCurrentStatut;                                 // 0x0368(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<float>                                              PlayerSignTargetStatus;                                  // 0x0378(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<bool>                                               AnimDone;                                                // 0x0388(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void GetTotalOfPlayers(int32_t* Value);
		void GetNumberOfPlayersInZone(int32_t* Value);
		void SignAnim(bool Condition, float Current, class UStaticMeshComponent* playerSign);
		void UserConstructionScript();
		void UpdatePlayerSign(int32_t NumberOfPlayer, int32_t NumberOfPlayerInTheZone);
		void ReceiveTick(float DeltaSeconds);
		void OnObjectiveStarted(class ARBRegroupObjectiveCoordinator* coordinator);
		void OnObjectiveEnded();
		void Event_OnResetStage();
		void OnNumberOfPlayerInZoneChanged(int32_t numberOfPlayers);
		void OnRegroupObjectiveStateChanged(ERegroupObjectiveState newState);
		void OnTotalNumberOfPlayersChanged(int32_t numberOfPlayers);
		void OnRegroupActionFailed();
		void ExecuteUbergraph_Regroup_Button_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
