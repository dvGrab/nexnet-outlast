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
	 * WidgetBlueprintGeneratedClass HUDObjectives.HUDObjectives_C
	 * Size -> 0x0039 (FullSize[0x0321] - InheritedSize[0x02E8])
	 */
	class UHUDObjectives_C : public URBHUDElementWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    HudWidgetFadeIn;                                         // 0x02F0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UInvalidationBox*                                    InvalidationBox_HUDObjectives;                           // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMainObjectivesContainer_C*                          MainObjectivesContainer;                                 // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USecondaryObjectiveWidget_C*                         SecondaryObjectiveWidget;                                // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USecondaryObjectiveWidget_C*                         SecondaryObjectiveWidget_336;                            // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        SubobjectivesBox;                                        // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bPauseMenu;                                              // 0x0320(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void RefreshObjectivesTexts();
		void OnObjectiveEnded();
		bool ShouldShow();
		void CanDisplayObjective(class ARBBaseObjectiveCoordinator* coordinator, bool* canDisplay);
		void OnObjectiveStarted(class ARBBaseObjectiveCoordinator* coordinator);
		void Construct();
		void StateChanged(class ARBBaseObjectiveCoordinator* coordinator, EObjectiveCoordinatorState State);
		void PreConstruct(bool IsDesignTime);
		void OnRequestDisplayObjectiveHUD();
		void OnCompletionInProgressChanged(bool isProgressionInProgress, bool isCompletedByLocalPlayer);
		void OnProgressChanged(float progressRatio, bool isPositiveProgress, const class FText& objectiveText);
		void OnSingleObjectiveCompleted(class ARBBaseObjectiveCoordinator* coordinator, class AActor* Player, class AActor* objective);
		void OnSingleCompletedObjectiveReverted(class ARBBaseObjectiveCoordinator* coordinator, class AActor* objective);
		void Event_Show();
		void Event_Hide();
		void ExecuteUbergraph_HUDObjectives(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
