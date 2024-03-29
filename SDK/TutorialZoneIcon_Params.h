#pragma once

/**
 * Name: TRIALS
 * Version: FINAL
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
	 * Function TutorialZoneIcon.TutorialZoneIcon_C.ShouldShow
	 */
	struct UTutorialZoneIcon_C_ShouldShow_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TutorialZoneIcon.TutorialZoneIcon_C.Event_Hide
	 */
	struct UTutorialZoneIcon_C_Event_Hide_Params
	{	};

	/**
	 * Function TutorialZoneIcon.TutorialZoneIcon_C.Event_UpdateIconTexture
	 */
	struct UTutorialZoneIcon_C_Event_UpdateIconTexture_Params
	{
	public:
		class UTexture2D*                                          newTexture;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TutorialZoneIcon.TutorialZoneIcon_C.ExecuteUbergraph_TutorialZoneIcon
	 */
	struct UTutorialZoneIcon_C_ExecuteUbergraph_TutorialZoneIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EUX3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
