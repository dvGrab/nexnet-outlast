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
	 * Function OptionsDescription.OptionsDescription_C.UpdateRestartRequired
	 */
	struct UOptionsDescription_C_UpdateRestartRequired_Params
	{
	public:
		struct FOptionData                                         Data;                                                    // 0x0000(0x00E0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function OptionsDescription.OptionsDescription_C.UpdateDescription
	 */
	struct UOptionsDescription_C_UpdateDescription_Params
	{
	public:
		struct FOptionData                                         OptionData;                                              // 0x0000(0x00E0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function OptionsDescription.OptionsDescription_C.Tick
	 */
	struct UOptionsDescription_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsDescription.OptionsDescription_C.ExecuteUbergraph_OptionsDescription
	 */
	struct UOptionsDescription_C_ExecuteUbergraph_OptionsDescription_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
