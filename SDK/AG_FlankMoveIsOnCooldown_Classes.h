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
	 * BlueprintGeneratedClass AG_FlankMoveIsOnCooldown.AG_FlankMoveIsOnCooldown_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAG_FlankMoveIsOnCooldown_C : public UAIActionGate
	{
	public:
		bool CanOpen(const struct FAIActionDecisionContext& Context);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
