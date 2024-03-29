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
	 * Function MessageWidget.MessageWidget_C.HideIcons
	 */
	struct UMessageWidget_C_HideIcons_Params
	{	};

	/**
	 * Function MessageWidget.MessageWidget_C.HandleItemsIconsDisplay
	 */
	struct UMessageWidget_C_HandleItemsIconsDisplay_Params
	{	};

	/**
	 * Function MessageWidget.MessageWidget_C.OninputChanged
	 */
	struct UMessageWidget_C_OninputChanged_Params
	{	};

	/**
	 * Function MessageWidget.MessageWidget_C.SetMessage
	 */
	struct UMessageWidget_C_SetMessage_Params
	{
	public:
		class FText                                                messageText;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FLinearColor                                        DefaultColor;                                            // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MessageWidget.MessageWidget_C.SendTemporaryText
	 */
	struct UMessageWidget_C_SendTemporaryText_Params
	{
	public:
		class FText                                                messageText;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MessageWidget.MessageWidget_C.Construct
	 */
	struct UMessageWidget_C_Construct_Params
	{	};

	/**
	 * Function MessageWidget.MessageWidget_C.PreConstruct
	 */
	struct UMessageWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MessageWidget.MessageWidget_C.Event_Show
	 */
	struct UMessageWidget_C_Event_Show_Params
	{	};

	/**
	 * Function MessageWidget.MessageWidget_C.Event_Hide
	 */
	struct UMessageWidget_C_Event_Hide_Params
	{	};

	/**
	 * Function MessageWidget.MessageWidget_C.ExecuteUbergraph_MessageWidget
	 */
	struct UMessageWidget_C_ExecuteUbergraph_MessageWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_S67R[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
