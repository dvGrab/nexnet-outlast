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
	 * WidgetBlueprintGeneratedClass W_Button.W_Button_C
	 * Size -> 0x088C (FullSize[0x0AEC] - InheritedSize[0x0260])
	 */
	class UW_Button_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             Btn;                                                     // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     ContentSwitcher;                                         // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNamedSlot*                                          CustomContents;                                          // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                           txt_ButtonLabel;                                         // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                ButtonLabelText;                                         // 0x0288(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		E_Style_Buttons                                            SelectButtonStyle;                                       // 0x02A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       UseCustomStyle;                                          // 0x02A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LIR9[0x6];                                   // 0x02A2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FST_Style_Buttons                                   ButtonStyle;                                             // 0x02A8(0x0500) Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_Style_Text                                      FontStyleNormal;                                         // 0x07A8(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FST_Style_Text                                      FontStyleHovered;                                        // 0x0848(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FST_Style_Text                                      FontStylePressed;                                        // 0x08E8(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FST_Style_Text                                      FontStyleDisabled;                                       // 0x0988(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class UDataTable*                                          Styleguide;                                              // 0x0A28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bHovered;                                                // 0x0A30(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9PFB[0x7];                                   // 0x0A31(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             Clicked;                                                 // 0x0A38(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             Hovered;                                                 // 0x0A48(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             Unhovered;                                               // 0x0A58(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             Pressed;                                                 // 0x0A68(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             Released;                                                // 0x0A78(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             DoubleClicked;                                           // 0x0A88(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    FontSizeOverride;                                        // 0x0A98(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_Style_Buttons                                            ActiveStyle;                                             // 0x0A9C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MM96[0x3];                                   // 0x0A9D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextBlock*                                          DescriptionWidget;                                       // 0x0AA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ForceUppercaseDescription;                               // 0x0AA8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3G39[0x7];                                   // 0x0AA9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DescriptionText;                                         // 0x0AB0(0x0018) Edit, BlueprintVisible
		class UFMODEvent*                                          HoveredSound;                                            // 0x0AC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFMODEvent*                                          ClickedSound;                                            // 0x0AD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       StartActive;                                             // 0x0AD8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       StartActiveDisabled;                                     // 0x0AD9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VVN9[0x2];                                   // 0x0ADA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DoubleClickDelay;                                        // 0x0ADC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ClickCount;                                              // 0x0AE0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		bool                                                       DoubleClick;                                             // 0x0AE4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9D75[0x3];                                   // 0x0AE5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CharacterLimit;                                          // 0x0AE8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void TruncateText(bool Truncate, int32_t CharacterLimit, const class FString& TruncationCharacters);
		void DisableInteraction(bool Disable);
		void SetButtonStyle(E_Style_Buttons SelectButtonStyle);
		void Enable(bool Enable);
		void SetBackgroundTint(const struct FLinearColor& InBackgroundColor);
		void SetActive(bool Active, bool DisableInteraction);
		void Set_Text_Style(const struct FST_Style_Text& FontStyle);
		void SetButtonText(const class FText& Text);
		void SetButtonState(E_ButtonStates ButtonState);
		void InitStyle(E_Style_Buttons ButtonStyle);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void BndEvt__btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__btn_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__btn_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__btn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__btn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
		void ForceClick();
		void ForceDoubleClick();
		void ExecuteUbergraph_W_Button(int32_t EntryPoint);
		void DoubleClicked__DelegateSignature(class UW_Button_C* Button);
		void Released__DelegateSignature();
		void Pressed__DelegateSignature();
		void Unhovered__DelegateSignature();
		void Hovered__DelegateSignature(class UW_Button_C* Button);
		void Clicked__DelegateSignature(class UW_Button_C* Button);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
