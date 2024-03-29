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
	 * Function MenuCharacter_AnimBP.MenuCharacter_AnimBP_C.AnimGraph
	 */
	struct UMenuCharacter_AnimBP_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function MenuCharacter_AnimBP.MenuCharacter_AnimBP_C.BlueprintBeginPlay
	 */
	struct UMenuCharacter_AnimBP_C_BlueprintBeginPlay_Params
	{	};

	/**
	 * Function MenuCharacter_AnimBP.MenuCharacter_AnimBP_C.BlueprintUpdateAnimation
	 */
	struct UMenuCharacter_AnimBP_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MenuCharacter_AnimBP.MenuCharacter_AnimBP_C.AnimNotify_ImOut
	 */
	struct UMenuCharacter_AnimBP_C_AnimNotify_ImOut_Params
	{	};

	/**
	 * Function MenuCharacter_AnimBP.MenuCharacter_AnimBP_C.AnimNotify_GoingToNeutral
	 */
	struct UMenuCharacter_AnimBP_C_AnimNotify_GoingToNeutral_Params
	{	};

	/**
	 * Function MenuCharacter_AnimBP.MenuCharacter_AnimBP_C.ExecuteUbergraph_MenuCharacter_AnimBP
	 */
	struct UMenuCharacter_AnimBP_C_ExecuteUbergraph_MenuCharacter_AnimBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_01H0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MenuCharacter_AnimBP.MenuCharacter_AnimBP_C.ReachedMainPosition__DelegateSignature
	 */
	struct UMenuCharacter_AnimBP_C_ReachedMainPosition__DelegateSignature_Params
	{	};

	/**
	 * Function MenuCharacter_AnimBP.MenuCharacter_AnimBP_C.ToMainPosition__DelegateSignature
	 */
	struct UMenuCharacter_AnimBP_C_ToMainPosition__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
