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
	 * Function W_FireMode.W_FireMode_C.Deselect
	 */
	struct UW_FireMode_C_Deselect_Params
	{	};

	/**
	 * Function W_FireMode.W_FireMode_C.Select
	 */
	struct UW_FireMode_C_Select_Params
	{	};

	/**
	 * Function W_FireMode.W_FireMode_C.PreConstruct
	 */
	struct UW_FireMode_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_FireMode.W_FireMode_C.ExecuteUbergraph_W_FireMode
	 */
	struct UW_FireMode_C_ExecuteUbergraph_W_FireMode_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
