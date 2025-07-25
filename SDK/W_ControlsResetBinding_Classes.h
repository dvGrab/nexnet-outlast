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
	 * WidgetBlueprintGeneratedClass W_ControlsResetBinding.W_ControlsResetBinding_C
	 * Size -> 0x0110 (FullSize[0x0370] - InheritedSize[0x0260])
	 */
	class UW_ControlsResetBinding_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Button_Disabled;                                         // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Button_Dn;                                               // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Button_Hi;                                               // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Button_Up;                                               // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             ResetButton;                                             // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FName                                                BindName;                                                // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnResetClicked;                                          // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnResetHovered;                                          // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnResetUnhovered;                                        // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnResetPressed;                                          // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnResetReleased;                                         // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bAxis;                                                   // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_6020[0x7];                                   // 0x02E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextBlock*                                          DescriptionText;                                         // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FText                                                Description;                                             // 0x02F8(0x0018) Edit, BlueprintVisible
		TArray<class UW_ControlsBind_C*>                           BindingButtons;                                          // 0x0310(0x0010) Edit, BlueprintVisible, ContainsInstancedReference
		class UFMODEvent*                                          ResetBindingClickedSound;                                // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UFMODEvent*                                          ResetBindingHoveredSound;                                // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		TArray<struct FAxisMappingStruct>                          AxisMappings;                                            // 0x0330(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		TArray<struct FActionMappingStruct>                        ActionMappings;                                          // 0x0340(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		TArray<struct FAxisMappingStruct>                          TempRemoveAxisMappings;                                  // 0x0350(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FActionMappingStruct>                        TempRemoveActionMappings;                                // 0x0360(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void Remove_Key_Bind(class UW_ControlsBind_C* Control_Bind);
		void Update_Input_Mappings();
		void Clear_Temp_Input_Mappings();
		void Check_if_None_Key_Is_Assigned_Action(bool* IsNoneKeyAssigned);
		void Check_if_None_Key_Is_Assigned_Axis(bool* IsNoneKeyAssigned);
		void SetDisabled(bool Disabled);
		void BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__ResetButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__ResetButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__ResetButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__ResetButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
		void ExecuteUbergraph_W_ControlsResetBinding(int32_t EntryPoint);
		void OnResetReleased__DelegateSignature();
		void OnResetPressed__DelegateSignature();
		void OnResetUnhovered__DelegateSignature();
		void OnResetHovered__DelegateSignature();
		void OnResetClicked__DelegateSignature(class UW_ControlsResetBinding_C* CallingWidget);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
