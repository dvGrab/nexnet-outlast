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
	 * UserDefinedStruct StretchableModulesPartsRandomization.StretchableModulesPartsRandomization
	 * Size -> 0x0020
	 */
	struct FStretchableModulesPartsRandomization
	{
	public:
		class UStaticMesh*                                         Staticmesh_4_C4A80404408DC784724E21BBCB61E64D;           // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumPossibleInstances_5_8B2E0239481BA430E7D28FB6917394AC; // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SHYZ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInstanceConstant*>                   MaterialOverrides_9_74B2CA0E47C17ACCBF6A4CA10E629D59;    // 0x0010(0x0010) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
