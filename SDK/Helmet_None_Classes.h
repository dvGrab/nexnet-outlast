﻿#pragma once

/**
 * Name: READYORNOT
 * Version: 0.0.1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass Helmet_None.Helmet_None_C
	 * Size -> 0x0018 (FullSize[0x1480] - InheritedSize[0x1468])
	 */
	class AHelmet_None_C : public AHeadwear
	{
	public:
		unsigned char                                              UnknownData_1AVB[0x8];                                   // 0x1468(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1470(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class APlayerState*                                        PlayerState;                                             // 0x1478(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ExecuteUbergraph_Helmet_None(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
