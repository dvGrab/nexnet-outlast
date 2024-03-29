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
	 * Function W_PreMission_Tablet_Legend.W_PreMission_Tablet_Legend_C.Toggle
	 */
	struct UW_PreMission_Tablet_Legend_C_Toggle_Params
	{
	public:
		bool                                                       IsOpen;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_PreMission_Tablet_Legend.W_PreMission_Tablet_Legend_C.Open
	 */
	struct UW_PreMission_Tablet_Legend_C_Open_Params
	{	};

	/**
	 * Function W_PreMission_Tablet_Legend.W_PreMission_Tablet_Legend_C.Close
	 */
	struct UW_PreMission_Tablet_Legend_C_Close_Params
	{	};

	/**
	 * Function W_PreMission_Tablet_Legend.W_PreMission_Tablet_Legend_C.ExecuteUbergraph_W_PreMission_Tablet_Legend
	 */
	struct UW_PreMission_Tablet_Legend_C_ExecuteUbergraph_W_PreMission_Tablet_Legend_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IZ4Z[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
