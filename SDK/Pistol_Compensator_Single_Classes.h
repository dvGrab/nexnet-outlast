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
	 * BlueprintGeneratedClass Pistol_Compensator_Single.Pistol_Compensator_Single_C
	 * Size -> 0x0008 (FullSize[0x1000] - InheritedSize[0x0FF8])
	 */
	class UPistol_Compensator_Single_C : public UWeaponAttachment
	{
	public:
		unsigned char                                              UnknownData_JQJD[0x8];                                   // 0x0FF8(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
