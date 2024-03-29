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
	 * BlueprintGeneratedClass BPF_UI.BPF_UI_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPF_UI_C : public UBlueprintFunctionLibrary
	{
	public:
		void GetAmmoCategoryText(class UClass* ItemData, class UObject* __WorldContext, class FText* Text);
		void UpdateCurrent_LoadoutUI_Slot(class UObject* WorldContextObject, class UW_LoadoutSlot_C* CurrentSlot, class UObject* __WorldContext);
		void GetItemType(class UClass* BaseItemClass, class UObject* __WorldContext, EItemType* Item_Type);
		void GetItemDataTableInfo(class UClass* BaseItemClass, class UObject* __WorldContext, bool* DataFound, struct FItemLookupTable* ItemLookupData);
		void GetAttachmentSlotText(EWeaponAttachmentType AttachmentType, class UObject* __WorldContext, class FText* SlotText);
		void GetItemClassText(EItemClass ItemCategory, class UObject* __WorldContext, class FText* Category_Text);
		void GetLoadoutCategoryText(EItemCategory ItemCategory, class UObject* __WorldContext, class FText* Category_Text);
		void RemoveSpacesFromString(const class FString& String, class UObject* __WorldContext, class FString* ReturnString, class FText* ReturnText, class FName* ReturnName);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
