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
	 * BlueprintGeneratedClass AIAction_ThrowWeapon.AIAction_ThrowWeapon_C
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UAIAction_ThrowWeapon_C : public UAIAction
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0048(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		bool ShouldPerformAction();
		void BeginAction_Blueprint();
		void Tick_Blueprint(float DeltaTime);
		void ExecuteUbergraph_AIAction_ThrowWeapon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
