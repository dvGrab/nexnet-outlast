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
	 * Function Challenge_ArrestSomeone.Challenge_ArrestSomeone_C.OnChallengeInit
	 */
	struct UChallenge_ArrestSomeone_C_OnChallengeInit_Params
	{
	public:
		class AReadyOrNotGameState*                                gs;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Challenge_ArrestSomeone.Challenge_ArrestSomeone_C.OnCharacterArrested
	 */
	struct UChallenge_ArrestSomeone_C_OnCharacterArrested_Params
	{
	public:
		class AReadyOrNotCharacter*                                ArrestedCharacter;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AReadyOrNotCharacter*                                Arrester;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Challenge_ArrestSomeone.Challenge_ArrestSomeone_C.OnChallengeAchieved
	 */
	struct UChallenge_ArrestSomeone_C_OnChallengeAchieved_Params
	{	};

	/**
	 * Function Challenge_ArrestSomeone.Challenge_ArrestSomeone_C.ExecuteUbergraph_Challenge_ArrestSomeone
	 */
	struct UChallenge_ArrestSomeone_C_ExecuteUbergraph_Challenge_ArrestSomeone_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NN58[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
