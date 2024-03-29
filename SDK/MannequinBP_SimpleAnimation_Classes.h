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
	 * BlueprintGeneratedClass MannequinBP_SimpleAnimation.MannequinBP_SimpleAnimation_C
	 * Size -> 0x0011 (FullSize[0x0369] - InheritedSize[0x0358])
	 */
	class AMannequinBP_SimpleAnimation_C : public AMannequinBP_SinglePose_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0358(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class URBPropOptimizerComponent*                           RBPropOptimizer;                                         // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       bAnimActive;                                             // 0x0368(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor

	public:
		void UpdateAnimActive();
		void OnRep_bAnimActive();
		void GameStartInit();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void OnEditorPostLoad();
		void PostEditMove(bool bFinished);
		void Event_OnResetStage();
		void StopAnimation();
		void StartAnimation();
		void ExecuteUbergraph_MannequinBP_SimpleAnimation(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
