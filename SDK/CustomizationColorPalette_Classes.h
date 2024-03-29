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
	 * WidgetBlueprintGeneratedClass CustomizationColorPalette.CustomizationColorPalette_C
	 * Size -> 0x0088 (FullSize[0x02E8] - InheritedSize[0x0260])
	 */
	class UCustomizationColorPalette_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UColorPastille_C*                                    ColorButton;                                             // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UColorPastille_C*                                    ColorButton_82;                                          // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UColorPastille_C*                                    ColorButton_159;                                         // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UColorPastille_C*                                    ColorButton_234;                                         // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UColorPastille_C*                                    ColorButton_302;                                         // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      ColorContainer;                                          // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FRBHairColorOption                                  CurrentHairColor;                                        // 0x0298(0x0028) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class FScriptMulticastDelegate                             OnHairColorClicked;                                      // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnHairColorHovered;                                      // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UColorPastille_C*                                    CurrentSelectedPastille;                                 // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetPastilleFromColor(const struct FRBHairColorOption& HairColor, class UColorPastille_C** ColorPastille);
		void Init(const class FName& InitialHairColorId);
		void UpdateSelectedPastille(class UColorPastille_C* NewSelectedPastille);
		void RefreshColorList();
		void PreConstruct(bool IsDesignTime);
		void OnPastilleClicked(class UColorPastille_C* ClickedPastille);
		void OnPastilleUnHovered();
		void OnPastilleHovered(const struct FRBHairColorOption& HoveredColor);
		void ExecuteUbergraph_CustomizationColorPalette(int32_t EntryPoint);
		void OnHairColorHovered__DelegateSignature(const struct FRBHairColorOption& HoveredHairColor);
		void OnHairColorClicked__DelegateSignature(const struct FRBHairColorOption& newHairColor);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
