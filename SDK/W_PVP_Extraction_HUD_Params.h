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
	 * Function W_PVP_Extraction_HUD.W_PVP_Extraction_HUD_C.UpdateMessage
	 */
	struct UW_PVP_Extraction_HUD_C_UpdateMessage_Params
	{
	public:
		ETeamType                                                  Instigator_Team;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ETeamType                                                  Player_Team;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PVP_Extraction_HUD.W_PVP_Extraction_HUD_C.HideMessage
	 */
	struct UW_PVP_Extraction_HUD_C_HideMessage_Params
	{	};

	/**
	 * Function W_PVP_Extraction_HUD.W_PVP_Extraction_HUD_C.ShowMessage
	 */
	struct UW_PVP_Extraction_HUD_C_ShowMessage_Params
	{
	public:
		bool                                                       bHasIntel;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8EVO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_PVP_Extraction_HUD.W_PVP_Extraction_HUD_C.Tick
	 */
	struct UW_PVP_Extraction_HUD_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PVP_Extraction_HUD.W_PVP_Extraction_HUD_C.Construct
	 */
	struct UW_PVP_Extraction_HUD_C_Construct_Params
	{	};

	/**
	 * Function W_PVP_Extraction_HUD.W_PVP_Extraction_HUD_C.ResetTimer
	 */
	struct UW_PVP_Extraction_HUD_C_ResetTimer_Params
	{	};

	/**
	 * Function W_PVP_Extraction_HUD.W_PVP_Extraction_HUD_C.ExecuteUbergraph_W_PVP_Extraction_HUD
	 */
	struct UW_PVP_Extraction_HUD_C_ExecuteUbergraph_W_PVP_Extraction_HUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
