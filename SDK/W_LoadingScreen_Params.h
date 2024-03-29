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
	 * Function W_LoadingScreen.W_LoadingScreen_C.Get_Loading_Visibility_1
	 */
	struct UW_LoadingScreen_C_Get_Loading_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadingScreen.W_LoadingScreen_C.GetText_1
	 */
	struct UW_LoadingScreen_C_GetText_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_LoadingScreen.W_LoadingScreen_C.Get_TextLoading_Text_1
	 */
	struct UW_LoadingScreen_C_Get_TextLoading_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_LoadingScreen.W_LoadingScreen_C.Get_ServerName_Text_1
	 */
	struct UW_LoadingScreen_C_Get_ServerName_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_LoadingScreen.W_LoadingScreen_C.UpdateLoadingScreenPercentage
	 */
	struct UW_LoadingScreen_C_UpdateLoadingScreenPercentage_Params
	{
	public:
		float                                                      NewPercentage;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadingScreen.W_LoadingScreen_C.Construct
	 */
	struct UW_LoadingScreen_C_Construct_Params
	{	};

	/**
	 * Function W_LoadingScreen.W_LoadingScreen_C.UpdateTips
	 */
	struct UW_LoadingScreen_C_UpdateTips_Params
	{	};

	/**
	 * Function W_LoadingScreen.W_LoadingScreen_C.Tick
	 */
	struct UW_LoadingScreen_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_LoadingScreen.W_LoadingScreen_C.PreConstruct
	 */
	struct UW_LoadingScreen_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_LoadingScreen.W_LoadingScreen_C.ExecuteUbergraph_W_LoadingScreen
	 */
	struct UW_LoadingScreen_C_ExecuteUbergraph_W_LoadingScreen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
