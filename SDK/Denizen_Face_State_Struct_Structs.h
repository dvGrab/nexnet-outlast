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
	 * UserDefinedStruct Denizen_Face_State_Struct.Denizen_Face_State_Struct
	 * Size -> 0x00F0
	 */
	struct FDenizen_Face_State_Struct
	{
	public:
		TMap<EDenizen_Names_Enum, class UAnimSequence*>            Default_24_599E99054D8D9DA09BBFC2A0DD36563F;             // 0x0000(0x0050) Edit, BlueprintVisible
		TMap<EDenizen_Names_Enum, class UAnimSequence*>            Unaware_25_D9927C234FBC8BF014BFF69B84493DFD;             // 0x0050(0x0050) Edit, BlueprintVisible
		TMap<EDenizen_Names_Enum, class UAnimSequence*>            Notice_26_D214DFC94BD693ACA9C91AA0EEB5A690;              // 0x00A0(0x0050) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
