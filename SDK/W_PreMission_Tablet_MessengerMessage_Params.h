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
	 * Function W_PreMission_Tablet_MessengerMessage.W_PreMission_Tablet_MessengerMessage_C.GetIsSelf
	 */
	struct UW_PreMission_Tablet_MessengerMessage_C_GetIsSelf_Params
	{
	public:
		bool                                                       IsSelf;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7YW4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_PreMission_Tablet_MessengerMessage.W_PreMission_Tablet_MessengerMessage_C.PreConstruct
	 */
	struct UW_PreMission_Tablet_MessengerMessage_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_PreMission_Tablet_MessengerMessage.W_PreMission_Tablet_MessengerMessage_C.Construct
	 */
	struct UW_PreMission_Tablet_MessengerMessage_C_Construct_Params
	{	};

	/**
	 * Function W_PreMission_Tablet_MessengerMessage.W_PreMission_Tablet_MessengerMessage_C.ExecuteUbergraph_W_PreMission_Tablet_MessengerMessage
	 */
	struct UW_PreMission_Tablet_MessengerMessage_C_ExecuteUbergraph_W_PreMission_Tablet_MessengerMessage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
