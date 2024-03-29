#pragma once

/**
 * Name: OUTLAST
 * Version: 0.0.2_fixed
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
	 * BlueprintGeneratedClass CoopButton_OperatableComponent_BP.CoopButton_OperatableComponent_BP_C
	 * Size -> 0x0030 (FullSize[0x0870] - InheritedSize[0x0840])
	 */
	class UCoopButton_OperatableComponent_BP_C : public URBCoopOperatableComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0840(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       bButtonPressed;                                          // 0x0848(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_W3KB[0x7];                                   // 0x0849(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       SoloPressStart;                                          // 0x0850(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       SoloPressStop;                                           // 0x0858(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              ValveUnlockingButtons[0x10];                             // 0x0860(0x0010) UNKNOWN PROPERTY: ArrayProperty

	public:
		float GetProgressionRatio();
		void OnRep_OperatedActive();
		class UAnimSequence* GetOperatorStopAnimation(class ARBPawn* Pawn, bool bFirstPerson);
		class UAnimSequence* GetOperatorLoopAnimation(class ARBPawn* Pawn, bool bFirstPerson);
		class UAnimSequence* GetOperatorStartAnimation(class ARBPawn* Pawn, bool bFirstPerson);
		void OnTriggerableActivated(class ARBTriggerable* triggerable);
		void OnPawnDoSpecialMoveAction(class ARBPawn* Pawn, ESpecialMove specialMove);
		void Event_OnEnabledChanged();
		void Event_DelayedReleaseButtonServerTimestampChanged();
		void ExecuteUbergraph_CoopButton_OperatableComponent_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
