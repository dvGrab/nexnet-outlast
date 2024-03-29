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
	 * BlueprintGeneratedClass Base_SinglePressButton_BP.Base_SinglePressButton_BP_C
	 * Size -> 0x0019 (FullSize[0x02AA] - InheritedSize[0x0291])
	 */
	class ABase_SinglePressButton_BP_C : public ABase_Button_BP_C
	{
	public:
		unsigned char                                              UnknownData_NE3A[0x7];                                   // 0x0291(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0298(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBase_ButtonPress_InteractionComponent_BP_C*         ButtonPressComponent;                                    // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       IsPressed;                                               // 0x02A8(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       DoButtonPressActionsOnDoAction;                          // 0x02A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetPressed(bool Pressed);
		void OnRep_IsPressed();
		void BndEvt__Base_SinglePressButton_BP_ButtonPressComponent_K2Node_ComponentBoundEvent_1_OnInteractionEvent__DelegateSignature(class ARBPawn* interactor, class URBInteractibleComponent* Component);
		void BndEvt__Base_SinglePressButton_BP_ButtonPressComponent_K2Node_ComponentBoundEvent_2_OnInteractionEvent__DelegateSignature(class ARBPawn* interactor, class URBInteractibleComponent* Component);
		void Event_OnResetStage();
		void ApplyColorDelayed();
		void DoButtonPressActions();
		void ExecuteUbergraph_Base_SinglePressButton_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
