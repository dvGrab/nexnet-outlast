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
	 * Function MannequinBP_Base.MannequinBP_Base_C.BP_MapCheck
	 */
	struct AMannequinBP_Base_C_BP_MapCheck_Params
	{
	public:
		EMapCheckType                                              checkType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OJG1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              outErrorMsg;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MannequinBP_Base.MannequinBP_Base_C.GameStartInit
	 */
	struct AMannequinBP_Base_C_GameStartInit_Params
	{	};

	/**
	 * Function MannequinBP_Base.MannequinBP_Base_C.SetCommonMeshData
	 */
	struct AMannequinBP_Base_C_SetCommonMeshData_Params
	{	};

	/**
	 * Function MannequinBP_Base.MannequinBP_Base_C.SetAnimation
	 */
	struct AMannequinBP_Base_C_SetAnimation_Params
	{
	public:
		class UAnimationAsset*                                     Animation_Data_Anim_To_Play;                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MannequinBP_Base.MannequinBP_Base_C.SetMasterPose
	 */
	struct AMannequinBP_Base_C_SetMasterPose_Params
	{	};

	/**
	 * Function MannequinBP_Base.MannequinBP_Base_C.SetPose
	 */
	struct AMannequinBP_Base_C_SetPose_Params
	{
	public:
		class UAnimationAsset*                                     Animation_Data_Anim_To_Play;                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MannequinBP_Base.MannequinBP_Base_C.DressStaticMeshPart
	 */
	struct AMannequinBP_Base_C_DressStaticMeshPart_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C6RJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UStaticMesh*                                         NewMesh;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                SocketName;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TMap<class FName, class UMaterialInstance*>                TargetMap;                                               // 0x0018(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MannequinBP_Base.MannequinBP_Base_C.Init
	 */
	struct AMannequinBP_Base_C_Init_Params
	{	};

	/**
	 * Function MannequinBP_Base.MannequinBP_Base_C.RemoveEmptyComponents
	 */
	struct AMannequinBP_Base_C_RemoveEmptyComponents_Params
	{	};

	/**
	 * Function MannequinBP_Base.MannequinBP_Base_C.DressSkelMeshPart
	 */
	struct AMannequinBP_Base_C_DressSkelMeshPart_Params
	{
	public:
		class USkeletalMesh*                                       SkelMesh;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TMap<class FName, class UMaterialInstance*>                Materials;                                               // 0x0008(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class USkeletalMeshComponent*                              SkelMeshPart;                                            // 0x0058(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MannequinBP_Base.MannequinBP_Base_C.DressMannequin
	 */
	struct AMannequinBP_Base_C_DressMannequin_Params
	{	};

	/**
	 * Function MannequinBP_Base.MannequinBP_Base_C.UserConstructionScript
	 */
	struct AMannequinBP_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function MannequinBP_Base.MannequinBP_Base_C.BP_PrepareMapCheck
	 */
	struct AMannequinBP_Base_C_BP_PrepareMapCheck_Params
	{	};

	/**
	 * Function MannequinBP_Base.MannequinBP_Base_C.ReceiveBeginPlay
	 */
	struct AMannequinBP_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MannequinBP_Base.MannequinBP_Base_C.LoopingSFXManualStart
	 */
	struct AMannequinBP_Base_C_LoopingSFXManualStart_Params
	{	};

	/**
	 * Function MannequinBP_Base.MannequinBP_Base_C.LoopingSFXManualStop
	 */
	struct AMannequinBP_Base_C_LoopingSFXManualStop_Params
	{	};

	/**
	 * Function MannequinBP_Base.MannequinBP_Base_C.ExecuteUbergraph_MannequinBP_Base
	 */
	struct AMannequinBP_Base_C_ExecuteUbergraph_MannequinBP_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_864B[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
