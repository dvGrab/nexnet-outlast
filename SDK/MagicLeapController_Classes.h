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
	 * Class MagicLeapController.MagicLeapControllerFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMagicLeapControllerFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool SetMotionSourceForHand(EControllerHand hand, const class FName& MotionSource);
		bool SetControllerTrackingMode(EMagicLeapControllerTrackingMode TrackingMode);
		bool PlayLEDPattern(const class FName& MotionSource, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
		bool PlayLEDEffect(const class FName& MotionSource, EMagicLeapControllerLEDEffect LEDEffect, EMagicLeapControllerLEDSpeed LEDSpeed, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
		bool PlayHapticPattern(const class FName& MotionSource, EMagicLeapControllerHapticPattern HapticPattern, EMagicLeapControllerHapticIntensity Intensity);
		bool PlayControllerLEDEffect(EControllerHand hand, EMagicLeapControllerLEDEffect LEDEffect, EMagicLeapControllerLEDSpeed LEDSpeed, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
		bool PlayControllerLED(EControllerHand hand, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
		bool PlayControllerHapticFeedback(EControllerHand hand, EMagicLeapControllerHapticPattern HapticPattern, EMagicLeapControllerHapticIntensity Intensity);
		int32_t MaxSupportedMagicLeapControllers();
		bool IsMLControllerConnected(const class FName& MotionSource);
		void InvertControllerMapping();
		class FName GetMotionSourceForHand(EControllerHand hand);
		EMagicLeapControllerType GetMLControllerType(EControllerHand hand);
		EControllerHand GetHandForMotionSource(const class FName& MotionSource);
		EMagicLeapControllerType GetControllerType(const class FName& MotionSource);
		EMagicLeapControllerTrackingMode GetControllerTrackingMode();
		bool GetControllerMapping(int32_t ControllerIndex, EControllerHand* hand);
		static UClass* StaticClass();
	};

	/**
	 * Class MagicLeapController.MagicLeapTouchpadGesturesComponent
	 * Size -> 0x0090 (FullSize[0x0140] - InheritedSize[0x00B0])
	 */
	class UMagicLeapTouchpadGesturesComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_SKBZ[0x8];                                   // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnTouchpadGestureStart;                                  // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTouchpadGestureContinue;                               // 0x00C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTouchpadGestureEnd;                                    // 0x00D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WWY0[0x58];                                  // 0x00E8(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
