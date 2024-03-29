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
	 * Function DISP_Port.DISP_Port_C.Construct
	 */
	struct UDISP_Port_C_Construct_Params
	{	};

	/**
	 * Function DISP_Port.DISP_Port_C.DispatchFadedIn
	 */
	struct UDISP_Port_C_DispatchFadedIn_Params
	{	};

	/**
	 * Function DISP_Port.DISP_Port_C.ExecuteUbergraph_DISP_Port
	 */
	struct UDISP_Port_C_ExecuteUbergraph_DISP_Port_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_876Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
