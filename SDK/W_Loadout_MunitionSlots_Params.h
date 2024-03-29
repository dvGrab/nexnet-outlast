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
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.InitializePreviewSummary
	 */
	struct UW_Loadout_MunitionSlots_C_InitializePreviewSummary_Params
	{
	public:
		struct FSavedLoadout                                       PreviewLoadout;                                          // 0x0000(0x0178)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.GroupAmmo
	 */
	struct UW_Loadout_MunitionSlots_C_GroupAmmo_Params
	{
	public:
		class FName                                                AmmoType1;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AmmoCount1;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                AmmoType2;                                               // 0x000C(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AmmoCount2;                                              // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FName>                                        GroupedAmmo;                                             // 0x0018(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.ReplaceSidearmAmmo
	 */
	struct UW_Loadout_MunitionSlots_C_ReplaceSidearmAmmo_Params
	{
	public:
		class FName                                                CurrentAmmoType;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                NewAmmoType;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.ReplacePrimaryAmmo
	 */
	struct UW_Loadout_MunitionSlots_C_ReplacePrimaryAmmo_Params
	{
	public:
		class FName                                                CurrentAmmoType;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                NewAmmoType;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.RevealSlotEditorChildren
	 */
	struct UW_Loadout_MunitionSlots_C_RevealSlotEditorChildren_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.HideSlotEditorChildren
	 */
	struct UW_Loadout_MunitionSlots_C_HideSlotEditorChildren_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SwapWeaponAmmo
	 */
	struct UW_Loadout_MunitionSlots_C_SwapWeaponAmmo_Params
	{
	public:
		bool                                                       Sidearm;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CHL0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SetTacticalAddButtonVis
	 */
	struct UW_Loadout_MunitionSlots_C_SetTacticalAddButtonVis_Params
	{	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.FreeUpTacticalSlot
	 */
	struct UW_Loadout_MunitionSlots_C_FreeUpTacticalSlot_Params
	{	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.AddTacticalType
	 */
	struct UW_Loadout_MunitionSlots_C_AddTacticalType_Params
	{	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SetGrenadeAddButtonVis
	 */
	struct UW_Loadout_MunitionSlots_C_SetGrenadeAddButtonVis_Params
	{	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.GetAllGrenadeTypes
	 */
	struct UW_Loadout_MunitionSlots_C_GetAllGrenadeTypes_Params
	{	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.GetLoadoutWidget
	 */
	struct UW_Loadout_MunitionSlots_C_GetLoadoutWidget_Params
	{
	public:
		class UW_Loadout_C*                                        LoadoutWidget;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.FreeUpGrenadeSlot
	 */
	struct UW_Loadout_MunitionSlots_C_FreeUpGrenadeSlot_Params
	{	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateGrenadeSlots
	 */
	struct UW_Loadout_MunitionSlots_C_UpdateGrenadeSlots_Params
	{	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.AddGrenadeType
	 */
	struct UW_Loadout_MunitionSlots_C_AddGrenadeType_Params
	{	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateTacticalSummary
	 */
	struct UW_Loadout_MunitionSlots_C_UpdateTacticalSummary_Params
	{	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateGrenadeSummary
	 */
	struct UW_Loadout_MunitionSlots_C_UpdateGrenadeSummary_Params
	{	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateSidearmSummary
	 */
	struct UW_Loadout_MunitionSlots_C_UpdateSidearmSummary_Params
	{	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdatePrimarySummary
	 */
	struct UW_Loadout_MunitionSlots_C_UpdatePrimarySummary_Params
	{	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.CreateItemSummaryEntry
	 */
	struct UW_Loadout_MunitionSlots_C_CreateItemSummaryEntry_Params
	{
	public:
		class UClass*                                              ItemData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Count;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PU7Y[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UW_Loadout_Munition_SummaryEntry_C*                  EntryWidget;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.CreateAmmoSummaryEntry
	 */
	struct UW_Loadout_MunitionSlots_C_CreateAmmoSummaryEntry_Params
	{
	public:
		class UClass*                                              Weapon;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                AmmoType;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Count;                                                   // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DUGU[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UW_Loadout_Munition_SummaryEntry_C*                  EntryWidget;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateSummary
	 */
	struct UW_Loadout_MunitionSlots_C_UpdateSummary_Params
	{	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.GetActiveLoadout
	 */
	struct UW_Loadout_MunitionSlots_C_GetActiveLoadout_Params
	{
	public:
		struct FSavedLoadout                                       Active_Loadout;                                          // 0x0000(0x0178)  (Parm, OutParm)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.GetSidearmDefaultAmmoType
	 */
	struct UW_Loadout_MunitionSlots_C_GetSidearmDefaultAmmoType_Params
	{
	public:
		class FName                                                Output;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SingleAmmoType;                                          // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U8MM[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.GetPrimaryDefaultAmmoType
	 */
	struct UW_Loadout_MunitionSlots_C_GetPrimaryDefaultAmmoType_Params
	{
	public:
		class FName                                                Output;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SingleAmmoType;                                          // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YQRF[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.HandleRemainderSidearmAmmo
	 */
	struct UW_Loadout_MunitionSlots_C_HandleRemainderSidearmAmmo_Params
	{	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.HandleRemainderPrimaryAmmo
	 */
	struct UW_Loadout_MunitionSlots_C_HandleRemainderPrimaryAmmo_Params
	{	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateMunitionSlotEditor
	 */
	struct UW_Loadout_MunitionSlots_C_UpdateMunitionSlotEditor_Params
	{	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateMunitionEditorTotalSlotCount
	 */
	struct UW_Loadout_MunitionSlots_C_UpdateMunitionEditorTotalSlotCount_Params
	{	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.InitializeMunitionSlotEditor
	 */
	struct UW_Loadout_MunitionSlots_C_InitializeMunitionSlotEditor_Params
	{	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateTotalSidearmSlotCount
	 */
	struct UW_Loadout_MunitionSlots_C_UpdateTotalSidearmSlotCount_Params
	{	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateTotalPrimarySlotCount
	 */
	struct UW_Loadout_MunitionSlots_C_UpdateTotalPrimarySlotCount_Params
	{	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateTotalTacticalSlotCount
	 */
	struct UW_Loadout_MunitionSlots_C_UpdateTotalTacticalSlotCount_Params
	{	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateTotalGrenadeCount
	 */
	struct UW_Loadout_MunitionSlots_C_UpdateTotalGrenadeCount_Params
	{	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.ReplaceTactical
	 */
	struct UW_Loadout_MunitionSlots_C_ReplaceTactical_Params
	{
	public:
		class UClass*                                              CurrentTactical;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              NewTactical;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.EquipTactical
	 */
	struct UW_Loadout_MunitionSlots_C_EquipTactical_Params
	{
	public:
		class UClass*                                              ItemData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Count;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4CMW[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SelectTacticalType
	 */
	struct UW_Loadout_MunitionSlots_C_SelectTacticalType_Params
	{
	public:
		class UClass*                                              ItemData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.ReplaceGrenades
	 */
	struct UW_Loadout_MunitionSlots_C_ReplaceGrenades_Params
	{
	public:
		class UClass*                                              CurrentGrenade;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              NewGrenade;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.EquipGrenades
	 */
	struct UW_Loadout_MunitionSlots_C_EquipGrenades_Params
	{
	public:
		class UClass*                                              ItemData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Count;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_12LJ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SelectGrenadeType
	 */
	struct UW_Loadout_MunitionSlots_C_SelectGrenadeType_Params
	{
	public:
		class UClass*                                              ItemData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.TacticalSlotMinusCount
	 */
	struct UW_Loadout_MunitionSlots_C_TacticalSlotMinusCount_Params
	{
	public:
		class UW_Loadout_MunitionSlots_Deployable_C*               TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.TacticalSlotAddCount
	 */
	struct UW_Loadout_MunitionSlots_C_TacticalSlotAddCount_Params
	{
	public:
		class UW_Loadout_MunitionSlots_Deployable_C*               TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.CreateTacticalSlot
	 */
	struct UW_Loadout_MunitionSlots_C_CreateTacticalSlot_Params
	{
	public:
		class UClass*                                              Tactical;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                CategoryText;                                            // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.InitializeTacticals
	 */
	struct UW_Loadout_MunitionSlots_C_InitializeTacticals_Params
	{
	public:
		TArray<class UClass*>                                      Tacticals;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.GrenadeSlotMinusCount
	 */
	struct UW_Loadout_MunitionSlots_C_GrenadeSlotMinusCount_Params
	{
	public:
		class UW_Loadout_MunitionSlots_Deployable_C*               TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.GrenadeSlotAddCount
	 */
	struct UW_Loadout_MunitionSlots_C_GrenadeSlotAddCount_Params
	{
	public:
		class UW_Loadout_MunitionSlots_Deployable_C*               TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateCurrentData
	 */
	struct UW_Loadout_MunitionSlots_C_UpdateCurrentData_Params
	{	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SetSidearmAmmoCount2
	 */
	struct UW_Loadout_MunitionSlots_C_SetSidearmAmmoCount2_Params
	{
	public:
		int32_t                                                    AmmoCount;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SetSidearmAmmoCount1
	 */
	struct UW_Loadout_MunitionSlots_C_SetSidearmAmmoCount1_Params
	{
	public:
		int32_t                                                    AmmoCount;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SetPrimaryAmmoCount2
	 */
	struct UW_Loadout_MunitionSlots_C_SetPrimaryAmmoCount2_Params
	{
	public:
		int32_t                                                    AmmoCount;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SetPrimaryAmmoCount1
	 */
	struct UW_Loadout_MunitionSlots_C_SetPrimaryAmmoCount1_Params
	{
	public:
		int32_t                                                    AmmoCount;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SetPrimaryAmmoType1
	 */
	struct UW_Loadout_MunitionSlots_C_SetPrimaryAmmoType1_Params
	{
	public:
		class FName                                                AmmoType;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateSidearmSlots
	 */
	struct UW_Loadout_MunitionSlots_C_UpdateSidearmSlots_Params
	{	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdatePrimarySlots
	 */
	struct UW_Loadout_MunitionSlots_C_UpdatePrimarySlots_Params
	{	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.HideSidearm2
	 */
	struct UW_Loadout_MunitionSlots_C_HideSidearm2_Params
	{	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.DisplaySidearm2
	 */
	struct UW_Loadout_MunitionSlots_C_DisplaySidearm2_Params
	{	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.InitializeSidearmAmmo
	 */
	struct UW_Loadout_MunitionSlots_C_InitializeSidearmAmmo_Params
	{
	public:
		TArray<class FName>                                        AmmoTypes;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.InitializePrimaryAmmo
	 */
	struct UW_Loadout_MunitionSlots_C_InitializePrimaryAmmo_Params
	{
	public:
		TArray<class FName>                                        AmmoTypes;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.HidePrimary2
	 */
	struct UW_Loadout_MunitionSlots_C_HidePrimary2_Params
	{	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.DisplayPrimary2
	 */
	struct UW_Loadout_MunitionSlots_C_DisplayPrimary2_Params
	{	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SplitSlots
	 */
	struct UW_Loadout_MunitionSlots_C_SplitSlots_Params
	{
	public:
		int32_t                                                    TotalSlots;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewStack;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OriginalStack;                                           // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.CreateDeployableSlot
	 */
	struct UW_Loadout_MunitionSlots_C_CreateDeployableSlot_Params
	{
	public:
		bool                                                       IsGrenade;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0M64[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              ItemData;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                CategoryText;                                            // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UW_Loadout_MunitionSlots_Deployable_C*               OutputPin;                                               // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.GetAllDeployableItems
	 */
	struct UW_Loadout_MunitionSlots_C_GetAllDeployableItems_Params
	{	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.Initialize Deployables
	 */
	struct UW_Loadout_MunitionSlots_C_Initialize_Deployables_Params
	{
	public:
		bool                                                       IsGrenades;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6O7I[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.InitializeMunitionSlots
	 */
	struct UW_Loadout_MunitionSlots_C_InitializeMunitionSlots_Params
	{
	public:
		bool                                                       RemotePlayer;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Preview;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SetupBinds
	 */
	struct UW_Loadout_MunitionSlots_C_SetupBinds_Params
	{	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.PreConstruct
	 */
	struct UW_Loadout_MunitionSlots_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.Construct
	 */
	struct UW_Loadout_MunitionSlots_C_Construct_Params
	{	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateActiveLoadout
	 */
	struct UW_Loadout_MunitionSlots_C_UpdateActiveLoadout_Params
	{
	public:
		struct FSavedLoadout                                       ActiveLoadout;                                           // 0x0000(0x0178)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateCurrentItemMap
	 */
	struct UW_Loadout_MunitionSlots_C_UpdateCurrentItemMap_Params
	{
	public:
		TMap<EItemCategory, class UClass*>                         ItemCategory;                                            // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_btn_Summary_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
	 */
	struct UW_Loadout_MunitionSlots_C_BndEvt__W_Loadout_MunitionSlots_btn_Summary_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_btn_Minimize_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
	 */
	struct UW_Loadout_MunitionSlots_C_BndEvt__W_Loadout_MunitionSlots_btn_Minimize_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SlotClicked
	 */
	struct UW_Loadout_MunitionSlots_C_SlotClicked_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SlotHovered
	 */
	struct UW_Loadout_MunitionSlots_C_SlotHovered_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SlotUnhovered
	 */
	struct UW_Loadout_MunitionSlots_C_SlotUnhovered_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SetLoadoutWidget
	 */
	struct UW_Loadout_MunitionSlots_C_SetLoadoutWidget_Params
	{
	public:
		class UW_Loadout_C*                                        LoadoutWidget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_btn_NewPrimaryAmmoType_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
	 */
	struct UW_Loadout_MunitionSlots_C_BndEvt__W_Loadout_MunitionSlots_btn_NewPrimaryAmmoType_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_btn_Add_PrimaryAmmo1_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
	 */
	struct UW_Loadout_MunitionSlots_C_BndEvt__W_Loadout_MunitionSlots_btn_Add_PrimaryAmmo1_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_btn_Add_PrimaryAmmo2_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
	 */
	struct UW_Loadout_MunitionSlots_C_BndEvt__W_Loadout_MunitionSlots_btn_Add_PrimaryAmmo2_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_btn_NewSidearmAmmoType_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature
	 */
	struct UW_Loadout_MunitionSlots_C_BndEvt__W_Loadout_MunitionSlots_btn_NewSidearmAmmoType_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_btn_Add_SidearmAmmo1_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature
	 */
	struct UW_Loadout_MunitionSlots_C_BndEvt__W_Loadout_MunitionSlots_btn_Add_SidearmAmmo1_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_btn_Add_SidearmAmmo2_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature
	 */
	struct UW_Loadout_MunitionSlots_C_BndEvt__W_Loadout_MunitionSlots_btn_Add_SidearmAmmo2_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.Reveal
	 */
	struct UW_Loadout_MunitionSlots_C_Reveal_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_btn_NewGrenadeType_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature
	 */
	struct UW_Loadout_MunitionSlots_C_BndEvt__W_Loadout_MunitionSlots_btn_NewGrenadeType_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.DeployableSlotClicked
	 */
	struct UW_Loadout_MunitionSlots_C_DeployableSlotClicked_Params
	{
	public:
		class UW_Loadout_MunitionSlots_Deployable_C*               TriggeringDeployableSlot;                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UW_LoadoutSlot_C*                                    LoadoutSlot;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.DeployableSlotHovered
	 */
	struct UW_Loadout_MunitionSlots_C_DeployableSlotHovered_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    LoadoutSlot;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UW_Loadout_MunitionSlots_Deployable_C*               TriggeringDeployableSlot;                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.DeployableSlotUnhovered
	 */
	struct UW_Loadout_MunitionSlots_C_DeployableSlotUnhovered_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    LoadoutSlot;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UW_Loadout_MunitionSlots_Deployable_C*               TriggeringDeployableSlot;                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_PrimaryAmmo1_K2Node_ComponentBoundEvent_9_OnSlotClicked__DelegateSignature
	 */
	struct UW_Loadout_MunitionSlots_C_BndEvt__W_Loadout_MunitionSlots_PrimaryAmmo1_K2Node_ComponentBoundEvent_9_OnSlotClicked__DelegateSignature_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_PrimaryAmmo2_K2Node_ComponentBoundEvent_10_OnSlotClicked__DelegateSignature
	 */
	struct UW_Loadout_MunitionSlots_C_BndEvt__W_Loadout_MunitionSlots_PrimaryAmmo2_K2Node_ComponentBoundEvent_10_OnSlotClicked__DelegateSignature_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_SidearmAmmo1_K2Node_ComponentBoundEvent_11_OnSlotClicked__DelegateSignature
	 */
	struct UW_Loadout_MunitionSlots_C_BndEvt__W_Loadout_MunitionSlots_SidearmAmmo1_K2Node_ComponentBoundEvent_11_OnSlotClicked__DelegateSignature_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_SidearmAmmo2_K2Node_ComponentBoundEvent_12_OnSlotClicked__DelegateSignature
	 */
	struct UW_Loadout_MunitionSlots_C_BndEvt__W_Loadout_MunitionSlots_SidearmAmmo2_K2Node_ComponentBoundEvent_12_OnSlotClicked__DelegateSignature_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.UpdateCurrentSlot
	 */
	struct UW_Loadout_MunitionSlots_C_UpdateCurrentSlot_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    CurrentSlot;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_ArmorSlotPrimaryAmmoCount_K2Node_ComponentBoundEvent_13_OnSlotCountChanged__DelegateSignature
	 */
	struct UW_Loadout_MunitionSlots_C_BndEvt__W_Loadout_MunitionSlots_ArmorSlotPrimaryAmmoCount_K2Node_ComponentBoundEvent_13_OnSlotCountChanged__DelegateSignature_Params
	{
	public:
		class UW_Loadout_MunitionCountSlot_C*                      TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.Hide
	 */
	struct UW_Loadout_MunitionSlots_C_Hide_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Collapse;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_ArmorSlotSidearmAmmoCount_K2Node_ComponentBoundEvent_14_OnSlotCountChanged__DelegateSignature
	 */
	struct UW_Loadout_MunitionSlots_C_BndEvt__W_Loadout_MunitionSlots_ArmorSlotSidearmAmmoCount_K2Node_ComponentBoundEvent_14_OnSlotCountChanged__DelegateSignature_Params
	{
	public:
		class UW_Loadout_MunitionCountSlot_C*                      TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_ArmorSlotGrenadeCount_K2Node_ComponentBoundEvent_15_OnSlotCountChanged__DelegateSignature
	 */
	struct UW_Loadout_MunitionSlots_C_BndEvt__W_Loadout_MunitionSlots_ArmorSlotGrenadeCount_K2Node_ComponentBoundEvent_15_OnSlotCountChanged__DelegateSignature_Params
	{
	public:
		class UW_Loadout_MunitionCountSlot_C*                      TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_ArmorSlotTacticalCount_K2Node_ComponentBoundEvent_16_OnSlotCountChanged__DelegateSignature
	 */
	struct UW_Loadout_MunitionSlots_C_BndEvt__W_Loadout_MunitionSlots_ArmorSlotTacticalCount_K2Node_ComponentBoundEvent_16_OnSlotCountChanged__DelegateSignature_Params
	{
	public:
		class UW_Loadout_MunitionCountSlot_C*                      TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.PrimaryWeaponChanged
	 */
	struct UW_Loadout_MunitionSlots_C_PrimaryWeaponChanged_Params
	{	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SidearmWeaponChanged
	 */
	struct UW_Loadout_MunitionSlots_C_SidearmWeaponChanged_Params
	{	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.PrimaryAmmoChanged
	 */
	struct UW_Loadout_MunitionSlots_C_PrimaryAmmoChanged_Params
	{	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SidearmAmmoChanged
	 */
	struct UW_Loadout_MunitionSlots_C_SidearmAmmoChanged_Params
	{	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.SidearmAmmoCountSaved
	 */
	struct UW_Loadout_MunitionSlots_C_SidearmAmmoCountSaved_Params
	{	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.PrimaryAmmoCountSaved
	 */
	struct UW_Loadout_MunitionSlots_C_PrimaryAmmoCountSaved_Params
	{	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.GrenadeCountSaved
	 */
	struct UW_Loadout_MunitionSlots_C_GrenadeCountSaved_Params
	{	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.GrenadeEquipped
	 */
	struct UW_Loadout_MunitionSlots_C_GrenadeEquipped_Params
	{	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.TacticalEquipped
	 */
	struct UW_Loadout_MunitionSlots_C_TacticalEquipped_Params
	{	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.TacticalCountSaved
	 */
	struct UW_Loadout_MunitionSlots_C_TacticalCountSaved_Params
	{	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_btn_NewTacticalType_K2Node_ComponentBoundEvent_17_Clicked__DelegateSignature
	 */
	struct UW_Loadout_MunitionSlots_C_BndEvt__W_Loadout_MunitionSlots_btn_NewTacticalType_K2Node_ComponentBoundEvent_17_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.BndEvt__W_Loadout_MunitionSlots_btn_SlotEdit_K2Node_ComponentBoundEvent_18_Clicked__DelegateSignature
	 */
	struct UW_Loadout_MunitionSlots_C_BndEvt__W_Loadout_MunitionSlots_btn_SlotEdit_K2Node_ComponentBoundEvent_18_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.RevealSlotEditor
	 */
	struct UW_Loadout_MunitionSlots_C_RevealSlotEditor_Params
	{	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.HideSlotEditor
	 */
	struct UW_Loadout_MunitionSlots_C_HideSlotEditor_Params
	{	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.AmmoSelected
	 */
	struct UW_Loadout_MunitionSlots_C_AmmoSelected_Params
	{
	public:
		class FName                                                NewAmmoType;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              Weapon;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.ExecuteUbergraph_W_Loadout_MunitionSlots
	 */
	struct UW_Loadout_MunitionSlots_C_ExecuteUbergraph_W_Loadout_MunitionSlots_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z6M7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.OnGrenadesChanged__DelegateSignature
	 */
	struct UW_Loadout_MunitionSlots_C_OnGrenadesChanged__DelegateSignature_Params
	{
	public:
		TArray<class UClass*>                                      Grenades;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.OnPrimaryAmmoChanged__DelegateSignature
	 */
	struct UW_Loadout_MunitionSlots_C_OnPrimaryAmmoChanged__DelegateSignature_Params
	{
	public:
		TArray<class FName>                                        PrimaryAmmo;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.OnSidearmAmmoChanged__DelegateSignature
	 */
	struct UW_Loadout_MunitionSlots_C_OnSidearmAmmoChanged__DelegateSignature_Params
	{
	public:
		TArray<class FName>                                        SidearmAmmo;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.OnMunitionSlotCountChanged__DelegateSignature
	 */
	struct UW_Loadout_MunitionSlots_C_OnMunitionSlotCountChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    PrimaryAmmoSlotCount;                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SidearmAmmoSlotCount;                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    GrenadeSlotCount;                                        // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TacticalSlotCount;                                       // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.OnMunitionSlotUnhovered__DelegateSignature
	 */
	struct UW_Loadout_MunitionSlots_C_OnMunitionSlotUnhovered__DelegateSignature_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.OnMunitionSlotHovered__DelegateSignature
	 */
	struct UW_Loadout_MunitionSlots_C_OnMunitionSlotHovered__DelegateSignature_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C.OnMunitionSlotClicked__DelegateSignature
	 */
	struct UW_Loadout_MunitionSlots_C_OnMunitionSlotClicked__DelegateSignature_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    TriggeringSlot;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
