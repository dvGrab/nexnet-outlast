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
	 * BlueprintGeneratedClass ViolentKids_Button_BP.ViolentKids_Button_BP_C
	 * Size -> 0x0047 (FullSize[0x0364] - InheritedSize[0x031D])
	 */
	class AViolentKids_Button_BP_C : public ABase_Movable_Button_BP_C
	{
	public:
		unsigned char                                              UnknownData_IRVQ[0x3];                                   // 0x031D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0320(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class URBPingComponent*                                    RBPing;                                                  // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBRandomizableHelperComponent*                      RBRandomizableHelper;                                    // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              LinkedChild[0x28];                                       // 0x0338(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		int32_t                                                    SectionIndex;                                            // 0x0360(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool GetStateName(class FString* stateA, class FString* stateB);
		bool IsStateA();
		bool ShouldBeIgnoredForLots();
		void UserConstructionScript();
		void OnWorldPopulateFinished();
		void PrepareState(bool bStateA, class AActor* randomOwner);
		void ReceiveBeginPlay();
		void SetState(bool bStateA);
		void SetShouldBeIgnoredForLots(bool bValue);
		void BndEvt__ChildMannequin_Button_BP_ButtonPressComponent_K2Node_ComponentBoundEvent_1_OnEnabledChanged__DelegateSignature(class URBInteractionZoneComponent* Component);
		void OnWorldFullyLoaded();
		void ExecuteUbergraph_ViolentKids_Button_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
