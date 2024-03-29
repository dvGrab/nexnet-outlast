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
	 * BlueprintGeneratedClass ScriptedMannequin_Base_BP.ScriptedMannequin_Base_BP_C
	 * Size -> 0x0029 (FullSize[0x0451] - InheritedSize[0x0428])
	 */
	class AScriptedMannequin_Base_BP_C : public ARBTriggerable
	{
	public:
		unsigned char                                              UnknownData_O3TZ[0x8];                                   // 0x0428(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0430(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class URBPropOptimizerComponent*                           RBPropOptimizer;                                         // 0x0438(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0440(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UScriptedMannequin_Base_AnimBP_C*                    LinkedAnimBP;                                            // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsFinished;                                              // 0x0450(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor

	public:
		void OnExitSequenceDone();
		void OnRep_IsFinished();
		void Event_OnTriggered();
		void StartExitAnim_Server();
		void Event_OnResetStage();
		void Event_SnapToState();
		void ReceiveBeginPlay();
		void UpdateExitAnim();
		void ExecuteUbergraph_ScriptedMannequin_Base_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
