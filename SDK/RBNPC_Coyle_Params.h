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
	 * Function RBNPC_Coyle.RBNPC_Coyle_C.GetFaceFXSkeletalMeshComponent
	 */
	struct ARBNPC_Coyle_C_GetFaceFXSkeletalMeshComponent_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBNPC_Coyle.RBNPC_Coyle_C.GetFacePoseAsset
	 */
	struct ARBNPC_Coyle_C_GetFacePoseAsset_Params
	{
	public:
		class UPoseAsset*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBNPC_Coyle.RBNPC_Coyle_C.UserConstructionScript
	 */
	struct ARBNPC_Coyle_C_UserConstructionScript_Params
	{	};

	/**
	 * Function RBNPC_Coyle.RBNPC_Coyle_C.CigarBlend__FinishedFunc
	 */
	struct ARBNPC_Coyle_C_CigarBlend__FinishedFunc_Params
	{	};

	/**
	 * Function RBNPC_Coyle.RBNPC_Coyle_C.CigarBlend__UpdateFunc
	 */
	struct ARBNPC_Coyle_C_CigarBlend__UpdateFunc_Params
	{	};

	/**
	 * Function RBNPC_Coyle.RBNPC_Coyle_C.ReceiveTick
	 */
	struct ARBNPC_Coyle_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBNPC_Coyle.RBNPC_Coyle_C.Cigar_SetFollowFace
	 */
	struct ARBNPC_Coyle_C_Cigar_SetFollowFace_Params
	{	};

	/**
	 * Function RBNPC_Coyle.RBNPC_Coyle_C.Cigar_SetFollowHand
	 */
	struct ARBNPC_Coyle_C_Cigar_SetFollowHand_Params
	{	};

	/**
	 * Function RBNPC_Coyle.RBNPC_Coyle_C.Event_OnWeaponVisible
	 */
	struct ARBNPC_Coyle_C_Event_OnWeaponVisible_Params
	{
	public:
		ENPCWeapon                                                 weaponType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WG0M[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ARBNPCWeapon*                                        weaponActor;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBNPC_Coyle.RBNPC_Coyle_C.Event_OnWeaponHidden
	 */
	struct ARBNPC_Coyle_C_Event_OnWeaponHidden_Params
	{
	public:
		ENPCWeapon                                                 weaponType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2VR2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ARBNPCWeapon*                                        weaponActor;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBNPC_Coyle.RBNPC_Coyle_C.ExecuteUbergraph_RBNPC_Coyle
	 */
	struct ARBNPC_Coyle_C_ExecuteUbergraph_RBNPC_Coyle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
