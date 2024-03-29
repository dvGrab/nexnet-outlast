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
	 * Function W_MagCheckOverview.W_MagCheckOverview_C.UnhighlightAllMags
	 */
	struct UW_MagCheckOverview_C_UnhighlightAllMags_Params
	{	};

	/**
	 * Function W_MagCheckOverview.W_MagCheckOverview_C.HighlightCurrentMag
	 */
	struct UW_MagCheckOverview_C_HighlightCurrentMag_Params
	{
	public:
		class ABaseMagazineWeapon*                                 MagazineWeapon;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_MagCheckOverview.W_MagCheckOverview_C.RefreshMags
	 */
	struct UW_MagCheckOverview_C_RefreshMags_Params
	{
	public:
		class ABaseMagazineWeapon*                                 MagazineWeapon;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_MagCheckOverview.W_MagCheckOverview_C.Construct
	 */
	struct UW_MagCheckOverview_C_Construct_Params
	{	};

	/**
	 * Function W_MagCheckOverview.W_MagCheckOverview_C.OnWeaponMagCheck_Event_1
	 */
	struct UW_MagCheckOverview_C_OnWeaponMagCheck_Event_1_Params
	{
	public:
		class ABaseMagazineWeapon*                                 MagazineWeapon;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_MagCheckOverview.W_MagCheckOverview_C.ExecuteUbergraph_W_MagCheckOverview
	 */
	struct UW_MagCheckOverview_C_ExecuteUbergraph_W_MagCheckOverview_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G6WS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
