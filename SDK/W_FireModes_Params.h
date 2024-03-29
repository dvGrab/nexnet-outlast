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
	 * Function W_FireModes.W_FireModes_C.IsFadingOut
	 */
	struct UW_FireModes_C_IsFadingOut_Params
	{
	public:
		bool                                                       Return_Value;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_FireModes.W_FireModes_C.IsFadeOutTimerActive
	 */
	struct UW_FireModes_C_IsFadeOutTimerActive_Params
	{
	public:
		bool                                                       Return_Value;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_FireModes.W_FireModes_C.SetStyle
	 */
	struct UW_FireModes_C_SetStyle_Params
	{
	public:
		int32_t                                                    Option;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_FireModes.W_FireModes_C.FadeOut
	 */
	struct UW_FireModes_C_FadeOut_Params
	{	};

	/**
	 * Function W_FireModes.W_FireModes_C.UpdateAvailableFireModes
	 */
	struct UW_FireModes_C_UpdateAvailableFireModes_Params
	{
	public:
		class ABaseWeapon*                                         Weapon;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_FireModes.W_FireModes_C.Deselect
	 */
	struct UW_FireModes_C_Deselect_Params
	{
	public:
		class UW_FireMode_C*                                       FireModeWidget;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_FireModes.W_FireModes_C.DeselectAll
	 */
	struct UW_FireModes_C_DeselectAll_Params
	{	};

	/**
	 * Function W_FireModes.W_FireModes_C.DeselectAllExpect
	 */
	struct UW_FireModes_C_DeselectAllExpect_Params
	{
	public:
		class UW_FireMode_C*                                       FireModeWidget;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_FireModes.W_FireModes_C.Select
	 */
	struct UW_FireModes_C_Select_Params
	{
	public:
		class UW_FireMode_C*                                       FireModeWidget;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_FireModes.W_FireModes_C.SetFireMode
	 */
	struct UW_FireModes_C_SetFireMode_Params
	{
	public:
		EFireMode                                                  newFireMode;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_FireModes.W_FireModes_C.OnWeaponEquipped
	 */
	struct UW_FireModes_C_OnWeaponEquipped_Params
	{
	public:
		class ABaseWeapon*                                         NewWeapon;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_FireModes.W_FireModes_C.ExecuteUbergraph_W_FireModes
	 */
	struct UW_FireModes_C_ExecuteUbergraph_W_FireModes_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LPP7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
