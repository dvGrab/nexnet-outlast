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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum DLSSBlueprint.UDLSSMode
	 */
	enum class EUDLSSMode : uint8_t
	{
		UDLSSMode_Off              = 0,
		UDLSSMode_Auto             = 1,
		UDLSSMode_DLAA             = 2,
		UDLSSMode_UltraQuality     = 3,
		UDLSSMode_Quality          = 4,
		UDLSSMode_Balanced         = 5,
		UDLSSMode_Performance      = 6,
		UDLSSMode_UltraPerformance = 7,
		UDLSSMode_Max              = 8
	};

	/**
	 * Enum DLSSBlueprint.UDLSSSupport
	 */
	enum class EUDLSSSupport : uint8_t
	{
		UDLSSSupport_Supported                                    = 0,
		UDLSSSupport_NotSupported                                 = 1,
		UDLSSSupport_NotSupportedIncompatibleHardware             = 2,
		UDLSSSupport_NotSupportedDriverOutOfDate                  = 3,
		UDLSSSupport_NotSupportedOperatingSystemOutOfDate         = 4,
		UDLSSSupport_NotSupportedByPlatformAtBuildTime            = 5,
		UDLSSSupport_NotSupportedIncompatibleAPICaptureToolActive = 6,
		UDLSSSupport_UDLSSSupport_MAX                             = 7
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
