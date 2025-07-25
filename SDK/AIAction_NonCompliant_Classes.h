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
	 * BlueprintGeneratedClass AIAction_NonCompliant.AIAction_NonCompliant_C
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UAIAction_NonCompliant_C : public UAIAction
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0048(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void CanBeNonCompliant(bool* Return_Value);
		void BeginAction_Blueprint();
		void Tick_Blueprint(float DeltaTime);
		void ExecuteUbergraph_AIAction_NonCompliant(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
