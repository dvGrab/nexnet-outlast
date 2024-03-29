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
	 * Function W_Hotkeys.W_Hotkeys_C.Construct
	 */
	struct UW_Hotkeys_C_Construct_Params
	{	};

	/**
	 * Function W_Hotkeys.W_Hotkeys_C.OnQuickThrowStart_Event_1
	 */
	struct UW_Hotkeys_C_OnQuickThrowStart_Event_1_Params
	{
	public:
		class ABaseItem*                                           LastItemBeforeQuickThrow;                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABaseItem*                                           QuickThrowGrenade;                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Hotkeys.W_Hotkeys_C.OnQuickThrowEnd_Event_1
	 */
	struct UW_Hotkeys_C_OnQuickThrowEnd_Event_1_Params
	{
	public:
		class ABaseItem*                                           QuickThrowGrenade;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Hotkeys.W_Hotkeys_C.OnSecondarySightToggled_Event_1
	 */
	struct UW_Hotkeys_C_OnSecondarySightToggled_Event_1_Params
	{
	public:
		bool                                                       bUsingSecondarySight;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5DSX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABaseMagazineWeapon*                                 Weapon;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Hotkeys.W_Hotkeys_C.OnAttachmentLightToggled_Event_1
	 */
	struct UW_Hotkeys_C_OnAttachmentLightToggled_Event_1_Params
	{	};

	/**
	 * Function W_Hotkeys.W_Hotkeys_C.OnNightVisionGogglesToggled_Event_1
	 */
	struct UW_Hotkeys_C_OnNightVisionGogglesToggled_Event_1_Params
	{
	public:
		bool                                                       bNVGOn;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Hotkeys.W_Hotkeys_C.RefreshHotkeyInput
	 */
	struct UW_Hotkeys_C_RefreshHotkeyInput_Params
	{	};

	/**
	 * Function W_Hotkeys.W_Hotkeys_C.ExecuteUbergraph_W_Hotkeys
	 */
	struct UW_Hotkeys_C_ExecuteUbergraph_W_Hotkeys_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MPEM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
