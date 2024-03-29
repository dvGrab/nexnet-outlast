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
	 * Function W_WeaponWheel_MagazineDisplay.W_WeaponWheel_MagazineDisplay_C.PopulateSlotIndexToMagsMap
	 */
	struct UW_WeaponWheel_MagazineDisplay_C_PopulateSlotIndexToMagsMap_Params
	{	};

	/**
	 * Function W_WeaponWheel_MagazineDisplay.W_WeaponWheel_MagazineDisplay_C.GetMaxSlots
	 */
	struct UW_WeaponWheel_MagazineDisplay_C_GetMaxSlots_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel_MagazineDisplay.W_WeaponWheel_MagazineDisplay_C.CreateMagSlot
	 */
	struct UW_WeaponWheel_MagazineDisplay_C_CreateMagSlot_Params
	{
	public:
		class UW_WeaponWheel_MagazineSlot_C*                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel_MagazineDisplay.W_WeaponWheel_MagazineDisplay_C.UpdateMagIcon
	 */
	struct UW_WeaponWheel_MagazineDisplay_C_UpdateMagIcon_Params
	{
	public:
		int32_t                                                    MagIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CurrentAmmo;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel_MagazineDisplay.W_WeaponWheel_MagazineDisplay_C.Initialize
	 */
	struct UW_WeaponWheel_MagazineDisplay_C_Initialize_Params
	{
	public:
		class ABaseMagazineWeapon*                                 InMagazineWeapon;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      IconSize;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel_MagazineDisplay.W_WeaponWheel_MagazineDisplay_C.CreateMags
	 */
	struct UW_WeaponWheel_MagazineDisplay_C_CreateMags_Params
	{	};

	/**
	 * Function W_WeaponWheel_MagazineDisplay.W_WeaponWheel_MagazineDisplay_C.CreateMagOutline
	 */
	struct UW_WeaponWheel_MagazineDisplay_C_CreateMagOutline_Params
	{
	public:
		class UW_WeaponWheel_MagazineSlot_C*                       MagSlot;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel_MagazineDisplay.W_WeaponWheel_MagazineDisplay_C.CreateMag
	 */
	struct UW_WeaponWheel_MagazineDisplay_C_CreateMag_Params
	{
	public:
		class UW_WeaponWheel_MagazineSlot_C*                       MagSlot;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel_MagazineDisplay.W_WeaponWheel_MagazineDisplay_C.Tick
	 */
	struct UW_WeaponWheel_MagazineDisplay_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel_MagazineDisplay.W_WeaponWheel_MagazineDisplay_C.PreConstruct
	 */
	struct UW_WeaponWheel_MagazineDisplay_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_WeaponWheel_MagazineDisplay.W_WeaponWheel_MagazineDisplay_C.ExecuteUbergraph_W_WeaponWheel_MagazineDisplay
	 */
	struct UW_WeaponWheel_MagazineDisplay_C_ExecuteUbergraph_W_WeaponWheel_MagazineDisplay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
