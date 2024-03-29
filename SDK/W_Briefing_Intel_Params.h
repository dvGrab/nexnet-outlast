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
	 * Function W_Briefing_Intel.W_Briefing_Intel_C.InitMedia
	 */
	struct UW_Briefing_Intel_C_InitMedia_Params
	{
	public:
		TArray<struct FST_Briefing_Evidence>                       MediaIntel;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_Briefing_Intel.W_Briefing_Intel_C.InitCivilians
	 */
	struct UW_Briefing_Intel_C_InitCivilians_Params
	{
	public:
		TArray<struct FCharacterBio>                               CivilianBios;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_Briefing_Intel.W_Briefing_Intel_C.InitSuspects
	 */
	struct UW_Briefing_Intel_C_InitSuspects_Params
	{
	public:
		TArray<struct FCharacterBio>                               SuspectBios;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_Briefing_Intel.W_Briefing_Intel_C.UpdateBioIntel
	 */
	struct UW_Briefing_Intel_C_UpdateBioIntel_Params
	{
	public:
		struct FCharacterBio                                       Bio;                                                     // 0x0000(0x0140)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_Briefing_Intel.W_Briefing_Intel_C.UpdateMediaIntel
	 */
	struct UW_Briefing_Intel_C_UpdateMediaIntel_Params
	{
	public:
		struct FST_Briefing_Evidence                               Media;                                                   // 0x0000(0x00A0)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function W_Briefing_Intel.W_Briefing_Intel_C.AddToList
	 */
	struct UW_Briefing_Intel_C_AddToList_Params
	{
	public:
		class UWidget*                                             Content;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Briefing_Intel.W_Briefing_Intel_C.CreateLists
	 */
	struct UW_Briefing_Intel_C_CreateLists_Params
	{	};

	/**
	 * Function W_Briefing_Intel.W_Briefing_Intel_C.PreConstruct
	 */
	struct UW_Briefing_Intel_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Briefing_Intel.W_Briefing_Intel_C.Construct
	 */
	struct UW_Briefing_Intel_C_Construct_Params
	{	};

	/**
	 * Function W_Briefing_Intel.W_Briefing_Intel_C.Initialize
	 */
	struct UW_Briefing_Intel_C_Initialize_Params
	{
	public:
		struct FST_Briefing_Intel                                  Intel;                                                   // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function W_Briefing_Intel.W_Briefing_Intel_C.BndEvt__SuspectIntelList_K2Node_ComponentBoundEvent_0_BioIntelClicked__DelegateSignature
	 */
	struct UW_Briefing_Intel_C_BndEvt__SuspectIntelList_K2Node_ComponentBoundEvent_0_BioIntelClicked__DelegateSignature_Params
	{
	public:
		struct FCharacterBio                                       Bio;                                                     // 0x0000(0x0140)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_Briefing_Intel.W_Briefing_Intel_C.BndEvt__CivilianIntelList_K2Node_ComponentBoundEvent_1_BioIntelClicked__DelegateSignature
	 */
	struct UW_Briefing_Intel_C_BndEvt__CivilianIntelList_K2Node_ComponentBoundEvent_1_BioIntelClicked__DelegateSignature_Params
	{
	public:
		struct FCharacterBio                                       Bio;                                                     // 0x0000(0x0140)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_Briefing_Intel.W_Briefing_Intel_C.ExecuteUbergraph_W_Briefing_Intel
	 */
	struct UW_Briefing_Intel_C_ExecuteUbergraph_W_Briefing_Intel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D6BC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
