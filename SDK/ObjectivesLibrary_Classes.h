#pragma once

/**
 * Name: OUTLAST
 * Version: 0.0.2_fixed
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
	 * BlueprintGeneratedClass ObjectivesLibrary.ObjectivesLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UObjectivesLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void GetClueObjectiveIconFromName(class FName* clueName, class UObject* __WorldContext, struct FSlateBrush* ClueObjectiveIcon);
		void GetClueTextFromName(class FName* clueName, class UObject* __WorldContext, class FText* ClueText);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
