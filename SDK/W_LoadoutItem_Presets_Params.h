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
	 * Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.LoadPresets (ItemClass)
	 */
	struct UW_LoadoutItem_Presets_C_LoadPresets_ItemClass_Params
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.FindSelectedPreset
	 */
	struct UW_LoadoutItem_Presets_C_FindSelectedPreset_Params
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Return_Value;                                            // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RBII[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UW_LoadoutItem_Preset_C*                             Loadout_Item_Preset;                                     // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.CanRenamePreset
	 */
	struct UW_LoadoutItem_Presets_C_CanRenamePreset_Params
	{
	public:
		bool                                                       Return_Value;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HF4G[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.GetSelectedPresetWidget
	 */
	struct UW_LoadoutItem_Presets_C_GetSelectedPresetWidget_Params
	{
	public:
		class UW_LoadoutItem_Preset_C*                             Return_Value;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.IsRenamingPreset
	 */
	struct UW_LoadoutItem_Presets_C_IsRenamingPreset_Params
	{
	public:
		bool                                                       Return_Value;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XM56[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.ConflictsWithOtherPresets
	 */
	struct UW_LoadoutItem_Presets_C_ConflictsWithOtherPresets_Params
	{
	public:
		class UW_LoadoutItem_Preset_C*                             Loadout_Item_Preset;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                InText;                                                  // 0x0008(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       Return_Value;                                            // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G7T8[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.UnhoverAllPresetsExcept
	 */
	struct UW_LoadoutItem_Presets_C_UnhoverAllPresetsExcept_Params
	{
	public:
		class UW_LoadoutItem_Preset_C*                             Loadout_Item_Preset;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.DeselectAllPresetsExcept
	 */
	struct UW_LoadoutItem_Presets_C_DeselectAllPresetsExcept_Params
	{
	public:
		class UW_LoadoutItem_Preset_C*                             Loadout_Item_Preset;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.StopRenamingPreset
	 */
	struct UW_LoadoutItem_Presets_C_StopRenamingPreset_Params
	{	};

	/**
	 * Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.StartRenamingPreset
	 */
	struct UW_LoadoutItem_Presets_C_StartRenamingPreset_Params
	{	};

	/**
	 * Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.Enter
	 */
	struct UW_LoadoutItem_Presets_C_Enter_Params
	{	};

	/**
	 * Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.Exit
	 */
	struct UW_LoadoutItem_Presets_C_Exit_Params
	{	};

	/**
	 * Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.Escape
	 */
	struct UW_LoadoutItem_Presets_C_Escape_Params
	{	};

	/**
	 * Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.Select
	 */
	struct UW_LoadoutItem_Presets_C_Select_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TSFZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.Click
	 */
	struct UW_LoadoutItem_Presets_C_Click_Params
	{	};

	/**
	 * Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.Unhover
	 */
	struct UW_LoadoutItem_Presets_C_Unhover_Params
	{	};

	/**
	 * Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.Hover
	 */
	struct UW_LoadoutItem_Presets_C_Hover_Params
	{	};

	/**
	 * Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.PreviousRow
	 */
	struct UW_LoadoutItem_Presets_C_PreviousRow_Params
	{	};

	/**
	 * Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.NextRow
	 */
	struct UW_LoadoutItem_Presets_C_NextRow_Params
	{	};

	/**
	 * Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.OnKeyUp
	 */
	struct UW_LoadoutItem_Presets_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.OnKeyDown
	 */
	struct UW_LoadoutItem_Presets_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.InitializeWidget
	 */
	struct UW_LoadoutItem_Presets_C_InitializeWidget_Params
	{	};

	/**
	 * Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.OnLoadoutItemPresetButtonClicked
	 */
	struct UW_LoadoutItem_Presets_C_OnLoadoutItemPresetButtonClicked_Params
	{
	public:
		class UW_LoadoutItem_Preset_C*                             LoadoutItemPresetWidget;                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.OnLoadoutItemPresetButtonHovered
	 */
	struct UW_LoadoutItem_Presets_C_OnLoadoutItemPresetButtonHovered_Params
	{
	public:
		class UW_LoadoutItem_Preset_C*                             LoadoutItemPresetWidget;                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.Construct
	 */
	struct UW_LoadoutItem_Presets_C_Construct_Params
	{	};

	/**
	 * Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.ExecuteUbergraph_W_LoadoutItem_Presets
	 */
	struct UW_LoadoutItem_Presets_C_ExecuteUbergraph_W_LoadoutItem_Presets_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
