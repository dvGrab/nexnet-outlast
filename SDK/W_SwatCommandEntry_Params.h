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
	 * Function W_SwatCommandEntry.W_SwatCommandEntry_C.GetVisibility_1
	 */
	struct UW_SwatCommandEntry_C_GetVisibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_SwatCommandEntry.W_SwatCommandEntry_C.GetTeamColor
	 */
	struct UW_SwatCommandEntry_C_GetTeamColor_Params
	{
	public:
		struct FLinearColor                                        TeamColor;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_SwatCommandEntry.W_SwatCommandEntry_C.GetBrushColor_1
	 */
	struct UW_SwatCommandEntry_C_GetBrushColor_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_SwatCommandEntry.W_SwatCommandEntry_C.SetCommandText
	 */
	struct UW_SwatCommandEntry_C_SetCommandText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_SwatCommandEntry.W_SwatCommandEntry_C.PreConstruct
	 */
	struct UW_SwatCommandEntry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_SwatCommandEntry.W_SwatCommandEntry_C.UpdateCommandEntry
	 */
	struct UW_SwatCommandEntry_C_UpdateCommandEntry_Params
	{
	public:
		struct FSwatCommand                                        SwatCommand;                                             // 0x0000(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETeamType                                                  ActiveTeamType;                                          // 0x0078(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_SwatCommandEntry.W_SwatCommandEntry_C.ExecuteUbergraph_W_SwatCommandEntry
	 */
	struct UW_SwatCommandEntry_C_ExecuteUbergraph_W_SwatCommandEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
