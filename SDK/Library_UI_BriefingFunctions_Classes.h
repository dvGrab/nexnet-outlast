#pragma once

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
	 * BlueprintGeneratedClass Library_UI_BriefingFunctions.Library_UI_BriefingFunctions_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULibrary_UI_BriefingFunctions_C : public UBlueprintFunctionLibrary
	{
	public:
		void GetTimelineEventTestData(class UObject* __WorldContext, class USoundWave** Audio_Asset, TArray<struct FTimelineEvent>* Events, TMap<float, struct FTimelineEvent>* EventEntries);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
