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
	 * Function TextChatEntry.TextChatEntry_C.Hide
	 */
	struct UTextChatEntry_C_Hide_Params
	{	};

	/**
	 * Function TextChatEntry.TextChatEntry_C.Setup
	 */
	struct UTextChatEntry_C_Setup_Params
	{
	public:
		struct FRBTextChatMessage                                  Message;                                                 // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UTextChatWidget_BP_C*                                Parent;                                                  // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TextChatEntry.TextChatEntry_C.WidgetAnimationEvt_HideAnim_K2Node_WidgetAnimationEvent_1
	 */
	struct UTextChatEntry_C_WidgetAnimationEvt_HideAnim_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function TextChatEntry.TextChatEntry_C.ExecuteUbergraph_TextChatEntry
	 */
	struct UTextChatEntry_C_ExecuteUbergraph_TextChatEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TextChatEntry.TextChatEntry_C.OnHidden__DelegateSignature
	 */
	struct UTextChatEntry_C_OnHidden__DelegateSignature_Params
	{
	public:
		class UTextChatEntry_C*                                    Entry;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
