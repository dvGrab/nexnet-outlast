#pragma once

/**
 * Name: OUTLAST
 * Version: 0.0.2_fixed
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
	 * Function TG_Coyle_Flash-01_Seq.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_2
	 */
	struct USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_2_Params
	{
	public:
		class ACineCoyle01_BP_C*                                   DrugCoyle;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TG_Coyle_Flash-01_Seq.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_1
	 */
	struct USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_1_Params
	{
	public:
		class ACineCoyle01_BP_C*                                   DrugCoyle;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TG_Coyle_Flash-01_Seq.SequenceDirector_C.DrugCoyle_Event_1
	 */
	struct USequenceDirector_C_DrugCoyle_Event_1_Params
	{
	public:
		class ACineCoyle01_BP_C*                                   DrugCoyle;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAnimationAsset*                                     NewAnimToPlay;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TG_Coyle_Flash-01_Seq.SequenceDirector_C.DrugCoyle_Event_2
	 */
	struct USequenceDirector_C_DrugCoyle_Event_2_Params
	{
	public:
		class ACineCoyle01_BP_C*                                   DrugCoyle;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAnimSequence*                                       Anim;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Time;                                                    // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TG_Coyle_Flash-01_Seq.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
	 */
	struct USequenceDirector_C_ExecuteUbergraph_SequenceDirector_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OI6I[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
