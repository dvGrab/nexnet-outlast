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
	 * Function W_WeaponWheel_MultiItem_Selection.W_WeaponWheel_MultiItem_Selection_C.DetermineIconColor
	 */
	struct UW_WeaponWheel_MultiItem_Selection_C_DetermineIconColor_Params
	{
	public:
		class UImage*                                              Next_Icon;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    IndexToCheck;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel_MultiItem_Selection.W_WeaponWheel_MultiItem_Selection_C.UnhighlightIcon
	 */
	struct UW_WeaponWheel_MultiItem_Selection_C_UnhighlightIcon_Params
	{
	public:
		class UImage*                                              Arrow;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel_MultiItem_Selection.W_WeaponWheel_MultiItem_Selection_C.HighlightIcon
	 */
	struct UW_WeaponWheel_MultiItem_Selection_C_HighlightIcon_Params
	{
	public:
		class UImage*                                              Arrow;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel_MultiItem_Selection.W_WeaponWheel_MultiItem_Selection_C.Deselect
	 */
	struct UW_WeaponWheel_MultiItem_Selection_C_Deselect_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GUO7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_WeaponWheel_MultiItem_Selection.W_WeaponWheel_MultiItem_Selection_C.Select
	 */
	struct UW_WeaponWheel_MultiItem_Selection_C_Select_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel_MultiItem_Selection.W_WeaponWheel_MultiItem_Selection_C.Refresh
	 */
	struct UW_WeaponWheel_MultiItem_Selection_C_Refresh_Params
	{
	public:
		int32_t                                                    NewAmount;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StartingItemIndex;                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel_MultiItem_Selection.W_WeaponWheel_MultiItem_Selection_C.PreviousItem
	 */
	struct UW_WeaponWheel_MultiItem_Selection_C_PreviousItem_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_WeaponWheel_MultiItem_Selection.W_WeaponWheel_MultiItem_Selection_C.NextItem
	 */
	struct UW_WeaponWheel_MultiItem_Selection_C_NextItem_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_WeaponWheel_MultiItem_Selection.W_WeaponWheel_MultiItem_Selection_C.CreateIndex
	 */
	struct UW_WeaponWheel_MultiItem_Selection_C_CreateIndex_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
