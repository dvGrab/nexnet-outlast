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
	 * BlueprintGeneratedClass MannequinBP_SinglePose.MannequinBP_SinglePose_C
	 * Size -> 0x0016 (FullSize[0x0358] - InheritedSize[0x0342])
	 */
	class AMannequinBP_SinglePose_C : public AMannequinBP_Base_C
	{
	public:
		unsigned char                                              UnknownData_GSUI[0x6];                                   // 0x0342(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0348(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAnimSequence*                                       Sequence;                                                // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool FixUp();
		void DisableTick();
		void SetForceBakeShadows();
		void UserConstructionScript();
		void OnPostActorsPasted(TArray<class AActor*> pastedActors);
		void PostAddedToLevel();
		void PostDuplicated(class AActor* duplicationParent);
		void PostEditChange(const class FName& PropertyName);
		void TickSelected();
		void ReceiveBeginPlay();
		void OnEditorPostLoad();
		void PostEditMove(bool bFinished);
		void ExecuteUbergraph_MannequinBP_SinglePose(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
