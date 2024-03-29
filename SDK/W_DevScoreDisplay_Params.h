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
	 * Function W_DevScoreDisplay.W_DevScoreDisplay_C.UpdateText
	 */
	struct UW_DevScoreDisplay_C_UpdateText_Params
	{	};

	/**
	 * Function W_DevScoreDisplay.W_DevScoreDisplay_C.PreConstruct
	 */
	struct UW_DevScoreDisplay_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_DevScoreDisplay.W_DevScoreDisplay_C.Construct
	 */
	struct UW_DevScoreDisplay_C_Construct_Params
	{	};

	/**
	 * Function W_DevScoreDisplay.W_DevScoreDisplay_C.ExecuteUbergraph_W_DevScoreDisplay
	 */
	struct UW_DevScoreDisplay_C_ExecuteUbergraph_W_DevScoreDisplay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
