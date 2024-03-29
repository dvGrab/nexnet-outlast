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
	 * UserDefinedStruct CorpseSearch_ClueSpotData.CorpseSearch_ClueSpotData
	 * Size -> 0x0024
	 */
	struct FCorpseSearch_ClueSpotData
	{
	public:
		struct FVector2D                                           TextureOffset_5_08562EFA4747E40FC85AA2BBEDF1D9AB;        // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           TextureScale_7_3CB5C5CD41CA48A19A95C186A7A5921F;         // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           TextureRotationLimits_9_25382B84407ADB436F12559311ACA641; // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             InvestigationLocation_12_7CF0A21045CD6C624247CB83DD9BACB0; // 0x0018(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
