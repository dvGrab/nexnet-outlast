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
	 * Function LinearInventoryEntry.LinearInventoryEntry_C.ShouldShow
	 */
	struct ULinearInventoryEntry_C_ShouldShow_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LinearInventoryEntry.LinearInventoryEntry_C.UpdateSwapIconVisibility
	 */
	struct ULinearInventoryEntry_C_UpdateSwapIconVisibility_Params
	{
	public:
		bool                                                       Swap;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LinearInventoryEntry.LinearInventoryEntry_C.UpdateSpecialColor
	 */
	struct ULinearInventoryEntry_C_UpdateSpecialColor_Params
	{
	public:
		struct FLinearColor                                        SpecialColor;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LinearInventoryEntry.LinearInventoryEntry_C.UpdatePrompt
	 */
	struct ULinearInventoryEntry_C_UpdatePrompt_Params
	{	};

	/**
	 * Function LinearInventoryEntry.LinearInventoryEntry_C.UpdateInfo
	 */
	struct ULinearInventoryEntry_C_UpdateInfo_Params
	{
	public:
		struct FUILinearInventoryItem                              itemInfo;                                                // 0x0000(0x0080)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function LinearInventoryEntry.LinearInventoryEntry_C.SetSelected
	 */
	struct ULinearInventoryEntry_C_SetSelected_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LinearInventoryEntry.LinearInventoryEntry_C.Init
	 */
	struct ULinearInventoryEntry_C_Init_Params
	{	};

	/**
	 * Function LinearInventoryEntry.LinearInventoryEntry_C.PreConstruct
	 */
	struct ULinearInventoryEntry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LinearInventoryEntry.LinearInventoryEntry_C.Construct
	 */
	struct ULinearInventoryEntry_C_Construct_Params
	{	};

	/**
	 * Function LinearInventoryEntry.LinearInventoryEntry_C.Event_InputSourceChanged
	 */
	struct ULinearInventoryEntry_C_Event_InputSourceChanged_Params
	{
	public:
		bool                                                       bIsGamepad;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LinearInventoryEntry.LinearInventoryEntry_C.ExecuteUbergraph_LinearInventoryEntry
	 */
	struct ULinearInventoryEntry_C_ExecuteUbergraph_LinearInventoryEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
