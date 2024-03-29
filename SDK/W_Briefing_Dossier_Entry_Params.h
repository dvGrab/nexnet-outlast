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
	 * Function W_Briefing_Dossier_Entry.W_Briefing_Dossier_Entry_C.SetValue
	 */
	struct UW_Briefing_Dossier_Entry_C_SetValue_Params
	{
	public:
		class FText                                                Value;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_Briefing_Dossier_Entry.W_Briefing_Dossier_Entry_C.PreConstruct
	 */
	struct UW_Briefing_Dossier_Entry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Briefing_Dossier_Entry.W_Briefing_Dossier_Entry_C.ExecuteUbergraph_W_Briefing_Dossier_Entry
	 */
	struct UW_Briefing_Dossier_Entry_C_ExecuteUbergraph_W_Briefing_Dossier_Entry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
