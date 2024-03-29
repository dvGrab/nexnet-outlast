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
	 * Function W_Loadout_UnitSelect.W_Loadout_UnitSelect_C.SetSelectionByIndex
	 */
	struct UW_Loadout_UnitSelect_C_SetSelectionByIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9ML2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_Loadout_UnitSelect.W_Loadout_UnitSelect_C.Close
	 */
	struct UW_Loadout_UnitSelect_C_Close_Params
	{	};

	/**
	 * Function W_Loadout_UnitSelect.W_Loadout_UnitSelect_C.Open
	 */
	struct UW_Loadout_UnitSelect_C_Open_Params
	{	};

	/**
	 * Function W_Loadout_UnitSelect.W_Loadout_UnitSelect_C.BuildPlayerUnitList
	 */
	struct UW_Loadout_UnitSelect_C_BuildPlayerUnitList_Params
	{	};

	/**
	 * Function W_Loadout_UnitSelect.W_Loadout_UnitSelect_C.PopulateList
	 */
	struct UW_Loadout_UnitSelect_C_PopulateList_Params
	{	};

	/**
	 * Function W_Loadout_UnitSelect.W_Loadout_UnitSelect_C.SetNameText
	 */
	struct UW_Loadout_UnitSelect_C_SetNameText_Params
	{	};

	/**
	 * Function W_Loadout_UnitSelect.W_Loadout_UnitSelect_C.BuildSoloUnitList
	 */
	struct UW_Loadout_UnitSelect_C_BuildSoloUnitList_Params
	{	};

	/**
	 * Function W_Loadout_UnitSelect.W_Loadout_UnitSelect_C.SetLoadoutWidget
	 */
	struct UW_Loadout_UnitSelect_C_SetLoadoutWidget_Params
	{
	public:
		class UW_Loadout_C*                                        LoadoutWidget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_UnitSelect.W_Loadout_UnitSelect_C.PreConstruct
	 */
	struct UW_Loadout_UnitSelect_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Loadout_UnitSelect.W_Loadout_UnitSelect_C.Tick
	 */
	struct UW_Loadout_UnitSelect_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_UnitSelect.W_Loadout_UnitSelect_C.UpdateCurrentSlot
	 */
	struct UW_Loadout_UnitSelect_C_UpdateCurrentSlot_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    CurrentSlot;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_UnitSelect.W_Loadout_UnitSelect_C.UpdateCurrentItemMap
	 */
	struct UW_Loadout_UnitSelect_C_UpdateCurrentItemMap_Params
	{
	public:
		TMap<EItemCategory, class UClass*>                         ItemCategory;                                            // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_Loadout_UnitSelect.W_Loadout_UnitSelect_C.UpdateActiveLoadout
	 */
	struct UW_Loadout_UnitSelect_C_UpdateActiveLoadout_Params
	{
	public:
		struct FSavedLoadout                                       ActiveLoadout;                                           // 0x0000(0x0178)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_Loadout_UnitSelect.W_Loadout_UnitSelect_C.OptionSelected
	 */
	struct UW_Loadout_UnitSelect_C_OptionSelected_Params
	{
	public:
		class UW_Loadout_UnitSelect_Option_C*                      TriggeringButton;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_UnitSelect.W_Loadout_UnitSelect_C.BndEvt__W_Loadout_UnitSelect_btn_Expand_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
	 */
	struct UW_Loadout_UnitSelect_C_BndEvt__W_Loadout_UnitSelect_btn_Expand_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_UnitSelect.W_Loadout_UnitSelect_C.Hide
	 */
	struct UW_Loadout_UnitSelect_C_Hide_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Collapse;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Loadout_UnitSelect.W_Loadout_UnitSelect_C.Initialize
	 */
	struct UW_Loadout_UnitSelect_C_Initialize_Params
	{	};

	/**
	 * Function W_Loadout_UnitSelect.W_Loadout_UnitSelect_C.Reveal
	 */
	struct UW_Loadout_UnitSelect_C_Reveal_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_UnitSelect.W_Loadout_UnitSelect_C.ExecuteUbergraph_W_Loadout_UnitSelect
	 */
	struct UW_Loadout_UnitSelect_C_ExecuteUbergraph_W_Loadout_UnitSelect_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VW2N[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_Loadout_UnitSelect.W_Loadout_UnitSelect_C.OnEquippingUnitSelected__DelegateSignature
	 */
	struct UW_Loadout_UnitSelect_C_OnEquippingUnitSelected__DelegateSignature_Params
	{
	public:
		struct FST_EquippingUnit                                   EquippingUnitInfo;                                       // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
