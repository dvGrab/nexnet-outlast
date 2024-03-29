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
	 * Function CineSpectre_BP.CineSpectre_BP_C.Timeline_0__FinishedFunc
	 */
	struct ACineSpectre_BP_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function CineSpectre_BP.CineSpectre_BP_C.Timeline_0__UpdateFunc
	 */
	struct ACineSpectre_BP_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function CineSpectre_BP.CineSpectre_BP_C.ReceiveBeginPlay
	 */
	struct ACineSpectre_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function CineSpectre_BP.CineSpectre_BP_C.MotionBlurByBones
	 */
	struct ACineSpectre_BP_C_MotionBlurByBones_Params
	{
	public:
		TArray<class FName>                                        ListOfBones;                                             // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FVector                                             Rotation;                                                // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CineSpectre_BP.CineSpectre_BP_C.MotionBlurSwap
	 */
	struct ACineSpectre_BP_C_MotionBlurSwap_Params
	{
	public:
		float                                                      blurIntensity;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CineSpectre_BP.CineSpectre_BP_C.DesactivateParticles
	 */
	struct ACineSpectre_BP_C_DesactivateParticles_Params
	{	};

	/**
	 * Function CineSpectre_BP.CineSpectre_BP_C.ExecuteUbergraph_CineSpectre_BP
	 */
	struct ACineSpectre_BP_C_ExecuteUbergraph_CineSpectre_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
