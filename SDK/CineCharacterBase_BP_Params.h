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
	 * Function CineCharacterBase_BP.CineCharacterBase_BP_C.SetPreviewSequenceData
	 */
	struct ACineCharacterBase_BP_C_SetPreviewSequenceData_Params
	{
	public:
		class UAnimSequence*                                       Anim;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Time;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CineCharacterBase_BP.CineCharacterBase_BP_C.PreviewSequence
	 */
	struct ACineCharacterBase_BP_C_PreviewSequence_Params
	{	};

	/**
	 * Function CineCharacterBase_BP.CineCharacterBase_BP_C.NewFunction_1
	 */
	struct ACineCharacterBase_BP_C_NewFunction_1_Params
	{	};

	/**
	 * Function CineCharacterBase_BP.CineCharacterBase_BP_C.Play
	 */
	struct ACineCharacterBase_BP_C_Play_Params
	{
	public:
		class UAnimationAsset*                                     NewAnimToPlay;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CineCharacterBase_BP.CineCharacterBase_BP_C.ReceiveBeginPlay
	 */
	struct ACineCharacterBase_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function CineCharacterBase_BP.CineCharacterBase_BP_C.OnAsyncDataLoaded_Event_1
	 */
	struct ACineCharacterBase_BP_C_OnAsyncDataLoaded_Event_1_Params
	{
	public:
		class URBTrialAsyncData*                                   asyncData;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CineCharacterBase_BP.CineCharacterBase_BP_C.ExecuteUbergraph_CineCharacterBase_BP
	 */
	struct ACineCharacterBase_BP_C_ExecuteUbergraph_CineCharacterBase_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BGG9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
