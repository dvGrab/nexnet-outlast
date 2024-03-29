#pragma once

/**
 * Name: READYORNOT
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
	 * WidgetBlueprintGeneratedClass W_Loadout.W_Loadout_C
	 * Size -> 0x0570 (FullSize[0x0DE8] - InheritedSize[0x0878])
	 */
	class UW_Loadout_C : public UPreMissionPlanning
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0878(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    animExtendListSlide;                                     // 0x0880(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    animFadeQuartermaster;                                   // 0x0888(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    animFadeOverview;                                        // 0x0890(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UW_Button_C*                                         btn_SidebarBack;                                         // 0x0898(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel_Main;                                        // 0x08A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_PageHeader_C*                                     Header;                                                  // 0x08A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              img_FadeFillLeft;                                        // 0x08B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              img_FadeLeft;                                            // 0x08B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              img_MimizeArrow_l;                                       // 0x08C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMenuAnchor*                                         InfoPanelAnchor;                                         // 0x08C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        RootCanvas;                                              // 0x08D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBackgroundBlur*                                     SidebarButton;                                           // 0x08D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        UI_Canvas;                                               // 0x08E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Loadout_ItemList_Vertical_C*                      VerticalItemList;                                        // 0x08E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_HotkeyBar_C*                                      W_HotkeyBar;                                             // 0x08F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Loadout_InformationTable_C*                       W_Loadout_InformationTable_C_2;                          // 0x08F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Loadout_ItemList_C*                               W_Loadout_ItemList_C_3;                                  // 0x0900(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Loadout_Overview_C*                               W_Loadout_Overview;                                      // 0x0908(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Loadout_UnitSelect_C*                             W_LoadoutCharacterSelect;                                // 0x0910(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             PanMap;                                                  // 0x0918(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             UpdateMapMaterial;                                       // 0x0928(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             NewEventDispatcher_1;                                    // 0x0938(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class AReadyOrNotPlayerController*                         PlayerController;                                        // 0x0948(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AReadyOrNotCharacter*                                Character;                                               // 0x0950(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UInventoryComponent*                                 InventoryComp;                                           // 0x0958(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPreMissionPlanning*                                 PreMissionPlanning;                                      // 0x0960(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UW_LoadoutSlot_C*                                    CurrentActiveSlot;                                       // 0x0968(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UW_LoadoutSlot_Attachment_C*                         CurrentActiveAttachmentSlot;                             // 0x0970(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UW_Loadout_InformationTable_C*                       InfoPanel;                                               // 0x0978(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UW_LoadoutSlot_C*                                    HoveredSlot;                                             // 0x0980(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InfoPanelRefreshCanceled;                                // 0x0988(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       OverviewSlotDoubleClickDelay;                            // 0x0989(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bPrimary;                                                // 0x098A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       RemotePlayer;                                            // 0x098B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       QuartermasterOpen;                                       // 0x098C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_S6ZU[0x3];                                   // 0x098D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InfoPanelHideDelay;                                      // 0x0990(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DoubleClickDelay;                                        // 0x0994(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        UnhoverTimer;                                            // 0x0998(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TMap<EEquippingSwat, struct FSavedLoadout>                 LastSavedLoadout_1;                                      // 0x09A0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      OverviewRevealOffset;                                    // 0x09F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      QuartermasterRevealOffset;                               // 0x09F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<EItemCategory, class FName>                           CategoryCameraTags;                                      // 0x09F8(0x0050) Edit, BlueprintVisible
		TMap<EItemCategory, class FString>                         CategoryPoses;                                           // 0x0A48(0x0050) Edit, BlueprintVisible
		class AReadyOrNotPlayerState*                              EquippingPlayerState_1;                                  // 0x0A98(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                CurrentCameraTag;                                        // 0x0AA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              CurrentPreviewAnimation;                                 // 0x0AA8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		struct FTimerHandle                                        RedrawWeaponTimer;                                       // 0x0AB8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FString                                              PrimaryHolserAnim;                                       // 0x0AC0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              PrimaryDrawAnim;                                         // 0x0AD0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              SidearmHolserAnim;                                       // 0x0AE0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              SidearmDrawAnim;                                         // 0x0AF0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FName                                                DefaultCameraTag;                                        // 0x0B00(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EItemType                                                  EquippingItemType;                                       // 0x0B08(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       StartInQuartermaster;                                    // 0x0B09(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bInGame;                                                 // 0x0B0A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bReady;                                                  // 0x0B0B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MTMA[0x4];                                   // 0x0B0C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UWidget*>                                     Overview_Widgets;                                        // 0x0B10(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TMap<class FString, struct FWeaponPreset>                  CurrentWeaponPresets;                                    // 0x0B20(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              CurrentlySelectedPreset;                                 // 0x0B70(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		float                                                      RevealDelay;                                             // 0x0B80(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PY6F[0x4];                                   // 0x0B84(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnQuartermasterListHidden;                               // 0x0B88(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bQuarterMasterListHidden;                                // 0x0B98(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z9NO[0x7];                                   // 0x0B99(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UW_StandardModal_C*                                  PresetModal;                                             // 0x0BA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PresetOverwriteIndex;                                    // 0x0BA8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_A5RA[0x4];                                   // 0x0BAC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              WorkbenchCameraTarget;                                   // 0x0BB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FCoreUObject_FRotator                               DefaultWorkbenchCameraRotation;                          // 0x0BB8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4AWO[0x4];                                   // 0x0BC4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ACameraActor*                                        WorkbenchCamera;                                         // 0x0BC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FCoreUObject_FRotator                               CurrentWorkbenchCameraRotation;                          // 0x0BD0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CurrentWorkbenchCameraTransitionTime;                    // 0x0BDC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WorkbenchCameraLookSpeed;                                // 0x0BE0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bWorkbenchCameraRotating;                                // 0x0BE4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_57CC[0x3];                                   // 0x0BE5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCoreUObject_FRotator                               TargetWorkbenchCameraRotation;                           // 0x0BE8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      WorkbenchCameraTransitionAlpha;                          // 0x0BF4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FCoreUObject_FRotator                               WorkbenchCameraRotation;                                 // 0x0BF8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseTableOverview;                                       // 0x0C04(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_SRMS[0x3];                                   // 0x0C05(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_LobbyLoadout_C*                                  OverviewTable;                                           // 0x0C08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<EItemCategory, class UClass*>                         CurrentItems;                                            // 0x0C10(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       SelectingMunitions;                                      // 0x0C60(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VPHF[0x7];                                   // 0x0C61(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      ListExclusionItems;                                      // 0x0C68(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       SelectingDeployables;                                    // 0x0C78(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ITL7[0x3];                                   // 0x0C79(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ExcludedAmmoType;                                        // 0x0C7C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ArmorEditorOpen;                                         // 0x0C84(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6NQI[0x3];                                   // 0x0C85(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPrimaryAmmoEquipped;                                   // 0x0C88(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSidearmAmmoEquipped;                                   // 0x0C98(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnGrenadesEquipped;                                      // 0x0CA8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnTacticalEquipped;                                      // 0x0CB8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnPrimaryAmmoCountSaved;                                 // 0x0CC8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSidearmAmmoCountSaved;                                 // 0x0CD8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnGrenadeCountSaved;                                     // 0x0CE8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnTacticalCountSaved;                                    // 0x0CF8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnPrimaryWeaponEquipped;                                 // 0x0D08(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSidearmWeaponEquipped;                                 // 0x0D18(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnArmorEquipped;                                         // 0x0D28(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnArmorCoverageSaved;                                    // 0x0D38(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       SelectingArmourMaterial;                                 // 0x0D48(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_98L5[0x7];                                   // 0x0D49(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnArmorMaterialEquipped;                                 // 0x0D50(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnAmmoOptionSelected;                                    // 0x0D60(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       ChangingPlayer;                                          // 0x0D70(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RMBH[0x7];                                   // 0x0D71(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFMODEvent*                                          WeaponEquippedSound;                                     // 0x0D78(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFMODEvent*                                          ArmorEquippedSound;                                      // 0x0D80(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFMODEvent*                                          ArmorMaterialEquippedSound;                              // 0x0D88(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFMODEvent*                                          AmmoEquippedSound;                                       // 0x0D90(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFMODEvent*                                          AttachmentEquippedSound;                                 // 0x0D98(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFMODEvent*                                          AttachmentRemovedSound;                                  // 0x0DA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFMODEvent*                                          CleanWeaponSound;                                        // 0x0DA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFMODEvent*                                          QuartermasterOpenSound;                                  // 0x0DB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFMODEvent*                                          DeployableEquippedSound;                                 // 0x0DB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFMODEvent*                                          WeaponHolsteredSound;                                    // 0x0DC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFMODEvent*                                          WeaponDrawSound;                                         // 0x0DC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HolsterTimeRemaining;                                    // 0x0DD0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AutoSelectAttachment;                                    // 0x0DD4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EWeaponAttachmentType                                      AutoSelectAttachmentSlot;                                // 0x0DD5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       VerticalListOpen;                                        // 0x0DD6(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ListVisible;                                             // 0x0DD7(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                CurrentLoadoutPreset;                                    // 0x0DD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ApplyingPreset;                                          // 0x0DE0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UsingPreset;                                             // 0x0DE1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PresetDirty;                                             // 0x0DE2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G01J[0x1];                                   // 0x0DE3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PresetCharacterLimit;                                    // 0x0DE4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ClearPreset();
		void SetPresetModified(bool PresetDirty);
		void LoadDefaultLoadout();
		void CheckPreset();
		void DeleteLoadoutPreset(class UW_StandardModal_C* TriggeringModal, const class FText& TextEntry);
		void Open_Loadout_Preset_Modal(const class FString& CurrentPreset, bool Delete);
		void ApplyLoadoutPreset(const struct FLoadoutPreset& LoadoutPreset);
		void OpenAttachmentList(bool VerticalList, class UClass* ItemData, EWeaponAttachmentType AttachmentType);
		void OpenItemList(bool VerticalList, EItemCategory LoadoutSlot, TArray<struct FLoadoutCategory> GearCategoryClasses);
		void OpenDeployableList(bool VerticalList, EItemCategory LoadoutSlot, TArray<struct FLoadoutCategory> GearCategoryClasses, TArray<class UClass*> ExcludedItems);
		void OpenArmourMaterialList(bool VerticalList);
		void OpenAmmoList(bool VerticalList, const class FName& ExcludedAmmoType, class UClass* Weapon);
		void SaveLoadoutPreset(class UW_StandardModal_C* TriggeringModal, const class FText& TextEntry);
		void IsNullAttachment(class UClass* Attachment, bool* IsNull);
		void RefreshAttachmentInfoPanel(class UW_LoadoutSlot_Attachment_C* AttachmentSlot);
		void RefreshItemInfoPanel(class UW_LoadoutSlot_C* LoadoutSlot);
		void HideItemList();
		void EquipArmourMaterial(class UArmourMaterial* ArmourMaterial);
		void SaveArmorCoverage(EArmourCoverage ArmorCoverage);
		void EquipSidearmAmmo(TArray<class FName>* SidearmAmmo);
		void EquipPrimaryAmmo(TArray<class FName>* PrimaryAmmo);
		void OpenArmorQuartermaster(class UClass* ItemToModify);
		void SaveTacticalSlotCount(int32_t Tactical_Slots_Count);
		void SaveGrenadeSlotCount(int32_t Grenade_Slots_Count);
		void SaveSidearmAmmoSlotCount(int32_t Secondary_Ammo_Slots_Count);
		void SavePrimaryAmmoSlotCount(int32_t Primary_Ammo_Slots_Count);
		void UpdateCurrentItem(EItemCategory ItemCategory, class UClass* ItemClass);
		void DeselectAttachmentSlot();
		void UpdateWorkbenchCameraRotation(float DeltaTime);
		void SetupWorkbenchCamera();
		void LookAtAttachmentSlot(EWeaponAttachmentType AttachmentSlot);
		void SaveWeaponPreset(class UW_StandardModal_C* TriggeringModal, const class FText& TextEntry);
		void CleanCurrentWeapon();
		void CloseLoadout();
		void UpdateHUDStates();
		void ShowHUD();
		void HideHUD();
		void SaveActiveLoadoutOld();
		void HolsterPreviewCharacterWeapon(bool* IsHolstering);
		void InitializeWeaponAttachmentMap();
		void UpdateAllPreviewWeaponAttachments(bool IsWorkbench, class UClass* Weapon, bool IsSidearm);
		void UpdatePreview(EItemCategory Selection);
		void SetPreMissionCameraBySlot(EItemCategory LoadoutSlot, float BlendTime);
		void EquipSidearmAttachments(EWeaponAttachmentType AttachmentType, class UClass* AttachmentData, class UClass* AttachingWeapon);
		void EquipPrimaryAttachments(EWeaponAttachmentType AttachmentType, class UClass* AttachmentData, class UClass* AttachingWeapon);
		void DeselectLoadoutSlot();
		struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void GoBack();
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void EquipAttachment(class UClass* AttachingWeapon, class UClass* AttachmentData);
		void InitializeAttachmentSelectionPanel(class UW_LoadoutSlot_Attachment_C* TriggeringSlot);
		void InitializeItemSelectionRemote(class UW_LoadoutSlot_C* TriggeringSlot);
		void InitializeItemSelectionPanel(class UW_LoadoutSlot_C* TriggeringSlot);
		void EquipTactical(TArray<class UClass*>* ItemData);
		void EquipGrenades(TArray<class UClass*>* ItemData);
		void EquipLongTactical(class UClass* ItemData);
		void EquipHeadwear(class UClass* ItemData);
		void EquipArmor(class UClass* ItemData);
		void SidearmChanged();
		void PrimaryChanged();
		void EquipItem(class UClass* ItemData);
		void SetActiveLoadout(const class FString& LoadoutName, class AReadyOrNotPlayerState* RoNPlayerState, EEquippingSwat EquippingUnit);
		void SetupBindings();
		void OpenWeaponQuartermaster(class UClass* ItemToModify);
		void HideItemInfoPanel();
		void ShowItemInfoPanel(class UW_LoadoutSlot_C* LoadoutSlot);
		void InitializeOverview();
		void ShowTooltip(const struct FLevelDataLookupTable& MissionDetails);
		void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
		void DoItemUnhover();
		void BndEvt__W_Loadout_W_Loadout_ItemList_C_2_K2Node_ComponentBoundEvent_0_OnLoadoutItemClicked__DelegateSignature(class UClass* ItemData);
		void BndEvt__W_Loadout_W_LoadoutCharacterSelect_K2Node_ComponentBoundEvent_1_OnEquippingUnitSelected__DelegateSignature(const struct FST_EquippingUnit& EquippingUnitInfo);
		void BndEvt__W_Loadout_W_Loadout_ItemList_C_2_K2Node_ComponentBoundEvent_2_OnAttachmentItemClicked__DelegateSignature(class UClass* AttachingWeapon, class UClass* AttachmentData);
		void BndEvt__W_Loadout_W_Loadout_ItemList_C_2_K2Node_ComponentBoundEvent_3_OnLoadoutItemDoubleClicked__DelegateSignature(class UClass* ItemData);
		void BndEvt__W_Loadout_W_Loadout_InformationTable_C_1_K2Node_ComponentBoundEvent_4_OnModifyWeaponButtonClicked__DelegateSignature(class UClass* ItemToModify);
		void CloseQuartermaster();
		void SelectListItem(class UClass* ItemData);
		void RedrawWeapon();
		void SetPreMissionCamera(const class FName& Tag, const class FString& Animation, float BlendTime);
		void Construct();
		void OnLoadoutLoaded();
		void OnLoadoutSaved();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget);
		void OnSwatCharacterChanged();
		void CancelSavePreset(class UW_StandardModal_C* CallingModal);
		void UpdateCurrentItemMap(TMap<EItemCategory, class UClass*> ItemCategory);
		void UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout);
		void Hide(float Delay, bool Collapse);
		void Reveal(float Delay);
		void OnInitialized();
		void BndEvt__W_Loadout_W_Loadout_InformationTable_C_1_K2Node_ComponentBoundEvent_11_OnInfoPanelAttachmentClicked__DelegateSignature(EWeaponAttachmentType Slot, class UClass* AttachmentData);
		void UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot);
		void BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_18_OnOverviewItemDoubleClicked__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot);
		void BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_20_OnQuartermasterWeaponSwapped__DelegateSignature(bool IsPrimary);
		void BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_22_OnQuartermasterClosed__DelegateSignature();
		void BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_23_OnQuartermasterOpened__DelegateSignature();
		void BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_5_OnArmorEditorOpen__DelegateSignature();
		void CloseArmorQuartermaster();
		void BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_10_OnArmorEditorClosed__DelegateSignature();
		void BndEvt__W_Loadout_W_Loadout_ItemList_C_2_K2Node_ComponentBoundEvent_9_OnAmmoItemClicked__DelegateSignature(const class FName& AmmoType, class UClass* Weapon);
		void BndEvt__W_Loadout_W_Loadout_ItemList_C_2_K2Node_ComponentBoundEvent_13_OnArmourMaterialClicked__DelegateSignature(class UArmourMaterial* ArmourMaterial);
		void BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_15_OnCleanWeaponClicked__DelegateSignature();
		void OverviewItemClicked(class UW_LoadoutSlot_C* TriggeringSlot);
		void AttachmentSlotClicked(class UW_LoadoutSlot_Attachment_C* TriggeringSlot);
		void QuartermasterWeaponClicked(class UW_LoadoutSlot_C* TriggeringSlot);
		void RefreshItemList();
		void BndEvt__W_Loadout_W_HotkeyBar_K2Node_ComponentBoundEvent_6_OnHotkeyClicked__DelegateSignature(const class FString& HotkeyID);
		void ItemHovered(class UW_LoadoutSlot_C* TriggeringSlot);
		void AttachmentHovered(class UW_LoadoutSlot_Attachment_C* TriggeringAttachment);
		void ItemUnhovered(class UW_LoadoutSlot_C* TriggeringSlot);
		void DoAttachmentUnhover();
		void PreConstruct(bool IsDesignTime);
		void AttachmentUnhovered(class UW_LoadoutSlot_Attachment_C* TriggeringAttachment);
		void BndEvt__W_Loadout_W_Loadout_InformationTable_C_1_K2Node_ComponentBoundEvent_7_OnInfoPanelRemoveAttachmentClicked__DelegateSignature(EWeaponAttachmentType Slot);
		void BndEvt__W_Loadout_W_Loadout_ItemList_Vertical_C_5_K2Node_ComponentBoundEvent_12_OnLoadoutItemClicked__DelegateSignature(class UClass* ItemData);
		void BndEvt__W_Loadout_W_Loadout_ItemList_Vertical_C_5_K2Node_ComponentBoundEvent_16_OnAttachmentItemClicked__DelegateSignature(class UClass* AttachingWeapon, class UClass* AttachmentData);
		void BndEvt__W_Loadout_W_Loadout_ItemList_Vertical_C_5_K2Node_ComponentBoundEvent_19_OnLoadoutItemDoubleClicked__DelegateSignature(class UClass* ItemData);
		void BndEvt__W_Loadout_W_Loadout_ItemList_Vertical_C_5_K2Node_ComponentBoundEvent_24_OnAmmoItemClicked__DelegateSignature(const class FName& AmmoType, class UClass* Weapon);
		void BndEvt__W_Loadout_W_Loadout_ItemList_Vertical_C_5_K2Node_ComponentBoundEvent_26_OnArmourMaterialClicked__DelegateSignature(class UArmourMaterial* ArmourMaterial);
		void OnLoadoutPresetsLoaded();
		void BndEvt__W_Loadout_btn_SidebarBack_K2Node_ComponentBoundEvent_14_Clicked__DelegateSignature(class UW_Button_C* Button);
		void ExecuteUbergraph_W_Loadout(int32_t EntryPoint);
		void OnAmmoOptionSelected__DelegateSignature(const class FName& AmmoType, class UClass* Weapon);
		void OnArmorMaterialEquipped__DelegateSignature();
		void OnArmorCoverageSaved__DelegateSignature();
		void OnArmorEquipped__DelegateSignature();
		void OnSidearmWeaponEquipped__DelegateSignature();
		void OnPrimaryWeaponEquipped__DelegateSignature();
		void OnTacticalCountSaved__DelegateSignature();
		void OnGrenadeCountSaved__DelegateSignature();
		void OnSidearmAmmoCountSaved__DelegateSignature();
		void OnPrimaryAmmoCountSaved__DelegateSignature();
		void OnTacticalEquipped__DelegateSignature();
		void OnGrenadesEquipped__DelegateSignature();
		void OnSidearmAmmoEquipped__DelegateSignature();
		void OnPrimaryAmmoEquipped__DelegateSignature();
		void OnQuartermasterListHidden__DelegateSignature();
		void NewEventDispatcher_0__DelegateSignature();
		void UpdateMapMaterial__DelegateSignature(class UTexture2D* LayoutTexture);
		void PanMap__DelegateSignature(bool Pressed, const struct FCoreUObject_FVector2D& CursorPos);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
