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
	 * Function ElectrocutionSwitch-01_Ghost.ElectrocutionSwitch-01_Ghost_C.AnimGraph
	 */
	struct UElectrocutionSwitch01_Ghost_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ElectrocutionSwitch-01_Ghost.ElectrocutionSwitch-01_Ghost_C.FinishGhost
	 */
	struct UElectrocutionSwitch01_Ghost_C_FinishGhost_Params
	{
	public:
		EGhostFinishReason                                         finishReason;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GM2D[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    GhostFinishCustomReason;                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ElectrocutionSwitch-01_Ghost.ElectrocutionSwitch-01_Ghost_C.BP_InitializeGhost
	 */
	struct UElectrocutionSwitch01_Ghost_C_BP_InitializeGhost_Params
	{	};

	/**
	 * Function ElectrocutionSwitch-01_Ghost.ElectrocutionSwitch-01_Ghost_C.OnGhostAnimNotify
	 */
	struct UElectrocutionSwitch01_Ghost_C_OnGhostAnimNotify_Params
	{
	public:
		EGhostAnimEvent                                            animEvent;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CAJE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                animEventName;                                           // 0x0004(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ElectrocutionSwitch-01_Ghost.ElectrocutionSwitch-01_Ghost_C.BlueprintUpdateAnimation
	 */
	struct UElectrocutionSwitch01_Ghost_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ElectrocutionSwitch-01_Ghost.ElectrocutionSwitch-01_Ghost_C.ExecuteUbergraph_ElectrocutionSwitch-01_Ghost
	 */
	struct UElectrocutionSwitch01_Ghost_C_ExecuteUbergraph_ElectrocutionSwitch01_Ghost_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
