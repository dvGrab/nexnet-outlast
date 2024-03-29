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
	 * Function ColorPastille.ColorPastille_C.CreateTooltip
	 */
	struct UColorPastille_C_CreateTooltip_Params
	{	};

	/**
	 * Function ColorPastille.ColorPastille_C.OnAnalogValueChanged
	 */
	struct UColorPastille_C_OnAnalogValueChanged_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FAnalogInputEvent                                   InAnalogInputEvent;                                      // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ColorPastille.ColorPastille_C.GamepadNav_MenuConfirm_Released
	 */
	struct UColorPastille_C_GamepadNav_MenuConfirm_Released_Params
	{	};

	/**
	 * Function ColorPastille.ColorPastille_C.GamepadNav_MenuConfirm
	 */
	struct UColorPastille_C_GamepadNav_MenuConfirm_Params
	{	};

	/**
	 * Function ColorPastille.ColorPastille_C.SetHovered
	 */
	struct UColorPastille_C_SetHovered_Params
	{
	public:
		bool                                                       IsHovered;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5UYI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ColorPastille.ColorPastille_C.OnFocusLost
	 */
	struct UColorPastille_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function ColorPastille.ColorPastille_C.OnFocusReceived
	 */
	struct UColorPastille_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ColorPastille.ColorPastille_C.SetSelected
	 */
	struct UColorPastille_C_SetSelected_Params
	{
	public:
		bool                                                       Selected;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ColorPastille.ColorPastille_C.Init
	 */
	struct UColorPastille_C_Init_Params
	{
	public:
		struct FRBHairColorOption                                  Hair_Color;                                              // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function ColorPastille.ColorPastille_C.Construct
	 */
	struct UColorPastille_C_Construct_Params
	{	};

	/**
	 * Function ColorPastille.ColorPastille_C.BndEvt__ColorButton_ColorButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UColorPastille_C_BndEvt__ColorButton_ColorButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ColorPastille.ColorPastille_C.BndEvt__ColorButton_ColorButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UColorPastille_C_BndEvt__ColorButton_ColorButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ColorPastille.ColorPastille_C.BndEvt__ColorButton_ColorButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UColorPastille_C_BndEvt__ColorButton_ColorButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ColorPastille.ColorPastille_C.ExecuteUbergraph_ColorPastille
	 */
	struct UColorPastille_C_ExecuteUbergraph_ColorPastille_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ColorPastille.ColorPastille_C.OnHovered__DelegateSignature
	 */
	struct UColorPastille_C_OnHovered__DelegateSignature_Params
	{
	public:
		struct FRBHairColorOption                                  HoveredColor;                                            // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function ColorPastille.ColorPastille_C.OnClicked__DelegateSignature
	 */
	struct UColorPastille_C_OnClicked__DelegateSignature_Params
	{
	public:
		class UColorPastille_C*                                    ClickedPastille;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
