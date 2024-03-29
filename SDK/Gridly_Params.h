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
	 * Function Gridly.GridlyBPFunctionLibrary.UpdateLocalizationPreview
	 */
	struct UGridlyBPFunctionLibrary_UpdateLocalizationPreview_Params
	{
	public:
		TArray<struct FPolyglotTextData>                           PolyglotTextDatas;                                       // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Gridly.GridlyBPFunctionLibrary.GetLocalizationPreviewCulture
	 */
	struct UGridlyBPFunctionLibrary_GetLocalizationPreviewCulture_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Gridly.GridlyBPFunctionLibrary.EnableLocalizationPreview
	 */
	struct UGridlyBPFunctionLibrary_EnableLocalizationPreview_Params
	{
	public:
		class FString                                              Culture;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Gridly.GridlyTask_DownloadLocalizedTexts.DownloadLocalizedTexts
	 */
	struct UGridlyTask_DownloadLocalizedTexts_DownloadLocalizedTexts_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ViewId;                                                  // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGridlyTask_DownloadLocalizedTexts*                  ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Gridly.GridlyTask_ImportDataTableFromGridly.ImportDataTableFromGridly
	 */
	struct UGridlyTask_ImportDataTableFromGridly_ImportDataTableFromGridly_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGridlyDataTable*                                    GridlyDataTable;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGridlyTask_ImportDataTableFromGridly*               ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
