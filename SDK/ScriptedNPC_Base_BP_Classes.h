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
	 * BlueprintGeneratedClass ScriptedNPC_Base_BP.ScriptedNPC_Base_BP_C
	 * Size -> 0x0059 (FullSize[0x0319] - InheritedSize[0x02C0])
	 */
	class AScriptedNPC_Base_BP_C : public ARBScriptedAnimStation
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       IsInLoopB;                                               // 0x02C8(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       Exiting;                                                 // 0x02C9(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_X3ZV[0x6];                                   // 0x02CA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ARBBot*                                              bot;                                                     // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnFinished;                                              // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       hasSentFinished;                                         // 0x02E8(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_O7EV[0x7];                                   // 0x02E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USkeletalMeshComponent*>                      ComponentExiting;                                        // 0x02F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       CanOnlyExitAtLoopEnd;                                    // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OL8U[0x7];                                   // 0x0301(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UScriptedNPC_Base_AnimBP_C*>                  ScriptedNPCAnimBps;                                      // 0x0308(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       HasEverStarted;                                          // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void PlayAnimOnSpecificMesh(class UAnimSequenceBase* Anim, const class FName& Tag);
		void OnExitingChanged();
		void DisableDecalsOnSkelmeshes();
		void OnRep_Exiting();
		void OnRep_IsInLoopB();
		void OnRep_hasSentFinished();
		void NotifyExitFinished(class USkeletalMeshComponent* Component);
		void UserConstructionScript();
		void EnterLoopB();
		void StartExiting();
		void Event_StartedScriptedAnim();
		void Event_OnResetStage();
		void DetachBot();
		void DelayedCheckVariables();
		void ReceiveBeginPlay();
		void DelayedStop();
		void ExecuteUbergraph_ScriptedNPC_Base_BP(int32_t EntryPoint);
		void OnFinished__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
