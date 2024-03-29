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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.ResetPreset
	 */
	struct UW_LoadoutItem_Preset_C_ResetPreset_Params
	{
	public:
		bool                                                       bResetName;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9MZP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.LoadPreset
	 */
	struct UW_LoadoutItem_Preset_C_LoadPreset_Params
	{
	public:
		struct FWeaponPreset                                       PresetData;                                              // 0x0000(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.UpdatePreset
	 */
	struct UW_LoadoutItem_Preset_C_UpdatePreset_Params
	{	};

	/**
	 * Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.UpdatePreset (Custom)
	 */
	struct UW_LoadoutItem_Preset_C_UpdatePreset_Custom_Params
	{
	public:
		struct FWeaponPreset                                       PresetData;                                              // 0x0000(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.CanRename
	 */
	struct UW_LoadoutItem_Preset_C_CanRename_Params
	{
	public:
		bool                                                       Return_Value;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.UnhoverResetButton
	 */
	struct UW_LoadoutItem_Preset_C_UnhoverResetButton_Params
	{	};

	/**
	 * Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.HoverResetButton
	 */
	struct UW_LoadoutItem_Preset_C_HoverResetButton_Params
	{	};

	/**
	 * Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.Escape
	 */
	struct UW_LoadoutItem_Preset_C_Escape_Params
	{	};

	/**
	 * Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.OnKeyUp
	 */
	struct UW_LoadoutItem_Preset_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.OnKeyDown
	 */
	struct UW_LoadoutItem_Preset_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.StopRenaming
	 */
	struct UW_LoadoutItem_Preset_C_StopRenaming_Params
	{	};

	/**
	 * Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.IsRenaming
	 */
	struct UW_LoadoutItem_Preset_C_IsRenaming_Params
	{
	public:
		bool                                                       Return_Value;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.CanReset
	 */
	struct UW_LoadoutItem_Preset_C_CanReset_Params
	{
	public:
		bool                                                       bConsiderPresetName;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Return_Value;                                            // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R4OK[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.AnyAttachmentEquipped
	 */
	struct UW_LoadoutItem_Preset_C_AnyAttachmentEquipped_Params
	{
	public:
		bool                                                       Return_Value;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.Get_ResetButton_Visibility
	 */
	struct UW_LoadoutItem_Preset_C_Get_ResetButton_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.Rename
	 */
	struct UW_LoadoutItem_Preset_C_Rename_Params
	{	};

	/**
	 * Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.Get_CannotEdit_Text_Visibility
	 */
	struct UW_LoadoutItem_Preset_C_Get_CannotEdit_Text_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.SimulateUnhover
	 */
	struct UW_LoadoutItem_Preset_C_SimulateUnhover_Params
	{	};

	/**
	 * Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.SimulateHover
	 */
	struct UW_LoadoutItem_Preset_C_SimulateHover_Params
	{	};

	/**
	 * Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.SimulateClick
	 */
	struct UW_LoadoutItem_Preset_C_SimulateClick_Params
	{	};

	/**
	 * Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.Deselect Preset
	 */
	struct UW_LoadoutItem_Preset_C_Deselect_Preset_Params
	{
	public:
		bool                                                       bSavePreset;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.Select Preset
	 */
	struct UW_LoadoutItem_Preset_C_Select_Preset_Params
	{
	public:
		bool                                                       bSavePreset;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature
	 */
	struct UW_LoadoutItem_Preset_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature
	 */
	struct UW_LoadoutItem_Preset_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UW_LoadoutItem_Preset_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{
	public:
		class UW_StandardButton_C*                                 CallingButton;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.OnLoadoutLoaded
	 */
	struct UW_LoadoutItem_Preset_C_OnLoadoutLoaded_Params
	{	};

	/**
	 * Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.BndEvt__EditableText_184_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature
	 */
	struct UW_LoadoutItem_Preset_C_BndEvt__EditableText_184_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.BndEvt__LoadoutItemPresetNameEdit_Text_K2Node_ComponentBoundEvent_4_OnEditableTextCommittedEvent__DelegateSignature
	 */
	struct UW_LoadoutItem_Preset_C_BndEvt__LoadoutItemPresetNameEdit_Text_K2Node_ComponentBoundEvent_4_OnEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.FocusOnEditableText
	 */
	struct UW_LoadoutItem_Preset_C_FocusOnEditableText_Params
	{	};

	/**
	 * Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 */
	struct UW_LoadoutItem_Preset_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
	{
	public:
		class UW_StandardButton_C*                                 CallingButton;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.PreConstruct
	 */
	struct UW_LoadoutItem_Preset_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.Tick
	 */
	struct UW_LoadoutItem_Preset_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_6_OnUnhovered__DelegateSignature
	 */
	struct UW_LoadoutItem_Preset_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_6_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature
	 */
	struct UW_LoadoutItem_Preset_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.ExecuteUbergraph_W_LoadoutItem_Preset
	 */
	struct UW_LoadoutItem_Preset_C_ExecuteUbergraph_W_LoadoutItem_Preset_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.OnButtonUnhovered__DelegateSignature
	 */
	struct UW_LoadoutItem_Preset_C_OnButtonUnhovered__DelegateSignature_Params
	{
	public:
		class UW_LoadoutItem_Preset_C*                             LoadoutItemPresetWidget;                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.OnButtonHovered__DelegateSignature
	 */
	struct UW_LoadoutItem_Preset_C_OnButtonHovered__DelegateSignature_Params
	{
	public:
		class UW_LoadoutItem_Preset_C*                             LoadoutItemPresetWidget;                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutItem_Preset.W_LoadoutItem_Preset_C.OnButtonClicked__DelegateSignature
	 */
	struct UW_LoadoutItem_Preset_C_OnButtonClicked__DelegateSignature_Params
	{
	public:
		class UW_LoadoutItem_Preset_C*                             LoadoutItemPresetWidget;                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
