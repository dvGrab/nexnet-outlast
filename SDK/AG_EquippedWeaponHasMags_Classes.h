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
	 * BlueprintGeneratedClass AG_EquippedWeaponHasMags.AG_EquippedWeaponHasMags_C
	 * Size -> 0x0004 (FullSize[0x002C] - InheritedSize[0x0028])
	 */
	class UAG_EquippedWeaponHasMags_C : public UAIActionGate
	{
	public:
		int32_t                                                    NumMags;                                                 // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		bool CanOpen(const struct FAIActionDecisionContext& Context);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
