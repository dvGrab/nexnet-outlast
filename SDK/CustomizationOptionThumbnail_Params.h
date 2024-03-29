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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.IsElementEmpty
	 */
	struct UCustomizationOptionThumbnail_C_IsElementEmpty_Params
	{
	public:
		bool                                                       bIsEmpty;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.RefreshInteractionType
	 */
	struct UCustomizationOptionThumbnail_C_RefreshInteractionType_Params
	{	};

	/**
	 * Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.UpdateThumbnailType
	 */
	struct UCustomizationOptionThumbnail_C_UpdateThumbnailType_Params
	{
	public:
		bool                                                       IsEmpty;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.OnAnalogValueChanged
	 */
	struct UCustomizationOptionThumbnail_C_OnAnalogValueChanged_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FAnalogInputEvent                                   InAnalogInputEvent;                                      // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.HideTooltip
	 */
	struct UCustomizationOptionThumbnail_C_HideTooltip_Params
	{	};

	/**
	 * Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.GamepadNav_MenuConfirm_Release
	 */
	struct UCustomizationOptionThumbnail_C_GamepadNav_MenuConfirm_Release_Params
	{	};

	/**
	 * Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.GamepadNav_MenuConfirm
	 */
	struct UCustomizationOptionThumbnail_C_GamepadNav_MenuConfirm_Params
	{	};

	/**
	 * Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.OnFocusLost
	 */
	struct UCustomizationOptionThumbnail_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.OnFocusReceived
	 */
	struct UCustomizationOptionThumbnail_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.CreateTooltip
	 */
	struct UCustomizationOptionThumbnail_C_CreateTooltip_Params
	{	};

	/**
	 * Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.InitCost
	 */
	struct UCustomizationOptionThumbnail_C_InitCost_Params
	{	};

	/**
	 * Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.OnMouseButtonDown
	 */
	struct UCustomizationOptionThumbnail_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.SetIsNew
	 */
	struct UCustomizationOptionThumbnail_C_SetIsNew_Params
	{
	public:
		bool                                                       isNew;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.UpdateRarity
	 */
	struct UCustomizationOptionThumbnail_C_UpdateRarity_Params
	{
	public:
		EPlayerCustomizationRarity                                 Rarity;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.ShowLockedOverlay
	 */
	struct UCustomizationOptionThumbnail_C_ShowLockedOverlay_Params
	{	};

	/**
	 * Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.HideLockedOverlay
	 */
	struct UCustomizationOptionThumbnail_C_HideLockedOverlay_Params
	{	};

	/**
	 * Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.SetIsEquipped
	 */
	struct UCustomizationOptionThumbnail_C_SetIsEquipped_Params
	{
	public:
		bool                                                       equipped;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.SetHovered
	 */
	struct UCustomizationOptionThumbnail_C_SetHovered_Params
	{
	public:
		bool                                                       IsHovered;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.Initialize
	 */
	struct UCustomizationOptionThumbnail_C_Initialize_Params
	{
	public:
		struct FUICustomizationItem                                Item;                                                    // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		int32_t                                                    Index;                                                   // 0x0030(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECustomizationMenuCategory                                 Category;                                                // 0x0034(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.Construct
	 */
	struct UCustomizationOptionThumbnail_C_Construct_Params
	{	};

	/**
	 * Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.BndEvt__Button_28_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCustomizationOptionThumbnail_C_BndEvt__Button_28_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.BndEvt__Button_28_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCustomizationOptionThumbnail_C_BndEvt__Button_28_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.BndEvt__Button_28_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCustomizationOptionThumbnail_C_BndEvt__Button_28_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.BndEvt__Button_28_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 */
	struct UCustomizationOptionThumbnail_C_BndEvt__Button_28_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.BndEvt__Button_28_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UCustomizationOptionThumbnail_C_BndEvt__Button_28_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.ExecuteUbergraph_CustomizationOptionThumbnail
	 */
	struct UCustomizationOptionThumbnail_C_ExecuteUbergraph_CustomizationOptionThumbnail_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.Event_OnReleased__DelegateSignature
	 */
	struct UCustomizationOptionThumbnail_C_Event_OnReleased__DelegateSignature_Params
	{
	public:
		class UCustomizationOptionThumbnail_C*                     Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.Event_OnPressed__DelegateSignature
	 */
	struct UCustomizationOptionThumbnail_C_Event_OnPressed__DelegateSignature_Params
	{
	public:
		class UCustomizationOptionThumbnail_C*                     Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.Event_OnUnhovered__DelegateSignature
	 */
	struct UCustomizationOptionThumbnail_C_Event_OnUnhovered__DelegateSignature_Params
	{
	public:
		class UCustomizationOptionThumbnail_C*                     Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.Event_OnHovered__DelegateSignature
	 */
	struct UCustomizationOptionThumbnail_C_Event_OnHovered__DelegateSignature_Params
	{
	public:
		class UCustomizationOptionThumbnail_C*                     Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomizationOptionThumbnail.CustomizationOptionThumbnail_C.Event_OnClicked__DelegateSignature
	 */
	struct UCustomizationOptionThumbnail_C_Event_OnClicked__DelegateSignature_Params
	{
	public:
		class UCustomizationOptionThumbnail_C*                     Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
