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
	 * Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.ClearActive
	 */
	struct UW_Briefing_IntelList_Entry_C_ClearActive_Params
	{	};

	/**
	 * Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.AddToGrid
	 */
	struct UW_Briefing_IntelList_Entry_C_AddToGrid_Params
	{
	public:
		class UWidget*                                             Content;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.InitMedia
	 */
	struct UW_Briefing_IntelList_Entry_C_InitMedia_Params
	{
	public:
		TArray<struct FST_Briefing_Evidence>                       Media;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.InitBios
	 */
	struct UW_Briefing_IntelList_Entry_C_InitBios_Params
	{
	public:
		TArray<struct FCharacterBio>                               Bios;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.PreConstruct
	 */
	struct UW_Briefing_IntelList_Entry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.Construct
	 */
	struct UW_Briefing_IntelList_Entry_C_Construct_Params
	{	};

	/**
	 * Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.ForceClick
	 */
	struct UW_Briefing_IntelList_Entry_C_ForceClick_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.MediaClicked
	 */
	struct UW_Briefing_IntelList_Entry_C_MediaClicked_Params
	{
	public:
		class UW_Briefing_Intel_Entry_C*                           ClickedEntry;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FST_Briefing_Evidence                               Media;                                                   // 0x0008(0x00A0)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.BioClicked
	 */
	struct UW_Briefing_IntelList_Entry_C_BioClicked_Params
	{
	public:
		class UW_Briefing_Intel_Entry_C*                           ClickedEntry;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterBio                                       Bio;                                                     // 0x0008(0x0140)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.ExecuteUbergraph_W_Briefing_IntelList_Entry
	 */
	struct UW_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.MediaIntelClicked__DelegateSignature
	 */
	struct UW_Briefing_IntelList_Entry_C_MediaIntelClicked__DelegateSignature_Params
	{
	public:
		struct FST_Briefing_Evidence                               Media;                                                   // 0x0000(0x00A0)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.BioIntelClicked__DelegateSignature
	 */
	struct UW_Briefing_IntelList_Entry_C_BioIntelClicked__DelegateSignature_Params
	{
	public:
		struct FCharacterBio                                       Bio;                                                     // 0x0000(0x0140)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
