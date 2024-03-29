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
	 * Function W_HotkeyBar.W_HotkeyBar_C.PreConstruct
	 */
	struct UW_HotkeyBar_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_HotkeyBar.W_HotkeyBar_C.Construct
	 */
	struct UW_HotkeyBar_C_Construct_Params
	{	};

	/**
	 * Function W_HotkeyBar.W_HotkeyBar_C.UpdateHints
	 */
	struct UW_HotkeyBar_C_UpdateHints_Params
	{
	public:
		TArray<struct Fst_HotkeySettings>                          Hotkeys;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_HotkeyBar.W_HotkeyBar_C.HotkeyButtonClicked
	 */
	struct UW_HotkeyBar_C_HotkeyButtonClicked_Params
	{
	public:
		class UW_HotkeyBar_Entry_C*                                TriggeringHotkeyEntry;                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_HotkeyBar.W_HotkeyBar_C.ExecuteUbergraph_W_HotkeyBar
	 */
	struct UW_HotkeyBar_C_ExecuteUbergraph_W_HotkeyBar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EE5D[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_HotkeyBar.W_HotkeyBar_C.OnHotkeyClicked__DelegateSignature
	 */
	struct UW_HotkeyBar_C_OnHotkeyClicked__DelegateSignature_Params
	{
	public:
		class FString                                              HotkeyID;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
