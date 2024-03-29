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
	 * Function TG_End-01_Seq.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_1
	 */
	struct USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_1_Params
	{
	public:
		class ACineSpectre_BP_C*                                   CineSpectre_BP;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TG_End-01_Seq.SequenceDirector_C.KillParticles
	 */
	struct USequenceDirector_C_KillParticles_Params
	{
	public:
		class ACineSpectre_BP_C*                                   CineSpectre_BP;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TG_End-01_Seq.SequenceDirector_C.CallBlur
	 */
	struct USequenceDirector_C_CallBlur_Params
	{
	public:
		class ACineSpectre_BP_C*                                   CineSpectre_BP;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      blurIntensity;                                           // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TG_End-01_Seq.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
	 */
	struct USequenceDirector_C_ExecuteUbergraph_SequenceDirector_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B9PE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
