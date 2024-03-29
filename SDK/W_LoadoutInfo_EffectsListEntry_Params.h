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
	 * Function W_LoadoutInfo_EffectsListEntry.W_LoadoutInfo_EffectsListEntry_C.SetInfo
	 */
	struct UW_LoadoutInfo_EffectsListEntry_C_SetInfo_Params
	{
	public:
		struct FST_ItemEffects                                     Effect;                                                  // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutInfo_EffectsListEntry.W_LoadoutInfo_EffectsListEntry_C.UpdateActiveLoadout
	 */
	struct UW_LoadoutInfo_EffectsListEntry_C_UpdateActiveLoadout_Params
	{
	public:
		struct FSavedLoadout                                       ActiveLoadout;                                           // 0x0000(0x0178)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_LoadoutInfo_EffectsListEntry.W_LoadoutInfo_EffectsListEntry_C.UpdateCurrentSlot
	 */
	struct UW_LoadoutInfo_EffectsListEntry_C_UpdateCurrentSlot_Params
	{
	public:
		class UW_LoadoutSlot_C*                                    CurrentSlot;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutInfo_EffectsListEntry.W_LoadoutInfo_EffectsListEntry_C.UpdateCurrentItemMap
	 */
	struct UW_LoadoutInfo_EffectsListEntry_C_UpdateCurrentItemMap_Params
	{
	public:
		TMap<EItemCategory, class UClass*>                         ItemCategory;                                            // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_LoadoutInfo_EffectsListEntry.W_LoadoutInfo_EffectsListEntry_C.SetLoadoutWidget
	 */
	struct UW_LoadoutInfo_EffectsListEntry_C_SetLoadoutWidget_Params
	{
	public:
		class UW_Loadout_C*                                        LoadoutWidget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutInfo_EffectsListEntry.W_LoadoutInfo_EffectsListEntry_C.PreConstruct
	 */
	struct UW_LoadoutInfo_EffectsListEntry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_LoadoutInfo_EffectsListEntry.W_LoadoutInfo_EffectsListEntry_C.Construct
	 */
	struct UW_LoadoutInfo_EffectsListEntry_C_Construct_Params
	{	};

	/**
	 * Function W_LoadoutInfo_EffectsListEntry.W_LoadoutInfo_EffectsListEntry_C.Reveal
	 */
	struct UW_LoadoutInfo_EffectsListEntry_C_Reveal_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadoutInfo_EffectsListEntry.W_LoadoutInfo_EffectsListEntry_C.Hide
	 */
	struct UW_LoadoutInfo_EffectsListEntry_C_Hide_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Collapse;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_LoadoutInfo_EffectsListEntry.W_LoadoutInfo_EffectsListEntry_C.ExecuteUbergraph_W_LoadoutInfo_EffectsListEntry
	 */
	struct UW_LoadoutInfo_EffectsListEntry_C_ExecuteUbergraph_W_LoadoutInfo_EffectsListEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L7YY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
