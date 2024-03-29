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
	 * Function W_ModProgressWidget.W_ModProgressWidget_C.Construct
	 */
	struct UW_ModProgressWidget_C_Construct_Params
	{	};

	/**
	 * Function W_ModProgressWidget.W_ModProgressWidget_C.Tick
	 */
	struct UW_ModProgressWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ModProgressWidget.W_ModProgressWidget_C.OnModNameUpdated
	 */
	struct UW_ModProgressWidget_C_OnModNameUpdated_Params
	{
	public:
		class FString                                              ModName;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ModProgressWidget.W_ModProgressWidget_C.OnDownloadProgressUpdated
	 */
	struct UW_ModProgressWidget_C_OnDownloadProgressUpdated_Params
	{
	public:
		float                                                      DownloadPercent;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ExtractionPercent;                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                PercentText;                                             // 0x0008(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FText                                                RemainingText;                                           // 0x0020(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_ModProgressWidget.W_ModProgressWidget_C.OnQueueProgressUpdated
	 */
	struct UW_ModProgressWidget_C_OnQueueProgressUpdated_Params
	{
	public:
		int32_t                                                    CompletedMods;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TotalMods;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ModProgressWidget.W_ModProgressWidget_C.ExecuteUbergraph_W_ModProgressWidget
	 */
	struct UW_ModProgressWidget_C_ExecuteUbergraph_W_ModProgressWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
