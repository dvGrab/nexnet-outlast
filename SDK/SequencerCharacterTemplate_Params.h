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
	 * Function SequencerCharacterTemplate.SequencerCharacterTemplate_C.EquipLoadout
	 */
	struct ASequencerCharacterTemplate_C_EquipLoadout_Params
	{
	public:
		struct FSavedLoadout                                       SavedLoadout;                                            // 0x0000(0x0178)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class AReadyOrNotPlayerState*                              PlayerState;                                             // 0x0178(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SequencerCharacterTemplate.SequencerCharacterTemplate_C.UserConstructionScript
	 */
	struct ASequencerCharacterTemplate_C_UserConstructionScript_Params
	{	};

	/**
	 * Function SequencerCharacterTemplate.SequencerCharacterTemplate_C.ReceiveBeginPlay
	 */
	struct ASequencerCharacterTemplate_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function SequencerCharacterTemplate.SequencerCharacterTemplate_C.ReceiveTick
	 */
	struct ASequencerCharacterTemplate_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SequencerCharacterTemplate.SequencerCharacterTemplate_C.OnSequenceStarted_Event_1
	 */
	struct ASequencerCharacterTemplate_C_OnSequenceStarted_Event_1_Params
	{
	public:
		class ULevelSequence*                                      LevelSequence;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SequencerCharacterTemplate.SequencerCharacterTemplate_C.ExecuteUbergraph_SequencerCharacterTemplate
	 */
	struct ASequencerCharacterTemplate_C_ExecuteUbergraph_SequencerCharacterTemplate_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
