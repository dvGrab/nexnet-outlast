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
	 * Function W_Loadout_UnitSelect_Option.W_Loadout_UnitSelect_Option_C.SetNameText
	 */
	struct UW_Loadout_UnitSelect_Option_C_SetNameText_Params
	{	};

	/**
	 * Function W_Loadout_UnitSelect_Option.W_Loadout_UnitSelect_Option_C.UpdateActiveLoadout
	 */
	struct UW_Loadout_UnitSelect_Option_C_UpdateActiveLoadout_Params
	{
	public:
		struct FSavedLoadout                                       ActiveLoadout;                                           // 0x0000(0x0178)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_Loadout_UnitSelect_Option.W_Loadout_UnitSelect_Option_C.UpdateCurrentSlot
	 */
	struct UW_Loadout_UnitSelect_Option_C_UpdateCurrentSlot_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    CurrentSlot;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_UnitSelect_Option.W_Loadout_UnitSelect_Option_C.UpdateCurrentItemMap
	 */
	struct UW_Loadout_UnitSelect_Option_C_UpdateCurrentItemMap_Params
	{
	public:
		TMap<EItemCategory, class UClass*>                         ItemCategory;                                            // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_Loadout_UnitSelect_Option.W_Loadout_UnitSelect_Option_C.SetLoadoutWidget
	 */
	struct UW_Loadout_UnitSelect_Option_C_SetLoadoutWidget_Params
	{
	public:
		class UW_Loadout_C*                                        LoadoutWidget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_UnitSelect_Option.W_Loadout_UnitSelect_Option_C.Construct
	 */
	struct UW_Loadout_UnitSelect_Option_C_Construct_Params
	{	};

	/**
	 * Function W_Loadout_UnitSelect_Option.W_Loadout_UnitSelect_Option_C.BndEvt__W_Loadout_UnitSelect_Option_W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
	 */
	struct UW_Loadout_UnitSelect_Option_C_BndEvt__W_Loadout_UnitSelect_Option_W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_UnitSelect_Option.W_Loadout_UnitSelect_Option_C.SetSelected
	 */
	struct UW_Loadout_UnitSelect_Option_C_SetSelected_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Loadout_UnitSelect_Option.W_Loadout_UnitSelect_Option_C.Reveal
	 */
	struct UW_Loadout_UnitSelect_Option_C_Reveal_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_UnitSelect_Option.W_Loadout_UnitSelect_Option_C.Hide
	 */
	struct UW_Loadout_UnitSelect_Option_C_Hide_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Collapse;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Loadout_UnitSelect_Option.W_Loadout_UnitSelect_Option_C.ExecuteUbergraph_W_Loadout_UnitSelect_Option
	 */
	struct UW_Loadout_UnitSelect_Option_C_ExecuteUbergraph_W_Loadout_UnitSelect_Option_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Loadout_UnitSelect_Option.W_Loadout_UnitSelect_Option_C.UnitOptionClicked__DelegateSignature
	 */
	struct UW_Loadout_UnitSelect_Option_C_UnitOptionClicked__DelegateSignature_Params
	{
	public:
		class UW_Loadout_UnitSelect_Option_C*                      TriggeringOption;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
