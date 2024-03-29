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
	 * UserDefinedStruct BodyOutfitElement.BodyOutfitElement
	 * Size -> 0x0018
	 */
	struct FBodyOutfitElement
	{
	public:
		class USkeletalMesh*                                       Mesh_17_AEFC75CE428ED77759DAD39BF2A2DEEC;                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UMaterialInstanceConstant*>                   MaterialOverrides_21_DF648D714F582841542922A597852E80;   // 0x0008(0x0010) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
