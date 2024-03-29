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
	 * BlueprintGeneratedClass HUDLibrary.HUDLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHUDLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void FadeIfNecessary(class UUserWidget* Widget, class UWidget* AnimatedWidget, class UWidgetAnimation* Anim, bool FadeIn, class UObject* __WorldContext, bool* PlayAnim);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
