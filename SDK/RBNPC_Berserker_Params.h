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
	 * Function RBNPC_Berserker.RBNPC_Berserker_C.GetFacePoseAsset
	 */
	struct ARBNPC_Berserker_C_GetFacePoseAsset_Params
	{
	public:
		class UPoseAsset*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBNPC_Berserker.RBNPC_Berserker_C.GetFaceFXSkeletalMeshComponent
	 */
	struct ARBNPC_Berserker_C_GetFaceFXSkeletalMeshComponent_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBNPC_Berserker.RBNPC_Berserker_C.UserConstructionScript
	 */
	struct ARBNPC_Berserker_C_UserConstructionScript_Params
	{	};

	/**
	 * Function RBNPC_Berserker.RBNPC_Berserker_C.Event_OnWeaponVisible
	 */
	struct ARBNPC_Berserker_C_Event_OnWeaponVisible_Params
	{
	public:
		ENPCWeapon                                                 weaponType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B2VI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ARBNPCWeapon*                                        weaponActor;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBNPC_Berserker.RBNPC_Berserker_C.ExecuteUbergraph_RBNPC_Berserker
	 */
	struct ARBNPC_Berserker_C_ExecuteUbergraph_RBNPC_Berserker_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
