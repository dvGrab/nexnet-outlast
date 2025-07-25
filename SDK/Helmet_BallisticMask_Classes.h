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
	 * BlueprintGeneratedClass Helmet_BallisticMask.Helmet_BallisticMask_C
	 * Size -> 0x0018 (FullSize[0x1480] - InheritedSize[0x1468])
	 */
	class AHelmet_BallisticMask_C : public AHeadwear
	{
	public:
		unsigned char                                              UnknownData_UC0E[0x8];                                   // 0x1468(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1470(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class APlayerState*                                        PlayerState;                                             // 0x1478(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_Helmet_BallisticMask(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
