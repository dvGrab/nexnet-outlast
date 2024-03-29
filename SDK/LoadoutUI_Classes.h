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
	 * BlueprintGeneratedClass LoadoutUI.LoadoutUI_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULoadoutUI_C : public UInterface
	{
	public:
		void SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget);
		void UpdateCurrentItemMap(TMap<EItemCategory, class UClass*> ItemCategory);
		void UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot);
		void UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
