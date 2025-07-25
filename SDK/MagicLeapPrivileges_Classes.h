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
	 * Class MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMagicLeapPrivilegesFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool RequestPrivilegeAsync(EMagicLeapPrivilege Privilege, const class FScriptDelegate& ResultDelegate);
		bool RequestPrivilege(EMagicLeapPrivilege Privilege);
		bool CheckPrivilege(EMagicLeapPrivilege Privilege);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
