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
	 * WidgetBlueprintGeneratedClass W_LoadoutItem_Presets.W_LoadoutItem_Presets_C
	 * Size -> 0x0060 (FullSize[0x02D8] - InheritedSize[0x0278])
	 */
	class UW_LoadoutItem_Presets_C : public UBaseWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UW_LoadoutItem_Preset_C*                             LoadoutItem_Preset_2;                                    // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_LoadoutItem_Preset_C*                             LoadoutItem_Preset_3;                                    // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_LoadoutItem_Preset_C*                             LoadoutItem_Preset_4;                                    // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_LoadoutItem_Preset_C*                             LoadoutItem_Preset_5;                                    // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_LoadoutItem_Preset_C*                             LoadoutItem_Preset_Default;                              // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        LoadoutItem_Presets_Container;                           // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_LoadoutItem_Preset_C*                             LoadoutItem_WeaponTable;                                 // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    SelectedRow;                                             // 0x02B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bAnyKeyDown;                                             // 0x02BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bLoaded;                                                 // 0x02BD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N6LG[0x2];                                   // 0x02BE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              LastSetItemClass;                                        // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UW_LoadoutItem_Preset_C*                             LastSelectedPreset;                                      // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UW_LoadoutCustomizationMenu_C*                       Owner;                                                   // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void LoadPresets_ItemClass(class UClass* ItemClass);
		void FindSelectedPreset(class UClass* ItemClass, int32_t* Return_Value, class UW_LoadoutItem_Preset_C** Loadout_Item_Preset);
		void CanRenamePreset(bool* Return_Value);
		void GetSelectedPresetWidget(class UW_LoadoutItem_Preset_C** Return_Value);
		void IsRenamingPreset(bool* Return_Value);
		void ConflictsWithOtherPresets(class UW_LoadoutItem_Preset_C* Loadout_Item_Preset, const class FText& InText, bool* Return_Value);
		void UnhoverAllPresetsExcept(class UW_LoadoutItem_Preset_C* Loadout_Item_Preset);
		void DeselectAllPresetsExcept(class UW_LoadoutItem_Preset_C* Loadout_Item_Preset);
		void StopRenamingPreset();
		void StartRenamingPreset();
		void Enter();
		void Exit();
		void Escape();
		void Select(int32_t Index);
		void Click();
		void Unhover();
		void Hover();
		void PreviousRow();
		void NextRow();
		struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void InitializeWidget();
		void OnLoadoutItemPresetButtonClicked(class UW_LoadoutItem_Preset_C* LoadoutItemPresetWidget);
		void OnLoadoutItemPresetButtonHovered(class UW_LoadoutItem_Preset_C* LoadoutItemPresetWidget);
		void Construct();
		void ExecuteUbergraph_W_LoadoutItem_Presets(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
