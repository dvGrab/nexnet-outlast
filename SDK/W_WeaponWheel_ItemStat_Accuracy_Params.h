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
	 * Function W_WeaponWheel_ItemStat_Accuracy.W_WeaponWheel_ItemStat_Accuracy_C.Initialize
	 */
	struct UW_WeaponWheel_ItemStat_Accuracy_C_Initialize_Params
	{	};

	/**
	 * Function W_WeaponWheel_ItemStat_Accuracy.W_WeaponWheel_ItemStat_Accuracy_C.Tick
	 */
	struct UW_WeaponWheel_ItemStat_Accuracy_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_WeaponWheel_ItemStat_Accuracy.W_WeaponWheel_ItemStat_Accuracy_C.OnRefresh
	 */
	struct UW_WeaponWheel_ItemStat_Accuracy_C_OnRefresh_Params
	{	};

	/**
	 * Function W_WeaponWheel_ItemStat_Accuracy.W_WeaponWheel_ItemStat_Accuracy_C.OnWheelCreated
	 */
	struct UW_WeaponWheel_ItemStat_Accuracy_C_OnWheelCreated_Params
	{	};

	/**
	 * Function W_WeaponWheel_ItemStat_Accuracy.W_WeaponWheel_ItemStat_Accuracy_C.PreConstruct
	 */
	struct UW_WeaponWheel_ItemStat_Accuracy_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_WeaponWheel_ItemStat_Accuracy.W_WeaponWheel_ItemStat_Accuracy_C.ExecuteUbergraph_W_WeaponWheel_ItemStat_Accuracy
	 */
	struct UW_WeaponWheel_ItemStat_Accuracy_C_ExecuteUbergraph_W_WeaponWheel_ItemStat_Accuracy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
