#pragma once

/**
 * Name: OUTLAST
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
	 * Function CharacterDamageDebug.CharacterDamageDebug_C.GetMainParentSkeletalMesh
	 */
	struct ACharacterDamageDebug_C_GetMainParentSkeletalMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterDamageDebug.CharacterDamageDebug_C.GetPlayerCustomizationInfo
	 */
	struct ACharacterDamageDebug_C_GetPlayerCustomizationInfo_Params
	{
	public:
		struct FRBPlayerCustomizationInfo                          ReturnValue;                                             // 0x0000(0x0038)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function CharacterDamageDebug.CharacterDamageDebug_C.GetSkeletalMeshComponentForSlot
	 */
	struct ACharacterDamageDebug_C_GetSkeletalMeshComponentForSlot_Params
	{
	public:
		EPlayerCustomizationSlot                                   Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1U3G[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterDamageDebug.CharacterDamageDebug_C.GetWatchComponent
	 */
	struct ACharacterDamageDebug_C_GetWatchComponent_Params
	{
	public:
		class UStaticMeshComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterDamageDebug.CharacterDamageDebug_C.Randomize
	 */
	struct ACharacterDamageDebug_C_Randomize_Params
	{	};

	/**
	 * Function CharacterDamageDebug.CharacterDamageDebug_C.UserConstructionScript
	 */
	struct ACharacterDamageDebug_C_UserConstructionScript_Params
	{	};

	/**
	 * Function CharacterDamageDebug.CharacterDamageDebug_C.ReceiveBeginPlay
	 */
	struct ACharacterDamageDebug_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function CharacterDamageDebug.CharacterDamageDebug_C.OnExtraCustomizationMeshesAddedForSlot
	 */
	struct ACharacterDamageDebug_C_OnExtraCustomizationMeshesAddedForSlot_Params
	{
	public:
		TArray<class USkeletalMeshComponent*>                      addedExtraMeshes;                                        // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		EPlayerCustomizationSlot                                   Slot;                                                    // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterDamageDebug.CharacterDamageDebug_C.Applycustomization
	 */
	struct ACharacterDamageDebug_C_Applycustomization_Params
	{	};

	/**
	 * Function CharacterDamageDebug.CharacterDamageDebug_C.GetRandomCustomization
	 */
	struct ACharacterDamageDebug_C_GetRandomCustomization_Params
	{	};

	/**
	 * Function CharacterDamageDebug.CharacterDamageDebug_C.ExecuteUbergraph_CharacterDamageDebug
	 */
	struct ACharacterDamageDebug_C_ExecuteUbergraph_CharacterDamageDebug_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
