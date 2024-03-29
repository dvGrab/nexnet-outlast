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
	 * Function CustomizationInteractionWidget.CustomizationInteractionWidget_C.UpdateDevText
	 */
	struct UCustomizationInteractionWidget_C_UpdateDevText_Params
	{
	public:
		class URBCustomizationOption*                              Option;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomizationInteractionWidget.CustomizationInteractionWidget_C.Initialize
	 */
	struct UCustomizationInteractionWidget_C_Initialize_Params
	{
	public:
		struct FUICustomizationItem                                Item;                                                    // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function CustomizationInteractionWidget.CustomizationInteractionWidget_C.UpdateInteractionType
	 */
	struct UCustomizationInteractionWidget_C_UpdateInteractionType_Params
	{
	public:
		ECustomizationInteractionType                              InteractionType;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YBV0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FItemUnlockInfo                                     unlockInfo;                                              // 0x0008(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CustomizationInteractionWidget.CustomizationInteractionWidget_C.InitWithOption
	 */
	struct UCustomizationInteractionWidget_C_InitWithOption_Params
	{
	public:
		class URBPlayerCustomizationOption*                        Option;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECustomizationInteractionType                              InteractionType;                                         // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CIKY[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CustomizationInteractionWidget.CustomizationInteractionWidget_C.PreConstruct
	 */
	struct UCustomizationInteractionWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CustomizationInteractionWidget.CustomizationInteractionWidget_C.ExecuteUbergraph_CustomizationInteractionWidget
	 */
	struct UCustomizationInteractionWidget_C_ExecuteUbergraph_CustomizationInteractionWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
