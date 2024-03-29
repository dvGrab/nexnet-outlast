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
	 * Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.CreateIcon
	 */
	struct UW_Loadout_Munition_SummaryEntry_C_CreateIcon_Params
	{	};

	/**
	 * Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.GetAmmoIcon
	 */
	struct UW_Loadout_Munition_SummaryEntry_C_GetAmmoIcon_Params
	{	};

	/**
	 * Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.GetAmmoName
	 */
	struct UW_Loadout_Munition_SummaryEntry_C_GetAmmoName_Params
	{
	public:
		class FText                                                AmmoName;                                                // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.GetItemIcon
	 */
	struct UW_Loadout_Munition_SummaryEntry_C_GetItemIcon_Params
	{
	public:
		class UTexture2D*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.GetAmmoInfo
	 */
	struct UW_Loadout_Munition_SummaryEntry_C_GetAmmoInfo_Params
	{	};

	/**
	 * Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.UpdateCurrentSlot
	 */
	struct UW_Loadout_Munition_SummaryEntry_C_UpdateCurrentSlot_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    CurrentSlot;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.UpdateCurrentItemMap
	 */
	struct UW_Loadout_Munition_SummaryEntry_C_UpdateCurrentItemMap_Params
	{
	public:
		TMap<EItemCategory, class UClass*>                         ItemCategory;                                            // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.Reveal
	 */
	struct UW_Loadout_Munition_SummaryEntry_C_Reveal_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.Hide
	 */
	struct UW_Loadout_Munition_SummaryEntry_C_Hide_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Collapse;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.PreConstruct
	 */
	struct UW_Loadout_Munition_SummaryEntry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.Construct
	 */
	struct UW_Loadout_Munition_SummaryEntry_C_Construct_Params
	{	};

	/**
	 * Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.UpdateActiveLoadout
	 */
	struct UW_Loadout_Munition_SummaryEntry_C_UpdateActiveLoadout_Params
	{
	public:
		struct FSavedLoadout                                       ActiveLoadout;                                           // 0x0000(0x0178)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.SetLoadoutWidget
	 */
	struct UW_Loadout_Munition_SummaryEntry_C_SetLoadoutWidget_Params
	{
	public:
		class UW_Loadout_C*                                        LoadoutWidget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.UpdateAmmunition
	 */
	struct UW_Loadout_Munition_SummaryEntry_C_UpdateAmmunition_Params
	{
	public:
		class UClass*                                              Weapon;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                AmmoType;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Count;                                                   // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.UpdateItem
	 */
	struct UW_Loadout_Munition_SummaryEntry_C_UpdateItem_Params
	{
	public:
		class UClass*                                              ItemData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Count;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.ExecuteUbergraph_W_Loadout_Munition_SummaryEntry
	 */
	struct UW_Loadout_Munition_SummaryEntry_C_ExecuteUbergraph_W_Loadout_Munition_SummaryEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KJVX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
