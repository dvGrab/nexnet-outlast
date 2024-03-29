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
	 * Function PlayerStatEntry.PlayerStatEntry_C.Setup
	 */
	struct UPlayerStatEntry_C_Setup_Params
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                ValueText;                                               // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UTexture2D*                                          IconTexture;                                             // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerStatEntry.PlayerStatEntry_C.Refresh
	 */
	struct UPlayerStatEntry_C_Refresh_Params
	{	};

	/**
	 * Function PlayerStatEntry.PlayerStatEntry_C.PreConstruct
	 */
	struct UPlayerStatEntry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerStatEntry.PlayerStatEntry_C.ExecuteUbergraph_PlayerStatEntry
	 */
	struct UPlayerStatEntry_C_ExecuteUbergraph_PlayerStatEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
