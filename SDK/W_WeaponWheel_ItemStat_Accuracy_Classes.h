﻿#pragma once

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
	 * WidgetBlueprintGeneratedClass W_WeaponWheel_ItemStat_Accuracy.W_WeaponWheel_ItemStat_Accuracy_C
	 * Size -> 0x0008 (FullSize[0x0878] - InheritedSize[0x0870])
	 */
	class UW_WeaponWheel_ItemStat_Accuracy_C : public UW_WeaponWheel_ItemStat_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0870(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void Initialize();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void OnRefresh();
		void OnWheelCreated();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_W_WeaponWheel_ItemStat_Accuracy(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
