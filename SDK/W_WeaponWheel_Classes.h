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
	 * WidgetBlueprintGeneratedClass W_WeaponWheel.W_WeaponWheel_C
	 * Size -> 0x01F0 (FullSize[0x0600] - InheritedSize[0x0410])
	 */
	class UW_WeaponWheel_C : public UWeaponWheelWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0410(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBackgroundBlur*                                     BackgroundBlur;                                          // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      Controls_Container;                                      // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_DebugInfoContainer_C*                             DebugInfoContainer_Items;                                // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_DebugInfoContainer_C*                             DebugInfoContainer_Logic;                                // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_DebugInfoContainer_C*                             DebugInfoContainer_Settings;                             // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_251;                                               // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            TestSmoothCursor;                                        // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          WeaponStat_Category_Text;                                // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          WeaponStat_ItemName_Text;                                // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              WeaponWheel_Background;                                  // 0x0460(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              WeaponWheel_InnerBorder;                                 // 0x0468(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        WeaponWheel_ItemInfo_Container;                          // 0x0470(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        WeaponWheel_ItemStats_Container;                         // 0x0478(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_WeaponWheel_MultiItem_Selection_C*                WeaponWheel_MultiItem_Selection;                         // 0x0480(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              WeaponWheel_OuterBorder;                                 // 0x0488(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        WeaponWheelArea;                                         // 0x0490(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TMap<class FName, class UW_WeaponWheel_RadialSelection_C*> WheelCategoryToRadialSelectionWidget;                    // 0x0498(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UW_WeaponWheel_ItemStat_C*>                   ItemStats;                                               // 0x04E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UW_WeaponWheel_RadialSelection_C*>            WeaponWheelCategories;                                   // 0x04F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class ABaseItem*>                                   ItemCategories;                                          // 0x0508(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		EEasingFunc                                                StatGrowthEffect;                                        // 0x0518(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_G73X[0x3];                                   // 0x0519(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StatGrowthSpeed;                                         // 0x051C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		int32_t                                                    CategoryTextFontSize;                                    // 0x0520(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		int32_t                                                    ItemTextFontSize;                                        // 0x0524(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		TArray<class ABaseItem*>                                   Primary_Weapons;                                         // 0x0528(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn
		TArray<class ABaseItem*>                                   Secondary_Weapons;                                       // 0x0538(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn
		TArray<class ABaseItem*>                                   Grenades;                                                // 0x0548(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn
		TArray<class ABaseItem*>                                   Assistants;                                              // 0x0558(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn
		TArray<class ABaseItem*>                                   Tactical_Devices;                                        // 0x0568(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn
		TArray<class ABaseItem*>                                   TabletDevices;                                           // 0x0578(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn
		class UW_WeaponWheel_RadialSelection_C*                    CurrentSelectedRadialWidget;                             // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UW_WeaponWheel_RadialSelection_C*                    PreviousSelectedRadialWidget;                            // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             CategoryDeselected;                                      // 0x0598(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             CategorySelected;                                        // 0x05A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             ItemSelected;                                            // 0x05B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             ItemDeselected;                                          // 0x05C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    MaxItemStats;                                            // 0x05D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_856D[0x4];                                   // 0x05DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      ItemExecutables;                                         // 0x05E0(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		TArray<class UWeaponWheelScript*>                          ItemExecutableScripts;                                   // 0x05F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		bool RemoveNullItemsFromAllCategories();
		bool RemoveNullItemsFromCategory(const class FName& WeaponWheelCategoryName);
		void IsItemAtBack(class ABaseItem* Item, bool* Return_Value);
		void IsItemAtFront(class ABaseItem* Item, bool* Return_Value);
		void IsItemAtIndex(class ABaseItem* Item, int32_t Index, bool* Return_Value);
		void ClearStats();
		void UpdateDebugInformation();
		void RemoveExecutableItemFromCategory(class UClass* NewWeaponWheelScript, int32_t AtIndex);
		void AddExecutableItemToCategory(class UClass* NewWeaponWheelScript, int32_t AtIndex);
		void ShuffleItemsInCategory(const class FName& CategoryName);
		void GetCurrentICategorytemCount(int32_t* Return_Value);
		void GetCurrentItemSelectionIndex(int32_t* Return_Value);
		void MoveItemToAnotherCategory_Index(int32_t ItemIndex, const class FName& FromCategory, const class FName& ToCategory, int32_t NewIndexInCategory);
		void MoveItemToAnotherCategory(class ABaseItem* Item, const class FName& ToCategory, int32_t NewIndexInCategory);
		void MoveItemToNewSpot_Index(int32_t ItemIndex, const class FName& CategoryName, int32_t NewIndex);
		void MoveItemToNewSpot(class ABaseItem* Item, int32_t NewIndex);
		void MoveItemToBack(class ABaseItem* Item);
		void MoveItemToFront(class ABaseItem* Item);
		void MoveItemToBack_Index(int32_t ItemIndex, const class FName& CategoryName);
		void MoveItemToFront_Index(int32_t ItemIndex, const class FName& CategoryName);
		void RemoveAssistant(class ABaseItem* AssistantItem);
		void RemoveTabletDevice(class ABaseItem* TabletDeviceItem);
		void RemoveTactical_Devices(class ABaseItem* DoorDeviceItem);
		void RemoveGrenade(class ABaseItem* GrenadeItem);
		void RemoveSecondaryWeapon(class ABaseItem* SecondaryWeaponItem);
		void RemovePrimaryWeapon(class ABaseItem* PrimaryWeaponItem);
		void RemoveItemFromCategory(class ABaseItem* Item, const class FName& Wheel_Category);
		void AddItemToCategory(class ABaseItem* Item, const class FName& Wheel_Category);
		void AddTabletDevice(class ABaseItem* TabletDevice_Item);
		void AddTactical_Device(class ABaseItem* Tactical_Device_Item);
		void AddAssistants(class ABaseItem* Assistants);
		void AddGrenade(class ABaseItem* GrenadeItem);
		void AddSecondaryWeapon(class ABaseItem* SecondayWeaponItem);
		void AddPrimaryWeapon(class ABaseItem* PrimaryWeaponItem);
		void RefreshMultiItemWidget();
		bool IsWheelCursorVisible();
		bool OnRadialMenuInitialized();
		bool OnRadialSectorCreated(int32_t Index, float InAngle);
		bool ExecuteRadial();
		bool ShowWheel();
		bool HideWheel();
		void NotifyAllStatsOnWheelCreated();
		void NotifyAllCategoriesOnWheelCreated();
		void FindDataTableRowNameFromItemName(const class FName& ItemName, class FName* RowName);
		void StatEnumToName(unsigned char Item_Stat, class FName* Stat_Name);
		void RefreshStats(TArray<class UClass*>* ItemStats, const struct FItemLookupTable& ItemDataTable);
		void RefreshCategory(TArray<class ABaseItem*>* New_Category_Items, TArray<class UWeaponWheelScript*>* NewWeaponWheelScripts, const class FName& Category_Name, int32_t StartingItemIndex);
		void UpdateTabletDevices(TArray<class ABaseItem*>* NewTabletDevices, int32_t StartingItemIndex);
		void UpdateTacticalDevices(TArray<class ABaseItem*>* NewDoorDevices, int32_t StartingItemIndex);
		void UpdateAssistants(TArray<class ABaseItem*>* NewAssistants, int32_t StartingItemIndex);
		void UpdateGrenades(TArray<class ABaseItem*>* NewGrenades, int32_t StartingItemIndex);
		void UpdateSecondaryWeapons(TArray<class ABaseItem*>* NewSecondaryWeapons, int32_t StartingItemIndex);
		void UpdatePrimaryWeapons(TArray<class ABaseItem*>* New_Primary_Weapons, int32_t StartingItemIndex);
		void PreviousItem();
		void NextItem();
		void PopulateAllCategories();
		void PopulateCategory(TArray<class ABaseItem*>* Items, const class FName& Category_Name);
		void PlaceWidgetInWheel(class UCanvasPanelSlot** Canvas_Slot, const struct FCoreUObject_FVector2D& Positionn);
		void SelectItem(class UW_WeaponWheel_RadialSelection_C* ItemToSelect, bool Play_Animation, bool Play_Sound, bool Refresh_Stats, bool* bSuccess);
		void CreateWheelStat(class UClass* ItemStatClass, float FillSpeed, EEasingFunc EasingFunction, const struct FItemLookupTable& LookupTable, class UW_WeaponWheel_ItemStat_C** ItemStatWidget);
		void CreateWheelCategory(int32_t Index, const class FName& Category_Name, class UCanvasPanelSlot** Canvas_Panel_Slot);
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void OnItemSelcted(bool Play_Animation);
		void OnItemDeselected();
		void OnSectorSelected(int32_t SelectedIndex);
		void OnSectorDeselected(int32_t DeselectedIndex);
		void OnRadialMenuCreated();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_W_WeaponWheel(int32_t EntryPoint);
		void ItemDeselected__DelegateSignature(int32_t Category_Index, const class FName& Category_Name, int32_t Item_Index, const class FName& Item_Name);
		void ItemSelected__DelegateSignature(int32_t Category_Index, const class FName& Category_Name, int32_t Item_Index, const class FName& Item_Name);
		void CategorySelected__DelegateSignature(int32_t Category_Index, const class FName& Category_Name);
		void CategoryDeselected__DelegateSignature(int32_t Category_Index, const class FName& Category_Name);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
