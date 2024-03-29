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
	 * UserDefinedStruct TextAnimArray_Struc.TextAnimArray_Struc
	 * Size -> 0x0021
	 */
	struct FTextAnimArray_Struc
	{
	public:
		TArray<struct FTextAnim_Struc>                             TextAnimArray_21_78DD5D7E4357A8C07A8B7D801C43ED99;       // 0x0000(0x0010) Edit, BlueprintVisible
		class UMediaSource*                                        Movie_24_1D019BEE4914D84D4BF32299D983B7AC;               // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       MovieSound_27_8925A67549B76DEB2211D1B51B3ECCC0;          // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseMovieAsFlash_31_9E996C4B44E7924E9C1E779E0582CEB1;     // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
