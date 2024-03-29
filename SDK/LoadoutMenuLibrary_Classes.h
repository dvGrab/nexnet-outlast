#pragma once

/**
 * Name: TRIALS
 * Version: FINAL
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
	 * BlueprintGeneratedClass LoadoutMenuLibrary.LoadoutMenuLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULoadoutMenuLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void GetActiveSkillColor(EActiveSkillType ActiveSkillType, class UObject* __WorldContext, struct FSlateColor* Color);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
