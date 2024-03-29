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
	 * Function LoadingVideoWidget.LoadingVideoWidget_C.UpdateFade
	 */
	struct ULoadingVideoWidget_C_UpdateFade_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LoadingVideoWidget.LoadingVideoWidget_C.Hide
	 */
	struct ULoadingVideoWidget_C_Hide_Params
	{
	public:
		bool                                                       withAnim;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LoadingVideoWidget.LoadingVideoWidget_C.Show
	 */
	struct ULoadingVideoWidget_C_Show_Params
	{	};

	/**
	 * Function LoadingVideoWidget.LoadingVideoWidget_C.Tick
	 */
	struct ULoadingVideoWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LoadingVideoWidget.LoadingVideoWidget_C.Close
	 */
	struct ULoadingVideoWidget_C_Close_Params
	{	};

	/**
	 * Function LoadingVideoWidget.LoadingVideoWidget_C.UpdateSize
	 */
	struct ULoadingVideoWidget_C_UpdateSize_Params
	{	};

	/**
	 * Function LoadingVideoWidget.LoadingVideoWidget_C.Construct
	 */
	struct ULoadingVideoWidget_C_Construct_Params
	{	};

	/**
	 * Function LoadingVideoWidget.LoadingVideoWidget_C.PreConstruct
	 */
	struct ULoadingVideoWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LoadingVideoWidget.LoadingVideoWidget_C.ExecuteUbergraph_LoadingVideoWidget
	 */
	struct ULoadingVideoWidget_C_ExecuteUbergraph_LoadingVideoWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
