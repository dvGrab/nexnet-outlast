#pragma once

/**
 * Name: TRIALS
 * Version: FINAL
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
	 * Function LocalPlayerInfo_v2.LocalPlayerInfo_v2_C.StopPreviewingCosts
	 */
	struct ULocalPlayerInfo_v2_C_StopPreviewingCosts_Params
	{	};

	/**
	 * Function LocalPlayerInfo_v2.LocalPlayerInfo_v2_C.PreviewCost
	 */
	struct ULocalPlayerInfo_v2_C_PreviewCost_Params
	{
	public:
		TMap<ECurrencyType, int32_t>                               Costs;                                                   // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function LocalPlayerInfo_v2.LocalPlayerInfo_v2_C.SetText
	 */
	struct ULocalPlayerInfo_v2_C_SetText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function LocalPlayerInfo_v2.LocalPlayerInfo_v2_C.OnLoaded_C660C23545870CAB9A7274A288C8A37D
	 */
	struct ULocalPlayerInfo_v2_C_OnLoaded_C660C23545870CAB9A7274A288C8A37D_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LocalPlayerInfo_v2.LocalPlayerInfo_v2_C.OnLoaded_0E1F4792410C545D150CC28C05B61547
	 */
	struct ULocalPlayerInfo_v2_C_OnLoaded_0E1F4792410C545D150CC28C05B61547_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LocalPlayerInfo_v2.LocalPlayerInfo_v2_C.Construct
	 */
	struct ULocalPlayerInfo_v2_C_Construct_Params
	{	};

	/**
	 * Function LocalPlayerInfo_v2.LocalPlayerInfo_v2_C.OnPlayerIconEquipped
	 */
	struct ULocalPlayerInfo_v2_C_OnPlayerIconEquipped_Params
	{
	public:
		class URBPlayerIconCustomizationOption*                    Icon;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LocalPlayerInfo_v2.LocalPlayerInfo_v2_C.ExecuteUbergraph_LocalPlayerInfo_v2
	 */
	struct ULocalPlayerInfo_v2_C_ExecuteUbergraph_LocalPlayerInfo_v2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
