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
	 * Function W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C.SetActive
	 */
	struct UW_Briefing_Intel_Entry_C_SetActive_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X3KB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C.SetHovered
	 */
	struct UW_Briefing_Intel_Entry_C_SetHovered_Params
	{
	public:
		bool                                                       IsHovered;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0HZV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C.BndEvt__btn_Document_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
	 */
	struct UW_Briefing_Intel_Entry_C_BndEvt__btn_Document_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C.Construct
	 */
	struct UW_Briefing_Intel_Entry_C_Construct_Params
	{	};

	/**
	 * Function W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C.PreConstruct
	 */
	struct UW_Briefing_Intel_Entry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C.BndEvt__btn_Document_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature
	 */
	struct UW_Briefing_Intel_Entry_C_BndEvt__btn_Document_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C.BndEvt__btn_Document_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature
	 */
	struct UW_Briefing_Intel_Entry_C_BndEvt__btn_Document_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature_Params
	{	};

	/**
	 * Function W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C.ExecuteUbergraph_W_Briefing_Intel_Entry
	 */
	struct UW_Briefing_Intel_Entry_C_ExecuteUbergraph_W_Briefing_Intel_Entry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P8AR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C.MediaIntelClicked__DelegateSignature
	 */
	struct UW_Briefing_Intel_Entry_C_MediaIntelClicked__DelegateSignature_Params
	{
	public:
		class UW_Briefing_Intel_Entry_C*                           ClickedEntry;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FST_Briefing_Evidence                               Media;                                                   // 0x0008(0x00A0)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C.BioIntelClicked__DelegateSignature
	 */
	struct UW_Briefing_Intel_Entry_C_BioIntelClicked__DelegateSignature_Params
	{
	public:
		class UW_Briefing_Intel_Entry_C*                           ClickedEntry;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterBio                                       Bio;                                                     // 0x0008(0x0140)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
