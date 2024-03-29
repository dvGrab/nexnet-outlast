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
	 * UserDefinedStruct TextBox.TextBox
	 * Size -> 0x0086
	 */
	struct FTextBox
	{
	public:
		class FText                                                Text_44_BC2D0814482B1E1808D36A8F757E7FC1;                // 0x0000(0x0018) Edit, BlueprintVisible
		class FString                                              String_45_D525E99446A95CBB25B53EAF689203B2;              // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IILV[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector4                                            BorderRLTB_11_E8A4F54440B2BC9C35E31FBEA403A526;          // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFont*                                               Font_6_9876006543FF6A9B6A90C5967F26F16B;                 // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FontScale_29_A5EDC95248C49190EF6113A3D1B330E2;           // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        FontColor_28_87D486A246E4E3C9753F3CA1501E233F;           // 0x004C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        FontOutlineColor_35_A814854F48BF6BAB0B368DAB7534C37A;    // 0x005C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        FontShadowColor_33_620D06484C61E6871139059757FE0081;     // 0x006C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FontKerning_30_E2AEFB8B411F45E7C7DA29A6F6C798DF;         // 0x007C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LineSpace_22_84BB51A94153917E619F678A2B43D36F;           // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CenterX_38_9ECC00C6408B6DEEC03A12A09EE69AB6;             // 0x0084(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       CenterY_39_C1AAF35F44D20A4C47A964BA8526A449;             // 0x0085(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
