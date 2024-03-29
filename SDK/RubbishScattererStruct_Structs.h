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
	 * UserDefinedStruct RubbishScattererStruct.RubbishScattererStruct
	 * Size -> 0x00A3
	 */
	struct FRubbishScattererStruct
	{
	public:
		TArray<class UStaticMesh*>                                 Staticmesh_24_33D1ED2D49CC0826B3CCE8A4372EF737;          // 0x0000(0x0010) Edit, BlueprintVisible
		TArray<class UMaterialInstanceConstant*>                   Decals_40_0AFE24DB47F7150AAA9E108F6E06679E;              // 0x0010(0x0010) Edit, BlueprintVisible
		float                                                      Radius_5_848858E947263AC77FE9EF8BC3941221;               // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RecurrencePercentage_7_B8E27CA04B113301B42BA38CB72F1225; // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Seed_28_74DE2D6B4BC1959FB429FF9D67BAD8CB;                // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UG7J[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          MinTransform_33_6C0A6A164E03F850BB2A52A8CF71C76F;        // 0x0030(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		struct FTransform                                          MaxTransform_34_F410DFC14E240AA072C03A91371E7655;        // 0x0060(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		struct FLinearColor                                        DynamicMaterial_44_0E36129F4C3CF105335E53AC773BFB90;     // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RunForEachComponent_47_3B1F994A4340A3D32A7F0899EBF0CE47; // 0x00A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       UseRadiusForOffset_49_2B4582F5493BFF00239C52BFB1D6C973;  // 0x00A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       LockX_52_E003894F4BCA1F5DCC6058B858F4877D;               // 0x00A2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
