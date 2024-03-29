#pragma once

/**
 * Name: OUTLAST
 * Version: 0.0.1
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
	 * WidgetBlueprintGeneratedClass MainMenu.MainMenu_C
	 * Size -> 0x0188 (FullSize[0x0490] - InheritedSize[0x0308])
	 */
	class UMainMenu_C : public URBMenuWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0308(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          BuildNumber;                                             // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMainMenuButton_C*                                   CreditsButton;                                           // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          crossplay;                                               // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMainMenuButton_C*                                   EnterButton;                                             // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              logo;                                                    // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        menucontainer;                                           // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNewsWidget_C*                                       NewsWidget1_2;                                           // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMainMenuButton_C*                                   OptionsButton;                                           // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMainMenuButton_C*                                   QuitButton;                                              // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMainMenuButton_C*                                   RejoinPartyButton;                                       // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMainMenuButton_C*                                   RejoinSoloGameSessionButton;                             // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMainMenuButton_C*                                   TutorialButton;                                          // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCircularThrobber*                                   Working_Throbber;                                        // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UAkAudioEvent*                                       MenuMusicPlay;                                           // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       MenuMusicStop;                                           // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBPlayerState*                                      RBPlayerState;                                           // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AMenuCharacter_C*                                    MenuCharacter;                                           // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSlateColor                                         SuccessColor;                                            // 0x0398(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         InvisibleColor;                                          // 0x03C0(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         FailureColor;                                            // 0x03E8(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsLoading;                                               // 0x0410(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QGV6[0x7];                                   // 0x0411(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         SuccessMessageColor;                                     // 0x0418(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              FindMatchSuccessMessage;                                 // 0x0440(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              JoinGameSessionSucceededMessage;                         // 0x0450(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              CreateGameSessionSucceededMessage;                       // 0x0460(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              FindHubSuccessMessage;                                   // 0x0470(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       bIsConnecting;                                           // 0x0480(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bConnected;                                              // 0x0481(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6LQE[0x6];                                   // 0x0482(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWidget*                                             LastFocusedButton;                                       // 0x0488(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetFirstDisplayedEntry(class UMainMenuButton_C** NewParam);
		class UWidget* GamepadNav_NewsToButtons(EUINavigation Navigation);
		class UWidget* GamepadNav_ButtonsToNews(EUINavigation Navigation);
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		ESlateVisibility Get_TutorialButton_Visibility_1();
		ESlateVisibility Get_EnterButton_Visibility_1();
		ESlateVisibility GetRejoinSoloGameSessionButtonVisibility();
		ESlateVisibility GetRejoinPartyButtonVisibility();
		class FText Get_Crossplay_Text_1();
		void StartGame();
		class FString GetChangelist();
		ESlateVisibility Get_SpectateGridPanel_Visibility_1();
		void Construct();
		void BndEvt__EnterButton_K2Node_ComponentBoundEvent_4_Event_Clicked__DelegateSignature();
		void BndEvt__OptionsButton_K2Node_ComponentBoundEvent_5_Event_Clicked__DelegateSignature();
		void BndEvt__CreditsButton_K2Node_ComponentBoundEvent_6_Event_Clicked__DelegateSignature();
		void BndEvt__QuitButton_K2Node_ComponentBoundEvent_7_Event_Clicked__DelegateSignature();
		void BndEvt__RejoinPartyButton_K2Node_ComponentBoundEvent_0_Event_Clicked__DelegateSignature();
		void BndEvt__RejoinSoloGameSessionButton_K2Node_ComponentBoundEvent_1_Event_Clicked__DelegateSignature();
		void BndEvt__MainMenu_TutorialButton_K2Node_ComponentBoundEvent_2_Event_Clicked__DelegateSignature();
		void OnMainMenuFocused();
		void ExecuteUbergraph_MainMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
