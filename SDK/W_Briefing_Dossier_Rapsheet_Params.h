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
	 * Function W_Briefing_Dossier_Rapsheet.W_Briefing_Dossier_Rapsheet_C.PreConstruct
	 */
	struct UW_Briefing_Dossier_Rapsheet_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Briefing_Dossier_Rapsheet.W_Briefing_Dossier_Rapsheet_C.Initialize
	 */
	struct UW_Briefing_Dossier_Rapsheet_C_Initialize_Params
	{
	public:
		TArray<struct FCriminalRecord>                             CriminalRecord;                                          // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_Briefing_Dossier_Rapsheet.W_Briefing_Dossier_Rapsheet_C.ExecuteUbergraph_W_Briefing_Dossier_Rapsheet
	 */
	struct UW_Briefing_Dossier_Rapsheet_C_ExecuteUbergraph_W_Briefing_Dossier_Rapsheet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
