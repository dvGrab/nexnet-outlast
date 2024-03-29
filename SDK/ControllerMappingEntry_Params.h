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
	 * Function ControllerMappingEntry.ControllerMappingEntry_C.PreConstruct
	 */
	struct UControllerMappingEntry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ControllerMappingEntry.ControllerMappingEntry_C.Event_UpdateDescription
	 */
	struct UControllerMappingEntry_C_Event_UpdateDescription_Params
	{
	public:
		class FText                                                newDescription;                                          // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ControllerMappingEntry.ControllerMappingEntry_C.UpdateIcon
	 */
	struct UControllerMappingEntry_C_UpdateIcon_Params
	{
	public:
		class UTexture2D*                                          newIcon;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ControllerMappingEntry.ControllerMappingEntry_C.ExecuteUbergraph_ControllerMappingEntry
	 */
	struct UControllerMappingEntry_C_ExecuteUbergraph_ControllerMappingEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KPTH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
