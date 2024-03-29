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
	 * BlueprintGeneratedClass BaseRenderText_BP.BaseRenderText_BP_C
	 * Size -> 0x0010 (FullSize[0x0268] - InheritedSize[0x0258])
	 */
	class ABaseRenderText_BP_C : public ATextRenderActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0258(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class URBRandomizableHelperComponent*                      RBRandomizableHelper;                                    // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		bool GetStateName(class FString* stateA, class FString* stateB);
		bool IsStateA();
		bool ShouldBeIgnoredForLots();
		void PrepareState(bool bStateA, class AActor* randomOwner);
		void SetState(bool bStateA);
		void SetShouldBeIgnoredForLots(bool bValue);
		void ExecuteUbergraph_BaseRenderText_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
