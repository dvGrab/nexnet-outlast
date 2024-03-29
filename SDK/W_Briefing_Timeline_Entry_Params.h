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
	 * Function W_Briefing_Timeline_Entry.W_Briefing_Timeline_Entry_C.Hovered
	 */
	struct UW_Briefing_Timeline_Entry_C_Hovered_Params
	{
	public:
		bool                                                       IsHovered;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Briefing_Timeline_Entry.W_Briefing_Timeline_Entry_C.PreConstruct
	 */
	struct UW_Briefing_Timeline_Entry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Briefing_Timeline_Entry.W_Briefing_Timeline_Entry_C.Construct
	 */
	struct UW_Briefing_Timeline_Entry_C_Construct_Params
	{	};

	/**
	 * Function W_Briefing_Timeline_Entry.W_Briefing_Timeline_Entry_C.BndEvt__btn_TimelineEntry_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature
	 */
	struct UW_Briefing_Timeline_Entry_C_BndEvt__btn_TimelineEntry_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Briefing_Timeline_Entry.W_Briefing_Timeline_Entry_C.BndEvt__btn_TimelineEntry_K2Node_ComponentBoundEvent_1_Unhovered__DelegateSignature
	 */
	struct UW_Briefing_Timeline_Entry_C_BndEvt__btn_TimelineEntry_K2Node_ComponentBoundEvent_1_Unhovered__DelegateSignature_Params
	{	};

	/**
	 * Function W_Briefing_Timeline_Entry.W_Briefing_Timeline_Entry_C.BndEvt__btn_TimelineEntry_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
	 */
	struct UW_Briefing_Timeline_Entry_C_BndEvt__btn_TimelineEntry_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Briefing_Timeline_Entry.W_Briefing_Timeline_Entry_C.ExecuteUbergraph_W_Briefing_Timeline_Entry
	 */
	struct UW_Briefing_Timeline_Entry_C_ExecuteUbergraph_W_Briefing_Timeline_Entry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5NUQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_Briefing_Timeline_Entry.W_Briefing_Timeline_Entry_C.TimelineEventClicked__DelegateSignature
	 */
	struct UW_Briefing_Timeline_Entry_C_TimelineEventClicked__DelegateSignature_Params
	{
	public:
		float                                                      EventAudioStart;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      EventAudioEnd;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      EventAudioDuration;                                      // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Briefing_Timeline_Entry.W_Briefing_Timeline_Entry_C.TimelineEventUnhovered__DelegateSignature
	 */
	struct UW_Briefing_Timeline_Entry_C_TimelineEventUnhovered__DelegateSignature_Params
	{
	public:
		float                                                      EventId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Briefing_Timeline_Entry.W_Briefing_Timeline_Entry_C.TimelineEventHovered__DelegateSignature
	 */
	struct UW_Briefing_Timeline_Entry_C_TimelineEventHovered__DelegateSignature_Params
	{
	public:
		float                                                      EventId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
