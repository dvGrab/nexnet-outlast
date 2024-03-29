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
	 * Function W_WeaponWheel_ItemStat_Range.W_WeaponWheel_ItemStat_Range_C.Initialize
	 */
	struct UW_WeaponWheel_ItemStat_Range_C_Initialize_Params
	{	};

	/**
	 * Function W_WeaponWheel_ItemStat_Range.W_WeaponWheel_ItemStat_Range_C.Tick
	 */
	struct UW_WeaponWheel_ItemStat_Range_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel_ItemStat_Range.W_WeaponWheel_ItemStat_Range_C.OnRefresh
	 */
	struct UW_WeaponWheel_ItemStat_Range_C_OnRefresh_Params
	{	};

	/**
	 * Function W_WeaponWheel_ItemStat_Range.W_WeaponWheel_ItemStat_Range_C.OnWheelCreated
	 */
	struct UW_WeaponWheel_ItemStat_Range_C_OnWheelCreated_Params
	{	};

	/**
	 * Function W_WeaponWheel_ItemStat_Range.W_WeaponWheel_ItemStat_Range_C.PreConstruct
	 */
	struct UW_WeaponWheel_ItemStat_Range_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_WeaponWheel_ItemStat_Range.W_WeaponWheel_ItemStat_Range_C.ExecuteUbergraph_W_WeaponWheel_ItemStat_Range
	 */
	struct UW_WeaponWheel_ItemStat_Range_C_ExecuteUbergraph_W_WeaponWheel_ItemStat_Range_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
