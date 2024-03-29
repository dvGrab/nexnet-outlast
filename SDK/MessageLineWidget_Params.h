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
	 * Function MessageLineWidget.MessageLineWidget_C.SetDefaultColor
	 */
	struct UMessageLineWidget_C_SetDefaultColor_Params
	{
	public:
		struct FLinearColor                                        DefaultColor;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MessageLineWidget.MessageLineWidget_C.SetMessage
	 */
	struct UMessageLineWidget_C_SetMessage_Params
	{
	public:
		class FText                                                messageText;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MessageLineWidget.MessageLineWidget_C.SendTemporaryText
	 */
	struct UMessageLineWidget_C_SendTemporaryText_Params
	{
	public:
		class FText                                                messageText;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MessageLineWidget.MessageLineWidget_C.ExecuteUbergraph_MessageLineWidget
	 */
	struct UMessageLineWidget_C_ExecuteUbergraph_MessageLineWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CD9C[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
