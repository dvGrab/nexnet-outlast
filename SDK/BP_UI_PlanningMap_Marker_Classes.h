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
	 * BlueprintGeneratedClass BP_UI_PlanningMap_Marker.BP_UI_PlanningMap_Marker_C
	 * Size -> 0x0010 (FullSize[0x0208] - InheritedSize[0x01F8])
	 */
	class UBP_UI_PlanningMap_Marker_C : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_C4VL[0x8];                                   // 0x01F8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0200(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_UI_PlanningMap_Marker(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
