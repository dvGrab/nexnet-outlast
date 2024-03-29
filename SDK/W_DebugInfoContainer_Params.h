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
	 * Function W_DebugInfoContainer.W_DebugInfoContainer_C.GetTitle
	 */
	struct UW_DebugInfoContainer_C_GetTitle_Params
	{
	public:
		class FText                                                Return_Value;                                            // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function W_DebugInfoContainer.W_DebugInfoContainer_C.SetDebugItemValue
	 */
	struct UW_DebugInfoContainer_C_SetDebugItemValue_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UARX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                DebugText;                                               // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_DebugInfoContainer.W_DebugInfoContainer_C.AddDebugItems
	 */
	struct UW_DebugInfoContainer_C_AddDebugItems_Params
	{
	public:
		int32_t                                                    Num;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_DebugInfoContainer.W_DebugInfoContainer_C.AddDebugItem
	 */
	struct UW_DebugInfoContainer_C_AddDebugItem_Params
	{
	public:
		class FText                                                Label;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Value;                                                   // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_DebugInfoContainer.W_DebugInfoContainer_C.Clear
	 */
	struct UW_DebugInfoContainer_C_Clear_Params
	{	};

	/**
	 * Function W_DebugInfoContainer.W_DebugInfoContainer_C.Refresh
	 */
	struct UW_DebugInfoContainer_C_Refresh_Params
	{	};

	/**
	 * Function W_DebugInfoContainer.W_DebugInfoContainer_C.GetNumDebugEntries
	 */
	struct UW_DebugInfoContainer_C_GetNumDebugEntries_Params
	{
	public:
		int32_t                                                    Return_Value;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_DebugInfoContainer.W_DebugInfoContainer_C.Get Debug Item (Name)
	 */
	struct UW_DebugInfoContainer_C_Get_Debug_Item_Name_Params
	{
	public:
		class FText                                                Debug_Name;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UW_DebugInfo_C*                                      DebugInfoWidget;                                         // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_DebugInfoContainer.W_DebugInfoContainer_C.Get Debug Item (Index)
	 */
	struct UW_DebugInfoContainer_C_Get_Debug_Item_Index_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1815[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UW_DebugInfo_C*                                      DebugInfoWidget;                                         // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_DebugInfoContainer.W_DebugInfoContainer_C.PreConstruct
	 */
	struct UW_DebugInfoContainer_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_DebugInfoContainer.W_DebugInfoContainer_C.ExecuteUbergraph_W_DebugInfoContainer
	 */
	struct UW_DebugInfoContainer_C_ExecuteUbergraph_W_DebugInfoContainer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
