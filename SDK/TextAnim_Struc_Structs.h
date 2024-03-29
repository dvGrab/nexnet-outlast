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
	 * UserDefinedStruct TextAnim_Struc.TextAnim_Struc
	 * Size -> 0x004C
	 */
	struct FTextAnim_Struc
	{
	public:
		class FText                                                Text_3_063F560F4EADCF934DEC33A37F44E501;                 // 0x0000(0x0018) Edit, BlueprintVisible
		class FString                                              String_5_30DBFE2C4E02D227850CEE824AE48D77;               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		float                                                      StartTime_17_D86BE86A44A2C1ED307A8E98803EB88E;           // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EndTime_18_571820434EF225AA662F568C0241EE8E;             // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TextColor_10_76A316494A59234980A4CBB60DD0A6F6;           // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TEXTSIZE_13_78DD5D7E4357A8C07A8B7D801C43ED99;            // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture*                                            TVImage_22_5C73FAD043C8052AF58A0D943BC98797;             // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       Sound_26_43B19AC9428E8CAA1C0D6C8E3F85511C;               // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PlaySoundOnNarrator_36_D04AD0234716824F32CB509F6904C317; // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Noise_28_F30532F843A673D7A2A98590F24D0D17;               // 0x0049(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Rorschard_30_FEAF14F04F2BA7CB7537CBAC30042E48;           // 0x004A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       MovieFlash_32_C8BC1C244A7D3BBF65223E85561AE8E1;          // 0x004B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
