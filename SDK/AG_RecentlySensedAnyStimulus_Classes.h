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
	 * BlueprintGeneratedClass AG_RecentlySensedAnyStimulus.AG_RecentlySensedAnyStimulus_C
	 * Size -> 0x0004 (FullSize[0x002C] - InheritedSize[0x0028])
	 */
	class UAG_RecentlySensedAnyStimulus_C : public UAIActionGate
	{
	public:
		float                                                      SinceSeconds;                                            // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool CanOpen(const struct FAIActionDecisionContext& Context);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
