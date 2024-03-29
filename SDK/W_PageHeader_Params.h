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
	 * Function W_PageHeader.W_PageHeader_C.UpdateHeader
	 */
	struct UW_PageHeader_C_UpdateHeader_Params
	{
	public:
		class FText                                                PageName;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                HeaderText;                                              // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_PageHeader.W_PageHeader_C.PreConstruct
	 */
	struct UW_PageHeader_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_PageHeader.W_PageHeader_C.Construct
	 */
	struct UW_PageHeader_C_Construct_Params
	{	};

	/**
	 * Function W_PageHeader.W_PageHeader_C.ExecuteUbergraph_W_PageHeader
	 */
	struct UW_PageHeader_C_ExecuteUbergraph_W_PageHeader_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
