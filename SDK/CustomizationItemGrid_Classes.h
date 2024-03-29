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
	 * WidgetBlueprintGeneratedClass CustomizationItemGrid.CustomizationItemGrid_C
	 * Size -> 0x0091 (FullSize[0x02F9] - InheritedSize[0x0268])
	 */
	class UCustomizationItemGrid_C : public URBUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0268(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UScrollBox*                                          CustomizationOptionsScrollBox;                           // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUniformGridPanel*                                   ThumbnailGrid;                                           // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCustomizationOptionThumbnail_C*                     EquippedOptionWidget;                                    // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    itemsPerRow;                                             // 0x0288(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_D8WM[0x4];                                   // 0x028C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             EventOnItemClicked;                                      // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             EventOnItemHovered;                                      // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             EventOnItemUnhovered;                                    // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             EventOnItemPressed;                                      // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             EventOnItemReleased;                                     // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    ItemCount;                                               // 0x02E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsCellCustomization;                                    // 0x02E4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6Z78[0x3];                                   // 0x02E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UCustomizationOptionThumbnail_C*>             ThumbnailWidgetsPool;                                    // 0x02E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		ECustomizationMenuCategory                                 Category;                                                // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnInputSourceChanged(bool bIsGamepad);
		void GetThumbnailWidget(class UCustomizationOptionThumbnail_C** Thumbnail);
		void OnItemBought(struct FUICustomizationItem* ItemBought);
		void OnItemEquipped(struct FUICustomizationItem* New_Equipped_Item);
		void TryUpdateEquippedOptionWidget(class UCustomizationOptionThumbnail_C* New_Option);
		class UWidget* GamepadNav_HandleGridNavigation(EUINavigation Navigation);
		void AddItems(TArray<struct FUICustomizationItem>* Items, ECustomizationMenuCategory Category);
		void OnItemReleased(class UCustomizationOptionThumbnail_C* Button);
		void OnItemPressed(class UCustomizationOptionThumbnail_C* Button);
		void OnItemUnhovered(class UCustomizationOptionThumbnail_C* Widget);
		void OnItemHovered(class UCustomizationOptionThumbnail_C* Widget);
		void OnItemClicked(class UCustomizationOptionThumbnail_C* Widget);
		void RefreshItemInfos(TArray<struct FUICustomizationItem>* Items);
		void ManageEmptyThumbnails();
		void GetLastEmptyItemIndex(int32_t* Index);
		void SetEquippedOptionWidget(class UCustomizationOptionThumbnail_C* Widget);
		void Construct();
		void Event_InputSourceChanged(bool bIsGamepad);
		void ExecuteUbergraph_CustomizationItemGrid(int32_t EntryPoint);
		void EventOnItemReleased__DelegateSignature(const struct FUICustomizationItem& Item);
		void EventOnItemPressed__DelegateSignature(const struct FUICustomizationItem& Item);
		void EventOnItemUnhovered__DelegateSignature(const struct FUICustomizationItem& Item);
		void EventOnItemHovered__DelegateSignature(const struct FUICustomizationItem& Item);
		void EventOnItemClicked__DelegateSignature(const struct FUICustomizationItem& Item);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
