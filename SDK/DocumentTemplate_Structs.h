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
	 * UserDefinedStruct DocumentTemplate.DocumentTemplate
	 * Size -> 0x0028
	 */
	struct FDocumentTemplate
	{
	public:
		TArray<struct FTextBox>                                    TextBox_6_7B3F2DDC4C247F31AAEA5993C379C218;              // 0x0000(0x0010) Edit, BlueprintVisible
		TArray<struct FIconBox>                                    IconBox_7_1DCC65364F0019B68A1D79A876BCCD17;              // 0x0010(0x0010) Edit, BlueprintVisible
		class UMaterialInterface*                                  Material_11_D9F9279947891D916591C2872461A9AC;            // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
