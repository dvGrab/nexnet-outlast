﻿#pragma once

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
	 * Enum PrefabAsset.EPrefabVariantRuleType
	 */
	enum class EPrefabVariantRuleType : uint8_t
	{
		SkipProp = 0,
		MAX      = 1
	};

	/**
	 * Enum PrefabAsset.EPTUITheme
	 */
	enum class EPTUITheme : uint8_t
	{
		Default = 0,
		Dark    = 1,
		MAX     = 2
	};

	/**
	 * Enum PrefabAsset.EPrefabVisualizerType
	 */
	enum class EPrefabVisualizerType : uint8_t
	{
		WireBox    = 0,
		WireSphere = 1,
		MAX        = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct PrefabAsset.PrefabVariantRule
	 * Size -> 0x0020
	 */
	struct FPrefabVariantRule
	{
	public:
		class FName                                                Scope;                                                   // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Rule;                                                    // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPrefabVariantRuleType                                     RuleType;                                                // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnable;                                                 // 0x0019(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JL19[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
