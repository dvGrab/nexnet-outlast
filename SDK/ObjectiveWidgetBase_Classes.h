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
	 * WidgetBlueprintGeneratedClass ObjectiveWidgetBase.ObjectiveWidgetBase_C
	 * Size -> 0x0023 (FullSize[0x0323] - InheritedSize[0x0300])
	 */
	class UObjectiveWidgetBase_C : public URBObjectiveWidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0300(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       IsCompleted;                                             // 0x0308(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RNFV[0x7];                                   // 0x0309(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             VisibilityEventDispatcher;                               // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       hasContinuousProgress;                                   // 0x0320(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bPauseMenu;                                              // 0x0321(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bShouldShowContinuousProgress;                           // 0x0322(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool ShouldShow();
		bool IsInValidStateForExtraInfo();
		void ClearBindings();
		void GetFadeInAnimation(class UWidgetAnimation** FadeInAnimation);
		void UpdateProgress(float progress, bool isPositiveProgress, const class FText& objectiveText);
		void SetCompleted();
		void Initialize(class ARBBaseObjectiveCoordinator* coordinator);
		void Event_Show();
		void Event_Hide();
		void CustomEvent_1();
		void Event_Completed();
		void Remove();
		void ExecuteUbergraph_ObjectiveWidgetBase(int32_t EntryPoint);
		void VisibilityEventDispatcher__DelegateSignature(bool IsVisible);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
