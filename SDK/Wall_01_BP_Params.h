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
	 * Function Wall-01_BP.Wall-01_BP_C.AddAutomaticBoxCollisionExcludedStaticMeshes
	 */
	struct AWall__BP_C_AddAutomaticBoxCollisionExcludedStaticMeshes_Params
	{	};

	/**
	 * Function Wall-01_BP.Wall-01_BP_C.InvertYminus
	 */
	struct AWall__BP_C_InvertYminus_Params
	{
	public:
		struct FVector                                             LastLocation;                                            // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Wall-01_BP.Wall-01_BP_C.InvertXminus
	 */
	struct AWall__BP_C_InvertXminus_Params
	{	};

	/**
	 * Function Wall-01_BP.Wall-01_BP_C.SetInbetween
	 */
	struct AWall__BP_C_SetInbetween_Params
	{
	public:
		TArray<struct FStaticmeshArray_Stuc>                       NewParam;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function Wall-01_BP.Wall-01_BP_C.Add Inbetween Row
	 */
	struct AWall__BP_C_Add_Inbetween_Row_Params
	{	};

	/**
	 * Function Wall-01_BP.Wall-01_BP_C.AddGap
	 */
	struct AWall__BP_C_AddGap_Params
	{
	public:
		TArray<struct FStaticmeshArray_Stuc>                       NewParam;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function Wall-01_BP.Wall-01_BP_C.SetGap
	 */
	struct AWall__BP_C_SetGap_Params
	{
	public:
		TArray<struct FModuleMeshData>                             WallMeshes02A;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		EMeshPopulateDirection                                     Direction;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_98A4[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    NumberOfInbetween;                                       // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TotalInbetweenSize;                                      // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             GapTotal;                                                // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Wall-01_BP.Wall-01_BP_C.PushEndWallMeshes
	 */
	struct AWall__BP_C_PushEndWallMeshes_Params
	{
	public:
		struct FTransform                                          WallEndMeshesTransform;                                  // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		class UStaticMesh*                                         EndMesh;                                                 // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             SizeLeft;                                                // 0x0038(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       UseZScale;                                               // 0x0044(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UseExtreme;                                              // 0x0045(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DNII[0x2];                                   // 0x0046(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ExtremeZ;                                                // 0x0048(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       UseOverwriteMaterial;                                    // 0x004C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UseOverwriteLightmap;                                    // 0x004D(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsInbetweenMesh;                                         // 0x004E(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S5S5[0x1];                                   // 0x004F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Wall-01_BP.Wall-01_BP_C.GetStateName
	 */
	struct AWall__BP_C_GetStateName_Params
	{
	public:
		class FString                                              stateA;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              stateB;                                                  // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Wall-01_BP.Wall-01_BP_C.IsStateA
	 */
	struct AWall__BP_C_IsStateA_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Wall-01_BP.Wall-01_BP_C.WallEnd
	 */
	struct AWall__BP_C_WallEnd_Params
	{
	public:
		struct FVector                                             Relative_Transform_Location;                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NewSize;                                                 // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Wall-01_BP.Wall-01_BP_C.setVariable
	 */
	struct AWall__BP_C_setVariable_Params
	{
	public:
		struct FVector                                             NewSize;                                                 // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Wall-01_BP.Wall-01_BP_C.UserConstructionScript
	 */
	struct AWall__BP_C_UserConstructionScript_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
