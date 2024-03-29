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
	 * Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.Construct
	 */
	struct UW_HotkeyBar_Entry_C_Construct_Params
	{	};

	/**
	 * Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.PreConstruct
	 */
	struct UW_HotkeyBar_Entry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.SetBinding
	 */
	struct UW_HotkeyBar_Entry_C_SetBinding_Params
	{
	public:
		struct Fst_HotkeySettings                                  Hotkey;                                                  // 0x0000(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature
	 */
	struct UW_HotkeyBar_Entry_C_BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_1_Unhovered__DelegateSignature
	 */
	struct UW_HotkeyBar_Entry_C_BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_1_Unhovered__DelegateSignature_Params
	{	};

	/**
	 * Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
	 */
	struct UW_HotkeyBar_Entry_C_BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_3_Pressed__DelegateSignature
	 */
	struct UW_HotkeyBar_Entry_C_BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_3_Pressed__DelegateSignature_Params
	{	};

	/**
	 * Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_4_Released__DelegateSignature
	 */
	struct UW_HotkeyBar_Entry_C_BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_4_Released__DelegateSignature_Params
	{	};

	/**
	 * Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.ExecuteUbergraph_W_HotkeyBar_Entry
	 */
	struct UW_HotkeyBar_Entry_C_ExecuteUbergraph_W_HotkeyBar_Entry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZSL1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.OnHotkeyButtonClicked__DelegateSignature
	 */
	struct UW_HotkeyBar_Entry_C_OnHotkeyButtonClicked__DelegateSignature_Params
	{
	public:
		class UW_HotkeyBar_Entry_C*                                TriggeringHotkeyEntry;                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
